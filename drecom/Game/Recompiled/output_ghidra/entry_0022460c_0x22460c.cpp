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

// Function: entry_0022460c
// Address: 0x22460c - 0x224684
void entry_0022460c_0x22460c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022460c_0x22460c");
#endif

    ctx->pc = 0x22460cu;

    // 0x22460c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224610: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224614: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x224614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224618: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22461c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x22461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224624: 0x0  nop
    ctx->pc = 0x224624u;
    // NOP
    // 0x224628: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x224628u;
    {
        const bool branch_taken_0x224628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224628) {
            ctx->pc = 0x224684u;
            return;
        }
    }
    ctx->pc = 0x224630u;
    // 0x224630: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224634: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224638: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x224638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22463c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22463cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224640: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x224640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224644: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x224644u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x224648: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x224648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x22464c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224650: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224654: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x224654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224658: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22465c: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x22465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224660: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x224660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224664: 0x0  nop
    ctx->pc = 0x224664u;
    // NOP
    // 0x224668: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x224668u;
    {
        const bool branch_taken_0x224668 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x224668) {
            ctx->pc = 0x224684u;
            return;
        }
    }
    ctx->pc = 0x224670u;
    // 0x224670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224674: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224678: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x224678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22467c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224680: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x224680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x224684u;
}
