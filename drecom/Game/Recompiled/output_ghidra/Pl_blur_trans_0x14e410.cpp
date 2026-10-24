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

// Function: Pl_blur_trans
// Address: 0x14e410 - 0x14e8a4
void Pl_blur_trans_0x14e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_blur_trans_0x14e410");
#endif

    switch (ctx->pc) {
        case 0x14e454u: goto label_14e454;
        case 0x14e4ecu: goto label_14e4ec;
        case 0x14e530u: goto label_14e530;
        case 0x14e53cu: goto label_14e53c;
        case 0x14e568u: goto label_14e568;
        case 0x14e5d8u: goto label_14e5d8;
        case 0x14e648u: goto label_14e648;
        case 0x14e6c0u: goto label_14e6c0;
        case 0x14e6fcu: goto label_14e6fc;
        case 0x14e754u: goto label_14e754;
        case 0x14e7c4u: goto label_14e7c4;
        case 0x14e83cu: goto label_14e83c;
        case 0x14e878u: goto label_14e878;
        case 0x14e888u: goto label_14e888;
        default: break;
    }

    ctx->pc = 0x14e410u;

    // 0x14e410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14e414: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x14e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x14e418: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14e418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14e41c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14e420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14e424: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x14e424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x14e428: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x14e428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14e42c: 0x24519240  addiu       $s1, $v0, -0x6DC0
    ctx->pc = 0x14e42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939200));
    // 0x14e430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e434: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e434u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e438: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e43c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14e43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14e440: 0x8c52023c  lw          $s2, 0x23C($v0)
    ctx->pc = 0x14e440u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x14e444: 0x2624021c  addiu       $a0, $s1, 0x21C
    ctx->pc = 0x14e444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    // 0x14e448: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x14e448u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14e44c: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x14E44Cu;
    SET_GPR_U32(ctx, 31, 0x14E454u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x14E44Cu, 0x14E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E454u;
label_14e454:
    // 0x14e454: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e458: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14e458u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14e45c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e464: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E464u;
    {
        const bool branch_taken_0x14e464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e464) {
            ctx->pc = 0x14E480u;
            goto label_14e480;
        }
    }
    ctx->pc = 0x14E46Cu;
    // 0x14e46c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e470: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e474: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e478: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x14E478u;
    {
        const bool branch_taken_0x14e478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e478) {
            ctx->pc = 0x14E530u;
            goto label_14e530;
        }
    }
    ctx->pc = 0x14E480u;
label_14e480:
    // 0x14e480: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e484: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x14e484u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e488: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x14e488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x14e48c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e490: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14E490u;
    {
        const bool branch_taken_0x14e490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e490) {
            ctx->pc = 0x14E4B0u;
            goto label_14e4b0;
        }
    }
    ctx->pc = 0x14E498u;
    // 0x14e498: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e49c: 0x904213a7  lbu         $v0, 0x13A7($v0)
    ctx->pc = 0x14e49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5031)));
    // 0x14e4a0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14e4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14e4a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x14e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14e4a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14E4A8u;
    {
        const bool branch_taken_0x14e4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14e4a8) {
            ctx->pc = 0x14E4C4u;
            goto label_14e4c4;
        }
    }
    ctx->pc = 0x14E4B0u;
label_14e4b0:
    // 0x14e4b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e4b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e4b8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e4bc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14E4BCu;
    {
        const bool branch_taken_0x14e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e4bc) {
            ctx->pc = 0x14E530u;
            goto label_14e530;
        }
    }
    ctx->pc = 0x14E4C4u;
label_14e4c4:
    // 0x14e4c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e4c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e4c8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e4cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14e4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e4d0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x14e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x14e4d4: 0x8c500244  lw          $s0, 0x244($v0)
    ctx->pc = 0x14e4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x14e4d8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e4dc: 0x2624021c  addiu       $a0, $s1, 0x21C
    ctx->pc = 0x14e4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    // 0x14e4e0: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14e4e4: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x14E4E4u;
    SET_GPR_U32(ctx, 31, 0x14E4ECu);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x14E4E4u, 0x14E4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4ECu;
label_14e4ec:
    // 0x14e4ec: 0x8e300244  lw          $s0, 0x244($s1)
    ctx->pc = 0x14e4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x14e4f0: 0x8e240244  lw          $a0, 0x244($s1)
    ctx->pc = 0x14e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x14e4f4: 0x8e250248  lw          $a1, 0x248($s1)
    ctx->pc = 0x14e4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 584)));
    // 0x14e4f8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e4fc: 0x844215f0  lh          $v0, 0x15F0($v0)
    ctx->pc = 0x14e4fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5616)));
    // 0x14e500: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x14e500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x14e504: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x14e504u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x14e508: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x14e508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x14e50c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e510: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e514: 0x24461600  addiu       $a2, $v0, 0x1600
    ctx->pc = 0x14e514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x14e518: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x14e518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e51c: 0x2408001f  addiu       $t0, $zero, 0x1F
    ctx->pc = 0x14e51cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x14e520: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e524: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x14e524u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e528: 0xc0750ec  jal         func_1D43B0
    ctx->pc = 0x14E528u;
    SET_GPR_U32(ctx, 31, 0x14E530u);
    ctx->pc = 0x1D43B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D43B0u, 0x14E528u, 0x14E530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E530u;
label_14e530:
    // 0x14e530: 0x2624021c  addiu       $a0, $s1, 0x21C
    ctx->pc = 0x14e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 540));
    // 0x14e534: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x14E534u;
    SET_GPR_U32(ctx, 31, 0x14E53Cu);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x14E534u, 0x14E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E53Cu;
label_14e53c:
    // 0x14e53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e540: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e540u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e544: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e548: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e550: 0x8c52023c  lw          $s2, 0x23C($v0)
    ctx->pc = 0x14e550u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 572)));
    // 0x14e554: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e558: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e55c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x14e55cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x14e560: 0xc06b06c  jal         func_1AC1B0
    ctx->pc = 0x14E560u;
    SET_GPR_U32(ctx, 31, 0x14E568u);
    ctx->pc = 0x1AC1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1B0u, 0x14E560u, 0x14E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E568u;
label_14e568:
    // 0x14e568: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e56c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x14e56cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14e570: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14e570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14e574: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14e578: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x14E578u;
    {
        const bool branch_taken_0x14e578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14e578) {
            ctx->pc = 0x14E878u;
            goto label_14e878;
        }
    }
    ctx->pc = 0x14E580u;
    // 0x14e580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e584: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e584u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e588: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14e588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14e58c: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x14E58Cu;
    {
        const bool branch_taken_0x14e58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e58c) {
            ctx->pc = 0x14E6FCu;
            goto label_14e6fc;
        }
    }
    ctx->pc = 0x14E594u;
    // 0x14e594: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e598: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14e598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14e59c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e5a0: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x14E5A0u;
    {
        const bool branch_taken_0x14e5a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e5a0) {
            ctx->pc = 0x14E6FCu;
            goto label_14e6fc;
        }
    }
    ctx->pc = 0x14E5A8u;
    // 0x14e5a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e5ac: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e5b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e5b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e5b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e5bc: 0x8c500254  lw          $s0, 0x254($v0)
    ctx->pc = 0x14e5bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14e5c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e5c4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14e5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e5c8: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e5cc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e5ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14e5d0: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x14E5D0u;
    SET_GPR_U32(ctx, 31, 0x14E5D8u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x14E5D0u, 0x14E5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E5D8u;
label_14e5d8:
    // 0x14e5d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e5dc: 0x8c500254  lw          $s0, 0x254($v0)
    ctx->pc = 0x14e5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14e5e0: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x14e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
    // 0x14e5e4: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e5e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e5e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e5ec: 0x0  nop
    ctx->pc = 0x14e5ecu;
    // NOP
    // 0x14e5f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14e5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14e5f4: 0x3c024203  lui         $v0, 0x4203
    ctx->pc = 0x14e5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16899 << 16));
    // 0x14e5f8: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e600: 0x0  nop
    ctx->pc = 0x14e600u;
    // NOP
    // 0x14e604: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x14e604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14e608: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14e60c: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e614: 0x0  nop
    ctx->pc = 0x14e614u;
    // NOP
    // 0x14e618: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x14e618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14e61c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e624: 0x0  nop
    ctx->pc = 0x14e624u;
    // NOP
    // 0x14e628: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e62c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e630: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e634: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14e634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e638: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e63c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14e63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e640: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E640u;
    SET_GPR_U32(ctx, 31, 0x14E648u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E648u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E648u) { return; }
    ctx->pc = 0x14E648u;
label_14e648:
    // 0x14e648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e64c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e64cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e650: 0x0  nop
    ctx->pc = 0x14e650u;
    // NOP
    // 0x14e654: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e658: 0x3c02413b  lui         $v0, 0x413B
    ctx->pc = 0x14e658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16699 << 16));
    // 0x14e65c: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e664: 0x0  nop
    ctx->pc = 0x14e664u;
    // NOP
    // 0x14e668: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14e668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14e66c: 0x3c02422b  lui         $v0, 0x422B
    ctx->pc = 0x14e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16939 << 16));
    // 0x14e670: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e674: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e674u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e678: 0x0  nop
    ctx->pc = 0x14e678u;
    // NOP
    // 0x14e67c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x14e67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14e680: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x14e680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x14e684: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e68c: 0x0  nop
    ctx->pc = 0x14e68cu;
    // NOP
    // 0x14e690: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14e690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14e694: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e69c: 0x0  nop
    ctx->pc = 0x14e69cu;
    // NOP
    // 0x14e6a0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e6a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e6a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e6a8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e6ac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14e6acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6b0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e6b4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E6B8u;
    SET_GPR_U32(ctx, 31, 0x14E6C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E6C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E6C0u) { return; }
    ctx->pc = 0x14E6C0u;
label_14e6c0:
    // 0x14e6c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e6c8: 0x0  nop
    ctx->pc = 0x14e6c8u;
    // NOP
    // 0x14e6cc: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e6d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e6d4: 0x8c440254  lw          $a0, 0x254($v0)
    ctx->pc = 0x14e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 596)));
    // 0x14e6d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e6dc: 0x8c450258  lw          $a1, 0x258($v0)
    ctx->pc = 0x14e6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x14e6e0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e6e4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x14e6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e6e8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x14e6e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e6ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e6ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e6f0: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x14e6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e6f4: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x14E6F4u;
    SET_GPR_U32(ctx, 31, 0x14E6FCu);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x14E6F4u, 0x14E6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E6FCu;
label_14e6fc:
    // 0x14e6fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e700: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14e700u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x14e704: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x14e708: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x14E708u;
    {
        const bool branch_taken_0x14e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e708) {
            ctx->pc = 0x14E878u;
            goto label_14e878;
        }
    }
    ctx->pc = 0x14E710u;
    // 0x14e710: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e714: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x14e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14e718: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x14e718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x14e71c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x14E71Cu;
    {
        const bool branch_taken_0x14e71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14e71c) {
            ctx->pc = 0x14E878u;
            goto label_14e878;
        }
    }
    ctx->pc = 0x14E724u;
    // 0x14e724: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e728: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x14e728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e72c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14e730: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14e738: 0x8c50024c  lw          $s0, 0x24C($v0)
    ctx->pc = 0x14e738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14e73c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e740: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x14e740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14e744: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e748: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x14e748u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x14e74c: 0xc06b07c  jal         func_1AC1F0
    ctx->pc = 0x14E74Cu;
    SET_GPR_U32(ctx, 31, 0x14E754u);
    ctx->pc = 0x1AC1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC1F0u, 0x14E74Cu, 0x14E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E754u;
label_14e754:
    // 0x14e754: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e758: 0x8c50024c  lw          $s0, 0x24C($v0)
    ctx->pc = 0x14e758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14e75c: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x14e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
    // 0x14e760: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e768: 0x0  nop
    ctx->pc = 0x14e768u;
    // NOP
    // 0x14e76c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x14e76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14e770: 0x3c024203  lui         $v0, 0x4203
    ctx->pc = 0x14e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16899 << 16));
    // 0x14e774: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e77c: 0x0  nop
    ctx->pc = 0x14e77cu;
    // NOP
    // 0x14e780: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x14e780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x14e784: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x14e788: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e790: 0x0  nop
    ctx->pc = 0x14e790u;
    // NOP
    // 0x14e794: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x14e794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x14e798: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7a0: 0x0  nop
    ctx->pc = 0x14e7a0u;
    // NOP
    // 0x14e7a4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e7a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e7ac: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e7b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x14e7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e7b4: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e7b8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x14e7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e7bc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E7BCu;
    SET_GPR_U32(ctx, 31, 0x14E7C4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E7C4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E7C4u) { return; }
    ctx->pc = 0x14E7C4u;
label_14e7c4:
    // 0x14e7c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e7c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e7c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7cc: 0x0  nop
    ctx->pc = 0x14e7ccu;
    // NOP
    // 0x14e7d0: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x14e7d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x14e7d4: 0x3c02c13b  lui         $v0, 0xC13B
    ctx->pc = 0x14e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49467 << 16));
    // 0x14e7d8: 0x3442902e  ori         $v0, $v0, 0x902E
    ctx->pc = 0x14e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36910);
    // 0x14e7dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e7dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7e0: 0x0  nop
    ctx->pc = 0x14e7e0u;
    // NOP
    // 0x14e7e4: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x14e7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14e7e8: 0x3c02422b  lui         $v0, 0x422B
    ctx->pc = 0x14e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16939 << 16));
    // 0x14e7ec: 0x344292a3  ori         $v0, $v0, 0x92A3
    ctx->pc = 0x14e7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37539);
    // 0x14e7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e7f4: 0x0  nop
    ctx->pc = 0x14e7f4u;
    // NOP
    // 0x14e7f8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x14e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x14e7fc: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x14e800: 0x344207ae  ori         $v0, $v0, 0x7AE
    ctx->pc = 0x14e800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1966);
    // 0x14e804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e808: 0x0  nop
    ctx->pc = 0x14e808u;
    // NOP
    // 0x14e80c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x14e80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x14e810: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e818: 0x0  nop
    ctx->pc = 0x14e818u;
    // NOP
    // 0x14e81c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e820: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e824: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x14e824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x14e828: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x14e828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e82c: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x14e82cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x14e830: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e834: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x14E834u;
    SET_GPR_U32(ctx, 31, 0x14E83Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x14E83Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x14E83Cu) { return; }
    ctx->pc = 0x14E83Cu;
label_14e83c:
    // 0x14e83c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x14e840: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14e840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14e844: 0x0  nop
    ctx->pc = 0x14e844u;
    // NOP
    // 0x14e848: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x14e848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x14e84c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e850: 0x8c44024c  lw          $a0, 0x24C($v0)
    ctx->pc = 0x14e850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x14e854: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e858: 0x8c450250  lw          $a1, 0x250($v0)
    ctx->pc = 0x14e858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x14e85c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14e860: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x14e860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14e864: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x14e864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x14e868: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14e868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14e86c: 0x8c290140  lw          $t1, 0x140($at)
    ctx->pc = 0x14e86cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14e870: 0xc075378  jal         func_1D4DE0
    ctx->pc = 0x14E870u;
    SET_GPR_U32(ctx, 31, 0x14E878u);
    ctx->pc = 0x1D4DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4DE0u, 0x14E870u, 0x14E878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E878u;
label_14e878:
    // 0x14e878: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x14e878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x14e87c: 0x2444021c  addiu       $a0, $v0, 0x21C
    ctx->pc = 0x14e87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 540));
    // 0x14e880: 0xc06b0d4  jal         func_1AC350
    ctx->pc = 0x14E880u;
    SET_GPR_U32(ctx, 31, 0x14E888u);
    ctx->pc = 0x1AC350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC350u, 0x14E880u, 0x14E888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E888u;
label_14e888:
    // 0x14e888: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x14e888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14e88c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14e88cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e894: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x14e894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e898: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x14e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14e89c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E8A4u;
}
