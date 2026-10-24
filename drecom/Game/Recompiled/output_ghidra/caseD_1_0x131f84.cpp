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

// Function: caseD_1
// Address: 0x131f84 - 0x132054
void caseD_1_0x131f84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x131f84");
#endif

    switch (ctx->pc) {
        case 0x131fa8u: goto label_131fa8;
        case 0x131fb4u: goto label_131fb4;
        case 0x131fc4u: goto label_131fc4;
        case 0x131ff4u: goto label_131ff4;
        default: break;
    }

    ctx->pc = 0x131f84u;

    // 0x131f84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f88: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x131f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x131f8c: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x131f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x131f90: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x131f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x131f94: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x131f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x131f98: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131f9c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x131f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x131fa0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x131FA0u;
    SET_GPR_U32(ctx, 31, 0x131FA8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x131FA0u, 0x131FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FA8u;
label_131fa8:
    // 0x131fa8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131fac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x131FACu;
    SET_GPR_U32(ctx, 31, 0x131FB4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x131FACu, 0x131FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FB4u;
label_131fb4:
    // 0x131fb4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131fb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x131fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x131fbc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x131FBCu;
    SET_GPR_U32(ctx, 31, 0x131FC4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x131FBCu, 0x131FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FC4u;
label_131fc4:
    // 0x131fc4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131fc8: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x131fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x131fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131fd0: 0x0  nop
    ctx->pc = 0x131fd0u;
    // NOP
    // 0x131fd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x131fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x131fd8: 0x0  nop
    ctx->pc = 0x131fd8u;
    // NOP
    // 0x131fdc: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x131FDCu;
    {
        const bool branch_taken_0x131fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x131fdc) {
            ctx->pc = 0x132054u;
            return;
        }
    }
    ctx->pc = 0x131FE4u;
    // 0x131fe4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131fe8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x131fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x131fec: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x131FECu;
    SET_GPR_U32(ctx, 31, 0x131FF4u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x131FECu, 0x131FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131FF4u;
label_131ff4:
    // 0x131ff4: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x131ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x131ff8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x131ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x131ffc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131ffcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x132000: 0x0  nop
    ctx->pc = 0x132000u;
    // NOP
    // 0x132004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x132004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x132008: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x132008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x13200c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132010: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x132010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x132014: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132018: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x132018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13201c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13201cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x132020: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x132024: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132028: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x132028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13202c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x13202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132030: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x132030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x132034: 0x0  nop
    ctx->pc = 0x132034u;
    // NOP
    // 0x132038: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x132038u;
    {
        const bool branch_taken_0x132038 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x132038) {
            ctx->pc = 0x1320F4u;
            return;
        }
    }
    ctx->pc = 0x132040u;
    // 0x132040: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x132040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x132044: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132048: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x132048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x13204c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x13204Cu;
    {
        const bool branch_taken_0x13204c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13204c) {
            ctx->pc = 0x1320F4u;
            return;
        }
    }
    ctx->pc = 0x132054u;
}
