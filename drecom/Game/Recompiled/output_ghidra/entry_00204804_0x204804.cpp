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

// Function: entry_00204804
// Address: 0x204804 - 0x20497c
void entry_00204804_0x204804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204804_0x204804");
#endif

    switch (ctx->pc) {
        case 0x204830u: goto label_204830;
        case 0x204860u: goto label_204860;
        case 0x204890u: goto label_204890;
        case 0x2048c0u: goto label_2048c0;
        case 0x2048ecu: goto label_2048ec;
        case 0x20491cu: goto label_20491c;
        case 0x204948u: goto label_204948;
        case 0x204970u: goto label_204970;
        default: break;
    }

    ctx->pc = 0x204804u;

    // 0x204804: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204804u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204808: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20480c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20480cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204810: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204814: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204814u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204818: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x20481c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204820: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204824: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204824u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204828: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204828u;
    SET_GPR_U32(ctx, 31, 0x204830u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204828u, 0x204830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204830u;
label_204830:
    // 0x204830: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204830u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204834: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204838: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204838u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20483c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20483cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204844: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204844u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204848: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x20484c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20484cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204850: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204854: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204854u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204858: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204858u;
    SET_GPR_U32(ctx, 31, 0x204860u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204858u, 0x204860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204860u;
label_204860:
    // 0x204860: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204864: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204864u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204868: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20486c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20486cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204870: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204874: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204878: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x204878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x20487c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20487cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204880: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204884: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204884u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204888: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204888u;
    SET_GPR_U32(ctx, 31, 0x204890u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204888u, 0x204890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204890u;
label_204890:
    // 0x204890: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204894: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x204894u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x204898: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x204898u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x20489c: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x20489cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2048a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2048a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2048a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2048a8: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2048a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2048ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2048acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2048b0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2048b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048b4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2048b4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2048b8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2048B8u;
    SET_GPR_U32(ctx, 31, 0x2048C0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2048B8u, 0x2048C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048C0u;
label_2048c0:
    // 0x2048c0: 0x3c083ca3  lui         $t0, 0x3CA3
    ctx->pc = 0x2048c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)15523 << 16));
    // 0x2048c4: 0x3507d70a  ori         $a3, $t0, 0xD70A
    ctx->pc = 0x2048c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)55050);
    // 0x2048c8: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2048c8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2048cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2048ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2048d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2048d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2048d4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2048d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2048d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2048d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2048dc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2048dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2048e0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2048e0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2048e4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2048E4u;
    SET_GPR_U32(ctx, 31, 0x2048ECu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2048E4u, 0x2048ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2048ECu;
label_2048ec:
    // 0x2048ec: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x2048ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x2048f0: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x2048f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2048f4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2048f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2048f8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2048fc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2048fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204900: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x204900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204904: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x204904u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20490c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x20490cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204910: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204910u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204914: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204914u;
    SET_GPR_U32(ctx, 31, 0x20491Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204914u, 0x20491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20491Cu;
label_20491c:
    // 0x20491c: 0x3c043ca3  lui         $a0, 0x3CA3
    ctx->pc = 0x20491cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15523 << 16));
    // 0x204920: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x204920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x204924: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x204924u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204928: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x204928u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20492c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x20492cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x204930: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204934: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x204934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204938: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20493c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x20493cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204940: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204940u;
    SET_GPR_U32(ctx, 31, 0x204948u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204940u, 0x204948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204948u;
label_204948:
    // 0x204948: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x20494c: 0x3465d70a  ori         $a1, $v1, 0xD70A
    ctx->pc = 0x20494cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x204950: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204950u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204954: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204958: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x20495c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20495cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204960: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x204960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x204964: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x204964u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204968: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204968u;
    SET_GPR_U32(ctx, 31, 0x204970u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204968u, 0x204970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204970u;
label_204970:
    // 0x204970: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204970u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204974: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x204974u;
    {
        const bool branch_taken_0x204974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204974) {
            ctx->pc = 0x205154u;
            return;
        }
    }
    ctx->pc = 0x20497Cu;
}
