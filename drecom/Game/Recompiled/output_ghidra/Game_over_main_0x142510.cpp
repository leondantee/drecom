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

// Function: Game_over_main
// Address: 0x142510 - 0x142a2c
void Game_over_main_0x142510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Game_over_main_0x142510");
#endif

    switch (ctx->pc) {
        case 0x142540u: goto label_142540;
        case 0x1425b0u: goto label_1425b0;
        case 0x1425bcu: goto label_1425bc;
        case 0x1425d4u: goto label_1425d4;
        case 0x1425f4u: goto label_1425f4;
        case 0x1426a4u: goto label_1426a4;
        case 0x1426bcu: goto label_1426bc;
        case 0x1426e4u: goto label_1426e4;
        case 0x14270cu: goto label_14270c;
        case 0x142758u: goto label_142758;
        case 0x14278cu: goto label_14278c;
        case 0x1427b4u: goto label_1427b4;
        case 0x1427d4u: goto label_1427d4;
        case 0x14280cu: goto label_14280c;
        case 0x142824u: goto label_142824;
        case 0x142830u: goto label_142830;
        case 0x142848u: goto label_142848;
        case 0x1428f4u: goto label_1428f4;
        case 0x142930u: goto label_142930;
        case 0x142974u: goto label_142974;
        case 0x142a14u: goto label_142a14;
        case 0x142a24u: goto label_142a24;
        default: break;
    }

    ctx->pc = 0x142510u;

    // 0x142510: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x142510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x142514: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x142514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x142518: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x142518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x14251c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x14251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x142520: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x142520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x142524: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x142524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x142528: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x142528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14252c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x142530: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x142530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x142534: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x142534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x142538: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x14253c: 0x2452fe10  addiu       $s2, $v0, -0x1F0
    ctx->pc = 0x14253cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
label_142540:
    // 0x142540: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142544: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x142544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x142548: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x142548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14254c: 0x1062009e  beq         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x14254Cu;
    {
        const bool branch_taken_0x14254c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14254c) {
            ctx->pc = 0x1427C8u;
            goto label_1427c8;
        }
    }
    ctx->pc = 0x142554u;
    // 0x142554: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x142554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x142558: 0x10620071  beq         $v1, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x142558u;
    {
        const bool branch_taken_0x142558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142558) {
            ctx->pc = 0x142720u;
            goto label_142720;
        }
    }
    ctx->pc = 0x142560u;
    // 0x142560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x142560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142564: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x142564u;
    {
        const bool branch_taken_0x142564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142564) {
            ctx->pc = 0x142694u;
            goto label_142694;
        }
    }
    ctx->pc = 0x14256Cu;
    // 0x14256c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142570: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x142570u;
    {
        const bool branch_taken_0x142570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x142570) {
            ctx->pc = 0x1425E8u;
            goto label_1425e8;
        }
    }
    ctx->pc = 0x142578u;
    // 0x142578: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142578u;
    {
        const bool branch_taken_0x142578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x142578) {
            ctx->pc = 0x142588u;
            goto label_142588;
        }
    }
    ctx->pc = 0x142580u;
    // 0x142580: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x142580u;
    {
        const bool branch_taken_0x142580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142580) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x142588u;
label_142588:
    // 0x142588: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142588u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14258c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14258cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142590: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142594: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x142594u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142598: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x142598u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x14259c: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x14259cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1425a0: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x1425a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1425a4: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1425a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1425a8: 0xc059190  jal         func_164640
    ctx->pc = 0x1425A8u;
    SET_GPR_U32(ctx, 31, 0x1425B0u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1425A8u, 0x1425B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425B0u;
label_1425b0:
    // 0x1425b0: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x1425b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1425b4: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x1425B4u;
    SET_GPR_U32(ctx, 31, 0x1425BCu);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x1425B4u, 0x1425BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425BCu;
label_1425bc:
    // 0x1425bc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1425bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425c0: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1425c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1425c4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1425c4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1425c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1425cc: 0xc067cfc  jal         func_19F3F0
    ctx->pc = 0x1425CCu;
    SET_GPR_U32(ctx, 31, 0x1425D4u);
    ctx->pc = 0x19F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3F0u, 0x1425CCu, 0x1425D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425D4u;
label_1425d4:
    // 0x1425d4: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x1425d4u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425d8: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1425d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1425dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1425dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1425e0: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x1425e0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1425e4: 0x0  nop
    ctx->pc = 0x1425e4u;
    // NOP
label_1425e8:
    // 0x1425e8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1425e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1425ec: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1425ECu;
    SET_GPR_U32(ctx, 31, 0x1425F4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1425ECu, 0x1425F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1425F4u;
label_1425f4:
    // 0x1425f4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1425f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1425f8: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x1425F8u;
    {
        const bool branch_taken_0x1425f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1425f8) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x142600u;
    // 0x142600: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142604: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x142604u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142608: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x142608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x14260c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14260cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x142610: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x142610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142614: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142618: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142618u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14261c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142620: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142620u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142624: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x142624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x142628: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14262c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x14262cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142630: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142634: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142634u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142638: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x142638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14263c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14263cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142640: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142640u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142644: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142648: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142648u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x14264c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x14264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x142650: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142654: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142654u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142658: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14265c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x14265cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142660: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x142660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x142664: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142668: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142668u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14266c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14266cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142670: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x142670u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142674: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142678: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14267c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x14267cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142680: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142684: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142688: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142688u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x14268c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x14268Cu;
    {
        const bool branch_taken_0x14268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14268c) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x142694u;
label_142694:
    // 0x142694: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142694u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142698: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x142698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x14269c: 0xc067de8  jal         func_19F7A0
    ctx->pc = 0x14269Cu;
    SET_GPR_U32(ctx, 31, 0x1426A4u);
    ctx->pc = 0x19F7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F7A0u, 0x14269Cu, 0x1426A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426A4u;
label_1426a4:
    // 0x1426a4: 0x3c1401f0  lui         $s4, 0x1F0
    ctx->pc = 0x1426a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)496 << 16));
    // 0x1426a8: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x1426a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1426ac: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x1426acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1426b0: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1426b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1426b4: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1426B4u;
    SET_GPR_U32(ctx, 31, 0x1426BCu);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1426B4u, 0x1426BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426BCu;
label_1426bc:
    // 0x1426bc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x1426bcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1426c0: 0x2979821  addu        $s3, $s4, $s7
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x1426c4: 0x2663000f  addiu       $v1, $s3, 0xF
    ctx->pc = 0x1426c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 15));
    // 0x1426c8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1426c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1426cc: 0x629824  and         $s3, $v1, $v0
    ctx->pc = 0x1426ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1426d0: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1426d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1426d4: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x1426d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x1426d8: 0x24060081  addiu       $a2, $zero, 0x81
    ctx->pc = 0x1426d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x1426dc: 0xc0764e0  jal         func_1D9380
    ctx->pc = 0x1426DCu;
    SET_GPR_U32(ctx, 31, 0x1426E4u);
    ctx->pc = 0x1D9380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9380u, 0x1426DCu, 0x1426E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1426E4u;
label_1426e4:
    // 0x1426e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1426e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1426e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1426e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1426ec: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1426ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1426f0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1426f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1426f4: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1426f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1426f8: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x1426f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1426fc: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1426fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x142700: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x142700u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x142704: 0xc059190  jal         func_164640
    ctx->pc = 0x142704u;
    SET_GPR_U32(ctx, 31, 0x14270Cu);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x142704u, 0x14270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14270Cu;
label_14270c:
    // 0x14270c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142710: 0x24160924  addiu       $s6, $zero, 0x924
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2340));
    // 0x142714: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x142718: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x142718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14271c: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x14271cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
label_142720:
    // 0x142720: 0x72c01628  paddub      $v0, $s6, $zero
    ctx->pc = 0x142720u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x142724: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x142724u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x142728: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x142728u;
    {
        const bool branch_taken_0x142728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142728) {
            ctx->pc = 0x142768u;
            goto label_142768;
        }
    }
    ctx->pc = 0x142730u;
    // 0x142730: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x142730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142738: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14273c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14273cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142740: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x142740u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x142744: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x142744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x142748: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x142748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14274c: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x14274cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x142750: 0xc059190  jal         func_164640
    ctx->pc = 0x142750u;
    SET_GPR_U32(ctx, 31, 0x142758u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x142750u, 0x142758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142758u;
label_142758:
    // 0x142758: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x142758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x14275c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x142760: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x142760u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x142764: 0x0  nop
    ctx->pc = 0x142764u;
    // NOP
label_142768:
    // 0x142768: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14276c: 0x94220084  lhu         $v0, 0x84($at)
    ctx->pc = 0x14276cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5D0084u));
    // 0x142770: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x142770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x142774: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x142774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x142778: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x142778u;
    {
        const bool branch_taken_0x142778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x142778) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x142780u;
    // 0x142780: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x142780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x142784: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x142784u;
    SET_GPR_U32(ctx, 31, 0x14278Cu);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x142784u, 0x14278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14278Cu;
label_14278c:
    // 0x14278c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14278cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142790: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x142790u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x142794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x142798: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14279c: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x14279cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x1427a0: 0x3c0280ff  lui         $v0, 0x80FF
    ctx->pc = 0x1427a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33023 << 16));
    // 0x1427a4: 0x3449ffff  ori         $t1, $v0, 0xFFFF
    ctx->pc = 0x1427a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1427a8: 0x240a0078  addiu       $t2, $zero, 0x78
    ctx->pc = 0x1427a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1427ac: 0xc059190  jal         func_164640
    ctx->pc = 0x1427ACu;
    SET_GPR_U32(ctx, 31, 0x1427B4u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x1427ACu, 0x1427B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427B4u;
label_1427b4:
    // 0x1427b4: 0x92420008  lbu         $v0, 0x8($s2)
    ctx->pc = 0x1427b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1427b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1427b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1427bc: 0xa2420008  sb          $v0, 0x8($s2)
    ctx->pc = 0x1427bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1427c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1427C0u;
    {
        const bool branch_taken_0x1427c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427c0) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x1427C8u;
label_1427c8:
    // 0x1427c8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1427c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1427cc: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x1427CCu;
    SET_GPR_U32(ctx, 31, 0x1427D4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x1427CCu, 0x1427D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1427D4u;
label_1427d4:
    // 0x1427d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1427d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1427d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1427D8u;
    {
        const bool branch_taken_0x1427d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427d8) {
            ctx->pc = 0x1427F8u;
            goto label_1427f8;
        }
    }
    ctx->pc = 0x1427E0u;
    // 0x1427e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1427e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1427e4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1427e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1427e8: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1427e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1427ec: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1427ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1427f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1427f4: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x1427f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
label_1427f8:
    // 0x1427f8: 0x12a00087  beqz        $s5, . + 4 + (0x87 << 2)
    ctx->pc = 0x1427F8u;
    {
        const bool branch_taken_0x1427f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1427f8) {
            ctx->pc = 0x142A18u;
            goto label_142a18;
        }
    }
    ctx->pc = 0x142800u;
    // 0x142800: 0x2404008e  addiu       $a0, $zero, 0x8E
    ctx->pc = 0x142800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x142804: 0xc05e990  jal         func_17A640
    ctx->pc = 0x142804u;
    SET_GPR_U32(ctx, 31, 0x14280Cu);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142804u, 0x14280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14280Cu;
label_14280c:
    // 0x14280c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14280cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x142810: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x142810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x142814: 0x24063600  addiu       $a2, $zero, 0x3600
    ctx->pc = 0x142814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13824));
    // 0x142818: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x142818u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x14281c: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x14281Cu;
    SET_GPR_U32(ctx, 31, 0x142824u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x14281Cu, 0x142824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142824u;
label_142824:
    // 0x142824: 0x2404008f  addiu       $a0, $zero, 0x8F
    ctx->pc = 0x142824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x142828: 0xc05e990  jal         func_17A640
    ctx->pc = 0x142828u;
    SET_GPR_U32(ctx, 31, 0x142830u);
    ctx->pc = 0x17A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A640u, 0x142828u, 0x142830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142830u;
label_142830:
    // 0x142830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142834: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x142834u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x142838: 0x24063b00  addiu       $a2, $zero, 0x3B00
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15104));
    // 0x14283c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x14283cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x142840: 0xc05e2e0  jal         func_178B80
    ctx->pc = 0x142840u;
    SET_GPR_U32(ctx, 31, 0x142848u);
    ctx->pc = 0x178B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178B80u, 0x142840u, 0x142848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142848u;
label_142848:
    // 0x142848: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x14284c: 0x2450913c  addiu       $s0, $v0, -0x6EC4
    ctx->pc = 0x14284cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938940));
    // 0x142850: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142854: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E913Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E913Cu, _value); } while (0);
    // 0x142858: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x142858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x14285c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x14285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x142860: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x142860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9140u, _value); } while (0);
    // 0x142864: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x142864u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9148u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9148u, _value); } while (0);
    // 0x142868: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x142868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x14286c: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x14286cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x142870: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x142870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x142874: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142874u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E914Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E914Cu, _value); } while (0);
    // 0x142878: 0x3c027d30  lui         $v0, 0x7D30
    ctx->pc = 0x142878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32048 << 16));
    // 0x14287c: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x14287cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x142880: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x142884: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142884u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9154u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9154u, _value); } while (0);
    // 0x142888: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x142888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x14288c: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x14288cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x142890: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9158u, _value); } while (0);
    // 0x142894: 0x3c0282d0  lui         $v0, 0x82D0
    ctx->pc = 0x142894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33488 << 16));
    // 0x142898: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x142898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x14289c: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x14289cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1428a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1428a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9160u, _value); } while (0);
    // 0x1428a4: 0x3403fffe  ori         $v1, $zero, 0xFFFE
    ctx->pc = 0x1428a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x1428a8: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1428a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1428ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1428acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9164u, _value); } while (0);
    // 0x1428b0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1428b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1428b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9150u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9150u, _value); } while (0);
    // 0x1428b8: 0x3c020b40  lui         $v0, 0xB40
    ctx->pc = 0x1428b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2880 << 16));
    // 0x1428bc: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x1428bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1428c0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1428c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1428c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E915Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E915Cu, _value); } while (0);
    // 0x1428c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1428c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1428cc: 0x2442ccc8  addiu       $v0, $v0, -0x3338
    ctx->pc = 0x1428ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954184));
    // 0x1428d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1428d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9144u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9144u, _value); } while (0);
    // 0x1428d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1428d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9140u));
    // 0x1428d8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x1428d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x1428dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1428dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9140u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9140u, _value); } while (0);
    // 0x1428e0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1428e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1428e4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1428e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1428e8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1428e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1428ec: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1428ECu;
    SET_GPR_U32(ctx, 31, 0x1428F4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1428ECu, 0x1428F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1428F4u;
label_1428f4:
    // 0x1428f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1428f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1428f8: 0x24519100  addiu       $s1, $v0, -0x6F00
    ctx->pc = 0x1428f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938880));
    // 0x1428fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1428fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142900: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x142900u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9100u, _value); } while (0);
    // 0x142904: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x142904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x142908: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x142908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x14290c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x14290cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9104u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9104u, _value); } while (0);
    // 0x142910: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x142910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x142914: 0x3442001b  ori         $v0, $v0, 0x1B
    ctx->pc = 0x142914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27);
    // 0x142918: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x142918u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9108u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x3E9108u, _value); } while (0);
    // 0x14291c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x14291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142920: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142924: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x142924u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x142928: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x142928u;
    SET_GPR_U32(ctx, 31, 0x142930u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142928u, 0x142930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142930u;
label_142930:
    // 0x142930: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x142934: 0x245190f0  addiu       $s1, $v0, -0x6F10
    ctx->pc = 0x142934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938864));
    // 0x142938: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x14293c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x14293cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90F0u, _value); } while (0);
    // 0x142940: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x142944: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x142944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x142948: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x142948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E90F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E90F4u, _value); } while (0);
    // 0x14294c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x14294cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x142950: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x142950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x142954: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x142958: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x142958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14295c: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x14295cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x142960: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142964: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142968: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x142968u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x14296c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x14296Cu;
    SET_GPR_U32(ctx, 31, 0x142974u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x14296Cu, 0x142974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142974u;
label_142974:
    // 0x142974: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x142978: 0x24509110  addiu       $s0, $v0, -0x6EF0
    ctx->pc = 0x142978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938896));
    // 0x14297c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x14297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x142980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x142980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9110u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9110u, _value); } while (0);
    // 0x142984: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x142984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x142988: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x142988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x14298c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14298cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9114u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9114u, _value); } while (0);
    // 0x142990: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x142990u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E911Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E911Cu, _value); } while (0);
    // 0x142994: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x142994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x142998: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x142998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x14299c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x14299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1429a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9120u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9120u, _value); } while (0);
    // 0x1429a4: 0x3c027900  lui         $v0, 0x7900
    ctx->pc = 0x1429a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30976 << 16));
    // 0x1429a8: 0x34437000  ori         $v1, $v0, 0x7000
    ctx->pc = 0x1429a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
    // 0x1429ac: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1429acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1429b0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9128u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9128u, _value); } while (0);
    // 0x1429b4: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1429b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1429b8: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1429b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1429bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E912Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E912Cu, _value); } while (0);
    // 0x1429c0: 0x3c028700  lui         $v0, 0x8700
    ctx->pc = 0x1429c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34560 << 16));
    // 0x1429c4: 0x34439000  ori         $v1, $v0, 0x9000
    ctx->pc = 0x1429c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x1429c8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x1429c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x1429cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9134u, _value); } while (0);
    // 0x1429d0: 0x3403fffd  ori         $v1, $zero, 0xFFFD
    ctx->pc = 0x1429d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1429d4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x1429d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x1429d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9138u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9138u, _value); } while (0);
    // 0x1429dc: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1429e0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1429e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3E9124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9124u, _value); } while (0);
    // 0x1429e4: 0x3c021e00  lui         $v0, 0x1E00
    ctx->pc = 0x1429e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7680 << 16));
    // 0x1429e8: 0x34432800  ori         $v1, $v0, 0x2800
    ctx->pc = 0x1429e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
    // 0x1429ec: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1429ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1429f0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1429f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3E9130u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9130u, _value); } while (0);
    // 0x1429f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1429f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1429f8: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x1429f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x1429fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1429fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9118u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9118u, _value); } while (0);
    // 0x142a00: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x142a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x142a04: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x142a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x142a08: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x142a08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x142a0c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x142A0Cu;
    SET_GPR_U32(ctx, 31, 0x142A14u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x142A0Cu, 0x142A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A14u;
label_142a14:
    // 0x142a14: 0x0  nop
    ctx->pc = 0x142a14u;
    // NOP
label_142a18:
    // 0x142a18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142a1c: 0xc06750c  jal         func_19D430
    ctx->pc = 0x142A1Cu;
    SET_GPR_U32(ctx, 31, 0x142A24u);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x142A1Cu, 0x142A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142A24u;
label_142a24:
    // 0x142a24: 0x1000fec6  b           . + 4 + (-0x13A << 2)
    ctx->pc = 0x142A24u;
    {
        const bool branch_taken_0x142a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a24) {
            ctx->pc = 0x142540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_142540;
        }
    }
    ctx->pc = 0x142A2Cu;
}
