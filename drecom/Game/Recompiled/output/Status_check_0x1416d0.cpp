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

// Function: Status_check
// Address: 0x1416d0 - 0x141b20
void Status_check_0x1416d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Status_check_0x1416d0");
#endif

    switch (ctx->pc) {
        case 0x1417d8u: goto label_1417d8;
        case 0x141870u: goto label_141870;
        case 0x141908u: goto label_141908;
        case 0x141924u: goto label_141924;
        case 0x141a20u: goto label_141a20;
        case 0x141a2cu: goto label_141a2c;
        case 0x141a74u: goto label_141a74;
        case 0x141a94u: goto label_141a94;
        case 0x141ab8u: goto label_141ab8;
        case 0x141ad4u: goto label_141ad4;
        default: break;
    }

    ctx->pc = 0x1416d0u;

    // 0x1416d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1416d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1416d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1416d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1416d8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1416d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1416dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1416dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1416e0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1416e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1416e4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1416e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1416e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1416e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1416ec: 0x108300f6  beq         $a0, $v1, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1416ECu;
    {
        const bool branch_taken_0x1416ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1416ec) {
            ctx->pc = 0x141AC8u;
            goto label_141ac8;
        }
    }
    ctx->pc = 0x1416F4u;
    // 0x1416f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1416f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1416f8: 0x108300e4  beq         $a0, $v1, . + 4 + (0xE4 << 2)
    ctx->pc = 0x1416F8u;
    {
        const bool branch_taken_0x1416f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1416f8) {
            ctx->pc = 0x141A8Cu;
            goto label_141a8c;
        }
    }
    ctx->pc = 0x141700u;
    // 0x141700: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x141700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141704: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x141704u;
    {
        const bool branch_taken_0x141704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141704) {
            ctx->pc = 0x141918u;
            goto label_141918;
        }
    }
    ctx->pc = 0x14170Cu;
    // 0x14170c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141710: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x141710u;
    {
        const bool branch_taken_0x141710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x141710) {
            ctx->pc = 0x1417F0u;
            goto label_1417f0;
        }
    }
    ctx->pc = 0x141718u;
    // 0x141718: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x141718u;
    {
        const bool branch_taken_0x141718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x141718) {
            ctx->pc = 0x141728u;
            goto label_141728;
        }
    }
    ctx->pc = 0x141720u;
    // 0x141720: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x141720u;
    {
        const bool branch_taken_0x141720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141720) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x141728u;
label_141728:
    // 0x141728: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14172c: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x14172cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x141730: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x141730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x141734: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141738: 0x106000f5  beqz        $v1, . + 4 + (0xF5 << 2)
    ctx->pc = 0x141738u;
    {
        const bool branch_taken_0x141738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141738) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x141740u;
    // 0x141740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141744: 0x8c241a40  lw          $a0, 0x1A40($at)
    ctx->pc = 0x141744u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x141748: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x141748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x14174c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x14174cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x141750: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141754: 0x146000ee  bnez        $v1, . + 4 + (0xEE << 2)
    ctx->pc = 0x141754u;
    {
        const bool branch_taken_0x141754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141754) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x14175Cu;
    // 0x14175c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14175cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141760: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141760u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141764: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x141764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x141768: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14176c: 0x146000e8  bnez        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x14176Cu;
    {
        const bool branch_taken_0x14176c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14176c) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x141774u;
    // 0x141774: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141778: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141778u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x14177c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x14177cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x141780: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141784: 0x146000e2  bnez        $v1, . + 4 + (0xE2 << 2)
    ctx->pc = 0x141784u;
    {
        const bool branch_taken_0x141784 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x141784) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x14178Cu;
    // 0x14178c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14178cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141790: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141790u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141794: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x141794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x141798: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14179c: 0x146000dc  bnez        $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x14179Cu;
    {
        const bool branch_taken_0x14179c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x14179c) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x1417A4u;
    // 0x1417a4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1417a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1417a8: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1417a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1417ac: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x1417acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1417b0: 0x146000d7  bnez        $v1, . + 4 + (0xD7 << 2)
    ctx->pc = 0x1417B0u;
    {
        const bool branch_taken_0x1417b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417b0) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x1417B8u;
    // 0x1417b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1417b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1417bc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1417bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1417c0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1417c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1417c4: 0x146000d2  bnez        $v1, . + 4 + (0xD2 << 2)
    ctx->pc = 0x1417C4u;
    {
        const bool branch_taken_0x1417c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1417c4) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x1417CCu;
    // 0x1417cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1417ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1417d0: 0xc055574  jal         func_1555D0
    ctx->pc = 0x1417D0u;
    SET_GPR_U32(ctx, 31, 0x1417D8u);
    ctx->pc = 0x1555D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1555D0u, 0x1417D0u, 0x1417D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1417D8u;
label_1417d8:
    // 0x1417d8: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x1417D8u;
    {
        const bool branch_taken_0x1417d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1417d8) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x1417E0u;
    // 0x1417e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1417e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1417e4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x1417e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x1417e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1417e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1417ec: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x1417ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_1417f0:
    // 0x1417f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1417f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1417f4: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1417f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1417f8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1417f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1417fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1417fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141800: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x141800u;
    {
        const bool branch_taken_0x141800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x141800) {
            ctx->pc = 0x141858u;
            goto label_141858;
        }
    }
    ctx->pc = 0x141808u;
    // 0x141808: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x141808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x14180c: 0x9022c775  lbu         $v0, -0x388B($at)
    ctx->pc = 0x14180cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x62C775u));
    // 0x141810: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x141814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141818: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x141818u;
    {
        const bool branch_taken_0x141818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141818) {
            ctx->pc = 0x141858u;
            goto label_141858;
        }
    }
    ctx->pc = 0x141820u;
    // 0x141820: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x141820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x141824: 0x8c22c778  lw          $v0, -0x3888($at)
    ctx->pc = 0x141824u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C778u));
    // 0x141828: 0x90420088  lbu         $v0, 0x88($v0)
    ctx->pc = 0x141828u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x14182c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x14182cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141830: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x141830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x141834: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x141834u;
    {
        const bool branch_taken_0x141834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x141834) {
            ctx->pc = 0x141858u;
            goto label_141858;
        }
    }
    ctx->pc = 0x14183Cu;
    // 0x14183c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x14183cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x141840: 0x8c22c778  lw          $v0, -0x3888($at)
    ctx->pc = 0x141840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x62C778u));
    // 0x141844: 0x90420089  lbu         $v0, 0x89($v0)
    ctx->pc = 0x141844u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 137)));
    // 0x141848: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x141848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14184c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14184cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x141850: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x141850u;
    {
        const bool branch_taken_0x141850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x141850) {
            ctx->pc = 0x141870u;
            goto label_141870;
        }
    }
    ctx->pc = 0x141858u;
label_141858:
    // 0x141858: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x141858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14185c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x14185cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x141860: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x141860u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141864: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x141864u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141868: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x141868u;
    SET_GPR_U32(ctx, 31, 0x141870u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x141868u, 0x141870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141870u;
label_141870:
    // 0x141870: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141874: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141878: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14187c: 0xac2291a0  sw          $v0, -0x6E60($at)
    ctx->pc = 0x14187cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E91A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E91A0u, _value); } while (0);
    // 0x141880: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141884: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141884u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141888: 0x3c02ffc0  lui         $v0, 0xFFC0
    ctx->pc = 0x141888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65472 << 16));
    // 0x14188c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x14188cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x141890: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x141890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141894: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141898: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141898u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14189c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14189cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418a0: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x1418a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1418a4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1418a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1418a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418ac: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x1418acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x1418b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418b4: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1418b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1418b8: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x1418bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1418bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1418c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1418c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1418c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418c8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x1418c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x1418cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418d0: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x1418d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x1418d4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1418d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x1418d8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1418d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1418dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1418dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1418e0: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x1418e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x1418e4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1418e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1418e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418ec: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1418ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1418f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x1418f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418f4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1418f4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1418f8: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x1418f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x1418fc: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x1418fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x141900: 0xc059190  jal         func_164640
    ctx->pc = 0x141900u;
    SET_GPR_U32(ctx, 31, 0x141908u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x141900u, 0x141908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141908u;
label_141908:
    // 0x141908: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x141908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14190c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x14190cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x141910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141914: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x141914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_141918:
    // 0x141918: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14191c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x14191Cu;
    SET_GPR_U32(ctx, 31, 0x141924u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x14191Cu, 0x141924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141924u;
label_141924:
    // 0x141924: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x141924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x141928: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x141928u;
    {
        const bool branch_taken_0x141928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141928) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x141930u;
    // 0x141930: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141934: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141938: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x141938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14193c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x14193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x141940: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141948: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14194c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14194cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141950: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141954: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x141954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x141958: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x141958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14195c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141964: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141968: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14196c: 0x90220e04  lbu         $v0, 0xE04($at)
    ctx->pc = 0x14196cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x141970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141974: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141978: 0xac229198  sw          $v0, -0x6E68($at)
    ctx->pc = 0x141978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9198u, _value); } while (0);
    // 0x14197c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141980: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x141980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x141984: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x141984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x141988: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14198c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14198Cu;
    {
        const bool branch_taken_0x14198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14198c) {
            ctx->pc = 0x1419ACu;
            goto label_1419ac;
        }
    }
    ctx->pc = 0x141994u;
    // 0x141994: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141998: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x141998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x14199c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1419a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1419a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1419A4u;
    {
        const bool branch_taken_0x1419a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419a4) {
            ctx->pc = 0x141A0Cu;
            goto label_141a0c;
        }
    }
    ctx->pc = 0x1419ACu;
label_1419ac:
    // 0x1419ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419b0: 0xa0200e04  sb          $zero, 0xE04($at)
    ctx->pc = 0x1419b0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x1419b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419b8: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1419b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1419bc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1419bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1419c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1419c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1419C4u;
    {
        const bool branch_taken_0x1419c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419c4) {
            ctx->pc = 0x1419E0u;
            goto label_1419e0;
        }
    }
    ctx->pc = 0x1419CCu;
    // 0x1419cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419d0: 0x90220e04  lbu         $v0, 0xE04($at)
    ctx->pc = 0x1419d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x1419d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1419d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1419d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419dc: 0xa0220e04  sb          $v0, 0xE04($at)
    ctx->pc = 0x1419dcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
label_1419e0:
    // 0x1419e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419e4: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x1419e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x1419e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1419e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1419ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1419f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1419F0u;
    {
        const bool branch_taken_0x1419f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419f0) {
            ctx->pc = 0x141A0Cu;
            goto label_141a0c;
        }
    }
    ctx->pc = 0x1419F8u;
    // 0x1419f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1419f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1419fc: 0x90220e04  lbu         $v0, 0xE04($at)
    ctx->pc = 0x1419fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x141a00: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x141a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x141a04: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a08: 0xa0220e04  sb          $v0, 0xE04($at)
    ctx->pc = 0x141a08u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
label_141a0c:
    // 0x141a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141a10: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x141a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x141a14: 0x244521b0  addiu       $a1, $v0, 0x21B0
    ctx->pc = 0x141a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8624));
    // 0x141a18: 0xc067478  jal         func_19D1E0
    ctx->pc = 0x141A18u;
    SET_GPR_U32(ctx, 31, 0x141A20u);
    ctx->pc = 0x19D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D1E0u, 0x141A18u, 0x141A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A20u;
label_141a20:
    // 0x141a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x141a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x141a24: 0xc06750c  jal         func_19D430
    ctx->pc = 0x141A24u;
    SET_GPR_U32(ctx, 31, 0x141A2Cu);
    ctx->pc = 0x19D430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D430u, 0x141A24u, 0x141A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A2Cu;
label_141a2c:
    // 0x141a2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141a30: 0x8c229198  lw          $v0, -0x6E68($at)
    ctx->pc = 0x141a30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9198u));
    // 0x141a34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141a38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a3c: 0xa0220e04  sb          $v0, 0xE04($at)
    ctx->pc = 0x141a3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D0E04u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5D0E04u, _value); } while (0);
    // 0x141a40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a44: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141a44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141a48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x141a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x141a4c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x141a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x141a50: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a54: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141a58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a5c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x141a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141a60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x141a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x141a64: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141a64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141a68: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141a68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141a6c: 0xc06ad78  jal         func_1AB5E0
    ctx->pc = 0x141A6Cu;
    SET_GPR_U32(ctx, 31, 0x141A74u);
    ctx->pc = 0x1AB5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB5E0u, 0x141A6Cu, 0x141A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A74u;
label_141a74:
    // 0x141a74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x141a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141a78: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x141a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x141a7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x141a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141a80: 0xa0830003  sb          $v1, 0x3($a0)
    ctx->pc = 0x141a80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x141a84: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x141A84u;
    {
        const bool branch_taken_0x141a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x141a84) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x141A8Cu;
label_141a8c:
    // 0x141a8c: 0xc062e8c  jal         func_18BA30
    ctx->pc = 0x141A8Cu;
    SET_GPR_U32(ctx, 31, 0x141A94u);
    ctx->pc = 0x18BA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BA30u, 0x141A8Cu, 0x141A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141A94u;
label_141a94:
    // 0x141a94: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141a94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141a98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x141a98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141a9c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x141a9cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141aa0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x141aa0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141aa4: 0x3c088000  lui         $t0, 0x8000
    ctx->pc = 0x141aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32768 << 16));
    // 0x141aa8: 0x70004e28  paddub      $t1, $zero, $zero
    ctx->pc = 0x141aa8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141aac: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x141aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x141ab0: 0xc059190  jal         func_164640
    ctx->pc = 0x141AB0u;
    SET_GPR_U32(ctx, 31, 0x141AB8u);
    ctx->pc = 0x164640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164640u, 0x141AB0u, 0x141AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AB8u;
label_141ab8:
    // 0x141ab8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x141ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141abc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x141abcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x141ac0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x141ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x141ac4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x141ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_141ac8:
    // 0x141ac8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x141acc: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x141ACCu;
    SET_GPR_U32(ctx, 31, 0x141AD4u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x141ACCu, 0x141AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141AD4u;
label_141ad4:
    // 0x141ad4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x141AD4u;
    {
        const bool branch_taken_0x141ad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141ad4) {
            ctx->pc = 0x141B10u;
            goto label_141b10;
        }
    }
    ctx->pc = 0x141ADCu;
    // 0x141adc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141adcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141ae0: 0x8c2391a0  lw          $v1, -0x6E60($at)
    ctx->pc = 0x141ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E91A0u));
    // 0x141ae4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141ae8: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x141ae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141aec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141af0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x141af0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x141af4: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x141af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x141af8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x141af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x141afc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x141afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x141b00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141b04: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x141b04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A3Cu, _value); } while (0);
    // 0x141b08: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x141b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x141b0c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x141b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_141b10:
    // 0x141b10: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x141b10u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141b14: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x141b14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x141b18: 0x3e00008  jr          $ra
    ctx->pc = 0x141B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141B20u;
}
