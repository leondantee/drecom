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

// Function: Check_trajectory
// Address: 0x151640 - 0x152c94
void Check_trajectory_0x151640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_trajectory_0x151640");
#endif

    switch (ctx->pc) {
        case 0x1517d0u: goto label_1517d0;
        case 0x15182cu: goto label_15182c;
        case 0x151860u: goto label_151860;
        case 0x15186cu: goto label_15186c;
        case 0x1518a0u: goto label_1518a0;
        case 0x1518acu: goto label_1518ac;
        case 0x1518e0u: goto label_1518e0;
        case 0x1518ecu: goto label_1518ec;
        case 0x151920u: goto label_151920;
        case 0x15192cu: goto label_15192c;
        case 0x151964u: goto label_151964;
        case 0x151970u: goto label_151970;
        case 0x1519a4u: goto label_1519a4;
        case 0x1519b0u: goto label_1519b0;
        case 0x1519e8u: goto label_1519e8;
        case 0x1519f4u: goto label_1519f4;
        case 0x151a38u: goto label_151a38;
        case 0x151a44u: goto label_151a44;
        case 0x151a9cu: goto label_151a9c;
        case 0x151aa8u: goto label_151aa8;
        case 0x151afcu: goto label_151afc;
        case 0x151b08u: goto label_151b08;
        case 0x151b14u: goto label_151b14;
        case 0x151c7cu: goto label_151c7c;
        case 0x151c88u: goto label_151c88;
        case 0x151ce0u: goto label_151ce0;
        case 0x151cecu: goto label_151cec;
        case 0x151d8cu: goto label_151d8c;
        case 0x151de8u: goto label_151de8;
        case 0x151e20u: goto label_151e20;
        case 0x151e2cu: goto label_151e2c;
        case 0x151e64u: goto label_151e64;
        case 0x151e70u: goto label_151e70;
        case 0x151ea8u: goto label_151ea8;
        case 0x151eb4u: goto label_151eb4;
        case 0x151ee8u: goto label_151ee8;
        case 0x151ef4u: goto label_151ef4;
        case 0x151f28u: goto label_151f28;
        case 0x151f34u: goto label_151f34;
        case 0x151f68u: goto label_151f68;
        case 0x151f74u: goto label_151f74;
        case 0x151fa8u: goto label_151fa8;
        case 0x151fb4u: goto label_151fb4;
        case 0x152004u: goto label_152004;
        case 0x152010u: goto label_152010;
        case 0x15206cu: goto label_15206c;
        case 0x152078u: goto label_152078;
        case 0x1520d0u: goto label_1520d0;
        case 0x1520dcu: goto label_1520dc;
        case 0x1520e8u: goto label_1520e8;
        case 0x152250u: goto label_152250;
        case 0x15225cu: goto label_15225c;
        case 0x1522b4u: goto label_1522b4;
        case 0x1522c0u: goto label_1522c0;
        case 0x15238cu: goto label_15238c;
        case 0x1523e4u: goto label_1523e4;
        case 0x152418u: goto label_152418;
        case 0x152424u: goto label_152424;
        case 0x152460u: goto label_152460;
        case 0x15246cu: goto label_15246c;
        case 0x1524a0u: goto label_1524a0;
        case 0x1524acu: goto label_1524ac;
        case 0x1524f0u: goto label_1524f0;
        case 0x1524fcu: goto label_1524fc;
        case 0x15253cu: goto label_15253c;
        case 0x152548u: goto label_152548;
        case 0x1525b0u: goto label_1525b0;
        case 0x1525bcu: goto label_1525bc;
        case 0x152664u: goto label_152664;
        case 0x1526c0u: goto label_1526c0;
        case 0x152700u: goto label_152700;
        case 0x15270cu: goto label_15270c;
        case 0x15274cu: goto label_15274c;
        case 0x15275cu: goto label_15275c;
        case 0x1527a0u: goto label_1527a0;
        case 0x1527acu: goto label_1527ac;
        case 0x1527ecu: goto label_1527ec;
        case 0x1527f8u: goto label_1527f8;
        case 0x152838u: goto label_152838;
        case 0x152848u: goto label_152848;
        case 0x1528a4u: goto label_1528a4;
        case 0x1528b0u: goto label_1528b0;
        case 0x152938u: goto label_152938;
        case 0x152994u: goto label_152994;
        case 0x1529a0u: goto label_1529a0;
        case 0x1529f4u: goto label_1529f4;
        case 0x152a84u: goto label_152a84;
        case 0x152adcu: goto label_152adc;
        case 0x152ae4u: goto label_152ae4;
        case 0x152b30u: goto label_152b30;
        case 0x152bb8u: goto label_152bb8;
        case 0x152c10u: goto label_152c10;
        case 0x152c5cu: goto label_152c5c;
        case 0x152c7cu: goto label_152c7c;
        default: break;
    }

    ctx->pc = 0x151640u;

    // 0x151640: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x151644: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x151644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x151648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15164c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151650: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x151650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x151654: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x151654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x151658: 0x8c251a48  lw          $a1, 0x1A48($at)
    ctx->pc = 0x151658u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x15165c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15165cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x151660: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x151660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x151664: 0x14600585  bnez        $v1, . + 4 + (0x585 << 2)
    ctx->pc = 0x151664u;
    {
        const bool branch_taken_0x151664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151664) {
            ctx->pc = 0x152C7Cu;
            goto label_152c7c;
        }
    }
    ctx->pc = 0x15166Cu;
    // 0x15166c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15166cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x151670: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x151674: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x151674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x151678: 0x10600580  beqz        $v1, . + 4 + (0x580 << 2)
    ctx->pc = 0x151678u;
    {
        const bool branch_taken_0x151678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151678) {
            ctx->pc = 0x152C7Cu;
            goto label_152c7c;
        }
    }
    ctx->pc = 0x151680u;
    // 0x151680: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151684: 0x90e613f8  lbu         $a2, 0x13F8($a3)
    ctx->pc = 0x151684u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5112)));
    // 0x151688: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x151688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x15168c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15168cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151690: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x151690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x151694: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x151694u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x151698: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x151698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x15169c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15169Cu;
    {
        const bool branch_taken_0x15169c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15169c) {
            ctx->pc = 0x1516B4u;
            goto label_1516b4;
        }
    }
    ctx->pc = 0x1516A4u;
    // 0x1516a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1516a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1516a8: 0x84441418  lh          $a0, 0x1418($v0)
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5144)));
    // 0x1516ac: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1516ACu;
    {
        const bool branch_taken_0x1516ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1516ac) {
            ctx->pc = 0x1516F8u;
            goto label_1516f8;
        }
    }
    ctx->pc = 0x1516B4u;
label_1516b4:
    // 0x1516b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1516b8: 0x906213f8  lbu         $v0, 0x13F8($v1)
    ctx->pc = 0x1516b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5112)));
    // 0x1516bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1516bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1516c0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1516c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1516c4: 0x1047000a  beq         $v0, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x1516C4u;
    {
        const bool branch_taken_0x1516c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1516c4) {
            ctx->pc = 0x1516F0u;
            goto label_1516f0;
        }
    }
    ctx->pc = 0x1516CCu;
    // 0x1516cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1516d0: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1516D0u;
    {
        const bool branch_taken_0x1516d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1516d0) {
            ctx->pc = 0x1516E0u;
            goto label_1516e0;
        }
    }
    ctx->pc = 0x1516D8u;
    // 0x1516d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1516D8u;
    {
        const bool branch_taken_0x1516d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1516d8) {
            ctx->pc = 0x1516F8u;
            goto label_1516f8;
        }
    }
    ctx->pc = 0x1516E0u;
label_1516e0:
    // 0x1516e0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1516e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1516e4: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1516e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1516e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1516E8u;
    {
        const bool branch_taken_0x1516e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1516e8) {
            ctx->pc = 0x1516F8u;
            goto label_1516f8;
        }
    }
    ctx->pc = 0x1516F0u;
label_1516f0:
    // 0x1516f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1516f4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1516f4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1516f8:
    // 0x1516f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1516fc: 0x12030514  beq         $s0, $v1, . + 4 + (0x514 << 2)
    ctx->pc = 0x1516FCu;
    {
        const bool branch_taken_0x1516fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1516fc) {
            ctx->pc = 0x152B50u;
            goto label_152b50;
        }
    }
    ctx->pc = 0x151704u;
    // 0x151704: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x151704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x151708: 0x120504c2  beq         $s0, $a1, . + 4 + (0x4C2 << 2)
    ctx->pc = 0x151708u;
    {
        const bool branch_taken_0x151708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x151708) {
            ctx->pc = 0x152A14u;
            goto label_152a14;
        }
    }
    ctx->pc = 0x151710u;
    // 0x151710: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x151710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151714: 0x1206046d  beq         $s0, $a2, . + 4 + (0x46D << 2)
    ctx->pc = 0x151714u;
    {
        const bool branch_taken_0x151714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x151714) {
            ctx->pc = 0x1528CCu;
            goto label_1528cc;
        }
    }
    ctx->pc = 0x15171Cu;
    // 0x15171c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x151720: 0x120702ee  beq         $s0, $a3, . + 4 + (0x2EE << 2)
    ctx->pc = 0x151720u;
    {
        const bool branch_taken_0x151720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        if (branch_taken_0x151720) {
            ctx->pc = 0x1522DCu;
            goto label_1522dc;
        }
    }
    ctx->pc = 0x151728u;
    // 0x151728: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15172c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15172Cu;
    {
        const bool branch_taken_0x15172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x15172c) {
            ctx->pc = 0x15173Cu;
            goto label_15173c;
        }
    }
    ctx->pc = 0x151734u;
    // 0x151734: 0x1000054e  b           . + 4 + (0x54E << 2)
    ctx->pc = 0x151734u;
    {
        const bool branch_taken_0x151734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151734) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x15173Cu;
label_15173c:
    // 0x15173c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15173cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151740: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x151740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151744: 0x90e313f9  lbu         $v1, 0x13F9($a3)
    ctx->pc = 0x151744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5113)));
    // 0x151748: 0x14600170  bnez        $v1, . + 4 + (0x170 << 2)
    ctx->pc = 0x151748u;
    {
        const bool branch_taken_0x151748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151748) {
            ctx->pc = 0x151D0Cu;
            goto label_151d0c;
        }
    }
    ctx->pc = 0x151750u;
    // 0x151750: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151754: 0x8c26b708  lw          $a2, -0x48F8($at)
    ctx->pc = 0x151754u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EB708u));
    // 0x151758: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x151758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15175c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x15175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x151760: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151764: 0xac22b708  sw          $v0, -0x48F8($at)
    ctx->pc = 0x151764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB708u, _value); } while (0);
    // 0x151768: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x15176c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15176cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151770: 0x0  nop
    ctx->pc = 0x151770u;
    // NOP
    // 0x151774: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15177c: 0x0  nop
    ctx->pc = 0x15177cu;
    // NOP
    // 0x151780: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x151780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x151784: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x151788: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151788u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15178c: 0x0  nop
    ctx->pc = 0x15178cu;
    // NOP
    // 0x151790: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151794: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x151798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15179c: 0x0  nop
    ctx->pc = 0x15179cu;
    // NOP
    // 0x1517a0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1517a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1517a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517a8: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1517a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1517ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1517ACu;
    {
        const bool branch_taken_0x1517ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1517ac) {
            ctx->pc = 0x151808u;
            goto label_151808;
        }
    }
    ctx->pc = 0x1517B4u;
    // 0x1517b4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x1517b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x1517b8: 0x24e3b700  addiu       $v1, $a3, -0x4900
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948608));
    // 0x1517bc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1517bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1517c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1517c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1517c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1517c8: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x1517C8u;
    SET_GPR_U32(ctx, 31, 0x1517D0u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x1517C8u, 0x1517D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517D0u;
label_1517d0:
    // 0x1517d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517d4: 0x844315ec  lh          $v1, 0x15EC($v0)
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1517d8: 0x2464ffa6  addiu       $a0, $v1, -0x5A
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967206));
    // 0x1517dc: 0xa44415ec  sh          $a0, 0x15EC($v0)
    ctx->pc = 0x1517dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1517e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517e4: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1517e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1517e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1517ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1517ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1517f0: 0x441051f  bgez        $v0, . + 4 + (0x51F << 2)
    ctx->pc = 0x1517F0u;
    {
        const bool branch_taken_0x1517f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1517f0) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1517F8u;
    // 0x1517f8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1517f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517fc: 0xa4e015ec  sh          $zero, 0x15EC($a3)
    ctx->pc = 0x1517fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x151800: 0x1000051b  b           . + 4 + (0x51B << 2)
    ctx->pc = 0x151800u;
    {
        const bool branch_taken_0x151800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151800) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x151808u;
label_151808:
    // 0x151808: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15180c: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x15180cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151810: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x151810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x151814: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x151814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x151818: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x151818u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15181c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x15181cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151820: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151824: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x151824u;
    SET_GPR_U32(ctx, 31, 0x15182Cu);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x151824u, 0x15182Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15182Cu;
label_15182c:
    // 0x15182c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151830: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151830u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151834: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151838: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15183c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15183cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151840: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151844: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151848: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151848u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15184c: 0x2404040a  addiu       $a0, $zero, 0x40A
    ctx->pc = 0x15184cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    // 0x151850: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151854: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151858: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151858u;
    SET_GPR_U32(ctx, 31, 0x151860u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151858u, 0x151860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151860u;
label_151860:
    // 0x151860: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151860u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151864: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151864u;
    SET_GPR_U32(ctx, 31, 0x15186Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151864u, 0x15186Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15186Cu;
label_15186c:
    // 0x15186c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15186cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151870: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151870u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151874: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x151874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151878: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15187c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15187cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151880: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151884: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151888: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x151888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x15188c: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x15188cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151890: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151894: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151898: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151898u;
    SET_GPR_U32(ctx, 31, 0x1518A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151898u, 0x1518A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518A0u;
label_1518a0:
    // 0x1518a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1518a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1518a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1518A4u;
    SET_GPR_U32(ctx, 31, 0x1518ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1518A4u, 0x1518ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518ACu;
label_1518ac:
    // 0x1518ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1518acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1518b0: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1518b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1518b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1518b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1518b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1518bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1518bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1518c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1518c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1518c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1518c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1518c8: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x1518c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1518cc: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x1518ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x1518d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1518d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1518d4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1518d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1518d8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1518D8u;
    SET_GPR_U32(ctx, 31, 0x1518E0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1518D8u, 0x1518E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518E0u;
label_1518e0:
    // 0x1518e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1518e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1518e4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1518E4u;
    SET_GPR_U32(ctx, 31, 0x1518ECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1518E4u, 0x1518ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518ECu;
label_1518ec:
    // 0x1518ec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1518ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1518f0: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x1518f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1518f4: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x1518f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1518f8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1518f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1518fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1518fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151900: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151904: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151908: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x151908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x15190c: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x15190cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151910: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151910u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151914: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151918: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151918u;
    SET_GPR_U32(ctx, 31, 0x151920u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151918u, 0x151920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151920u;
label_151920:
    // 0x151920: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151924: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151924u;
    SET_GPR_U32(ctx, 31, 0x15192Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151924u, 0x15192Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15192Cu;
label_15192c:
    // 0x15192c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15192cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151930: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x151930u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151934: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x151934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151938: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151938u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x15193c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15193cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151940: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151944: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151948: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x151948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x15194c: 0x2403040b  addiu       $v1, $zero, 0x40B
    ctx->pc = 0x15194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151950: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151950u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151954: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151954u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151958: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15195c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x15195Cu;
    SET_GPR_U32(ctx, 31, 0x151964u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x15195Cu, 0x151964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151964u;
label_151964:
    // 0x151964: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151968: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151968u;
    SET_GPR_U32(ctx, 31, 0x151970u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151968u, 0x151970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151970u;
label_151970:
    // 0x151970: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151974: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x151974u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151978: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x151978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15197c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x15197cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151980: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151984: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x151984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x151988: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x151988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15198c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x15198cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151990: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151994: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151998: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15199c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x15199Cu;
    SET_GPR_U32(ctx, 31, 0x1519A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x15199Cu, 0x1519A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519A4u;
label_1519a4:
    // 0x1519a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1519a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1519a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1519A8u;
    SET_GPR_U32(ctx, 31, 0x1519B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1519A8u, 0x1519B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519B0u;
label_1519b0:
    // 0x1519b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1519b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1519b4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1519b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1519b8: 0x8c26b830  lw          $a2, -0x47D0($at)
    ctx->pc = 0x1519b8u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1519bc: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1519bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1519c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1519c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1519c4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1519c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1519c8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1519c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1519cc: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1519ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1519d0: 0x443824  and         $a3, $v0, $a0
    ctx->pc = 0x1519d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1519d4: 0x24041e01  addiu       $a0, $zero, 0x1E01
    ctx->pc = 0x1519d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x1519d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1519d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1519dc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1519dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1519e0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1519E0u;
    SET_GPR_U32(ctx, 31, 0x1519E8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1519E0u, 0x1519E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519E8u;
label_1519e8:
    // 0x1519e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1519e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1519ec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1519ECu;
    SET_GPR_U32(ctx, 31, 0x1519F4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1519ECu, 0x1519F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1519F4u;
label_1519f4:
    // 0x1519f4: 0x3c07431b  lui         $a3, 0x431B
    ctx->pc = 0x1519f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17179 << 16));
    // 0x1519f8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1519f8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1519fc: 0x0  nop
    ctx->pc = 0x1519fcu;
    // NOP
    // 0x151a00: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151a04: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151a08: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x151a08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151a0c: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x151a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151a10: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x151a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x151a14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151a18: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x151a18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x151a1c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x151a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151a20: 0xc33824  and         $a3, $a2, $v1
    ctx->pc = 0x151a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x151a24: 0x24040501  addiu       $a0, $zero, 0x501
    ctx->pc = 0x151a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x151a28: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151a28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151a2c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a30: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151A30u;
    SET_GPR_U32(ctx, 31, 0x151A38u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151A30u, 0x151A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A38u;
label_151a38:
    // 0x151a38: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151a38u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151a3c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151A3Cu;
    SET_GPR_U32(ctx, 31, 0x151A44u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151A3Cu, 0x151A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A44u;
label_151a44:
    // 0x151a44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151a44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151a48: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x151a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x151a4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151a4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151a50: 0x0  nop
    ctx->pc = 0x151a50u;
    // NOP
    // 0x151a54: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151a58: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x151a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x151a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151a60: 0x0  nop
    ctx->pc = 0x151a60u;
    // NOP
    // 0x151a64: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151a68: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151a6c: 0x8c27b830  lw          $a3, -0x47D0($at)
    ctx->pc = 0x151a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151a70: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x151a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x151a74: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151a78: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x151a78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151a7c: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x151a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x151a80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151a84: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151a88: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x151a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x151a8c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151a8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151a90: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151a94: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151A94u;
    SET_GPR_U32(ctx, 31, 0x151A9Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151A94u, 0x151A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151A9Cu;
label_151a9c:
    // 0x151a9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151aa0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151AA0u;
    SET_GPR_U32(ctx, 31, 0x151AA8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151AA0u, 0x151AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AA8u;
label_151aa8:
    // 0x151aa8: 0x3c024325  lui         $v0, 0x4325
    ctx->pc = 0x151aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17189 << 16));
    // 0x151aac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151aacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ab0: 0x0  nop
    ctx->pc = 0x151ab0u;
    // NOP
    // 0x151ab4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151ab8: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x151ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x151abc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151abcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ac0: 0x0  nop
    ctx->pc = 0x151ac0u;
    // NOP
    // 0x151ac4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151ac8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151ac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151acc: 0x8c25b830  lw          $a1, -0x47D0($at)
    ctx->pc = 0x151accu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151ad0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x151ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x151ad4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151ad8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151adc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151ae0: 0x3446ffff  ori         $a2, $v0, 0xFFFF
    ctx->pc = 0x151ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151ae4: 0x663824  and         $a3, $v1, $a2
    ctx->pc = 0x151ae4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x151ae8: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x151ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x151aec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151aecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151af0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151af0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151af4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151AF4u;
    SET_GPR_U32(ctx, 31, 0x151AFCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151AF4u, 0x151AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AFCu;
label_151afc:
    // 0x151afc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151afcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151b00: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151B00u;
    SET_GPR_U32(ctx, 31, 0x151B08u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151B00u, 0x151B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B08u;
label_151b08:
    // 0x151b08: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151b08u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151b0c: 0xc067648  jal         func_19D920
    ctx->pc = 0x151B0Cu;
    SET_GPR_U32(ctx, 31, 0x151B14u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x151B0Cu, 0x151B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151B14u;
label_151b14:
    // 0x151b14: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x151b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x151b18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x151b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151b1c: 0x0  nop
    ctx->pc = 0x151b1cu;
    // NOP
    // 0x151b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151b24: 0x3c0643dc  lui         $a2, 0x43DC
    ctx->pc = 0x151b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17372 << 16));
    // 0x151b28: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151b28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b2c: 0x0  nop
    ctx->pc = 0x151b2cu;
    // NOP
    // 0x151b30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x151b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x151b34: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x151b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x151b38: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b3c: 0x0  nop
    ctx->pc = 0x151b3cu;
    // NOP
    // 0x151b40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x151b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x151b44: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x151b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x151b48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b4c: 0x0  nop
    ctx->pc = 0x151b4cu;
    // NOP
    // 0x151b50: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x151b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x151b54: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x151b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151b58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151b58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b5c: 0x0  nop
    ctx->pc = 0x151b5cu;
    // NOP
    // 0x151b60: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x151b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x151b64: 0x3c034307  lui         $v1, 0x4307
    ctx->pc = 0x151b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17159 << 16));
    // 0x151b68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b6c: 0x0  nop
    ctx->pc = 0x151b6cu;
    // NOP
    // 0x151b70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151b74: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x151b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151b78: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x151b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x151b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b80: 0x0  nop
    ctx->pc = 0x151b80u;
    // NOP
    // 0x151b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x151b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x151b88: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151b8c: 0x3c064220  lui         $a2, 0x4220
    ctx->pc = 0x151b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16928 << 16));
    // 0x151b90: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151b90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151b94: 0x0  nop
    ctx->pc = 0x151b94u;
    // NOP
    // 0x151b98: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151b9c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x151b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ba0: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151ba4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151ba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151bac: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x151bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x151bb0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x151bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151bb4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x151bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151bb8: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x151bb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151bbc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x151bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151bc0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x151bc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151bc4: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x151bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x151bc8: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x151bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151bcc: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x151bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x151bd0: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x151bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x151bd4: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x151bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x151bd8: 0x1021825  or          $v1, $t0, $v0
    ctx->pc = 0x151bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x151bdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x151bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x151be0: 0x2482b700  addiu       $v0, $a0, -0x4900
    ctx->pc = 0x151be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948608));
    // 0x151be4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x151be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151be8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x151be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x151bec: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x151becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151bf0: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x151bf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x151bf4: 0x34c4ffff  ori         $a0, $a2, 0xFFFF
    ctx->pc = 0x151bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x151bf8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x151bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x151bfc: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x151bfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151c00: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x151c00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x151c04: 0x24e4b700  addiu       $a0, $a3, -0x4900
    ctx->pc = 0x151c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948608));
    // 0x151c08: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x151c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151c0c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x151c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x151c10: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151c14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151c18: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151c1c: 0xc22024  and         $a0, $a2, $v0
    ctx->pc = 0x151c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x151c20: 0xa43025  or          $a2, $a1, $a0
    ctx->pc = 0x151c20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x151c24: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151c28: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151c28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151c2c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151c30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151c30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151c34: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x151c34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151c38: 0x118c38  dsll        $s1, $s1, 16
    ctx->pc = 0x151c38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 16);
    // 0x151c3c: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x151c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x151c40: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x151c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151c44: 0x4383c  dsll32      $a3, $a0, 0
    ctx->pc = 0x151c44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << (32 + 0));
    // 0x151c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151c4c: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x151c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151c50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x151c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151c54: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x151c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x151c58: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x151c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151c5c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x151c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x151c60: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x151c60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151c64: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x151c64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x151c68: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x151c68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x151c6c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x151c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x151c70: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x151c70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151c74: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x151C74u;
    SET_GPR_U32(ctx, 31, 0x151C7Cu);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x151C74u, 0x151C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C7Cu;
label_151c7c:
    // 0x151c7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151c80: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x151C80u;
    SET_GPR_U32(ctx, 31, 0x151C88u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x151C80u, 0x151C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151C88u;
label_151c88:
    // 0x151c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c8c: 0x0  nop
    ctx->pc = 0x151c8cu;
    // NOP
    // 0x151c90: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151c94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151c98: 0x0  nop
    ctx->pc = 0x151c98u;
    // NOP
    // 0x151c9c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x151c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x151ca0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151ca0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151ca4: 0x0  nop
    ctx->pc = 0x151ca4u;
    // NOP
    // 0x151ca8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151cac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151cb0: 0x8c23b830  lw          $v1, -0x47D0($at)
    ctx->pc = 0x151cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EB830u));
    // 0x151cb4: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x151cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151cb8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151cbc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151cc0: 0x22c38  dsll        $a1, $v0, 16
    ctx->pc = 0x151cc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 16);
    // 0x151cc4: 0x34a6ffff  ori         $a2, $a1, 0xFFFF
    ctx->pc = 0x151cc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x151cc8: 0x863824  and         $a3, $a0, $a2
    ctx->pc = 0x151cc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x151ccc: 0x24040201  addiu       $a0, $zero, 0x201
    ctx->pc = 0x151cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x151cd0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151cd0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151cd4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151cd8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151CD8u;
    SET_GPR_U32(ctx, 31, 0x151CE0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151CD8u, 0x151CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CE0u;
label_151ce0:
    // 0x151ce0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151ce0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151ce4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151CE4u;
    SET_GPR_U32(ctx, 31, 0x151CECu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151CE4u, 0x151CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151CECu;
label_151cec:
    // 0x151cec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151cecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151cf0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x151cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151cf4: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x151cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x151cf8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x151cfc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x151cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151d00: 0xa082157d  sb          $v0, 0x157D($a0)
    ctx->pc = 0x151d00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x151d04: 0x100003da  b           . + 4 + (0x3DA << 2)
    ctx->pc = 0x151D04u;
    {
        const bool branch_taken_0x151d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d04) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x151D0Cu;
label_151d0c:
    // 0x151d0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151d10: 0x8c23a4a8  lw          $v1, -0x5B58($at)
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x151d14: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x151d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x151d18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x151d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151d1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151d20: 0xac22a4a8  sw          $v0, -0x5B58($at)
    ctx->pc = 0x151d20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
    // 0x151d24: 0x3c074307  lui         $a3, 0x4307
    ctx->pc = 0x151d24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17159 << 16));
    // 0x151d28: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151d28u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d2c: 0x0  nop
    ctx->pc = 0x151d2cu;
    // NOP
    // 0x151d30: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d38: 0x0  nop
    ctx->pc = 0x151d38u;
    // NOP
    // 0x151d3c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x151d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x151d40: 0x3c054220  lui         $a1, 0x4220
    ctx->pc = 0x151d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16928 << 16));
    // 0x151d44: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151d44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d48: 0x0  nop
    ctx->pc = 0x151d48u;
    // NOP
    // 0x151d4c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151d50: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x151d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151d54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151d54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151d58: 0x0  nop
    ctx->pc = 0x151d58u;
    // NOP
    // 0x151d5c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x151d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x151d60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x151d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151d64: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x151d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x151d68: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x151D68u;
    {
        const bool branch_taken_0x151d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151d68) {
            ctx->pc = 0x151DC4u;
            goto label_151dc4;
        }
    }
    ctx->pc = 0x151D70u;
    // 0x151d70: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x151d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x151d74: 0x2467a4a0  addiu       $a3, $v1, -0x5B60
    ctx->pc = 0x151d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x151d78: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x151d78u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151d7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151d7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151d80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151d84: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x151D84u;
    SET_GPR_U32(ctx, 31, 0x151D8Cu);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x151D84u, 0x151D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151D8Cu;
label_151d8c:
    // 0x151d8c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x151d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151d90: 0x848215ec  lh          $v0, 0x15EC($a0)
    ctx->pc = 0x151d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x151d94: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x151d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
    // 0x151d98: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x151d98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x151d9c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x151d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151da0: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x151da4: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x151da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x151da8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x151da8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x151dac: 0x44103b0  bgez        $v0, . + 4 + (0x3B0 << 2)
    ctx->pc = 0x151DACu;
    {
        const bool branch_taken_0x151dac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x151dac) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x151DB4u;
    // 0x151db4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x151db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151db8: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x151db8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x151dbc: 0x100003ac  b           . + 4 + (0x3AC << 2)
    ctx->pc = 0x151DBCu;
    {
        const bool branch_taken_0x151dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151dbc) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x151DC4u;
label_151dc4:
    // 0x151dc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151dc8: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151dcc: 0x3c0644bb  lui         $a2, 0x44BB
    ctx->pc = 0x151dccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17595 << 16));
    // 0x151dd0: 0x34c48000  ori         $a0, $a2, 0x8000
    ctx->pc = 0x151dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x151dd4: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x151dd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x151dd8: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x151dd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151ddc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151ddcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151de0: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x151DE0u;
    SET_GPR_U32(ctx, 31, 0x151DE8u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x151DE0u, 0x151DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151DE8u;
label_151de8:
    // 0x151de8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151dec: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x151decu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151df0: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x151df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151df4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x151df8: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x151df8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151dfc: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x151dfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x151e00: 0x34e2ffff  ori         $v0, $a3, 0xFFFF
    ctx->pc = 0x151e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x151e04: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x151e04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x151e08: 0x2403040a  addiu       $v1, $zero, 0x40A
    ctx->pc = 0x151e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
    // 0x151e0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151e0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151e10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151e14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151e18: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151E18u;
    SET_GPR_U32(ctx, 31, 0x151E20u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151E18u, 0x151E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E20u;
label_151e20:
    // 0x151e20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151e20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151e24: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151E24u;
    SET_GPR_U32(ctx, 31, 0x151E2Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151E24u, 0x151E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E2Cu;
label_151e2c:
    // 0x151e2c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151e30: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151e34: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151e38: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151e3c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151e40: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151e44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151e48: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151e48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151e4c: 0x2403040b  addiu       $v1, $zero, 0x40B
    ctx->pc = 0x151e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151e50: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151e54: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151e58: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151e5c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151E5Cu;
    SET_GPR_U32(ctx, 31, 0x151E64u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151E5Cu, 0x151E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E64u;
label_151e64:
    // 0x151e64: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151e64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151e68: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151E68u;
    SET_GPR_U32(ctx, 31, 0x151E70u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151E68u, 0x151E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151E70u;
label_151e70:
    // 0x151e70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151e74: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x151e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151e78: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x151e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151e7c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151e7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151e80: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151e84: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151e88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151e8c: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151e8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151e90: 0x2403040b  addiu       $v1, $zero, 0x40B
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151e94: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151e98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151e98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151e9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ea0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151EA0u;
    SET_GPR_U32(ctx, 31, 0x151EA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151EA0u, 0x151EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EA8u;
label_151ea8:
    // 0x151ea8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151eac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151EACu;
    SET_GPR_U32(ctx, 31, 0x151EB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151EACu, 0x151EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EB4u;
label_151eb4:
    // 0x151eb4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151eb8: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151ebc: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x151ebcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151ec0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x151ec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x151ec4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151ec8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151ecc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151ed0: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x151ed0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x151ed4: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151ed8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151ed8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151edc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ee0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151EE0u;
    SET_GPR_U32(ctx, 31, 0x151EE8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151EE0u, 0x151EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EE8u;
label_151ee8:
    // 0x151ee8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151ee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151eec: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151EECu;
    SET_GPR_U32(ctx, 31, 0x151EF4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151EECu, 0x151EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EF4u;
label_151ef4:
    // 0x151ef4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151ef8: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151efc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x151efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151f00: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151f04: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151f08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151f0c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151f10: 0x643824  and         $a3, $v1, $a0
    ctx->pc = 0x151f10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x151f14: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151f18: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151f18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151f1c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151f20: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151F20u;
    SET_GPR_U32(ctx, 31, 0x151F28u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151F20u, 0x151F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F28u;
label_151f28:
    // 0x151f28: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151f28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151f2c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151F2Cu;
    SET_GPR_U32(ctx, 31, 0x151F34u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151F2Cu, 0x151F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F34u;
label_151f34:
    // 0x151f34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151f38: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x151f38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151f3c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151f40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151f44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151f48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x151f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x151f4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x151f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151f50: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x151f50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x151f54: 0x2404040b  addiu       $a0, $zero, 0x40B
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1035));
    // 0x151f58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151f58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151f5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151f60: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151F60u;
    SET_GPR_U32(ctx, 31, 0x151F68u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151F60u, 0x151F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F68u;
label_151f68:
    // 0x151f68: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151f68u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151f6c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151F6Cu;
    SET_GPR_U32(ctx, 31, 0x151F74u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151F6Cu, 0x151F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F74u;
label_151f74:
    // 0x151f74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151f78: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151f7c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x151f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x151f80: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x151f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x151f84: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x151f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151f88: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x151f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x151f8c: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x151f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151f90: 0xa43824  and         $a3, $a1, $a0
    ctx->pc = 0x151f90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x151f94: 0x24041e01  addiu       $a0, $zero, 0x1E01
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7681));
    // 0x151f98: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151f98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151f9c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x151f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151fa0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151FA0u;
    SET_GPR_U32(ctx, 31, 0x151FA8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151FA0u, 0x151FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FA8u;
label_151fa8:
    // 0x151fa8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151fa8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151fac: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x151FACu;
    SET_GPR_U32(ctx, 31, 0x151FB4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x151FACu, 0x151FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FB4u;
label_151fb4:
    // 0x151fb4: 0x3c03431b  lui         $v1, 0x431B
    ctx->pc = 0x151fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17179 << 16));
    // 0x151fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151fbc: 0x0  nop
    ctx->pc = 0x151fbcu;
    // NOP
    // 0x151fc0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151fc4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151fc8: 0x8c25a5d0  lw          $a1, -0x5A30($at)
    ctx->pc = 0x151fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x151fcc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x151fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x151fd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151fd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x151fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x151fd8: 0x22438  dsll        $a0, $v0, 16
    ctx->pc = 0x151fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x151fdc: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x151fdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x151fe0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x151fe0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x151fe4: 0x24060501  addiu       $a2, $zero, 0x501
    ctx->pc = 0x151fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1281));
    // 0x151fe8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x151fe8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x151fec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x151fecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151ff0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x151ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151ff4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x151ff4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151ff8: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x151ff8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151ffc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x151FFCu;
    SET_GPR_U32(ctx, 31, 0x152004u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x151FFCu, 0x152004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152004u;
label_152004:
    // 0x152004: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152008: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152008u;
    SET_GPR_U32(ctx, 31, 0x152010u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152008u, 0x152010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152010u;
label_152010:
    // 0x152010: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152010u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152014: 0x3c044316  lui         $a0, 0x4316
    ctx->pc = 0x152014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17174 << 16));
    // 0x152018: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152018u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15201c: 0x0  nop
    ctx->pc = 0x15201cu;
    // NOP
    // 0x152020: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152024: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x152024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x152028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15202c: 0x0  nop
    ctx->pc = 0x15202cu;
    // NOP
    // 0x152030: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152034: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152038: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x152038u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x15203c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x15203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x152040: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x152040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152044: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x152044u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152048: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x152048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x15204c: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x15204cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152050: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x152050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x152054: 0x24040502  addiu       $a0, $zero, 0x502
    ctx->pc = 0x152054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1282));
    // 0x152058: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152058u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15205c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15205cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152060: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152060u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152064: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152064u;
    SET_GPR_U32(ctx, 31, 0x15206Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152064u, 0x15206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15206Cu;
label_15206c:
    // 0x15206c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x15206cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152070: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152070u;
    SET_GPR_U32(ctx, 31, 0x152078u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152070u, 0x152078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152078u;
label_152078:
    // 0x152078: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152078u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15207c: 0x3c034325  lui         $v1, 0x4325
    ctx->pc = 0x15207cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17189 << 16));
    // 0x152080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152084: 0x0  nop
    ctx->pc = 0x152084u;
    // NOP
    // 0x152088: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15208c: 0x3c04428c  lui         $a0, 0x428C
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17036 << 16));
    // 0x152090: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152090u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152094: 0x0  nop
    ctx->pc = 0x152094u;
    // NOP
    // 0x152098: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15209c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15209cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1520a0: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1520a4: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x1520a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1520a8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1520a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1520ac: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1520acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1520b0: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x1520b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x1520b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1520b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1520b8: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x1520b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1520bc: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1520bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1520c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1520c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1520c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1520c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1520c8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1520C8u;
    SET_GPR_U32(ctx, 31, 0x1520D0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1520C8u, 0x1520D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520D0u;
label_1520d0:
    // 0x1520d0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1520d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1520d4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1520D4u;
    SET_GPR_U32(ctx, 31, 0x1520DCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1520D4u, 0x1520DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520DCu;
label_1520dc:
    // 0x1520dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1520dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1520e0: 0xc067648  jal         func_19D920
    ctx->pc = 0x1520E0u;
    SET_GPR_U32(ctx, 31, 0x1520E8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1520E0u, 0x1520E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520E8u;
label_1520e8:
    // 0x1520e8: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x1520e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x1520ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1520ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1520f0: 0x0  nop
    ctx->pc = 0x1520f0u;
    // NOP
    // 0x1520f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1520f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1520f8: 0x3c0743dc  lui         $a3, 0x43DC
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17372 << 16));
    // 0x1520fc: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1520fcu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152100: 0x0  nop
    ctx->pc = 0x152100u;
    // NOP
    // 0x152104: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x152104u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x152108: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x152108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x15210c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15210cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152110: 0x0  nop
    ctx->pc = 0x152110u;
    // NOP
    // 0x152114: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x152114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x152118: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x152118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x15211c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x15211cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152120: 0x0  nop
    ctx->pc = 0x152120u;
    // NOP
    // 0x152124: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x152124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x152128: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x152128u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x15212c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x15212cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152130: 0x0  nop
    ctx->pc = 0x152130u;
    // NOP
    // 0x152134: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x152134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x152138: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x152138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x15213c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15213cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152140: 0x0  nop
    ctx->pc = 0x152140u;
    // NOP
    // 0x152144: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152148: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x152148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15214c: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x15214cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x152150: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152150u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152154: 0x0  nop
    ctx->pc = 0x152154u;
    // NOP
    // 0x152158: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x152158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15215c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15215cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152160: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x152160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x152164: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152164u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152168: 0x0  nop
    ctx->pc = 0x152168u;
    // NOP
    // 0x15216c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15216cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152170: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x152170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152174: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x152174u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x152178: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x152178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x15217c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15217cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152180: 0x43438  dsll        $a2, $a0, 16
    ctx->pc = 0x152180u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << 16);
    // 0x152184: 0x34c2ffff  ori         $v0, $a2, 0xFFFF
    ctx->pc = 0x152184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x152188: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x152188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x15218c: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x15218cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152190: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x152194: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x152194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152198: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x152198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x15219c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1521a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1521a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1521a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1521a8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1521a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1521ac: 0xe22825  or          $a1, $a3, $v0
    ctx->pc = 0x1521acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1521b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1521b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1521b4: 0x2462a4a0  addiu       $v0, $v1, -0x5B60
    ctx->pc = 0x1521b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x1521b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1521b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1521bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1521bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1521c0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1521c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521c4: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x1521c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x1521c8: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x1521c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1521cc: 0x443024  and         $a2, $v0, $a0
    ctx->pc = 0x1521ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1521d0: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1521d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1521d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1521d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1521d8: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x1521d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
    // 0x1521dc: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x1521dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1521e0: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1521e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1521e4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1521e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1521e8: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x1521e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x1521ec: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x1521ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1521f0: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1521f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1521f4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1521f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1521f8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1521f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1521fc: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x1521fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152200: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x152200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152204: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x152204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x152208: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x15220c: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x15220cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x152210: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x152210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152214: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x152214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x152218: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x152218u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15221c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15221cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152220: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152224: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x152224u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152228: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x152228u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x15222c: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x15222cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152230: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x152230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x152234: 0x3462ffff  ori         $v0, $v1, 0xFFFF
    ctx->pc = 0x152234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152238: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x152238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x15223c: 0x1021825  or          $v1, $t0, $v0
    ctx->pc = 0x15223cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x152240: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x152240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x152244: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x152244u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152248: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x152248u;
    SET_GPR_U32(ctx, 31, 0x152250u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x152248u, 0x152250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152250u;
label_152250:
    // 0x152250: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152250u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152254: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x152254u;
    SET_GPR_U32(ctx, 31, 0x15225Cu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x152254u, 0x15225Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15225Cu;
label_15225c:
    // 0x15225c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15225cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152260: 0x0  nop
    ctx->pc = 0x152260u;
    // NOP
    // 0x152264: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15226c: 0x0  nop
    ctx->pc = 0x15226cu;
    // NOP
    // 0x152270: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152274: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152278: 0x0  nop
    ctx->pc = 0x152278u;
    // NOP
    // 0x15227c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15227cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152280: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152284: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x152284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152288: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x152288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15228c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x15228cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x152290: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x152290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152294: 0x41438  dsll        $v0, $a0, 16
    ctx->pc = 0x152294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 16);
    // 0x152298: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x152298u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15229c: 0xc53824  and         $a3, $a2, $a1
    ctx->pc = 0x15229cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1522a0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1522a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1522a4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1522a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1522a8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1522a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1522ac: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1522ACu;
    SET_GPR_U32(ctx, 31, 0x1522B4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1522ACu, 0x1522B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522B4u;
label_1522b4:
    // 0x1522b4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1522b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1522b8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1522B8u;
    SET_GPR_U32(ctx, 31, 0x1522C0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1522B8u, 0x1522C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1522C0u;
label_1522c0:
    // 0x1522c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1522c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1522c4: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x1522c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1522c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1522c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1522cc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1522ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1522d0: 0xa0c4157d  sb          $a0, 0x157D($a2)
    ctx->pc = 0x1522d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1522d4: 0x10000266  b           . + 4 + (0x266 << 2)
    ctx->pc = 0x1522D4u;
    {
        const bool branch_taken_0x1522d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522d4) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1522DCu;
label_1522dc:
    // 0x1522dc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1522dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1522e0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1522e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1522e4: 0x904413f9  lbu         $a0, 0x13F9($v0)
    ctx->pc = 0x1522e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1522e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1522E8u;
    {
        const bool branch_taken_0x1522e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522e8) {
            ctx->pc = 0x1522FCu;
            goto label_1522fc;
        }
    }
    ctx->pc = 0x1522F0u;
    // 0x1522f0: 0x36310001  ori         $s1, $s1, 0x1
    ctx->pc = 0x1522f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x1522f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1522F4u;
    {
        const bool branch_taken_0x1522f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1522f4) {
            ctx->pc = 0x152300u;
            goto label_152300;
        }
    }
    ctx->pc = 0x1522FCu;
label_1522fc:
    // 0x1522fc: 0x36310002  ori         $s1, $s1, 0x2
    ctx->pc = 0x1522fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
label_152300:
    // 0x152300: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x152300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x152304: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x152304u;
    {
        const bool branch_taken_0x152304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152304) {
            ctx->pc = 0x1525D8u;
            goto label_1525d8;
        }
    }
    ctx->pc = 0x15230Cu;
    // 0x15230c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15230cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152310: 0x8c24b708  lw          $a0, -0x48F8($at)
    ctx->pc = 0x152310u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB708u));
    // 0x152314: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x152314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x152318: 0x871025  or          $v0, $a0, $a3
    ctx->pc = 0x152318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x15231c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15231cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152320: 0xac22b708  sw          $v0, -0x48F8($at)
    ctx->pc = 0x152320u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB708u, _value); } while (0);
    // 0x152324: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x152324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x152328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15232c: 0x0  nop
    ctx->pc = 0x15232cu;
    // NOP
    // 0x152330: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152334: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152338: 0x0  nop
    ctx->pc = 0x152338u;
    // NOP
    // 0x15233c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152340: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x152340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x152344: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152344u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152348: 0x0  nop
    ctx->pc = 0x152348u;
    // NOP
    // 0x15234c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152350: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x152350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x152354: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152354u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152358: 0x0  nop
    ctx->pc = 0x152358u;
    // NOP
    // 0x15235c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15235cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152360: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152364: 0x848515ec  lh          $a1, 0x15EC($a0)
    ctx->pc = 0x152364u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152368: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x152368u;
    {
        const bool branch_taken_0x152368 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x152368) {
            ctx->pc = 0x1523C4u;
            goto label_1523c4;
        }
    }
    ctx->pc = 0x152370u;
    // 0x152370: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x152370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x152374: 0x24e4b700  addiu       $a0, $a3, -0x4900
    ctx->pc = 0x152374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948608));
    // 0x152378: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15237c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152380: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152380u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152384: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152384u;
    SET_GPR_U32(ctx, 31, 0x15238Cu);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152384u, 0x15238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15238Cu;
label_15238c:
    // 0x15238c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x15238cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152390: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x152390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152394: 0x2482ffa6  addiu       $v0, $a0, -0x5A
    ctx->pc = 0x152394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967206));
    // 0x152398: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x152398u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x15239c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x15239cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1523a0: 0x84a615ec  lh          $a2, 0x15EC($a1)
    ctx->pc = 0x1523a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1523a4: 0x63c3c  dsll32      $a3, $a2, 16
    ctx->pc = 0x1523a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1523a8: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1523a8u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x1523ac: 0x4e10230  bgez        $a3, . + 4 + (0x230 << 2)
    ctx->pc = 0x1523ACu;
    {
        const bool branch_taken_0x1523ac = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1523ac) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1523B4u;
    // 0x1523b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1523b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1523b8: 0xa48015ec  sh          $zero, 0x15EC($a0)
    ctx->pc = 0x1523b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x1523bc: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x1523BCu;
    {
        const bool branch_taken_0x1523bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1523bc) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1523C4u;
label_1523c4:
    // 0x1523c4: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x1523c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x1523c8: 0x34468000  ori         $a2, $v0, 0x8000
    ctx->pc = 0x1523c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1523cc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1523ccu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1523d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1523d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1523d4: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x1523d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1523d8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1523d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1523dc: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x1523DCu;
    SET_GPR_U32(ctx, 31, 0x1523E4u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x1523DCu, 0x1523E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1523E4u;
label_1523e4:
    // 0x1523e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1523e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1523e8: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x1523e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1523ec: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1523ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1523f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1523f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1523f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1523f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1523f8: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x1523f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x1523fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1523fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152400: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x152400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x152404: 0x24046701  addiu       $a0, $zero, 0x6701
    ctx->pc = 0x152404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    // 0x152408: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152408u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15240c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15240cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152410: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152410u;
    SET_GPR_U32(ctx, 31, 0x152418u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152410u, 0x152418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152418u;
label_152418:
    // 0x152418: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152418u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15241c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x15241Cu;
    SET_GPR_U32(ctx, 31, 0x152424u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x15241Cu, 0x152424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152424u;
label_152424:
    // 0x152424: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152428: 0x8c25b830  lw          $a1, -0x47D0($at)
    ctx->pc = 0x152428u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB830u));
    // 0x15242c: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x15242cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x152430: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x152430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x152434: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152438: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x152438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x15243c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x15243cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x152440: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x152440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x152444: 0x24066104  addiu       $a2, $zero, 0x6104
    ctx->pc = 0x152444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24836));
    // 0x152448: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x152448u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x15244c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15244cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152450: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x152450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152454: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152454u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152458: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152458u;
    SET_GPR_U32(ctx, 31, 0x152460u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152458u, 0x152460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152460u;
label_152460:
    // 0x152460: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152460u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152464: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152464u;
    SET_GPR_U32(ctx, 31, 0x15246Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152464u, 0x15246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15246Cu;
label_15246c:
    // 0x15246c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15246cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152470: 0x8c22b830  lw          $v0, -0x47D0($at)
    ctx->pc = 0x152470u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EB830u));
    // 0x152474: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x152474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152478: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x152478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x15247c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x15247cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152480: 0x31438  dsll        $v0, $v1, 16
    ctx->pc = 0x152480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 16);
    // 0x152484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x152484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152488: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x152488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15248c: 0x24047801  addiu       $a0, $zero, 0x7801
    ctx->pc = 0x15248cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x152490: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152494: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x152494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152498: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152498u;
    SET_GPR_U32(ctx, 31, 0x1524A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152498u, 0x1524A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524A0u;
label_1524a0:
    // 0x1524a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1524a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1524A4u;
    SET_GPR_U32(ctx, 31, 0x1524ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1524A4u, 0x1524ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524ACu;
label_1524ac:
    // 0x1524ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1524acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1524b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1524b4: 0x8c25b830  lw          $a1, -0x47D0($at)
    ctx->pc = 0x1524b4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EB830u));
    // 0x1524b8: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x1524b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1524bc: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1524bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1524c0: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1524c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1524c4: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x1524c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x1524c8: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x1524c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1524cc: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x1524ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x1524d0: 0x24067801  addiu       $a2, $zero, 0x7801
    ctx->pc = 0x1524d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x1524d4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1524d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1524d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1524d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1524dc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1524dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1524e0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1524e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524e4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1524e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1524e8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1524E8u;
    SET_GPR_U32(ctx, 31, 0x1524F0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1524E8u, 0x1524F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524F0u;
label_1524f0:
    // 0x1524f0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1524f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1524f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1524F4u;
    SET_GPR_U32(ctx, 31, 0x1524FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1524F4u, 0x1524FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1524FCu;
label_1524fc:
    // 0x1524fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1524fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152500: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x152500u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x152504: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x152504u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152508: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x152508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x15250c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x15250cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152510: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152514: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x152514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152518: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x152518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x15251c: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x15251cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x152520: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x152520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x152524: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152528: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x152528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15252c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x15252cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152530: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x152530u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152534: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152534u;
    SET_GPR_U32(ctx, 31, 0x15253Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152534u, 0x15253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15253Cu;
label_15253c:
    // 0x15253c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x15253cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152540: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152540u;
    SET_GPR_U32(ctx, 31, 0x152548u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152540u, 0x152548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152548u;
label_152548:
    // 0x152548: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x152548u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15254c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15254cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152550: 0x0  nop
    ctx->pc = 0x152550u;
    // NOP
    // 0x152554: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152558: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15255c: 0x0  nop
    ctx->pc = 0x15255cu;
    // NOP
    // 0x152560: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152568: 0x0  nop
    ctx->pc = 0x152568u;
    // NOP
    // 0x15256c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15256cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152570: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152574: 0x8c24b830  lw          $a0, -0x47D0($at)
    ctx->pc = 0x152574u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EB830u));
    // 0x152578: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x152578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x15257c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15257cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x152580: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152584: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152588: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x152588u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15258c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x15258cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x152590: 0x24060201  addiu       $a2, $zero, 0x201
    ctx->pc = 0x152590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
    // 0x152594: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x152594u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x152598: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152598u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15259c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15259cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1525a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1525a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1525a4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1525a4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1525a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1525A8u;
    SET_GPR_U32(ctx, 31, 0x1525B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1525A8u, 0x1525B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525B0u;
label_1525b0:
    // 0x1525b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1525b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1525b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1525B4u;
    SET_GPR_U32(ctx, 31, 0x1525BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1525B4u, 0x1525BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1525BCu;
label_1525bc:
    // 0x1525bc: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1525bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1525c0: 0xa080157c  sb          $zero, 0x157C($a0)
    ctx->pc = 0x1525c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1525c4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1525c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1525c8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1525c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1525cc: 0xa043157d  sb          $v1, 0x157D($v0)
    ctx->pc = 0x1525ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1525d0: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x1525D0u;
    {
        const bool branch_taken_0x1525d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525d0) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1525D8u;
label_1525d8:
    // 0x1525d8: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x1525d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x1525dc: 0x104001a4  beqz        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x1525DCu;
    {
        const bool branch_taken_0x1525dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1525dc) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1525E4u;
    // 0x1525e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1525e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1525e8: 0x8c27a4a8  lw          $a3, -0x5B58($at)
    ctx->pc = 0x1525e8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA4A8u));
    // 0x1525ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1525ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1525f0: 0xe43025  or          $a2, $a3, $a0
    ctx->pc = 0x1525f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x1525f4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1525f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1525f8: 0xac26a4a8  sw          $a2, -0x5B58($at)
    ctx->pc = 0x1525f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3EA4A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EA4A8u, _value); } while (0);
    // 0x1525fc: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x1525fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x152600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152604: 0x0  nop
    ctx->pc = 0x152604u;
    // NOP
    // 0x152608: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15260c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15260cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152610: 0x0  nop
    ctx->pc = 0x152610u;
    // NOP
    // 0x152614: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152618: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x152618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15261c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15261cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152620: 0x0  nop
    ctx->pc = 0x152620u;
    // NOP
    // 0x152624: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152628: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x152628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15262c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15262cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152630: 0x0  nop
    ctx->pc = 0x152630u;
    // NOP
    // 0x152634: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152638: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15263c: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x15263cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152640: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152640u;
    {
        const bool branch_taken_0x152640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152640) {
            ctx->pc = 0x1526A0u;
            goto label_1526a0;
        }
    }
    ctx->pc = 0x152648u;
    // 0x152648: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x152648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15264c: 0x2444a4a0  addiu       $a0, $v0, -0x5B60
    ctx->pc = 0x15264cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152650: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152650u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152654: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x152654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152658: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x152658u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x15265c: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x15265Cu;
    SET_GPR_U32(ctx, 31, 0x152664u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x15265Cu, 0x152664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152664u;
label_152664:
    // 0x152664: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152664u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152668: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152668u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15266c: 0x84c215ec  lh          $v0, 0x15EC($a2)
    ctx->pc = 0x15266cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 5612)));
    // 0x152670: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x152670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
    // 0x152674: 0xa4c215ec  sh          $v0, 0x15EC($a2)
    ctx->pc = 0x152674u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x152678: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15267c: 0x844315ec  lh          $v1, 0x15EC($v0)
    ctx->pc = 0x15267cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x152680: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x152680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152684: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x152684u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x152688: 0x4410179  bgez        $v0, . + 4 + (0x179 << 2)
    ctx->pc = 0x152688u;
    {
        const bool branch_taken_0x152688 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x152688) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152690u;
    // 0x152690: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152694: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x152694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x152698: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x152698u;
    {
        const bool branch_taken_0x152698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152698) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1526A0u;
label_1526a0:
    // 0x1526a0: 0x3c0744bb  lui         $a3, 0x44BB
    ctx->pc = 0x1526a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17595 << 16));
    // 0x1526a4: 0x34e28000  ori         $v0, $a3, 0x8000
    ctx->pc = 0x1526a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x1526a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1526a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1526ac: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1526acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1526b0: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x1526b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1526b4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1526b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1526b8: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x1526B8u;
    SET_GPR_U32(ctx, 31, 0x1526C0u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x1526B8u, 0x1526C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1526C0u;
label_1526c0:
    // 0x1526c0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1526c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1526c4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1526c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1526c8: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x1526c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1526cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1526ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1526d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1526d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1526d4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1526d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1526d8: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x1526d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x1526dc: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x1526dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1526e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1526e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1526e4: 0x24046701  addiu       $a0, $zero, 0x6701
    ctx->pc = 0x1526e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26369));
    // 0x1526e8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1526e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1526ec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1526ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1526f0: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1526f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1526f4: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1526f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1526f8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1526F8u;
    SET_GPR_U32(ctx, 31, 0x152700u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1526F8u, 0x152700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152700u;
label_152700:
    // 0x152700: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152700u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152704: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152704u;
    SET_GPR_U32(ctx, 31, 0x15270Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152704u, 0x15270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15270Cu;
label_15270c:
    // 0x15270c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x15270cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152710: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152714: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152714u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x152718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15271c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152720: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152724: 0x32c38  dsll        $a1, $v1, 16
    ctx->pc = 0x152724u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 16);
    // 0x152728: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x152728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x15272c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x15272cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152730: 0x24046104  addiu       $a0, $zero, 0x6104
    ctx->pc = 0x152730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24836));
    // 0x152734: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152734u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152738: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x152738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15273c: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x15273cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x152740: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152740u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152744: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152744u;
    SET_GPR_U32(ctx, 31, 0x15274Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152744u, 0x15274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15274Cu;
label_15274c:
    // 0x15274c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x15274cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152750: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x152750u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152754: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152754u;
    SET_GPR_U32(ctx, 31, 0x15275Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152754u, 0x15275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15275Cu;
label_15275c:
    // 0x15275c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x15275cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152760: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152764: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x152768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15276c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15276cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152770: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152774: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x152774u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
    // 0x152778: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x152778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x15277c: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x15277cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152780: 0x24027801  addiu       $v0, $zero, 0x7801
    ctx->pc = 0x152780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x152784: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152788: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15278c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x15278cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152790: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x152790u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x152794: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x152794u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x152798: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152798u;
    SET_GPR_U32(ctx, 31, 0x1527A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152798u, 0x1527A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527A0u;
label_1527a0:
    // 0x1527a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1527a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1527A4u;
    SET_GPR_U32(ctx, 31, 0x1527ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1527A4u, 0x1527ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527ACu;
label_1527ac:
    // 0x1527ac: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1527acu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527b0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1527b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1527b4: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x1527b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1527b8: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x1527b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1527bc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1527bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1527c0: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1527c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1527c4: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x1527c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
    // 0x1527c8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x1527c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1527cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1527ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1527d0: 0x24047801  addiu       $a0, $zero, 0x7801
    ctx->pc = 0x1527d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30721));
    // 0x1527d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1527d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1527d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1527d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1527dc: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x1527dcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1527e0: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1527e0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1527e4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x1527E4u;
    SET_GPR_U32(ctx, 31, 0x1527ECu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x1527E4u, 0x1527ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527ECu;
label_1527ec:
    // 0x1527ec: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1527ecu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527f0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1527F0u;
    SET_GPR_U32(ctx, 31, 0x1527F8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1527F0u, 0x1527F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1527F8u;
label_1527f8:
    // 0x1527f8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1527f8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1527fc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1527fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152800: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152804: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x152804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152808: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x152808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x15280c: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x15280cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152810: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x152810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x152814: 0x3486ffff  ori         $a2, $a0, 0xFFFF
    ctx->pc = 0x152814u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152818: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x152818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x15281c: 0x24041e03  addiu       $a0, $zero, 0x1E03
    ctx->pc = 0x15281cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x152820: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152820u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152824: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x152824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152828: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x152828u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15282c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x15282cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152830: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x152830u;
    SET_GPR_U32(ctx, 31, 0x152838u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x152830u, 0x152838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152838u;
label_152838:
    // 0x152838: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152838u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15283c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x15283cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x152840: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x152840u;
    SET_GPR_U32(ctx, 31, 0x152848u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x152840u, 0x152848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152848u;
label_152848:
    // 0x152848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15284c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15284cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152850: 0x0  nop
    ctx->pc = 0x152850u;
    // NOP
    // 0x152854: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15285c: 0x0  nop
    ctx->pc = 0x15285cu;
    // NOP
    // 0x152860: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x152864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152868: 0x0  nop
    ctx->pc = 0x152868u;
    // NOP
    // 0x15286c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152870: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152874: 0x8c26a5d0  lw          $a2, -0x5A30($at)
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152878: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x152878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x15287c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x15287cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x152880: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x152880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152884: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x152884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x152888: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x152888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x15288c: 0x433824  and         $a3, $v0, $v1
    ctx->pc = 0x15288cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x152890: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x152894: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152894u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152898: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15289c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x15289Cu;
    SET_GPR_U32(ctx, 31, 0x1528A4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x15289Cu, 0x1528A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528A4u;
label_1528a4:
    // 0x1528a4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1528a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1528a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x1528A8u;
    SET_GPR_U32(ctx, 31, 0x1528B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x1528A8u, 0x1528B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528B0u;
label_1528b0:
    // 0x1528b0: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1528b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1528b4: 0xa0e0157c  sb          $zero, 0x157C($a3)
    ctx->pc = 0x1528b4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x1528b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1528b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1528bc: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1528bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1528c0: 0xa0c4157d  sb          $a0, 0x157D($a2)
    ctx->pc = 0x1528c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1528c4: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1528C4u;
    {
        const bool branch_taken_0x1528c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1528c4) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x1528CCu;
label_1528cc:
    // 0x1528cc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x1528ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x1528d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1528d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528d4: 0x0  nop
    ctx->pc = 0x1528d4u;
    // NOP
    // 0x1528d8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1528d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1528dc: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x1528dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x1528e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1528e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528e4: 0x0  nop
    ctx->pc = 0x1528e4u;
    // NOP
    // 0x1528e8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1528e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1528ec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1528ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1528f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1528f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1528f4: 0x0  nop
    ctx->pc = 0x1528f4u;
    // NOP
    // 0x1528f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1528f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1528fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1528fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x152900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152904: 0x0  nop
    ctx->pc = 0x152904u;
    // NOP
    // 0x152908: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15290c: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x15290cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152910: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x152910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x152914: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x152914u;
    {
        const bool branch_taken_0x152914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x152914) {
            ctx->pc = 0x152974u;
            goto label_152974;
        }
    }
    ctx->pc = 0x15291Cu;
    // 0x15291c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x152920: 0x2442a4a0  addiu       $v0, $v0, -0x5B60
    ctx->pc = 0x152920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152924: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152924u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152928: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152928u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15292c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15292cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152930: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152930u;
    SET_GPR_U32(ctx, 31, 0x152938u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152930u, 0x152938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152938u;
label_152938:
    // 0x152938: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x152938u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15293c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x15293cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152940: 0x848615ec  lh          $a2, 0x15EC($a0)
    ctx->pc = 0x152940u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152944: 0x24c2fe3e  addiu       $v0, $a2, -0x1C2
    ctx->pc = 0x152944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966846));
    // 0x152948: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x152948u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x15294c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x15294cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152950: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x152950u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152954: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x152954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152958: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x152958u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x15295c: 0x4c100c4  bgez        $a2, . + 4 + (0xC4 << 2)
    ctx->pc = 0x15295Cu;
    {
        const bool branch_taken_0x15295c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x15295c) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152964u;
    // 0x152964: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152968: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x152968u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x15296c: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x15296Cu;
    {
        const bool branch_taken_0x15296c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15296c) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152974u;
label_152974:
    // 0x152974: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152978: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x152978u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x15297c: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x15297cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x152980: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x152980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x152984: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x152984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152988: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x152988u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15298c: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x15298Cu;
    SET_GPR_U32(ctx, 31, 0x152994u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x15298Cu, 0x152994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152994u;
label_152994:
    // 0x152994: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152998: 0xc054b28  jal         func_152CA0
    ctx->pc = 0x152998u;
    SET_GPR_U32(ctx, 31, 0x1529A0u);
    ctx->pc = 0x152CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152CA0u, 0x152998u, 0x1529A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529A0u;
label_1529a0:
    // 0x1529a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1529a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1529a4: 0x2482a4a0  addiu       $v0, $a0, -0x5B60
    ctx->pc = 0x1529a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x1529a8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1529a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1529ac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1529acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1529b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1529b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1529b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1529b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1529b8: 0x3448ffff  ori         $t0, $v0, 0xFFFF
    ctx->pc = 0x1529b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1529bc: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x1529bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x1529c0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1529c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1529c4: 0x34e40005  ori         $a0, $a3, 0x5
    ctx->pc = 0x1529c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)5);
    // 0x1529c8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1529c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1529cc: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1529ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1529d0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1529d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1529d4: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x1529d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x1529d8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1529d8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1529dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1529dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1529e0: 0x8c23a5d0  lw          $v1, -0x5A30($at)
    ctx->pc = 0x1529e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x1529e4: 0x70603e28  paddub      $a3, $v1, $zero
    ctx->pc = 0x1529e4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1529e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1529e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1529ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1529ECu;
    SET_GPR_U32(ctx, 31, 0x1529F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1529ECu, 0x1529F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1529F4u;
label_1529f4:
    // 0x1529f4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1529f4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1529f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1529f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1529fc: 0xa040157c  sb          $zero, 0x157C($v0)
    ctx->pc = 0x1529fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x152a00: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x152a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152a04: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a08: 0xa082157d  sb          $v0, 0x157D($a0)
    ctx->pc = 0x152a08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x152a0c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x152A0Cu;
    {
        const bool branch_taken_0x152a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a0c) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152A14u;
label_152a14:
    // 0x152a14: 0x3c064396  lui         $a2, 0x4396
    ctx->pc = 0x152a14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17302 << 16));
    // 0x152a18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x152a18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a1c: 0x0  nop
    ctx->pc = 0x152a1cu;
    // NOP
    // 0x152a20: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152a24: 0x3c04c1f0  lui         $a0, 0xC1F0
    ctx->pc = 0x152a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49648 << 16));
    // 0x152a28: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152a28u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a2c: 0x0  nop
    ctx->pc = 0x152a2cu;
    // NOP
    // 0x152a30: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152a34: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x152a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x152a38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152a38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a3c: 0x0  nop
    ctx->pc = 0x152a3cu;
    // NOP
    // 0x152a40: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152a44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x152a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x152a48: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x152a48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152a4c: 0x0  nop
    ctx->pc = 0x152a4cu;
    // NOP
    // 0x152a50: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152a54: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x152a54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a58: 0x84e415ec  lh          $a0, 0x15EC($a3)
    ctx->pc = 0x152a58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5612)));
    // 0x152a5c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152A5Cu;
    {
        const bool branch_taken_0x152a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152a5c) {
            ctx->pc = 0x152ABCu;
            goto label_152abc;
        }
    }
    ctx->pc = 0x152A64u;
    // 0x152a64: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x152a64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x152a68: 0x24c2a4a0  addiu       $v0, $a2, -0x5B60
    ctx->pc = 0x152a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943904));
    // 0x152a6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152a6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152a70: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152a70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152a74: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x152a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152a78: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x152a78u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152a7c: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152A7Cu;
    SET_GPR_U32(ctx, 31, 0x152A84u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152A7Cu, 0x152A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152A84u;
label_152a84:
    // 0x152a84: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a88: 0x848615ec  lh          $a2, 0x15EC($a0)
    ctx->pc = 0x152a88u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152a8c: 0x24c2fe3e  addiu       $v0, $a2, -0x1C2
    ctx->pc = 0x152a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966846));
    // 0x152a90: 0xa48215ec  sh          $v0, 0x15EC($a0)
    ctx->pc = 0x152a90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x152a94: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152a98: 0x849115ec  lh          $s1, 0x15EC($a0)
    ctx->pc = 0x152a98u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x152a9c: 0x118c3c  dsll32      $s1, $s1, 16
    ctx->pc = 0x152a9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 16));
    // 0x152aa0: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x152aa0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x152aa4: 0x6210072  bgez        $s1, . + 4 + (0x72 << 2)
    ctx->pc = 0x152AA4u;
    {
        const bool branch_taken_0x152aa4 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x152aa4) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152AACu;
    // 0x152aac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152ab0: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x152ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x152ab4: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x152AB4u;
    {
        const bool branch_taken_0x152ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152ab4) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152ABCu;
label_152abc:
    // 0x152abc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152ac0: 0x8c24a5d0  lw          $a0, -0x5A30($at)
    ctx->pc = 0x152ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152ac4: 0x3c0247c3  lui         $v0, 0x47C3
    ctx->pc = 0x152ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18371 << 16));
    // 0x152ac8: 0x34475000  ori         $a3, $v0, 0x5000
    ctx->pc = 0x152ac8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x152acc: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x152accu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152ad0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x152ad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x152ad4: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x152AD4u;
    SET_GPR_U32(ctx, 31, 0x152ADCu);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x152AD4u, 0x152ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152ADCu;
label_152adc:
    // 0x152adc: 0xc054b28  jal         func_152CA0
    ctx->pc = 0x152ADCu;
    SET_GPR_U32(ctx, 31, 0x152AE4u);
    ctx->pc = 0x152CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152CA0u, 0x152ADCu, 0x152AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152AE4u;
label_152ae4:
    // 0x152ae4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152ae4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152ae8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x152ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x152aec: 0x2484a4a0  addiu       $a0, $a0, -0x5B60
    ctx->pc = 0x152aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943904));
    // 0x152af0: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x152af0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152af4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x152af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x152af8: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x152af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152afc: 0x72438  dsll        $a0, $a3, 16
    ctx->pc = 0x152afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 16);
    // 0x152b00: 0x3482ffff  ori         $v0, $a0, 0xFFFF
    ctx->pc = 0x152b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x152b04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x152b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x152b08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x152b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x152b0c: 0x34640205  ori         $a0, $v1, 0x205
    ctx->pc = 0x152b0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)517);
    // 0x152b10: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b14: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x152b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152b18: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x152b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x152b1c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152b20: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x152b20u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152b24: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x152b24u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152b28: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x152B28u;
    SET_GPR_U32(ctx, 31, 0x152B30u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x152B28u, 0x152B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152B30u;
label_152b30:
    // 0x152b30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152b30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152b34: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b38: 0xa0c0157c  sb          $zero, 0x157C($a2)
    ctx->pc = 0x152b38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x152b3c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x152b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x152b40: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x152b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b44: 0xa082157d  sb          $v0, 0x157D($a0)
    ctx->pc = 0x152b44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x152b48: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x152B48u;
    {
        const bool branch_taken_0x152b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b48) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152B50u;
label_152b50:
    // 0x152b50: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x152b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x152b54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b58: 0x0  nop
    ctx->pc = 0x152b58u;
    // NOP
    // 0x152b5c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x152b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x152b60: 0x3c02c1f0  lui         $v0, 0xC1F0
    ctx->pc = 0x152b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49648 << 16));
    // 0x152b64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x152b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b68: 0x0  nop
    ctx->pc = 0x152b68u;
    // NOP
    // 0x152b6c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x152b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x152b70: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x152b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x152b74: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x152b74u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b78: 0x0  nop
    ctx->pc = 0x152b78u;
    // NOP
    // 0x152b7c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x152b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x152b80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x152b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x152b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x152b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x152b88: 0x0  nop
    ctx->pc = 0x152b88u;
    // NOP
    // 0x152b8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x152b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x152b90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x152b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152b94: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x152b94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x152b98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x152B98u;
    {
        const bool branch_taken_0x152b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x152b98) {
            ctx->pc = 0x152BF0u;
            goto label_152bf0;
        }
    }
    ctx->pc = 0x152BA0u;
    // 0x152ba0: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x152ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x152ba4: 0x24e4a4a0  addiu       $a0, $a3, -0x5B60
    ctx->pc = 0x152ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294943904));
    // 0x152ba8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x152ba8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152bac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x152bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152bb0: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x152BB0u;
    SET_GPR_U32(ctx, 31, 0x152BB8u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x152BB0u, 0x152BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152BB8u;
label_152bb8:
    // 0x152bb8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x152bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152bbc: 0x84a415ec  lh          $a0, 0x15EC($a1)
    ctx->pc = 0x152bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x152bc0: 0x2483fc7c  addiu       $v1, $a0, -0x384
    ctx->pc = 0x152bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966396));
    // 0x152bc4: 0xa4a315ec  sh          $v1, 0x15EC($a1)
    ctx->pc = 0x152bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 3));
    // 0x152bc8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152bcc: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x152bccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x152bd0: 0x33c3c  dsll32      $a3, $v1, 16
    ctx->pc = 0x152bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 16));
    // 0x152bd4: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x152bd4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x152bd8: 0x4e10025  bgez        $a3, . + 4 + (0x25 << 2)
    ctx->pc = 0x152BD8u;
    {
        const bool branch_taken_0x152bd8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x152bd8) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152BE0u;
    // 0x152be0: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152be4: 0xa4c015ec  sh          $zero, 0x15EC($a2)
    ctx->pc = 0x152be4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x152be8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x152BE8u;
    {
        const bool branch_taken_0x152be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152be8) {
            ctx->pc = 0x152C70u;
            goto label_152c70;
        }
    }
    ctx->pc = 0x152BF0u;
label_152bf0:
    // 0x152bf0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152bf4: 0x8c22a5d0  lw          $v0, -0x5A30($at)
    ctx->pc = 0x152bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152bf8: 0x3c04437a  lui         $a0, 0x437A
    ctx->pc = 0x152bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17274 << 16));
    // 0x152bfc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x152bfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x152c00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152c00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152c04: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x152c04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x152c08: 0xc074300  jal         func_1D0C00
    ctx->pc = 0x152C08u;
    SET_GPR_U32(ctx, 31, 0x152C10u);
    ctx->pc = 0x1D0C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C00u, 0x152C08u, 0x152C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C10u;
label_152c10:
    // 0x152c10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x152c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x152c14: 0x2444a4a0  addiu       $a0, $v0, -0x5B60
    ctx->pc = 0x152c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943904));
    // 0x152c18: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x152c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152c1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x152c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x152c20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x152c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x152c24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x152c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x152c28: 0x3447ffff  ori         $a3, $v0, 0xFFFF
    ctx->pc = 0x152c28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x152c2c: 0x672024  and         $a0, $v1, $a3
    ctx->pc = 0x152c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x152c30: 0x4303c  dsll32      $a2, $a0, 0
    ctx->pc = 0x152c30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) << (32 + 0));
    // 0x152c34: 0x34c20005  ori         $v0, $a2, 0x5
    ctx->pc = 0x152c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)5);
    // 0x152c38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x152c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152c3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x152c3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x152c40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x152c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x152c44: 0x246600d0  addiu       $a2, $v1, 0xD0
    ctx->pc = 0x152c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x152c48: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x152c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x152c4c: 0x8c27a5d0  lw          $a3, -0x5A30($at)
    ctx->pc = 0x152c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3EA5D0u));
    // 0x152c50: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x152c50u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x152c54: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x152C54u;
    SET_GPR_U32(ctx, 31, 0x152C5Cu);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x152C54u, 0x152C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C5Cu;
label_152c5c:
    // 0x152c5c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x152c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152c60: 0xa0e0157c  sb          $zero, 0x157C($a3)
    ctx->pc = 0x152c60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 5500), (uint8_t)GPR_U32(ctx, 0));
    // 0x152c64: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x152c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x152c68: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x152c68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x152c6c: 0xa0c3157d  sb          $v1, 0x157D($a2)
    ctx->pc = 0x152c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5501), (uint8_t)GPR_U32(ctx, 3));
label_152c70:
    // 0x152c70: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x152c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x152c74: 0xc054568  jal         func_1515A0
    ctx->pc = 0x152C74u;
    SET_GPR_U32(ctx, 31, 0x152C7Cu);
    ctx->pc = 0x1515A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1515A0u, 0x152C74u, 0x152C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C7Cu;
label_152c7c:
    // 0x152c7c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x152c7cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x152c80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152c80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152c88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x152c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x152c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x152C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C94u;
}
