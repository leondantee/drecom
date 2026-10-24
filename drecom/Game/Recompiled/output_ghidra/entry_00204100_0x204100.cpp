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

// Function: entry_00204100
// Address: 0x204100 - 0x204284
void entry_00204100_0x204100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00204100_0x204100");
#endif

    switch (ctx->pc) {
        case 0x20413cu: goto label_20413c;
        case 0x204168u: goto label_204168;
        case 0x204194u: goto label_204194;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041f0u: goto label_2041f0;
        case 0x20421cu: goto label_20421c;
        case 0x204248u: goto label_204248;
        case 0x204278u: goto label_204278;
        default: break;
    }

    ctx->pc = 0x204100u;

    // 0x204100: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x204100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204104: 0x94440094  lhu         $a0, 0x94($v0)
    ctx->pc = 0x204104u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x204108: 0x1480005e  bnez        $a0, . + 4 + (0x5E << 2)
    ctx->pc = 0x204108u;
    {
        const bool branch_taken_0x204108 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x204108) {
            ctx->pc = 0x204284u;
            return;
        }
    }
    ctx->pc = 0x204110u;
    // 0x204110: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x204110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
    // 0x204114: 0x3445d70a  ori         $a1, $v0, 0xD70A
    ctx->pc = 0x204114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x204118: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204118u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20411c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x20411cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204120: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204124: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x204128: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204128u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20412c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204130: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204134: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204134u;
    SET_GPR_U32(ctx, 31, 0x20413Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204134u, 0x20413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20413Cu;
label_20413c:
    // 0x20413c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x20413cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204140: 0x34c2d70a  ori         $v0, $a2, 0xD70A
    ctx->pc = 0x204140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204144: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x204144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204148: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20414c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x20414cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204150: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x204150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x204154: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204154u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204158: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20415c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204160: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204160u;
    SET_GPR_U32(ctx, 31, 0x204168u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204160u, 0x204168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204168u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x20416c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x20416cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204170: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204170u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204174: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204174u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204178: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204178u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20417c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x20417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x204180: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204180u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204184: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204188: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20418c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x20418Cu;
    SET_GPR_U32(ctx, 31, 0x204194u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x20418Cu, 0x204194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204194u;
label_204194:
    // 0x204194: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x204194u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204198: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204198u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x20419c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x20419cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2041a0: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2041a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2041a4: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2041a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2041a8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2041a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2041ac: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2041acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2041b0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2041b0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2041b4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2041b8: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2041bc: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2041BCu;
    SET_GPR_U32(ctx, 31, 0x2041C4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2041BCu, 0x2041C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041C4u;
label_2041c4:
    // 0x2041c4: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x2041c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x2041c8: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2041c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2041cc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2041ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2041d0: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2041d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2041d4: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2041d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2041d8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2041d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2041dc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2041dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2041e0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2041e4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2041e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2041e8: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x2041E8u;
    SET_GPR_U32(ctx, 31, 0x2041F0u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x2041E8u, 0x2041F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2041F0u;
label_2041f0:
    // 0x2041f0: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x2041f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x2041f4: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2041f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2041f8: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2041f8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2041fc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x2041fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204200: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204200u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204204: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x204204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x204208: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204208u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20420c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x20420cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x204210: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x204210u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204214: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204214u;
    SET_GPR_U32(ctx, 31, 0x20421Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204214u, 0x20421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20421Cu;
label_20421c:
    // 0x20421c: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x204220: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x204220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204224: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204224u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204228: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20422c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x20422cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x204230: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x204230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x204234: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204234u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204238: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20423c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20423cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204240: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204240u;
    SET_GPR_U32(ctx, 31, 0x204248u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204240u, 0x204248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204248u;
label_204248:
    // 0x204248: 0x3c063ca3  lui         $a2, 0x3CA3
    ctx->pc = 0x204248u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15523 << 16));
    // 0x20424c: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x20424cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x204250: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x204250u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204254: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x204254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204258: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x204258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x20425c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x20425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x204260: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x204260u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x204264: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x204264u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x204268: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x204268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20426c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x20426cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x204270: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x204270u;
    SET_GPR_U32(ctx, 31, 0x204278u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x204270u, 0x204278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204278u;
label_204278:
    // 0x204278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20427c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x20427cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x204280: 0xa4c50094  sh          $a1, 0x94($a2)
    ctx->pc = 0x204280u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 148), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x204284u;
}
