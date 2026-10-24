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

// Function: entry_0023adb8
// Address: 0x23adb8 - 0x23ae00
void entry_0023adb8_0x23adb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023adb8_0x23adb8");
#endif

    ctx->pc = 0x23adb8u;

    // 0x23adb8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x23adb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23adbc: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x23adbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23adc0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x23adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x23adc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x23adc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x23adc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x23adc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x23adcc: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x23adccu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23add0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x23add0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23add4: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x23add4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23add8: 0x0  nop
    ctx->pc = 0x23add8u;
    // NOP
    // 0x23addc: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x23ADDCu;
    {
        const bool branch_taken_0x23addc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23addc) {
            ctx->pc = 0x23AE00u;
            return;
        }
    }
    ctx->pc = 0x23ADE4u;
    // 0x23ade4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x23ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x23ade8: 0xc4810124  lwc1        $f1, 0x124($a0)
    ctx->pc = 0x23ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23adec: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x23adecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x23adf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23adf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23adf4: 0x0  nop
    ctx->pc = 0x23adf4u;
    // NOP
    // 0x23adf8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23adf8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x23adfc: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x23adfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
    ctx->pc = 0x23ae00u;
}
