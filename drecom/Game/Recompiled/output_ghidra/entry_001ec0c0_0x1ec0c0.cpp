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

// Function: entry_001ec0c0
// Address: 0x1ec0c0 - 0x1ec138
void entry_001ec0c0_0x1ec0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec0c0_0x1ec0c0");
#endif

    ctx->pc = 0x1ec0c0u;

    // 0x1ec0c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec0c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec0c8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec0cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec0d0: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec0d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec0d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec0d8: 0x0  nop
    ctx->pc = 0x1ec0d8u;
    // NOP
    // 0x1ec0dc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1EC0DCu;
    {
        const bool branch_taken_0x1ec0dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec0dc) {
            ctx->pc = 0x1EC138u;
            return;
        }
    }
    ctx->pc = 0x1EC0E4u;
    // 0x1ec0e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec0e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec0ec: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x1ec0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec0f0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec0f4: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec0f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ec0f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ec0fc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec0fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1ec100: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec104: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec108: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x1ec108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ec10c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec110: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec114: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ec114u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ec118: 0x0  nop
    ctx->pc = 0x1ec118u;
    // NOP
    // 0x1ec11c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC11Cu;
    {
        const bool branch_taken_0x1ec11c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ec11c) {
            ctx->pc = 0x1EC138u;
            return;
        }
    }
    ctx->pc = 0x1EC124u;
    // 0x1ec124: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec128: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec12c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec130: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec134: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1ec134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1ec138u;
}
