#include "helpers.h"

// Convert image to grayscale
void grayscale(int height, int width, RGBTRIPLE image[height][width])
{
    for (int i = 0; i < height; i++)
    {
        for (i = 0; i < width; i ++)
        {
            int n = (image[i][i].rgbtBlue + image[i][i].rgbtGreen + image[i][i].rgbtRed)/3
            image[i][i].rgbtRed = n
            image[i][i].rgbtBlue = n
            image[i][i].rgbtGreen = n
        }
    }
    return;
}

// Convert image to sepia
void sepia(int height, int width, RGBTRIPLE image[height][width])
{
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
