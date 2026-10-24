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

// Function: entry_001975f0
// Address: 0x1975f0 - 0x197770
void entry_001975f0_0x1975f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001975f0_0x1975f0");
#endif

    switch (ctx->pc) {
        case 0x19761cu: goto label_19761c;
        case 0x197650u: goto label_197650;
        case 0x197680u: goto label_197680;
        case 0x1976b0u: goto label_1976b0;
        case 0x1976e0u: goto label_1976e0;
        case 0x197708u: goto label_197708;
        case 0x197734u: goto label_197734;
        case 0x197764u: goto label_197764;
        default: break;
    }

    ctx->pc = 0x1975f0u;

    // 0x1975f0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1975f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1975f4: 0x34a7d70a  ori         $a3, $a1, 0xD70A
    ctx->pc = 0x1975f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1975f8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x1975f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1975fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1975fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197600: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197600u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197604: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x197604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x197608: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19760c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19760cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197610: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197610u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197614: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197614u;
    SET_GPR_U32(ctx, 31, 0x19761Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197614u, 0x19761Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19761Cu;
label_19761c:
    // 0x19761c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x19761cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197620: 0x3c073ca3  lui         $a3, 0x3CA3
    ctx->pc = 0x197620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15523 << 16));
    // 0x197624: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x197624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x197628: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x197628u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19762c: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x19762cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197630: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x197630u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x197634: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x197634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x197638: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197638u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19763c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19763cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197640: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197644: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197644u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197648: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197648u;
    SET_GPR_U32(ctx, 31, 0x197650u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197648u, 0x197650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197650u;
label_197650:
    // 0x197650: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x197650u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197654: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197658: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x197658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19765c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x19765cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197660: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197664: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x197664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x197668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x197668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19766c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x19766cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197674: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197674u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197678: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197678u;
    SET_GPR_U32(ctx, 31, 0x197680u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197678u, 0x197680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197680u;
label_197680:
    // 0x197680: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x197680u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197684: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x197684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x197688: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x197688u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19768c: 0x44886000  mtc1        $t0, $f12
    ctx->pc = 0x19768cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197690: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x197690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197694: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x197694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x197698: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x197698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x19769c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x19769cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976a0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1976a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976a4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1976a4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1976a8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1976A8u;
    SET_GPR_U32(ctx, 31, 0x1976B0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1976A8u, 0x1976B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976B0u;
label_1976b0:
    // 0x1976b0: 0x3c053ca3  lui         $a1, 0x3CA3
    ctx->pc = 0x1976b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15523 << 16));
    // 0x1976b4: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x1976b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x1976b8: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1976b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1976bc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1976bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1976c0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1976c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1976c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1976c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976c8: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1976c8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1976cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1976ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976d0: 0x71003e28  paddub      $a3, $t0, $zero
    ctx->pc = 0x1976d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x1976d4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1976d4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1976d8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1976D8u;
    SET_GPR_U32(ctx, 31, 0x1976E0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1976D8u, 0x1976E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1976E0u;
label_1976e0:
    // 0x1976e0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x1976e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x1976e4: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x1976e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x1976e8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1976e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1976ec: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1976ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1976f0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1976f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1976f4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1976f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1976f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1976fc: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1976fcu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x197700: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x197700u;
    SET_GPR_U32(ctx, 31, 0x197708u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x197700u, 0x197708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197708u;
label_197708:
    // 0x197708: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19770c: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x197710: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x197710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x197714: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x197714u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197718: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19771c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x197720: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197724: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197728: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197728u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19772c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19772Cu;
    SET_GPR_U32(ctx, 31, 0x197734u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19772Cu, 0x197734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197734u;
label_197734:
    // 0x197734: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197738: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x197738u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x19773c: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x19773cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x197740: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x197740u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197744: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x197744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x197748: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x19774c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x19774cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x197750: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x197750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x197754: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x197754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197758: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x197758u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19775c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x19775Cu;
    SET_GPR_U32(ctx, 31, 0x197764u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x19775Cu, 0x197764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197764u;
label_197764:
    // 0x197764: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x197764u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x197768: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x197768u;
    {
        const bool branch_taken_0x197768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197768) {
            ctx->pc = 0x197A78u;
            return;
        }
    }
    ctx->pc = 0x197770u;
}
