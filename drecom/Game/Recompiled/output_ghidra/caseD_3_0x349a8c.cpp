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

// Function: caseD_3
// Address: 0x349a8c - 0x349b2c
void caseD_3_0x349a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x349a8c");
#endif

    switch (ctx->pc) {
        case 0x349a98u: goto label_349a98;
        case 0x349ae4u: goto label_349ae4;
        case 0x349af0u: goto label_349af0;
        default: break;
    }

    ctx->pc = 0x349a8cu;

    // 0x349a8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a90: 0xc05cd10  jal         func_173440
    ctx->pc = 0x349A90u;
    SET_GPR_U32(ctx, 31, 0x349A98u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x349A90u, 0x349A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349A98u;
label_349a98:
    // 0x349a98: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349a9c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x349a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349aa0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x349aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349aa4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349aa8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x349aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349aac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x349aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x349ab0: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x349ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x349ab4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ab8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x349ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x349abc: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x349abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349ac0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x349ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
    // 0x349ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x349ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349ac8: 0x0  nop
    ctx->pc = 0x349ac8u;
    // NOP
    // 0x349acc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x349accu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x349ad0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x349ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x349ad4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ad8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x349ad8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x349adc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x349ADCu;
    SET_GPR_U32(ctx, 31, 0x349AE4u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x349ADCu, 0x349AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AE4u;
label_349ae4:
    // 0x349ae4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349ae8: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x349AE8u;
    SET_GPR_U32(ctx, 31, 0x349AF0u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349AE8u, 0x349AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349AF0u;
label_349af0:
    // 0x349af0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349af4: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x349af4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x349af8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x349AF8u;
    {
        const bool branch_taken_0x349af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x349af8) {
            ctx->pc = 0x349B2Cu;
            return;
        }
    }
    ctx->pc = 0x349B00u;
    // 0x349b00: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x349b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x349b04: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b08: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349b08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x349b0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349b14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x349b18: 0x24060811  addiu       $a2, $zero, 0x811
    ctx->pc = 0x349b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2065));
    // 0x349b1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x349b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349b20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349b20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349b24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x349B24u;
    SET_GPR_U32(ctx, 31, 0x349B2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349B24u, 0x349B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349B2Cu;
}
