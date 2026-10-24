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

// Function: entry_00204af8
// Address: 0x204af8 - 0x204cc8
void entry_00204af8_0x204af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204af8_0x204af8");
#endif

    switch (ctx->pc) {
        case 0x204b24u: goto label_204b24;
        case 0x204b4cu: goto label_204b4c;
        case 0x204b7cu: goto label_204b7c;
        case 0x204ba8u: goto label_204ba8;
        case 0x204be4u: goto label_204be4;
        case 0x204c18u: goto label_204c18;
        case 0x204c50u: goto label_204c50;
        case 0x204c88u: goto label_204c88;
        case 0x204cbcu: goto label_204cbc;
        default: break;
    }

    ctx->pc = 0x204af8u;

    // 0x204af8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x204afc: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x204afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204b00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b04: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x204b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x204b0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x204b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204b10: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x204b10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x204b14: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x204b14u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b18: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b1c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204B1Cu;
    SET_GPR_U32(ctx, 31, 0x204B24u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204B1Cu, 0x204B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B24u;
label_204b24:
    // 0x204b24: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204b28: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x204b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204b2c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204b2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b34: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204b38: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204b38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204b3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b40: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b40u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b44: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204B44u;
    SET_GPR_U32(ctx, 31, 0x204B4Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204B44u, 0x204B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B4Cu;
label_204b4c:
    // 0x204b4c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204b4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204b50: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204b50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204b54: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204b58: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204b58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204b60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204b64: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204b68: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204b6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204b74: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204B74u;
    SET_GPR_U32(ctx, 31, 0x204B7Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204B74u, 0x204B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204B7Cu;
label_204b7c:
    // 0x204b7c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x204b80: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x204b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204b84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204b88: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204b8c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204b8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204b90: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x204b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204b94: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204b98: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204b9c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204b9cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204ba0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204BA0u;
    SET_GPR_U32(ctx, 31, 0x204BA8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204BA0u, 0x204BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BA8u;
label_204ba8:
    // 0x204ba8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204ba8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204bac: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204bacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204bb0: 0x34e5d70a  ori         $a1, $a3, 0xD70A
    ctx->pc = 0x204bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204bb4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204bb4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204bb8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204bbc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204bbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204bc0: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x204bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204bc4: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204bc4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204bc8: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x204bc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204bcc: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x204bccu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204bd0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204bd4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204bd4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204bd8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204bd8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204bdc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204BDCu;
    SET_GPR_U32(ctx, 31, 0x204BE4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204BDCu, 0x204BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204BE4u;
label_204be4:
    // 0x204be4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204be4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204be8: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x204be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204bec: 0x3487d70a  ori         $a3, $a0, 0xD70A
    ctx->pc = 0x204becu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204bf0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204bf0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204bf4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204bf8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x204bf8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204bfc: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x204bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204c00: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204c00u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c04: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c08: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c0c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204c0cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204c10: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204C10u;
    SET_GPR_U32(ctx, 31, 0x204C18u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204C10u, 0x204C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C18u;
label_204c18:
    // 0x204c18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c1c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204c20: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204c24: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204c24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c28: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204c2c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204c2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204c30: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x204c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204c34: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x204c34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204c38: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x204c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c3c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204c3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c40: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c44: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204c44u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204c48: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204C48u;
    SET_GPR_U32(ctx, 31, 0x204C50u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204C48u, 0x204C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C50u;
label_204c50:
    // 0x204c50: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x204c50u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c54: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204c58: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x204c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204c5c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x204c5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c60: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204c64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c68: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204c6c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204c70: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x204c70u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204c74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204c78: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x204c78u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c7c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204c7cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204c80: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204C80u;
    SET_GPR_U32(ctx, 31, 0x204C88u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204C80u, 0x204C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204C88u;
label_204c88:
    // 0x204c88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204c88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204c8c: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x204c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x204c90: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x204c90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x204c94: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x204c94u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204c98: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x204c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204c9c: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x204c9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204ca0: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x204ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204ca4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204ca4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ca8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x204ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204cac: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204cb0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204cb0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204cb4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204CB4u;
    SET_GPR_U32(ctx, 31, 0x204CBCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204CB4u, 0x204CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CBCu;
label_204cbc:
    // 0x204cbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204cbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204cc0: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x204CC0u;
    {
        const bool branch_taken_0x204cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204cc0) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204CC8u;
}
