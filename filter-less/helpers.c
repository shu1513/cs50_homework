#include "helpers.h"
#include <math.h>

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            int n = roundf((image[i][j].rgbtBlue + image[i][j].rgbtGreen + image[i][j].rgbtRed)/3);
            image[i][j].rgbtRed = n;
            image[i][j].rgbtBlue = n;
            image[i][j].rgbtGreen = n;
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {

            int red = roundf(image[i][j].rgbtRed * 0.393 + image[i][j].rgbtGreen *0.796 + image[i][j].rgbtBlue *0.189);
            if (red > 255)
            {
                red = 255;
            }

            int green = roundf(image[i][j].rgbtRed * 0.349 + image[i][j].rgbtGreen *0.686 + image[i][j].rgbtBlue *0.168);
            if (green > 255)
            {
                green = 255;
            }

            int blue = roundf(image[i][j].rgbtRed * 0.272 + image[i][j].rgbtGreen *0.534 + image[i][j].rgbtBlue *0.131);
            if (blue > 255)
            {
                blue = 255;
            }
            image[i][j].rgbtRed = red;
            image[i][j].rgbtGreen = green;
            image[i][j].rgbtBlue = blue;

        }
    }
    return;
}

// Reflect image horizontally
void reflect(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}

// Blur image
void blur(int height, int width, RGBTRIPLE image[height][width])
{
    return;
}
