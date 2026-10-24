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

// Function: entry_0017b8a4
// Address: 0x17b8a4 - 0x17b928
void entry_0017b8a4_0x17b8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b8a4_0x17b8a4");
#endif

    ctx->pc = 0x17b8a4u;

    // 0x17b8a4: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x17b8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17b8a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x17b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x17b8ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17b8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17b8b0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x17b8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b8b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b8b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17b8b8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17b8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b8bc: 0x0  nop
    ctx->pc = 0x17b8bcu;
    // NOP
    // 0x17b8c0: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x17B8C0u;
    {
        const bool branch_taken_0x17b8c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b8c0) {
            ctx->pc = 0x17B950u;
            return;
        }
    }
    ctx->pc = 0x17B8C8u;
    // 0x17b8c8: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x17b8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b8cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x17b8ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17b8d0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b8d4: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b8d4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b8d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b8d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b8dc: 0x0  nop
    ctx->pc = 0x17b8dcu;
    // NOP
    // 0x17b8e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b8e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b8e4: 0x0  nop
    ctx->pc = 0x17b8e4u;
    // NOP
    // 0x17b8e8: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x17B8E8u;
    {
        const bool branch_taken_0x17b8e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b8e8) {
            ctx->pc = 0x17B940u;
            return;
        }
    }
    ctx->pc = 0x17B8F0u;
    // 0x17b8f0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b8f4: 0xc421ef10  lwc1        $f1, -0x10F0($at)
    ctx->pc = 0x17b8f4u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17b8f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b8f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b8fc: 0x0  nop
    ctx->pc = 0x17b8fcu;
    // NOP
    // 0x17b900: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b904: 0x0  nop
    ctx->pc = 0x17b904u;
    // NOP
    // 0x17b908: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x17B908u;
    {
        const bool branch_taken_0x17b908 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b908) {
            ctx->pc = 0x17B928u;
            return;
        }
    }
    ctx->pc = 0x17B910u;
    // 0x17b910: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b914: 0xc420ef10  lwc1        $f0, -0x10F0($at)
    ctx->pc = 0x17b914u;
    { uint32_t bits = FAST_READ32(0x47EF10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b918: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17b918u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x17b91c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x17b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x17b920: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B920u;
    {
        const bool branch_taken_0x17b920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b920) {
            ctx->pc = 0x17B934u;
            return;
        }
    }
    ctx->pc = 0x17B928u;
}
