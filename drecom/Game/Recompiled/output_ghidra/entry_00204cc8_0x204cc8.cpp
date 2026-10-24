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

// Function: entry_00204cc8
// Address: 0x204cc8 - 0x204e48
void entry_00204cc8_0x204cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204cc8_0x204cc8");
#endif

    switch (ctx->pc) {
        case 0x204cf8u: goto label_204cf8;
        case 0x204d24u: goto label_204d24;
        case 0x204d54u: goto label_204d54;
        case 0x204d7cu: goto label_204d7c;
        case 0x204dacu: goto label_204dac;
        case 0x204de0u: goto label_204de0;
        case 0x204e10u: goto label_204e10;
        case 0x204e3cu: goto label_204e3c;
        default: break;
    }

    ctx->pc = 0x204cc8u;

    // 0x204cc8: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204ccc: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204cd0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204cd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204cd4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204cd8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204cdc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x204cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204ce0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204ce0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204ce4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204ce8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204cec: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204cecu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204cf0: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204CF0u;
    SET_GPR_U32(ctx, 31, 0x204CF8u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204CF0u, 0x204CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204CF8u;
label_204cf8:
    // 0x204cf8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204cf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204cfc: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204d00: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x204d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204d04: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x204d04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d08: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d0c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204d10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d18: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204d18u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204d1c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204D1Cu;
    SET_GPR_U32(ctx, 31, 0x204D24u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204D1Cu, 0x204D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D24u;
label_204d24:
    // 0x204d24: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204d28: 0x3447d70a  ori         $a3, $v0, 0xD70A
    ctx->pc = 0x204d28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204d2c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204d2cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d34: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x204d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204d38: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d3c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x204d3cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204d40: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x204d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d44: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x204d44u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x204d48: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204d48u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204d4c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204D4Cu;
    SET_GPR_U32(ctx, 31, 0x204D54u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204D4Cu, 0x204D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D54u;
label_204d54:
    // 0x204d54: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x204d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x204d58: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x204d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x204d5c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x204d5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d60: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d64: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x204d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x204d68: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d6c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d70: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204d70u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204d74: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204D74u;
    SET_GPR_U32(ctx, 31, 0x204D7Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204D74u, 0x204D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204D7Cu;
label_204d7c:
    // 0x204d7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204d7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204d80: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204d84: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204d88: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204d88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204d90: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x204d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x204d94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x204d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204d98: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x204d98u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204d9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204da0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204da0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204da4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204DA4u;
    SET_GPR_U32(ctx, 31, 0x204DACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204DA4u, 0x204DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DACu;
label_204dac:
    // 0x204dac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204dacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204db0: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204db0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204db4: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204db8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204db8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204dbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204dc0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204dc0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204dc4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x204dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204dc8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204dcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204dd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204dd4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204dd4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204dd8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204DD8u;
    SET_GPR_U32(ctx, 31, 0x204DE0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204DD8u, 0x204DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204DE0u;
label_204de0:
    // 0x204de0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204de0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204de4: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204de4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204de8: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204de8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204dec: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204decu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204df0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204df4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204df4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204df8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204dfc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204e00: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204e00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e04: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204e04u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e08: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204E08u;
    SET_GPR_U32(ctx, 31, 0x204E10u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204E08u, 0x204E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E10u;
label_204e10:
    // 0x204e10: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204e14: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204e18: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204e18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x204e1c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x204e1cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204e20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204e24: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204e28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x204e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x204e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204e30: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204e30u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204e34: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204E34u;
    SET_GPR_U32(ctx, 31, 0x204E3Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204E34u, 0x204E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204E3Cu;
label_204e3c:
    // 0x204e3c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204e3cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204e40: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x204E40u;
    {
        const bool branch_taken_0x204e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204e40) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x204E48u;
}
