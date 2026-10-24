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

// Function: entry_00196ac8
// Address: 0x196ac8 - 0x196c38
void entry_00196ac8_0x196ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196ac8_0x196ac8");
#endif

    switch (ctx->pc) {
        case 0x196b04u: goto label_196b04;
        case 0x196b34u: goto label_196b34;
        case 0x196b5cu: goto label_196b5c;
        case 0x196b84u: goto label_196b84;
        case 0x196bacu: goto label_196bac;
        case 0x196bdcu: goto label_196bdc;
        case 0x196c04u: goto label_196c04;
        case 0x196c2cu: goto label_196c2c;
        default: break;
    }

    ctx->pc = 0x196ac8u;

    // 0x196ac8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x196ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196acc: 0x94640094  lhu         $a0, 0x94($v1)
    ctx->pc = 0x196accu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x196ad0: 0x14800059  bnez        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x196AD0u;
    {
        const bool branch_taken_0x196ad0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x196ad0) {
            ctx->pc = 0x196C38u;
            return;
        }
    }
    ctx->pc = 0x196AD8u;
    // 0x196ad8: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x196ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x196adc: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x196adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x196ae0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x196ae0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196ae4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196ae8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196ae8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196aec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x196aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x196af0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196af0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196af4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196af8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196af8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196afc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196AFCu;
    SET_GPR_U32(ctx, 31, 0x196B04u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196AFCu, 0x196B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B04u;
label_196b04:
    // 0x196b04: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x196b04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x196b08: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x196b08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x196b0c: 0x34c3d70a  ori         $v1, $a2, 0xD70A
    ctx->pc = 0x196b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x196b10: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x196b10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b14: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b18: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196b18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196b1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196b20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b24: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b28: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b2c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196B2Cu;
    SET_GPR_U32(ctx, 31, 0x196B34u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196B2Cu, 0x196B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B34u;
label_196b34:
    // 0x196b34: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196b38: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196b38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196b3c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196b3cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b40: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b44: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x196b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x196b48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b4c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b50: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b54: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196B54u;
    SET_GPR_U32(ctx, 31, 0x196B5Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196B54u, 0x196B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B5Cu;
label_196b5c:
    // 0x196b5c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196b60: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196b60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196b64: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196b64u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b68: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b6c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x196b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x196b70: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b74: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196b78: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196b7c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196B7Cu;
    SET_GPR_U32(ctx, 31, 0x196B84u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196B7Cu, 0x196B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196B84u;
label_196b84:
    // 0x196b84: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x196b88: 0x3467d70a  ori         $a3, $v1, 0xD70A
    ctx->pc = 0x196b88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x196b8c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196b8cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196b90: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196b94: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x196b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x196b98: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196b98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196b9c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196ba0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196ba4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196BA4u;
    SET_GPR_U32(ctx, 31, 0x196BACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196BA4u, 0x196BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BACu;
label_196bac:
    // 0x196bac: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196bb0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196bb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196bb4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196bb4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196bb8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x196bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196bbc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x196bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x196bc0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x196bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x196bc4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x196bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x196bc8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196bc8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196bcc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196bd0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196bd4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196BD4u;
    SET_GPR_U32(ctx, 31, 0x196BDCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196BD4u, 0x196BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196BDCu;
label_196bdc:
    // 0x196bdc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196be0: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196be4: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196be4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196be8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196bec: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x196bf0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196bf0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196bf4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196bf8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196bfc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196BFCu;
    SET_GPR_U32(ctx, 31, 0x196C04u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196BFCu, 0x196C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C04u;
label_196c04:
    // 0x196c04: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x196c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x196c08: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x196c08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x196c0c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x196c0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196c10: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x196c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c14: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x196c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x196c18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x196c18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x196c1c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x196c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x196c20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x196c20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x196c24: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x196C24u;
    SET_GPR_U32(ctx, 31, 0x196C2Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x196C24u, 0x196C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196C2Cu;
label_196c2c:
    // 0x196c2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196c30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196c34: 0xa4470094  sh          $a3, 0x94($v0)
    ctx->pc = 0x196c34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 7));
    ctx->pc = 0x196c38u;
}
