#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0017209c
// Address: 0x17209c - 0x172108
void entry_0017209c_0x17209c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017209c_0x17209c");
#endif

    ctx->pc = 0x17209cu;

    // 0x17209c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x17209cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720a0: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x1720a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1720a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1720a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1720a8: 0x0  nop
    ctx->pc = 0x1720a8u;
    // NOP
    // 0x1720ac: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x1720acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x1720b0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1720b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720b4: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x1720b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x1720b8: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1720b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720bc: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x1720bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x1720c0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1720c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1720c4: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x1720c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x1720c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1720c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1720cc: 0x2442c940  addiu       $v0, $v0, -0x36C0
    ctx->pc = 0x1720ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953280));
    // 0x1720d0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1720d0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x47C940u));
    // 0x1720d4: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1720d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1720d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1720dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1720dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1720e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1720e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1720e4: 0x0  nop
    ctx->pc = 0x1720e4u;
    // NOP
    // 0x1720e8: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1720e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1720ec: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1720ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1720f0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1720f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720f4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1720f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720f8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1720f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1720fc: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x172100: 0xc040ddc  jal         func_103770
    ctx->pc = 0x172100u;
    SET_GPR_U32(ctx, 31, 0x172108u);
    ctx->pc = 0x103770u;
    {
        ctx->pc = 0x172108u;
        ps2_stubs::sceVu0LightColorMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x172108u) { return; }
    ctx->pc = 0x172108u;
}
