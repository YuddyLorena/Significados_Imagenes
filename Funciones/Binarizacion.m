%funcion para binarizar una imagen

function[bw]= binarizacion(I)
clc;clear;
I = imread('ruidisimo.jpg');
im_entrada=rgb2gray(I);

%Show image in grayscale
imshow(im_entrada);

% Binarization´s Process
%   [m,n] = size (im_entrada);
%   im_salida = ones(m,n);
%   T=100;
% 
% for i=1:m
%     for j = 1:n
%          if(im_entrada(i,j)>T)
%              im_salida(i,j) = 0;
%          else
%              im_salida(i,j) =1;
%          end
%     end
% end
% imshow(im_salida);
%se = strel('disk',100);
%im_cerrada= imclose(im_salida,se);
%figure 
%imshow(im_cerrada);
%bw = bwreaopen(im_cerrada,30);
%figure 
%imshow(bw);