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

// Function: Md_draw_entry_db
// Address: 0x2577c0 - 0x257aec
void Md_draw_entry_db_0x2577c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_draw_entry_db_0x2577c0");
#endif

    switch (ctx->pc) {
        case 0x2578b4u: goto label_2578b4;
        case 0x257900u: goto label_257900;
        case 0x257924u: goto label_257924;
        case 0x257980u: goto label_257980;
        case 0x257a04u: goto label_257a04;
        case 0x257a84u: goto label_257a84;
        default: break;
    }

    ctx->pc = 0x2577c0u;

    // 0x2577c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2577c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2577c4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x2577c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x2577c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2577c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2577cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2577ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2577d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2577d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2577d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2577d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2577d8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2577d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x2577dc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2577dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2577e0: 0x8c730014  lw          $s3, 0x14($v1)
    ctx->pc = 0x2577e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2577e4: 0x138943  sra         $s1, $s3, 5
    ctx->pc = 0x2577e4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 19), 5));
    // 0x2577e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2577e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2577ec: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x2577ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2577f0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2577f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2577f4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2577f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x2577f8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2577F8u;
    {
        const bool branch_taken_0x2577f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2577f8) {
            ctx->pc = 0x25780Cu;
            goto label_25780c;
        }
    }
    ctx->pc = 0x257800u;
    // 0x257800: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x257800u;
    {
        const bool branch_taken_0x257800 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x257800) {
            ctx->pc = 0x25780Cu;
            goto label_25780c;
        }
    }
    ctx->pc = 0x257808u;
    // 0x257808: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257808u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_25780c:
    // 0x25780c: 0x2a21fff7  slti        $at, $s1, -0x9
    ctx->pc = 0x25780cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x257810: 0x1420009c  bnez        $at, . + 4 + (0x9C << 2)
    ctx->pc = 0x257810u;
    {
        const bool branch_taken_0x257810 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x257810) {
            ctx->pc = 0x257A84u;
            goto label_257a84;
        }
    }
    ctx->pc = 0x257818u;
    // 0x257818: 0x6210002  bgez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x257818u;
    {
        const bool branch_taken_0x257818 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x257818) {
            ctx->pc = 0x257824u;
            goto label_257824;
        }
    }
    ctx->pc = 0x257820u;
    // 0x257820: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x257820u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_257824:
    // 0x257824: 0x2a2100ff  slti        $at, $s1, 0xFF
    ctx->pc = 0x257824u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x257828: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x257828u;
    {
        const bool branch_taken_0x257828 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x257828) {
            ctx->pc = 0x257834u;
            goto label_257834;
        }
    }
    ctx->pc = 0x257830u;
    // 0x257830: 0x241100ff  addiu       $s1, $zero, 0xFF
    ctx->pc = 0x257830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_257834:
    // 0x257834: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257838: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257838u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x25783c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257844: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257848: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25784c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257850: 0x8c42021c  lw          $v0, 0x21C($v0)
    ctx->pc = 0x257850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x257854: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x257854u;
    {
        const bool branch_taken_0x257854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257854) {
            ctx->pc = 0x2578B4u;
            goto label_2578b4;
        }
    }
    ctx->pc = 0x25785Cu;
    // 0x25785c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257860: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257860u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257864: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257864u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25786c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25786cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257870: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257874: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x257874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257878: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25787c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x25787cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257880: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257888: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25788c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x25788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257890: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x257890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257898: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x257898u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x25789c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x25789cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2578a0: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x2578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x2578a4: 0x8c65021c  lw          $a1, 0x21C($v1)
    ctx->pc = 0x2578a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
    // 0x2578a8: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x2578a8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2578ac: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x2578ACu;
    SET_GPR_U32(ctx, 31, 0x2578B4u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x2578ACu, 0x2578B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2578B4u;
label_2578b4:
    // 0x2578b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2578b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2578b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2578b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2578bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2578bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2578c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2578c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2578c4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2578c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2578c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2578c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2578cc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2578ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2578d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2578d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2578d4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2578d8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2578d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2578dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2578dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2578e0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2578e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2578e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2578e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2578e8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2578e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2578ec: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x2578ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2578f0: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x2578f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2578f4: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x2578f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2578f8: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x2578F8u;
    SET_GPR_U32(ctx, 31, 0x257900u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x2578F8u, 0x257900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257900u;
label_257900:
    // 0x257900: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257904: 0x90631218  lbu         $v1, 0x1218($v1)
    ctx->pc = 0x257904u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4632)));
    // 0x257908: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x257908u;
    {
        const bool branch_taken_0x257908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257908) {
            ctx->pc = 0x2579A0u;
            goto label_2579a0;
        }
    }
    ctx->pc = 0x257910u;
    // 0x257910: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257914: 0x8c701214  lw          $s0, 0x1214($v1)
    ctx->pc = 0x257914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4628)));
    // 0x257918: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x257918u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25791c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x25791Cu;
    {
        const bool branch_taken_0x25791c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25791c) {
            ctx->pc = 0x257988u;
            goto label_257988;
        }
    }
    ctx->pc = 0x257924u;
label_257924:
    // 0x257924: 0x8e030b18  lw          $v1, 0xB18($s0)
    ctx->pc = 0x257924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2840)));
    // 0x257928: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x257928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x25792c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x25792Cu;
    {
        const bool branch_taken_0x25792c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25792c) {
            ctx->pc = 0x257980u;
            goto label_257980;
        }
    }
    ctx->pc = 0x257934u;
    // 0x257934: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257938: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x257938u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x25793c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25793cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257944: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x257944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x257948: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x25794c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x25794cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x257950: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257954: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x257954u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257958: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x257958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25795c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x25795cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257960: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x257960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x257964: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x257964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x257968: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x257968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25796c: 0x8c84036c  lw          $a0, 0x36C($a0)
    ctx->pc = 0x25796cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x257970: 0x8c65036c  lw          $a1, 0x36C($v1)
    ctx->pc = 0x257970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
    // 0x257974: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x257974u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x257978: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x257978u;
    SET_GPR_U32(ctx, 31, 0x257980u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x257978u, 0x257980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257980u;
label_257980:
    // 0x257980: 0x26100b30  addiu       $s0, $s0, 0xB30
    ctx->pc = 0x257980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2864));
    // 0x257984: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x257984u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_257988:
    // 0x257988: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x25798c: 0x90631218  lbu         $v1, 0x1218($v1)
    ctx->pc = 0x25798cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4632)));
    // 0x257990: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257994: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x257994u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x257998: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x257998u;
    {
        const bool branch_taken_0x257998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x257998) {
            ctx->pc = 0x257924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_257924;
        }
    }
    ctx->pc = 0x2579A0u;
label_2579a0:
    // 0x2579a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579a4: 0x90230e04  lbu         $v1, 0xE04($at)
    ctx->pc = 0x2579a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x2579a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2579a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2579ac: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2579acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2579b0: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2579B0u;
    {
        const bool branch_taken_0x2579b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2579b0) {
            ctx->pc = 0x257A04u;
            goto label_257a04;
        }
    }
    ctx->pc = 0x2579B8u;
    // 0x2579b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2579bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2579c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2579c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2579c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2579c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2579c8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2579c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2579cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579d0: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x2579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2579d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2579d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2579d8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2579d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2579dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2579dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2579e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2579e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2579e4: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x2579e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x2579e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2579e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2579ec: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x2579ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2579f0: 0x8c840074  lw          $a0, 0x74($a0)
    ctx->pc = 0x2579f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x2579f4: 0x8c65007c  lw          $a1, 0x7C($v1)
    ctx->pc = 0x2579f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x2579f8: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x2579f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2579fc: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x2579FCu;
    SET_GPR_U32(ctx, 31, 0x257A04u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x2579FCu, 0x257A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A04u;
label_257a04:
    // 0x257a04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a08: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x257a08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a0c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x257a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x257a10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257a14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x257a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257a18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257a20: 0x8c630204  lw          $v1, 0x204($v1)
    ctx->pc = 0x257a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x257a24: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x257A24u;
    {
        const bool branch_taken_0x257a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257a24) {
            ctx->pc = 0x257A84u;
            goto label_257a84;
        }
    }
    ctx->pc = 0x257A2Cu;
    // 0x257a2c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a30: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257a30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257a38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257a40: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a44: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x257a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a4c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a50: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x257a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x257a54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x257a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a58: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x257a58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x257a5c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x257a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a60: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x257a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x257a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a68: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x257a68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a6c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x257a6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x257a70: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x257a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x257a74: 0x8c650204  lw          $a1, 0x204($v1)
    ctx->pc = 0x257a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
    // 0x257a78: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x257a78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x257a7c: 0xc06ae00  jal         func_1AB800
    ctx->pc = 0x257A7Cu;
    SET_GPR_U32(ctx, 31, 0x257A84u);
    ctx->pc = 0x1AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB800u, 0x257A7Cu, 0x257A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A84u;
label_257a84:
    // 0x257a84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257a88: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257a8c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x257a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x257a90: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x257a90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257a94: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257a98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257a9c: 0x8c640064  lw          $a0, 0x64($v1)
    ctx->pc = 0x257a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x257aa0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257aa4: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x257aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x257aa8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x257aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x257aac: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x257aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x257ab0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x257ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x257ab4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x257ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257ab8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257abc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x257abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x257ac0: 0x8c640138  lw          $a0, 0x138($v1)
    ctx->pc = 0x257ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x257ac4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x257ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x257ac8: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x257ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
    // 0x257acc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x257accu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x257ad0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x257ad0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x257ad4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x257ad4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257ad8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257adc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ae0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x257ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x257AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257AECu;
}
