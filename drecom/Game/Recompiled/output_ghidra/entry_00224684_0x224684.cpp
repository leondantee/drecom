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

// Function: entry_00224684
// Address: 0x224684 - 0x224720
void entry_00224684_0x224684(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00224684_0x224684");
#endif

    ctx->pc = 0x224684u;

    // 0x224684: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224688: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22468c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x22468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224690: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224694: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x224694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224698: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x224698u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22469c: 0x0  nop
    ctx->pc = 0x22469cu;
    // NOP
    // 0x2246a0: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x2246A0u;
    {
        const bool branch_taken_0x2246a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246a0) {
            ctx->pc = 0x224798u;
            return;
        }
    }
    ctx->pc = 0x2246A8u;
    // 0x2246a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2246ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2246acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2246b0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2246b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2246b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2246b8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2246b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2246bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2246c0: 0x0  nop
    ctx->pc = 0x2246c0u;
    // NOP
    // 0x2246c4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x2246C4u;
    {
        const bool branch_taken_0x2246c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2246c4) {
            ctx->pc = 0x224720u;
            return;
        }
    }
    ctx->pc = 0x2246CCu;
    // 0x2246cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2246d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2246d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2246d4: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2246d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2246d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2246dc: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2246dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2246e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2246e4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2246e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2246e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2246ec: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2246ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2246f0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x2246f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2246f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2246f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2246f8: 0xc4400180  lwc1        $f0, 0x180($v0)
    ctx->pc = 0x2246f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2246fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x224700: 0x0  nop
    ctx->pc = 0x224700u;
    // NOP
    // 0x224704: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x224704u;
    {
        const bool branch_taken_0x224704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x224704) {
            ctx->pc = 0x224720u;
            return;
        }
    }
    ctx->pc = 0x22470Cu;
    // 0x22470c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x224710: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x224710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x224714: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x224714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224718: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x224718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22471c: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x22471cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x224720u;
}
