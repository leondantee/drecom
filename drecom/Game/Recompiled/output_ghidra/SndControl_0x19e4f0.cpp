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

// Function: SndControl
// Address: 0x19e4f0 - 0x19ec5c
void SndControl_0x19e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndControl_0x19e4f0");
#endif

    switch (ctx->pc) {
        case 0x19e51cu: goto label_19e51c;
        case 0x19e544u: goto label_19e544;
        case 0x19e550u: goto label_19e550;
        case 0x19e568u: goto label_19e568;
        case 0x19e578u: goto label_19e578;
        case 0x19e600u: goto label_19e600;
        case 0x19e654u: goto label_19e654;
        case 0x19e8ccu: goto label_19e8cc;
        case 0x19ea80u: goto label_19ea80;
        case 0x19eac8u: goto label_19eac8;
        case 0x19ebf4u: goto label_19ebf4;
        case 0x19ec30u: goto label_19ec30;
        case 0x19ec44u: goto label_19ec44;
        default: break;
    }

    ctx->pc = 0x19e4f0u;

    // 0x19e4f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19e4f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19e4f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19e4fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e500: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e504: 0x8c301a40  lw          $s0, 0x1A40($at)
    ctx->pc = 0x19e504u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19e508: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x19e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x19e50c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19E50Cu;
    {
        const bool branch_taken_0x19e50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e50c) {
            ctx->pc = 0x19E524u;
            goto label_19e524;
        }
    }
    ctx->pc = 0x19E514u;
    // 0x19e514: 0xc0ce250  jal         func_338940
    ctx->pc = 0x19E514u;
    SET_GPR_U32(ctx, 31, 0x19E51Cu);
    ctx->pc = 0x338940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338940u, 0x19E514u, 0x19E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E51Cu;
label_19e51c:
    // 0x19e51c: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x19E51Cu;
    {
        const bool branch_taken_0x19e51c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e51c) {
            ctx->pc = 0x19EC44u;
            goto label_19ec44;
        }
    }
    ctx->pc = 0x19E524u;
label_19e524:
    // 0x19e524: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e528: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x19e528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x19e52c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x19e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x19e530: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x19E530u;
    {
        const bool branch_taken_0x19e530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e530) {
            ctx->pc = 0x19E580u;
            goto label_19e580;
        }
    }
    ctx->pc = 0x19E538u;
    // 0x19e538: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x19e538u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e53c: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19E53Cu;
    SET_GPR_U32(ctx, 31, 0x19E544u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19E53Cu, 0x19E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E544u;
label_19e544:
    // 0x19e544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19e544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e548: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19E548u;
    SET_GPR_U32(ctx, 31, 0x19E550u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19E548u, 0x19E550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E550u;
label_19e550:
    // 0x19e550: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x19e550u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19e554: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e558: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x19e558u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19e55c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e560: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19E560u;
    SET_GPR_U32(ctx, 31, 0x19E568u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19E560u, 0x19E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E568u;
label_19e568:
    // 0x19e568: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19E568u;
    {
        const bool branch_taken_0x19e568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e568) {
            ctx->pc = 0x19E578u;
            goto label_19e578;
        }
    }
    ctx->pc = 0x19E570u;
    // 0x19e570: 0xc067e4c  jal         func_19F930
    ctx->pc = 0x19E570u;
    SET_GPR_U32(ctx, 31, 0x19E578u);
    ctx->pc = 0x19F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F930u, 0x19E570u, 0x19E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E578u;
label_19e578:
    // 0x19e578: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x19E578u;
    {
        const bool branch_taken_0x19e578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e578) {
            ctx->pc = 0x19EC44u;
            goto label_19ec44;
        }
    }
    ctx->pc = 0x19E580u;
label_19e580:
    // 0x19e580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e584: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x19e584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x19e588: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x19e588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x19e58c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e590: 0x144000cb  bnez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x19E590u;
    {
        const bool branch_taken_0x19e590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e590) {
            ctx->pc = 0x19E8C0u;
            goto label_19e8c0;
        }
    }
    ctx->pc = 0x19E598u;
    // 0x19e598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e59c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x19e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19e5a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x19e5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x19e5a4: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x19E5A4u;
    {
        const bool branch_taken_0x19e5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e5a4) {
            ctx->pc = 0x19E8C0u;
            goto label_19e8c0;
        }
    }
    ctx->pc = 0x19E5ACu;
    // 0x19e5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e5b0: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19e5b4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x19e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x19e5b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e5bc: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x19E5BCu;
    {
        const bool branch_taken_0x19e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e5bc) {
            ctx->pc = 0x19E760u;
            goto label_19e760;
        }
    }
    ctx->pc = 0x19E5C4u;
    // 0x19e5c4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e5c8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e5cc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x19e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19e5d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19e5d4: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x19E5D4u;
    {
        const bool branch_taken_0x19e5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e5d4) {
            ctx->pc = 0x19E760u;
            goto label_19e760;
        }
    }
    ctx->pc = 0x19E5DCu;
    // 0x19e5dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e5e0: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e5e4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x19e5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x19e5e8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19e5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19e5ec: 0xac62003c  sw          $v0, 0x3C($v1)
    ctx->pc = 0x19e5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 2));
    // 0x19e5f0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19e5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e5f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5f8: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19E5F8u;
    SET_GPR_U32(ctx, 31, 0x19E600u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19E5F8u, 0x19E600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E600u;
label_19e600:
    // 0x19e600: 0x1c400016  bgtz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x19E600u;
    {
        const bool branch_taken_0x19e600 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x19e600) {
            ctx->pc = 0x19E65Cu;
            goto label_19e65c;
        }
    }
    ctx->pc = 0x19E608u;
    // 0x19e608: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e60c: 0x8c220068  lw          $v0, 0x68($at)
    ctx->pc = 0x19e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0068u));
    // 0x19e610: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19e610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e614: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x19e614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x19e618: 0x24427e40  addiu       $v0, $v0, 0x7E40
    ctx->pc = 0x19e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32320));
    // 0x19e61c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e620: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e624: 0x8c22006c  lw          $v0, 0x6C($at)
    ctx->pc = 0x19e624u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x19e628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19e628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19e62c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19e62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e630: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e634: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19e634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e638: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x19e638u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x19e63c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e640: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19e640u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e644: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x19e644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x19e648: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x19e648u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e64c: 0xc067de8  jal         func_19F7A0
    ctx->pc = 0x19E64Cu;
    SET_GPR_U32(ctx, 31, 0x19E654u);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x19E64Cu, 0x19E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E654u;
label_19e654:
    // 0x19e654: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19E654u;
    {
        const bool branch_taken_0x19e654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e654) {
            ctx->pc = 0x19E6CCu;
            goto label_19e6cc;
        }
    }
    ctx->pc = 0x19E65Cu;
label_19e65c:
    // 0x19e65c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e660: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e660u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e664: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x19e664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x19e668: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x19e668u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e66c: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x19e66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e670: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e674: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e678: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x19e678u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e67c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x19e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x19e680: 0x0  nop
    ctx->pc = 0x19e680u;
    // NOP
    // 0x19e684: 0x1010  mfhi        $v0
    ctx->pc = 0x19e684u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e688: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x19e68c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e68cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e690: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e694: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e698: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e69c: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x19e69cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x19e6a0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6a4: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6a8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x19e6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x19e6ac: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x19e6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x19e6b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e6b4: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x19e6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x19e6b8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6bc: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6c0: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x19e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x19e6c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x19e6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19e6c8: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19e6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_19e6cc:
    // 0x19e6cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6d0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6d4: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x19e6d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e6d8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6dc: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6e0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e6e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e6e4: 0x304300df  andi        $v1, $v0, 0xDF
    ctx->pc = 0x19e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x19e6e8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6ec: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e6f4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e6f8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e6fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e700: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x19e700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x19e704: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e708: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e708u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e70c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e70cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e710: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e714: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e718: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x19e718u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e71c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e720: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e724: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19e724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e728: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e72c: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e730: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19e730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e734: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19e734u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19e738: 0x0  nop
    ctx->pc = 0x19e738u;
    // NOP
    // 0x19e73c: 0x1010  mfhi        $v0
    ctx->pc = 0x19e73cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e744: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e744u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e748: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e74c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e750: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e750u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e754: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x19e754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x19e758: 0xa38080bc  sb          $zero, -0x7F44($gp)
    ctx->pc = 0x19e758u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934716), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e75c: 0xa38080c4  sb          $zero, -0x7F3C($gp)
    ctx->pc = 0x19e75cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934724), (uint8_t)GPR_U32(ctx, 0));
label_19e760:
    // 0x19e760: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19e760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19e764: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x19e764u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x19e768: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x19e768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x19e76c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e770: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x19E770u;
    {
        const bool branch_taken_0x19e770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e770) {
            ctx->pc = 0x19E8C0u;
            goto label_19e8c0;
        }
    }
    ctx->pc = 0x19E778u;
    // 0x19e778: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e77c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e77cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e780: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x19e780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19e784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19e788: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x19E788u;
    {
        const bool branch_taken_0x19e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e788) {
            ctx->pc = 0x19E8C0u;
            goto label_19e8c0;
        }
    }
    ctx->pc = 0x19E790u;
    // 0x19e790: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e794: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e794u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e798: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x19e798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x19e79c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19e7a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e7a4: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x19e7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x19e7a8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e7ac: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e7b0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19e7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19e7b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e7b8: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19e7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e7bc: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e7c0: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e7c4: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19e7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e7c8: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19e7cc: 0x0  nop
    ctx->pc = 0x19e7ccu;
    // NOP
    // 0x19e7d0: 0x1010  mfhi        $v0
    ctx->pc = 0x19e7d0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e7d4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e7d8: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e7d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e7dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e7e0: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19e7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19e7e4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e7e8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e7ec: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x19e7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x19e7f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e7f4: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19e7f8: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x19e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x19e7fc: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19e800: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19e804: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x19e804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
    // 0x19e808: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e80c: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19e810: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x19e810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x19e814: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19e814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19e818: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x19e818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
    // 0x19e81c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e81cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e820: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e820u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e824: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x19e824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e828: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e82c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e830: 0xa0430008  sb          $v1, 0x8($v0)
    ctx->pc = 0x19e830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e834: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e838: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e83c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e840: 0x304300ef  andi        $v1, $v0, 0xEF
    ctx->pc = 0x19e840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)239);
    // 0x19e844: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e848: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e848u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e84c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e850: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e854: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e858: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e85c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x19e85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x19e860: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e864: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e864u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e868: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19e868u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19e86c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e870: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e874: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x19e874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19e878: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e87c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e880: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x19e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19e884: 0x3c02b60b  lui         $v0, 0xB60B
    ctx->pc = 0x19e884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46603 << 16));
    // 0x19e888: 0x344260b7  ori         $v0, $v0, 0x60B7
    ctx->pc = 0x19e888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24759);
    // 0x19e88c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x19e88cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x19e890: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x19e890u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x19e894: 0x0  nop
    ctx->pc = 0x19e894u;
    // NOP
    // 0x19e898: 0x1010  mfhi        $v0
    ctx->pc = 0x19e898u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x19e89c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x19e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e8a0: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x19e8a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
    // 0x19e8a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e8a8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x19e8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x19e8ac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e8b0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e8b4: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x19e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x19e8b8: 0xa38080bc  sb          $zero, -0x7F44($gp)
    ctx->pc = 0x19e8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934716), (uint8_t)GPR_U32(ctx, 0));
    // 0x19e8bc: 0xa38080c4  sb          $zero, -0x7F3C($gp)
    ctx->pc = 0x19e8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934724), (uint8_t)GPR_U32(ctx, 0));
label_19e8c0:
    // 0x19e8c0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x19e8c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19e8c4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x19E8C4u;
    {
        const bool branch_taken_0x19e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8c4) {
            ctx->pc = 0x19EAD8u;
            goto label_19ead8;
        }
    }
    ctx->pc = 0x19E8CCu;
label_19e8cc:
    // 0x19e8cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e8d0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e8d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e8d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e8d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e8dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e8e0: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x19e8e4: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x19E8E4u;
    {
        const bool branch_taken_0x19e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8e4) {
            ctx->pc = 0x19EAD0u;
            goto label_19ead0;
        }
    }
    ctx->pc = 0x19E8ECu;
    // 0x19e8ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e8f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e8f4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e8f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e8fc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x19e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19e900: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e904: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e908: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e90c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e910: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19e914: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e918: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x19e918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x19e91c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e920: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e924: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e928: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e92c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e930: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19e934: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19E934u;
    {
        const bool branch_taken_0x19e934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e934) {
            ctx->pc = 0x19E9C8u;
            goto label_19e9c8;
        }
    }
    ctx->pc = 0x19E93Cu;
    // 0x19e93c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e940: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e944: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e94c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x19e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19e950: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19e950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19e954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e958: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e95c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e960: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e964: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e968: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19e968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19e96c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e970: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x19e970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19e974: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x19E974u;
    {
        const bool branch_taken_0x19e974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e974) {
            ctx->pc = 0x19EA80u;
            goto label_19ea80;
        }
    }
    ctx->pc = 0x19E97Cu;
    // 0x19e97c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e980: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e984: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e988: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19e988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19e98c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e990: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e994: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e998: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e99c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e9a4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x19e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x19e9a8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e9ac: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9b0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e9b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x19e9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e9b8: 0x3042008f  andi        $v0, $v0, 0x8F
    ctx->pc = 0x19e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)143);
    // 0x19e9bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19e9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19e9c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x19E9C0u;
    {
        const bool branch_taken_0x19e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9c0) {
            ctx->pc = 0x19EA80u;
            goto label_19ea80;
        }
    }
    ctx->pc = 0x19E9C8u;
label_19e9c8:
    // 0x19e9c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e9cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e9d0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e9d8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x19e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19e9dc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19e9dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19e9e0: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19e9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19e9e4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19e9e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19e9e8: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x19e9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19e9ec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x19e9ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x19e9f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e9f4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e9fc: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19e9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19ea00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea04: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x19ea04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x19ea08: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x19EA08u;
    {
        const bool branch_taken_0x19ea08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea08) {
            ctx->pc = 0x19EA80u;
            goto label_19ea80;
        }
    }
    ctx->pc = 0x19EA10u;
    // 0x19ea10: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea14: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea18: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19ea18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ea1c: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19ea1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19ea20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea24: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19ea24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19ea28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ea2c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea30: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ea38: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x19ea38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x19ea3c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea40: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea44: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19ea44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ea48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x19ea48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19ea4c: 0x3042008f  andi        $v0, $v0, 0x8F
    ctx->pc = 0x19ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)143);
    // 0x19ea50: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19ea50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ea54: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea58: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea5c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19ea60: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19ea60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19ea64: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea68: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x19ea68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x19ea6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EA6Cu;
    {
        const bool branch_taken_0x19ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ea6c) {
            ctx->pc = 0x19EA80u;
            goto label_19ea80;
        }
    }
    ctx->pc = 0x19EA74u;
    // 0x19ea74: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19ea74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19ea78: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19EA78u;
    SET_GPR_U32(ctx, 31, 0x19EA80u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19EA78u, 0x19EA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EA80u;
label_19ea80:
    // 0x19ea80: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ea84: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea88: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ea90: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x19ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19ea94: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19ea94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ea98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea9c: 0xa38280b8  sb          $v0, -0x7F48($gp)
    ctx->pc = 0x19ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934712), (uint8_t)GPR_U32(ctx, 2));
    // 0x19eaa0: 0x938280b8  lbu         $v0, -0x7F48($gp)
    ctx->pc = 0x19eaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x19eaa4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19eaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eaa8: 0x938280bc  lbu         $v0, -0x7F44($gp)
    ctx->pc = 0x19eaa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x19eaac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eab0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EAB0u;
    {
        const bool branch_taken_0x19eab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19eab0) {
            ctx->pc = 0x19EAC8u;
            goto label_19eac8;
        }
    }
    ctx->pc = 0x19EAB8u;
    // 0x19eab8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x19eab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19eabc: 0x938580b8  lbu         $a1, -0x7F48($gp)
    ctx->pc = 0x19eabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x19eac0: 0xc067cf0  jal         func_19F3C0
    ctx->pc = 0x19EAC0u;
    SET_GPR_U32(ctx, 31, 0x19EAC8u);
    ctx->pc = 0x19F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3C0u, 0x19EAC0u, 0x19EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC8u;
label_19eac8:
    // 0x19eac8: 0x938280b8  lbu         $v0, -0x7F48($gp)
    ctx->pc = 0x19eac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x19eacc: 0xa38280bc  sb          $v0, -0x7F44($gp)
    ctx->pc = 0x19eaccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934716), (uint8_t)GPR_U32(ctx, 2));
label_19ead0:
    // 0x19ead0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19ead0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19ead4: 0x0  nop
    ctx->pc = 0x19ead4u;
    // NOP
label_19ead8:
    // 0x19ead8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x19ead8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x19eadc: 0x1440ff7b  bnez        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x19EADCu;
    {
        const bool branch_taken_0x19eadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19eadc) {
            ctx->pc = 0x19E8CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e8cc;
        }
    }
    ctx->pc = 0x19EAE4u;
    // 0x19eae4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eae8: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eaec: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x19eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19eaf0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x19eaf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x19eaf4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x19EAF4u;
    {
        const bool branch_taken_0x19eaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eaf4) {
            ctx->pc = 0x19EC38u;
            goto label_19ec38;
        }
    }
    ctx->pc = 0x19EAFCu;
    // 0x19eafc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb00: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb04: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb08: 0x8c248070  lw          $a0, -0x7F90($at)
    ctx->pc = 0x19eb08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb0c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x19eb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x19eb10: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x19eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x19eb14: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x19eb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19eb18: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x19eb18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
    // 0x19eb1c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb20: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb24: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x19eb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19eb28: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x19eb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19eb2c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x19EB2Cu;
    {
        const bool branch_taken_0x19eb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb2c) {
            ctx->pc = 0x19EB94u;
            goto label_19eb94;
        }
    }
    ctx->pc = 0x19EB34u;
    // 0x19eb34: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb38: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb3c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19eb40: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19eb40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19eb44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19eb44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eb48: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19eb48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eb4c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb50: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb54: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19eb58: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x19eb58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19eb5c: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x19EB5Cu;
    {
        const bool branch_taken_0x19eb5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb5c) {
            ctx->pc = 0x19EBF4u;
            goto label_19ebf4;
        }
    }
    ctx->pc = 0x19EB64u;
    // 0x19eb64: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb68: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb6c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x19eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x19eb70: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x19eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19eb74: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb78: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb7c: 0xac62004c  sw          $v0, 0x4C($v1)
    ctx->pc = 0x19eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 2));
    // 0x19eb80: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb84: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb88: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x19eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x19eb8c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x19EB8Cu;
    {
        const bool branch_taken_0x19eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eb8c) {
            ctx->pc = 0x19EBF4u;
            goto label_19ebf4;
        }
    }
    ctx->pc = 0x19EB94u;
label_19eb94:
    // 0x19eb94: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19eb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19eb98: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19eb9c: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x19eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19eba0: 0x30850002  andi        $a1, $a0, 0x2
    ctx->pc = 0x19eba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x19eba4: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x19EBA4u;
    {
        const bool branch_taken_0x19eba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19eba4) {
            ctx->pc = 0x19EBF4u;
            goto label_19ebf4;
        }
    }
    ctx->pc = 0x19EBACu;
    // 0x19ebac: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebb0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebb4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19ebb8: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x19ebb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ebbc: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x19ebbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
    // 0x19ebc0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19ebc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19ebc4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x19ebc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19ebc8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x19ebc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x19ebcc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19EBCCu;
    {
        const bool branch_taken_0x19ebcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x19ebcc) {
            ctx->pc = 0x19EBF4u;
            goto label_19ebf4;
        }
    }
    ctx->pc = 0x19EBD4u;
    // 0x19ebd4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebd8: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19ebd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebdc: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x19ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x19ebe0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebe4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebe8: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x19ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
    // 0x19ebec: 0xc067e4c  jal         func_19F930
    ctx->pc = 0x19EBECu;
    SET_GPR_U32(ctx, 31, 0x19EBF4u);
    ctx->pc = 0x19F930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F930u, 0x19EBECu, 0x19EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EBF4u;
label_19ebf4:
    // 0x19ebf4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebf8: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebfc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x19ec00: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ec04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ec08: 0xa38280c0  sb          $v0, -0x7F40($gp)
    ctx->pc = 0x19ec08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934720), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ec0c: 0x938280c4  lbu         $v0, -0x7F3C($gp)
    ctx->pc = 0x19ec0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x19ec10: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19ec10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ec14: 0x938580c0  lbu         $a1, -0x7F40($gp)
    ctx->pc = 0x19ec14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x19ec18: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19ec1c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EC1Cu;
    {
        const bool branch_taken_0x19ec1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec1c) {
            ctx->pc = 0x19EC30u;
            goto label_19ec30;
        }
    }
    ctx->pc = 0x19EC24u;
    // 0x19ec24: 0x938480c0  lbu         $a0, -0x7F40($gp)
    ctx->pc = 0x19ec24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x19ec28: 0xc0ce6e4  jal         func_339B90
    ctx->pc = 0x19EC28u;
    SET_GPR_U32(ctx, 31, 0x19EC30u);
    ctx->pc = 0x339B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339B90u, 0x19EC28u, 0x19EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC30u;
label_19ec30:
    // 0x19ec30: 0x938580c0  lbu         $a1, -0x7F40($gp)
    ctx->pc = 0x19ec30u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x19ec34: 0xa38580c4  sb          $a1, -0x7F3C($gp)
    ctx->pc = 0x19ec34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934724), (uint8_t)GPR_U32(ctx, 5));
label_19ec38:
    // 0x19ec38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ec3c: 0xc0ce824  jal         func_33A090
    ctx->pc = 0x19EC3Cu;
    SET_GPR_U32(ctx, 31, 0x19EC44u);
    ctx->pc = 0x33A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A090u, 0x19EC3Cu, 0x19EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC44u;
label_19ec44:
    // 0x19ec44: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19ec44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ec48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19ec48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ec4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19ec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ec50: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19ec50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ec54: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19EC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19EC5Cu;
}
