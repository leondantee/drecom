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

// Function: SndAdsBindPlay
// Address: 0x19f7a0 - 0x19f924
void SndAdsBindPlay_0x19f7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndAdsBindPlay_0x19f7a0");
#endif

    switch (ctx->pc) {
        case 0x19f88cu: goto label_19f88c;
        case 0x19f898u: goto label_19f898;
        case 0x19f8a8u: goto label_19f8a8;
        case 0x19f8bcu: goto label_19f8bc;
        case 0x19f8c4u: goto label_19f8c4;
        default: break;
    }

    ctx->pc = 0x19f7a0u;

    // 0x19f7a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19f7a4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x19f7a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
    // 0x19f7a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19f7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19f7ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19f7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19f7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f7b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19f7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19f7b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19f7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19f7bc: 0xa7a40060  sh          $a0, 0x60($sp)
    ctx->pc = 0x19f7bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x19f7c0: 0xa7a50068  sh          $a1, 0x68($sp)
    ctx->pc = 0x19f7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 104), (uint16_t)GPR_U32(ctx, 5));
    // 0x19f7c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f7c8: 0x8c231a40  lw          $v1, 0x1A40($at)
    ctx->pc = 0x19f7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19f7cc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x19f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x19f7d0: 0x1460004b  bnez        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x19F7D0u;
    {
        const bool branch_taken_0x19f7d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f7d0) {
            ctx->pc = 0x19F900u;
            goto label_19f900;
        }
    }
    ctx->pc = 0x19F7D8u;
    // 0x19f7d8: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x19f7d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f7dc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x19f7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x19f7e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19F7E0u;
    {
        const bool branch_taken_0x19f7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f7e0) {
            ctx->pc = 0x19F7FCu;
            goto label_19f7fc;
        }
    }
    ctx->pc = 0x19F7E8u;
    // 0x19f7e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19f7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19f7ec: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x19f7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19f7f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x19f7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x19f7f4: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x19F7F4u;
    {
        const bool branch_taken_0x19f7f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f7f4) {
            ctx->pc = 0x19F900u;
            goto label_19f900;
        }
    }
    ctx->pc = 0x19F7FCu;
label_19f7fc:
    // 0x19f7fc: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19f7fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f800: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F800u;
    {
        const bool branch_taken_0x19f800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f800) {
            ctx->pc = 0x19F814u;
            goto label_19f814;
        }
    }
    ctx->pc = 0x19F808u;
    // 0x19f808: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19f808u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19f80c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19F80Cu;
    {
        const bool branch_taken_0x19f80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f80c) {
            ctx->pc = 0x19F81Cu;
            goto label_19f81c;
        }
    }
    ctx->pc = 0x19F814u;
label_19f814:
    // 0x19f814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19f818: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19f818u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_19f81c:
    // 0x19f81c: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19f81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f820: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f824: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19f824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19f828: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19f828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19f82c: 0x24427bb0  addiu       $v0, $v0, 0x7BB0
    ctx->pc = 0x19f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31664));
    // 0x19f830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f834: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x19f834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f838: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x19f838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19f83c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f840: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x19f840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x19f844: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x19f844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19f848: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19f848u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f84c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19f84cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f850: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19f850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f858: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x19f858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19f85c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19f860: 0x24428050  addiu       $v0, $v0, -0x7FB0
    ctx->pc = 0x19f860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934608));
    // 0x19f864: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19f864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f868: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x19f868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x19f86c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f870: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19f874: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f878: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x19f878u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f87c: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x19f87cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19f880: 0x8e140004  lw          $s4, 0x4($s0)
    ctx->pc = 0x19f880u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19f884: 0xc0ce5d4  jal         func_339750
    ctx->pc = 0x19F884u;
    SET_GPR_U32(ctx, 31, 0x19F88Cu);
    ctx->pc = 0x339750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339750u, 0x19F884u, 0x19F88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F88Cu;
label_19f88c:
    // 0x19f88c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x19f88cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19f890: 0xc0ce718  jal         func_339C60
    ctx->pc = 0x19F890u;
    SET_GPR_U32(ctx, 31, 0x19F898u);
    ctx->pc = 0x339C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339C60u, 0x19F890u, 0x19F898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F898u;
label_19f898:
    // 0x19f898: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x19f898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x19f89c: 0x3285ffff  andi        $a1, $s4, 0xFFFF
    ctx->pc = 0x19f89cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x19f8a0: 0xc0ce604  jal         func_339810
    ctx->pc = 0x19F8A0u;
    SET_GPR_U32(ctx, 31, 0x19F8A8u);
    ctx->pc = 0x339810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339810u, 0x19F8A0u, 0x19F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8A8u;
label_19f8a8:
    // 0x19f8a8: 0x97a20060  lhu         $v0, 0x60($sp)
    ctx->pc = 0x19f8a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19f8ac: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x19f8acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19f8b0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x19f8b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x19f8b4: 0xc0ce590  jal         func_339640
    ctx->pc = 0x19F8B4u;
    SET_GPR_U32(ctx, 31, 0x19F8BCu);
    ctx->pc = 0x339640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339640u, 0x19F8B4u, 0x19F8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8BCu;
label_19f8bc:
    // 0x19f8bc: 0xc0ce648  jal         func_339920
    ctx->pc = 0x19F8BCu;
    SET_GPR_U32(ctx, 31, 0x19F8C4u);
    ctx->pc = 0x339920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339920u, 0x19F8BCu, 0x19F8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8C4u;
label_19f8c4:
    // 0x19f8c4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x19f8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x19f8c8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x19f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19f8cc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19f8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f8d0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f8d4: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f8d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f8dc: 0xac650040  sw          $a1, 0x40($v1)
    ctx->pc = 0x19f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 5));
    // 0x19f8e0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x19f8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x19f8e4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x19f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x19f8e8: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x19f8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19f8ec: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x19f8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f8f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f8f4: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19f8f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19f8fc: 0xac650048  sw          $a1, 0x48($v1)
    ctx->pc = 0x19f8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 5));
label_19f900:
    // 0x19f900: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x19f900u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19f904: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19f904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f908: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19f908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f90c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f90cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19f910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19f914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f918: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19f918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19f91c: 0x3e00008  jr          $ra
    ctx->pc = 0x19F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F924u;
}
