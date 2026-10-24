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

// Function: entry_00186480
// Address: 0x186480 - 0x1864c0
void entry_00186480_0x186480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186480_0x186480");
#endif

    ctx->pc = 0x186480u;

    // 0x186480: 0xc6020194  lwc1        $f2, 0x194($s0)
    ctx->pc = 0x186480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186484: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x186484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x186488: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x186488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18648c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x18648cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x186490: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x186490u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186494: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x186494u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186498: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x186498u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18649c: 0x0  nop
    ctx->pc = 0x18649cu;
    // NOP
    // 0x1864a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1864A0u;
    {
        const bool branch_taken_0x1864a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1864a0) {
            ctx->pc = 0x1864C0u;
            return;
        }
    }
    ctx->pc = 0x1864A8u;
    // 0x1864a8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1864ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1864acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1864b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1864b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1864b4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x1864b4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1864b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1864b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1864bc: 0xe6000194  swc1        $f0, 0x194($s0)
    ctx->pc = 0x1864bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
    ctx->pc = 0x1864c0u;
}
