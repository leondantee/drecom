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

// Function: entry_0029c29c
// Address: 0x29c29c - 0x29c2f8
void entry_0029c29c_0x29c29c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c29c_0x29c29c");
#endif

    ctx->pc = 0x29c29cu;

    // 0x29c29c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x29c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x29c2a0: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x29c2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x29c2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29c2a8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x29c2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c2ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c2acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2b0: 0x0  nop
    ctx->pc = 0x29c2b0u;
    // NOP
    // 0x29c2b4: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x29C2B4u;
    {
        const bool branch_taken_0x29c2b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c2b4) {
            ctx->pc = 0x29C3C8u;
            return;
        }
    }
    ctx->pc = 0x29C2BCu;
    // 0x29c2bc: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x29c2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c2c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29c2c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c2c4: 0x0  nop
    ctx->pc = 0x29c2c4u;
    // NOP
    // 0x29c2c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x29c2c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c2cc: 0x0  nop
    ctx->pc = 0x29c2ccu;
    // NOP
    // 0x29c2d0: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x29C2D0u;
    {
        const bool branch_taken_0x29c2d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29c2d0) {
            ctx->pc = 0x29C3C8u;
            return;
        }
    }
    ctx->pc = 0x29C2D8u;
    // 0x29c2d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x29c2d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29c2dc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C2DCu;
    {
        const bool branch_taken_0x29c2dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29c2dc) {
            ctx->pc = 0x29C2F8u;
            return;
        }
    }
    ctx->pc = 0x29C2E4u;
    // 0x29c2e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29c2e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c2e8: 0x0  nop
    ctx->pc = 0x29c2e8u;
    // NOP
    // 0x29c2ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29c2ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29c2f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C2F0u;
    {
        const bool branch_taken_0x29c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c2f0) {
            ctx->pc = 0x29C314u;
            return;
        }
    }
    ctx->pc = 0x29C2F8u;
}
