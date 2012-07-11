/*
 * Copyright 2011-2012 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#include "bgfx_p.h"

#if BGFX_CONFIG_RENDERER_DIRECT3D11

namespace bgfx
{
	void ConstantBuffer::commit()
	{
	}

	void TextVideoMemBlitter::setup()
	{
	}

	void TextVideoMemBlitter::render(uint32_t /*_numIndices*/)
	{
	}

	void Context::flip()
	{
	}

	void Context::rendererInit()
	{
	}

	void Context::rendererShutdown()
	{
	}

	void Context::rendererCreateIndexBuffer(IndexBufferHandle /*_handle*/, Memory* /*_mem*/)
	{
	}

	void Context::rendererDestroyIndexBuffer(IndexBufferHandle /*_handle*/)
	{
	}

	void Context::rendererCreateVertexDecl(VertexDeclHandle /*_handle*/, const VertexDecl& /*_decl*/)
	{
	}

	void Context::rendererDestroyVertexDecl(VertexDeclHandle /*_handle*/)
	{
	}

	void Context::rendererCreateVertexBuffer(VertexBufferHandle /*_handle*/, Memory* /*_mem*/, VertexDeclHandle /*_declHandle*/)
	{
	}

	void Context::rendererDestroyVertexBuffer(VertexBufferHandle /*_handle*/)
	{
	}

	void Context::rendererCreateDynamicIndexBuffer(IndexBufferHandle /*_handle*/, uint32_t /*_size*/)
	{
	}

	void Context::rendererUpdateDynamicIndexBuffer(IndexBufferHandle /*_handle*/, uint32_t /*_offset*/, uint32_t /*_size*/, Memory* /*_mem*/)
	{
	}

	void Context::rendererDestroyDynamicIndexBuffer(IndexBufferHandle /*_handle*/)
	{
	}

	void Context::rendererCreateDynamicVertexBuffer(VertexBufferHandle /*_handle*/, uint32_t /*_size*/)
	{
	}

	void Context::rendererUpdateDynamicVertexBuffer(VertexBufferHandle /*_handle*/, uint32_t /*_offset*/, uint32_t /*_size*/, Memory* /*_mem*/)
	{
	}

	void Context::rendererDestroyDynamicVertexBuffer(VertexBufferHandle /*_handle*/)
	{
	}

	void Context::rendererCreateVertexShader(VertexShaderHandle /*_handle*/, Memory* /*_mem*/)
	{
	}

	void Context::rendererDestroyVertexShader(VertexShaderHandle /*_handle*/)
	{
	}

	void Context::rendererCreateFragmentShader(FragmentShaderHandle /*_handle*/, Memory* /*_mem*/)
	{
	}

	void Context::rendererDestroyFragmentShader(FragmentShaderHandle /*_handle*/)
	{
	}

	void Context::rendererCreateMaterial(MaterialHandle /*_handle*/, VertexShaderHandle /*_vsh*/, FragmentShaderHandle /*_fsh*/)
	{
	}

	void Context::rendererDestroyMaterial(FragmentShaderHandle /*_handle*/)
	{
	}

	void Context::rendererCreateTexture(TextureHandle /*_handle*/, Memory* /*_mem*/, uint32_t /*_flags*/)
	{
	}

	void Context::rendererDestroyTexture(TextureHandle /*_handle*/)
	{
	}

	void Context::rendererCreateRenderTarget(RenderTargetHandle /*_handle*/, uint16_t /*_width*/, uint16_t /*_height*/, uint32_t /*_flags*/, uint32_t /*_textureFlags*/)
	{
	}

	void Context::rendererDestroyRenderTarget(RenderTargetHandle /*_handle*/)
	{
	}

	void Context::rendererCreateUniform(UniformHandle /*_handle*/, ConstantType::Enum /*_type*/, uint16_t /*_num*/, const char* /*_name*/)
	{
	}

	void Context::rendererDestroyUniform(UniformHandle /*_handle*/)
	{
	}

	void Context::rendererSaveScreenShot(Memory* /*_mem*/)
	{
	}

	void Context::rendererSubmit()
	{
	}
}

#endif // BGFX_CONFIG_RENDERER_DIRECT3D11