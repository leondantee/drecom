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

// Function: entry_0026be2c
// Address: 0x26be2c - 0x26bedc
void entry_0026be2c_0x26be2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026be2c_0x26be2c");
#endif

    switch (ctx->pc) {
        case 0x26be3cu: goto label_26be3c;
        case 0x26be54u: goto label_26be54;
        case 0x26be68u: goto label_26be68;
        case 0x26be84u: goto label_26be84;
        case 0x26be90u: goto label_26be90;
        default: break;
    }

    ctx->pc = 0x26be2cu;

    // 0x26be2c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26be2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26be30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26be34: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26BE34u;
    SET_GPR_U32(ctx, 31, 0x26BE3Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26BE34u, 0x26BE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE3Cu;
label_26be3c:
    // 0x26be3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26be3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26be40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26be40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be44: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x26be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x26be48: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x26be48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26be4c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26BE4Cu;
    SET_GPR_U32(ctx, 31, 0x26BE54u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26BE4Cu, 0x26BE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE54u;
label_26be54:
    // 0x26be54: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x26be54u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26be58: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x26be58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be5c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x26be5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x26be60: 0xc05cd10  jal         func_173440
    ctx->pc = 0x26BE60u;
    SET_GPR_U32(ctx, 31, 0x26BE68u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x26BE60u, 0x26BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE68u;
label_26be68:
    // 0x26be68: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x26be68u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26be6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26be6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26be70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x26be70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be74: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26be74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26be78: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26be78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26be7c: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26BE7Cu;
    SET_GPR_U32(ctx, 31, 0x26BE84u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26BE7Cu, 0x26BE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE84u;
label_26be84:
    // 0x26be84: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x26be84u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26be88: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x26BE88u;
    SET_GPR_U32(ctx, 31, 0x26BE90u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x26BE88u, 0x26BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BE90u;
label_26be90:
    // 0x26be90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x26be90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26be94: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26be94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26be98: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x26be98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x26be9c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x26BE9Cu;
    {
        const bool branch_taken_0x26be9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26be9c) {
            ctx->pc = 0x26BEDCu;
            return;
        }
    }
    ctx->pc = 0x26BEA4u;
    // 0x26bea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bea8: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x26bea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x26beac: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x26beacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26beb0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26beb4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x26beb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x26beb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26beb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bebc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bec0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x26bec0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x26bec4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bec8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x26bec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x26becc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x26beccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bed0: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x26bed0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bed4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x26bed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x26bed8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x26bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x26bedcu;
}
