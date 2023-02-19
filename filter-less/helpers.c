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

            int red = image[i][j].rgbtRed * 0.393 + image[i][j].rgbtGreen *0.796 + image[i][j].rgbtblue *0.189;
            if (int red > 255)
            {
                red = 255
            }
            image[i][j].rgbtRed = red
            int green = image[i][j].rgbtRed * 0.349 + image[i][j].rgbtGreen *0.686 + image[i][j].rgbtblue *0.168;
            if (int green > 255)
            {
                green = 255
            }
            image[i][j].rgbtBlue = n;
            image[i][j].rgbtGreen = n;
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
