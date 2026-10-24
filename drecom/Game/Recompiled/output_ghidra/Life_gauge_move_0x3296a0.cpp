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

// Function: Life_gauge_move
// Address: 0x3296a0 - 0x32a148
void Life_gauge_move_0x3296a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Life_gauge_move_0x3296a0");
#endif

    switch (ctx->pc) {
        case 0x329e08u: goto label_329e08;
        case 0x329e20u: goto label_329e20;
        default: break;
    }

    ctx->pc = 0x3296a0u;

    // 0x3296a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3296a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3296a4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x3296a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x3296a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3296a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3296ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3296acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3296b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3296b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3296b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3296b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3296b8: 0x3c030086  lui         $v1, 0x86
    ctx->pc = 0x3296b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)134 << 16));
    // 0x3296bc: 0x2463c2f0  addiu       $v1, $v1, -0x3D10
    ctx->pc = 0x3296bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951664));
    // 0x3296c0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x3296c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x3296c4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3296c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3296c8: 0x2471dbc0  addiu       $s1, $v1, -0x2440
    ctx->pc = 0x3296c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x3296cc: 0x72209628  paddub      $s2, $s1, $zero
    ctx->pc = 0x3296ccu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3296d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3296d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3296d4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x3296d4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3296d8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3296d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x3296dc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3296dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3296e0: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3296E0u;
    {
        const bool branch_taken_0x3296e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3296e0) {
            ctx->pc = 0x329710u;
            goto label_329710;
        }
    }
    ctx->pc = 0x3296E8u;
    // 0x3296e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3296e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3296ec: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x3296ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3296f0: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x3296f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x3296f4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3296F4u;
    {
        const bool branch_taken_0x3296f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3296f4) {
            ctx->pc = 0x329710u;
            goto label_329710;
        }
    }
    ctx->pc = 0x3296FCu;
    // 0x3296fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3296fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329700: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x329700u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x329704: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x329704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x329708: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329708u;
    {
        const bool branch_taken_0x329708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329708) {
            ctx->pc = 0x32974Cu;
            goto label_32974c;
        }
    }
    ctx->pc = 0x329710u;
label_329710:
    // 0x329710: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x329710u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329714: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329718: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329718u;
    {
        const bool branch_taken_0x329718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329718) {
            ctx->pc = 0x32973Cu;
            goto label_32973c;
        }
    }
    ctx->pc = 0x329720u;
    // 0x329720: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x329720u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x329724: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329728: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329728u;
    {
        const bool branch_taken_0x329728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329728) {
            ctx->pc = 0x32973Cu;
            goto label_32973c;
        }
    }
    ctx->pc = 0x329730u;
    // 0x329730: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329734: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329738: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x329738u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
label_32973c:
    // 0x32973c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329740: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x329740u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x329744: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x329744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x329748: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x329748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
label_32974c:
    // 0x32974c: 0x92032905  lbu         $v1, 0x2905($s0)
    ctx->pc = 0x32974cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10501)));
    // 0x329750: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329754: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x329754u;
    {
        const bool branch_taken_0x329754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329754) {
            ctx->pc = 0x329838u;
            goto label_329838;
        }
    }
    ctx->pc = 0x32975Cu;
    // 0x32975c: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x32975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x329760: 0x8c24af78  lw          $a0, -0x5088($at)
    ctx->pc = 0x329760u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF78u));
    // 0x329764: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329764u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329768: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32976c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32976cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329770: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x329770u;
    {
        const bool branch_taken_0x329770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329770) {
            ctx->pc = 0x329838u;
            goto label_329838;
        }
    }
    ctx->pc = 0x329778u;
    // 0x329778: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x329778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x32977c: 0x8c24af78  lw          $a0, -0x5088($at)
    ctx->pc = 0x32977cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x85AF78u));
    // 0x329780: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329784: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329788: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329788u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32978c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x32978cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x329790: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x329790u;
    {
        const bool branch_taken_0x329790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x329790) {
            ctx->pc = 0x3297DCu;
            goto label_3297dc;
        }
    }
    ctx->pc = 0x329798u;
    // 0x329798: 0x92032905  lbu         $v1, 0x2905($s0)
    ctx->pc = 0x329798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10501)));
    // 0x32979c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32979cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3297a0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3297A0u;
    {
        const bool branch_taken_0x3297a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3297a0) {
            ctx->pc = 0x3297BCu;
            goto label_3297bc;
        }
    }
    ctx->pc = 0x3297A8u;
    // 0x3297a8: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3297a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3297ac: 0x8c23af78  lw          $v1, -0x5088($at)
    ctx->pc = 0x3297acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x85AF78u));
    // 0x3297b0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3297b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3297b4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3297b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3297b8: 0xa603290a  sh          $v1, 0x290A($s0)
    ctx->pc = 0x3297b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10506), (uint16_t)GPR_U32(ctx, 3));
label_3297bc:
    // 0x3297bc: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3297bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3297c0: 0xa603290c  sh          $v1, 0x290C($s0)
    ctx->pc = 0x3297c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10508), (uint16_t)GPR_U32(ctx, 3));
    // 0x3297c4: 0xa2002904  sb          $zero, 0x2904($s0)
    ctx->pc = 0x3297c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 0));
    // 0x3297c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3297c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3297cc: 0xa2032905  sb          $v1, 0x2905($s0)
    ctx->pc = 0x3297ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10501), (uint8_t)GPR_U32(ctx, 3));
    // 0x3297d0: 0xa2002909  sb          $zero, 0x2909($s0)
    ctx->pc = 0x3297d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10505), (uint8_t)GPR_U32(ctx, 0));
    // 0x3297d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3297D4u;
    {
        const bool branch_taken_0x3297d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3297d4) {
            ctx->pc = 0x3297E8u;
            goto label_3297e8;
        }
    }
    ctx->pc = 0x3297DCu;
label_3297dc:
    // 0x3297dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3297dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3297e0: 0xa2032904  sb          $v1, 0x2904($s0)
    ctx->pc = 0x3297e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 3));
    // 0x3297e4: 0xae00282c  sw          $zero, 0x282C($s0)
    ctx->pc = 0x3297e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10284), GPR_U32(ctx, 0));
label_3297e8:
    // 0x3297e8: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3297e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3297ec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3297ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3297f0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3297f0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3297f4: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x3297f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x3297f8: 0xac23af78  sw          $v1, -0x5088($at)
    ctx->pc = 0x3297f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x85AF78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x85AF78u, _value); } while (0);
    // 0x3297fc: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3297fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329800: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329804: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329804u;
    {
        const bool branch_taken_0x329804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329804) {
            ctx->pc = 0x329828u;
            goto label_329828;
        }
    }
    ctx->pc = 0x32980Cu;
    // 0x32980c: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x32980cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x329810: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329814: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329814u;
    {
        const bool branch_taken_0x329814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329814) {
            ctx->pc = 0x329828u;
            goto label_329828;
        }
    }
    ctx->pc = 0x32981Cu;
    // 0x32981c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32981cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329820: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329820u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329824: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x329824u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
label_329828:
    // 0x329828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32982c: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x32982cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x329830: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x329830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x329834: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x329834u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
label_329838:
    // 0x329838: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x329838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x32983c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32983cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329844: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x329844u;
    {
        const bool branch_taken_0x329844 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329844) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x32984Cu;
    // 0x32984c: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x32984cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329850: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329854: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329858: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x329858u;
    {
        const bool branch_taken_0x329858 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329858) {
            ctx->pc = 0x329894u;
            goto label_329894;
        }
    }
    ctx->pc = 0x329860u;
    // 0x329860: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x329860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x329864: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x329864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x329868: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x32986c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x32986cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x329870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329874: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x329874u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x329878: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x329878u;
    {
        const bool branch_taken_0x329878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329878) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x329880u;
    // 0x329880: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329884: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329884u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329888: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x329888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x32988c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x32988Cu;
    {
        const bool branch_taken_0x32988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32988c) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x329894u;
label_329894:
    // 0x329894: 0x86040010  lh          $a0, 0x10($s0)
    ctx->pc = 0x329894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x329898: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x329898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x32989c: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x32989cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x3298a0: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x3298a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x3298a4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3298a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3298a8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3298a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3298ac: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x3298ACu;
    {
        const bool branch_taken_0x3298ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3298ac) {
            ctx->pc = 0x3298D8u;
            goto label_3298d8;
        }
    }
    ctx->pc = 0x3298B4u;
    // 0x3298b4: 0xa6000010  sh          $zero, 0x10($s0)
    ctx->pc = 0x3298b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x3298b8: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x3298b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x3298bc: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3298bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3298c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3298c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3298c4: 0x0  nop
    ctx->pc = 0x3298c4u;
    // NOP
    // 0x3298c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3298c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3298cc: 0xe6002824  swc1        $f0, 0x2824($s0)
    ctx->pc = 0x3298ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
    // 0x3298d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3298d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3298d4: 0xa2032904  sb          $v1, 0x2904($s0)
    ctx->pc = 0x3298d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10500), (uint8_t)GPR_U32(ctx, 3));
label_3298d8:
    // 0x3298d8: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x3298d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3298dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3298dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3298e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3298e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3298e4: 0x14830086  bne         $a0, $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x3298E4u;
    {
        const bool branch_taken_0x3298e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3298e4) {
            ctx->pc = 0x329B00u;
            goto label_329b00;
        }
    }
    ctx->pc = 0x3298ECu;
    // 0x3298ec: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x3298ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3298f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3298f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3298f4: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x3298f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x3298f8: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3298f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3298fc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3298fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329900: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329900u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329904: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x329904u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x329908: 0x1420006a  bnez        $at, . + 4 + (0x6A << 2)
    ctx->pc = 0x329908u;
    {
        const bool branch_taken_0x329908 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x329908) {
            ctx->pc = 0x329AB4u;
            goto label_329ab4;
        }
    }
    ctx->pc = 0x329910u;
    // 0x329910: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329910u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329914: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329918: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x329918u;
    {
        const bool branch_taken_0x329918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329918) {
            ctx->pc = 0x329994u;
            goto label_329994;
        }
    }
    ctx->pc = 0x329920u;
    // 0x329920: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329924: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329924u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32992c: 0x0  nop
    ctx->pc = 0x32992cu;
    // NOP
    // 0x329930: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329934: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x329934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329938: 0x0  nop
    ctx->pc = 0x329938u;
    // NOP
    // 0x32993c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x32993Cu;
    {
        const bool branch_taken_0x32993c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32993c) {
            ctx->pc = 0x329988u;
            goto label_329988;
        }
    }
    ctx->pc = 0x329944u;
    // 0x329944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329948: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x329948u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x32994c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x32994cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x329950: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329954: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x329954u;
    {
        const bool branch_taken_0x329954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329954) {
            ctx->pc = 0x329988u;
            goto label_329988;
        }
    }
    ctx->pc = 0x32995Cu;
    // 0x32995c: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x32995cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x329960: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329964: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329968: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329968u;
    {
        const bool branch_taken_0x329968 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x329968) {
            ctx->pc = 0x329988u;
            goto label_329988;
        }
    }
    ctx->pc = 0x329970u;
    // 0x329970: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329974: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329978: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329978u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x32997c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x32997cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329980: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329980u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329984: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_329988:
    // 0x329988: 0xae002828  sw          $zero, 0x2828($s0)
    ctx->pc = 0x329988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 0));
    // 0x32998c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x32998Cu;
    {
        const bool branch_taken_0x32998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32998c) {
            ctx->pc = 0x329AD0u;
            goto label_329ad0;
        }
    }
    ctx->pc = 0x329994u;
label_329994:
    // 0x329994: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329994u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329998: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329998u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32999c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3299a0: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x3299A0u;
    {
        const bool branch_taken_0x3299a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3299a0) {
            ctx->pc = 0x329A2Cu;
            goto label_329a2c;
        }
    }
    ctx->pc = 0x3299A8u;
    // 0x3299a8: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x3299a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3299ac: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x3299acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x3299b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3299b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3299b4: 0x0  nop
    ctx->pc = 0x3299b4u;
    // NOP
    // 0x3299b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3299b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3299bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3299bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3299c0: 0x0  nop
    ctx->pc = 0x3299c0u;
    // NOP
    // 0x3299c4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x3299C4u;
    {
        const bool branch_taken_0x3299c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3299c4) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x3299CCu;
    // 0x3299cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3299ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3299d0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x3299d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x3299d4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3299d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3299d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3299d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3299dc: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3299DCu;
    {
        const bool branch_taken_0x3299dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3299dc) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x3299E4u;
    // 0x3299e4: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x3299e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x3299e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3299e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3299ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3299ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3299f0: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x3299F0u;
    {
        const bool branch_taken_0x3299f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3299f0) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x3299F8u;
    // 0x3299f8: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x3299f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x3299fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3299fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329a00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329A00u;
    {
        const bool branch_taken_0x329a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a00) {
            ctx->pc = 0x329A20u;
            goto label_329a20;
        }
    }
    ctx->pc = 0x329A08u;
    // 0x329a08: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329a08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a10: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329a10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329a14: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329a18: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329a18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329a1c: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_329a20:
    // 0x329a20: 0xae002828  sw          $zero, 0x2828($s0)
    ctx->pc = 0x329a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 0));
    // 0x329a24: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x329A24u;
    {
        const bool branch_taken_0x329a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329a24) {
            ctx->pc = 0x329AD0u;
            goto label_329ad0;
        }
    }
    ctx->pc = 0x329A2Cu;
label_329a2c:
    // 0x329a2c: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329a30: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329a34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x329a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x329a38: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x329A38u;
    {
        const bool branch_taken_0x329a38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329a38) {
            ctx->pc = 0x329AD0u;
            goto label_329ad0;
        }
    }
    ctx->pc = 0x329A40u;
    // 0x329a40: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329a44: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x329a44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x329a48: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x329a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x329a4c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329a50: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x329A50u;
    {
        const bool branch_taken_0x329a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a50) {
            ctx->pc = 0x329AA8u;
            goto label_329aa8;
        }
    }
    ctx->pc = 0x329A58u;
    // 0x329a58: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329a58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329a5c: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x329a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x329a60: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x329a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x329a64: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329A64u;
    {
        const bool branch_taken_0x329a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a64) {
            ctx->pc = 0x329AA8u;
            goto label_329aa8;
        }
    }
    ctx->pc = 0x329A6Cu;
    // 0x329a6c: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x329a6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x329a70: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329a74: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329a74u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329a78: 0x461000b  bgez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x329A78u;
    {
        const bool branch_taken_0x329a78 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x329a78) {
            ctx->pc = 0x329AA8u;
            goto label_329aa8;
        }
    }
    ctx->pc = 0x329A80u;
    // 0x329a80: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x329a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x329a84: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329a88: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329A88u;
    {
        const bool branch_taken_0x329a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329a88) {
            ctx->pc = 0x329AA8u;
            goto label_329aa8;
        }
    }
    ctx->pc = 0x329A90u;
    // 0x329a90: 0xa600000a  sh          $zero, 0xA($s0)
    ctx->pc = 0x329a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x329a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329a98: 0xa203000d  sb          $v1, 0xD($s0)
    ctx->pc = 0x329a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x329a9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x329a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x329aa0: 0xa6030010  sh          $v1, 0x10($s0)
    ctx->pc = 0x329aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x329aa4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x329aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_329aa8:
    // 0x329aa8: 0xae002828  sw          $zero, 0x2828($s0)
    ctx->pc = 0x329aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 0));
    // 0x329aac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329AACu;
    {
        const bool branch_taken_0x329aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329aac) {
            ctx->pc = 0x329AD0u;
            goto label_329ad0;
        }
    }
    ctx->pc = 0x329AB4u;
label_329ab4:
    // 0x329ab4: 0x8e032828  lw          $v1, 0x2828($s0)
    ctx->pc = 0x329ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10280)));
    // 0x329ab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329abc: 0xae032828  sw          $v1, 0x2828($s0)
    ctx->pc = 0x329abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 3));
    // 0x329ac0: 0x28630062  slti        $v1, $v1, 0x62
    ctx->pc = 0x329ac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x329ac4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329AC4u;
    {
        const bool branch_taken_0x329ac4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ac4) {
            ctx->pc = 0x329AD0u;
            goto label_329ad0;
        }
    }
    ctx->pc = 0x329ACCu;
    // 0x329acc: 0xae002828  sw          $zero, 0x2828($s0)
    ctx->pc = 0x329accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10280), GPR_U32(ctx, 0));
label_329ad0:
    // 0x329ad0: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329ad4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329ad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329ad8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329adc: 0x14830008  bne         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x329ADCu;
    {
        const bool branch_taken_0x329adc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329adc) {
            ctx->pc = 0x329B00u;
            goto label_329b00;
        }
    }
    ctx->pc = 0x329AE4u;
    // 0x329ae4: 0x8e03282c  lw          $v1, 0x282C($s0)
    ctx->pc = 0x329ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10284)));
    // 0x329ae8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329aec: 0xae03282c  sw          $v1, 0x282C($s0)
    ctx->pc = 0x329aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10284), GPR_U32(ctx, 3));
    // 0x329af0: 0x2863004e  slti        $v1, $v1, 0x4E
    ctx->pc = 0x329af0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)78) ? 1 : 0);
    // 0x329af4: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329AF4u;
    {
        const bool branch_taken_0x329af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329af4) {
            ctx->pc = 0x329B00u;
            goto label_329b00;
        }
    }
    ctx->pc = 0x329AFCu;
    // 0x329afc: 0xae00282c  sw          $zero, 0x282C($s0)
    ctx->pc = 0x329afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 10284), GPR_U32(ctx, 0));
label_329b00:
    // 0x329b00: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329b00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329b04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329b04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329b08: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329B08u;
    {
        const bool branch_taken_0x329b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329b08) {
            ctx->pc = 0x329B24u;
            goto label_329b24;
        }
    }
    ctx->pc = 0x329B10u;
    // 0x329b10: 0x8603290a  lh          $v1, 0x290A($s0)
    ctx->pc = 0x329b10u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10506)));
    // 0x329b14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b18: 0x0  nop
    ctx->pc = 0x329b18u;
    // NOP
    // 0x329b1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329b20: 0xe6002824  swc1        $f0, 0x2824($s0)
    ctx->pc = 0x329b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
label_329b24:
    // 0x329b24: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329b24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329b28: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329b2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329b30: 0x14830010  bne         $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329B30u;
    {
        const bool branch_taken_0x329b30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329b30) {
            ctx->pc = 0x329B74u;
            goto label_329b74;
        }
    }
    ctx->pc = 0x329B38u;
    // 0x329b38: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329b3c: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329b3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329b40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b44: 0x0  nop
    ctx->pc = 0x329b44u;
    // NOP
    // 0x329b48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329b4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329b4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329b50: 0x0  nop
    ctx->pc = 0x329b50u;
    // NOP
    // 0x329b54: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x329B54u;
    {
        const bool branch_taken_0x329b54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329b54) {
            ctx->pc = 0x329B74u;
            goto label_329b74;
        }
    }
    ctx->pc = 0x329B5Cu;
    // 0x329b5c: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329b60: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x329b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x329b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b68: 0x0  nop
    ctx->pc = 0x329b68u;
    // NOP
    // 0x329b6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x329b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x329b70: 0xe6002824  swc1        $f0, 0x2824($s0)
    ctx->pc = 0x329b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 10276), bits); }
label_329b74:
    // 0x329b74: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329b78: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329b80: 0x0  nop
    ctx->pc = 0x329b80u;
    // NOP
    // 0x329b84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329b84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329b88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329b8c: 0x0  nop
    ctx->pc = 0x329b8cu;
    // NOP
    // 0x329b90: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x329B90u;
    {
        const bool branch_taken_0x329b90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x329b90) {
            ctx->pc = 0x329BCCu;
            goto label_329bcc;
        }
    }
    ctx->pc = 0x329B98u;
    // 0x329b98: 0x9203290f  lbu         $v1, 0x290F($s0)
    ctx->pc = 0x329b98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10511)));
    // 0x329b9c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329b9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329ba4: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x329BA4u;
    {
        const bool branch_taken_0x329ba4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329ba4) {
            ctx->pc = 0x329BCCu;
            goto label_329bcc;
        }
    }
    ctx->pc = 0x329BACu;
    // 0x329bac: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x329bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x329bb0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329bb4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x329BB4u;
    {
        const bool branch_taken_0x329bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329bb4) {
            ctx->pc = 0x329BCCu;
            goto label_329bcc;
        }
    }
    ctx->pc = 0x329BBCu;
    // 0x329bbc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329bc0: 0xa203290e  sb          $v1, 0x290E($s0)
    ctx->pc = 0x329bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10510), (uint8_t)GPR_U32(ctx, 3));
    // 0x329bc4: 0xa6002910  sh          $zero, 0x2910($s0)
    ctx->pc = 0x329bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10512), (uint16_t)GPR_U32(ctx, 0));
    // 0x329bc8: 0xa200290f  sb          $zero, 0x290F($s0)
    ctx->pc = 0x329bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10511), (uint8_t)GPR_U32(ctx, 0));
label_329bcc:
    // 0x329bcc: 0x9203290f  lbu         $v1, 0x290F($s0)
    ctx->pc = 0x329bccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10511)));
    // 0x329bd0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329bd4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x329BD4u;
    {
        const bool branch_taken_0x329bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329bd4) {
            ctx->pc = 0x329C08u;
            goto label_329c08;
        }
    }
    ctx->pc = 0x329BDCu;
    // 0x329bdc: 0xc6012824  lwc1        $f1, 0x2824($s0)
    ctx->pc = 0x329bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x329be0: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329be4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329be8: 0x0  nop
    ctx->pc = 0x329be8u;
    // NOP
    // 0x329bec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329bf0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x329bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x329bf4: 0x0  nop
    ctx->pc = 0x329bf4u;
    // NOP
    // 0x329bf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x329BF8u;
    {
        const bool branch_taken_0x329bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x329bf8) {
            ctx->pc = 0x329C08u;
            goto label_329c08;
        }
    }
    ctx->pc = 0x329C00u;
    // 0x329c00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329c04: 0xa203290f  sb          $v1, 0x290F($s0)
    ctx->pc = 0x329c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10511), (uint8_t)GPR_U32(ctx, 3));
label_329c08:
    // 0x329c08: 0x9203290e  lbu         $v1, 0x290E($s0)
    ctx->pc = 0x329c08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10510)));
    // 0x329c0c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329c0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329c10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329c14: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x329C14u;
    {
        const bool branch_taken_0x329c14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329c14) {
            ctx->pc = 0x329C3Cu;
            goto label_329c3c;
        }
    }
    ctx->pc = 0x329C1Cu;
    // 0x329c1c: 0x86032910  lh          $v1, 0x2910($s0)
    ctx->pc = 0x329c1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10512)));
    // 0x329c20: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329c24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329c24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329c28: 0x601826  xor         $v1, $v1, $zero
    ctx->pc = 0x329c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 0));
    // 0x329c2c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x329c2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x329c30: 0x86032910  lh          $v1, 0x2910($s0)
    ctx->pc = 0x329c30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10512)));
    // 0x329c34: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329c38: 0xa6032910  sh          $v1, 0x2910($s0)
    ctx->pc = 0x329c38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10512), (uint16_t)GPR_U32(ctx, 3));
label_329c3c:
    // 0x329c3c: 0x86032910  lh          $v1, 0x2910($s0)
    ctx->pc = 0x329c3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10512)));
    // 0x329c40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x329c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x329c44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x329c44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x329c48: 0x2863001c  slti        $v1, $v1, 0x1C
    ctx->pc = 0x329c48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x329c4c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329C4Cu;
    {
        const bool branch_taken_0x329c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329c4c) {
            ctx->pc = 0x329C58u;
            goto label_329c58;
        }
    }
    ctx->pc = 0x329C54u;
    // 0x329c54: 0xa200290e  sb          $zero, 0x290E($s0)
    ctx->pc = 0x329c54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10510), (uint8_t)GPR_U32(ctx, 0));
label_329c58:
    // 0x329c58: 0x92032905  lbu         $v1, 0x2905($s0)
    ctx->pc = 0x329c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10501)));
    // 0x329c5c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329c5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329c64: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x329C64u;
    {
        const bool branch_taken_0x329c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329c64) {
            ctx->pc = 0x329C78u;
            goto label_329c78;
        }
    }
    ctx->pc = 0x329C6Cu;
    // 0x329c6c: 0x92032909  lbu         $v1, 0x2909($s0)
    ctx->pc = 0x329c6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10505)));
    // 0x329c70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x329c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x329c74: 0xa2032909  sb          $v1, 0x2909($s0)
    ctx->pc = 0x329c74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10505), (uint8_t)GPR_U32(ctx, 3));
label_329c78:
    // 0x329c78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329c7c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329c80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329c84: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329c88: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x329C88u;
    {
        const bool branch_taken_0x329c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329c88) {
            ctx->pc = 0x329C94u;
            goto label_329c94;
        }
    }
    ctx->pc = 0x329C90u;
    // 0x329c90: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x329c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
label_329c94:
    // 0x329c94: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x329c94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x329c98: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329c9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329ca0: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x329CA0u;
    {
        const bool branch_taken_0x329ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329ca0) {
            ctx->pc = 0x329CD4u;
            goto label_329cd4;
        }
    }
    ctx->pc = 0x329CA8u;
    // 0x329ca8: 0x9203000d  lbu         $v1, 0xD($s0)
    ctx->pc = 0x329ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x329cac: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329cb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329cb4: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x329CB4u;
    {
        const bool branch_taken_0x329cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x329cb4) {
            ctx->pc = 0x329CD4u;
            goto label_329cd4;
        }
    }
    ctx->pc = 0x329CBCu;
    // 0x329cbc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329cc0: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329cc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329cc8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329ccc: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x329CCCu;
    {
        const bool branch_taken_0x329ccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ccc) {
            ctx->pc = 0x32A128u;
            goto label_32a128;
        }
    }
    ctx->pc = 0x329CD4u;
label_329cd4:
    // 0x329cd4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329cd8: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329cdc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329ce0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329ce4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x329CE4u;
    {
        const bool branch_taken_0x329ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329ce4) {
            ctx->pc = 0x329D34u;
            goto label_329d34;
        }
    }
    ctx->pc = 0x329CECu;
    // 0x329cec: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329cf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329cf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329cf4: 0x0  nop
    ctx->pc = 0x329cf4u;
    // NOP
    // 0x329cf8: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x329cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x329cfc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d04: 0x0  nop
    ctx->pc = 0x329d04u;
    // NOP
    // 0x329d08: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x329d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x329d0c: 0x3c034377  lui         $v1, 0x4377
    ctx->pc = 0x329d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17271 << 16));
    // 0x329d10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d14: 0x0  nop
    ctx->pc = 0x329d14u;
    // NOP
    // 0x329d18: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x329d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x329d1c: 0x3c034284  lui         $v1, 0x4284
    ctx->pc = 0x329d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17028 << 16));
    // 0x329d20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d24: 0x0  nop
    ctx->pc = 0x329d24u;
    // NOP
    // 0x329d28: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x329d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x329d2c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x329D2Cu;
    {
        const bool branch_taken_0x329d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329d2c) {
            ctx->pc = 0x329DD4u;
            goto label_329dd4;
        }
    }
    ctx->pc = 0x329D34u;
label_329d34:
    // 0x329d34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d3c: 0x0  nop
    ctx->pc = 0x329d3cu;
    // NOP
    // 0x329d40: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x329d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x329d44: 0x3c0343bc  lui         $v1, 0x43BC
    ctx->pc = 0x329d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17340 << 16));
    // 0x329d48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d4c: 0x0  nop
    ctx->pc = 0x329d4cu;
    // NOP
    // 0x329d50: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x329d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x329d54: 0x3c034377  lui         $v1, 0x4377
    ctx->pc = 0x329d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17271 << 16));
    // 0x329d58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d5c: 0x0  nop
    ctx->pc = 0x329d5cu;
    // NOP
    // 0x329d60: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x329d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x329d64: 0x3c0343dc  lui         $v1, 0x43DC
    ctx->pc = 0x329d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17372 << 16));
    // 0x329d68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d6c: 0x0  nop
    ctx->pc = 0x329d6cu;
    // NOP
    // 0x329d70: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x329d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x329d74: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x329d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x329d78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329d78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x329d7c: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x329d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x329d80: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x329d80u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329d84: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x329d84u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329d88: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x329d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x329d8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329d8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329d90: 0x0  nop
    ctx->pc = 0x329d90u;
    // NOP
    // 0x329d94: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x329d94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x329d98: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x329d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329d9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329d9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329da0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x329da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x329da4: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x329da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x329da8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x329dac: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x329dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x329db0: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x329db0u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329db4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x329db4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329db8: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x329db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x329dbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329dbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329dc0: 0x0  nop
    ctx->pc = 0x329dc0u;
    // NOP
    // 0x329dc4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x329dc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x329dc8: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x329dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329dcc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329dccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329dd0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x329dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_329dd4:
    // 0x329dd4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x329dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x329dd8: 0x2473a310  addiu       $s3, $v1, -0x5CF0
    ctx->pc = 0x329dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943504));
    // 0x329ddc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x329ddcu;
    { uint32_t bits = FAST_READ32(0x39A314u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329de0: 0xe6000820  swc1        $f0, 0x820($s0)
    ctx->pc = 0x329de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2080), bits); }
    // 0x329de4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x329de4u;
    { uint32_t bits = FAST_READ32(0x39A318u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329de8: 0xe6000824  swc1        $f0, 0x824($s0)
    ctx->pc = 0x329de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2084), bits); }
    // 0x329dec: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x329decu;
    { uint32_t bits = FAST_READ32(0x39A31Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329df0: 0xe6000828  swc1        $f0, 0x828($s0)
    ctx->pc = 0x329df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2088), bits); }
    // 0x329df4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x329df4u;
    { uint32_t bits = FAST_READ32(0x39A320u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329df8: 0xe600082c  swc1        $f0, 0x82C($s0)
    ctx->pc = 0x329df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2092), bits); }
    // 0x329dfc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x329dfcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x329e00: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x329E00u;
    {
        const bool branch_taken_0x329e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e00) {
            ctx->pc = 0x32A118u;
            goto label_32a118;
        }
    }
    ctx->pc = 0x329E08u;
label_329e08:
    // 0x329e08: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x329e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x329e0c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x329e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x329e10: 0x24441020  addiu       $a0, $v0, 0x1020
    ctx->pc = 0x329e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4128));
    // 0x329e14: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x329e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x329e18: 0xc040c9e  jal         func_103278
    ctx->pc = 0x329E18u;
    SET_GPR_U32(ctx, 31, 0x329E20u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x329E20u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x329E20u) { return; }
    ctx->pc = 0x329E20u;
label_329e20:
    // 0x329e20: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329e20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329e24: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x329e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329e28: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329E28u;
    {
        const bool branch_taken_0x329e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329e28) {
            ctx->pc = 0x329E54u;
            goto label_329e54;
        }
    }
    ctx->pc = 0x329E30u;
    // 0x329e30: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329e38: 0x0  nop
    ctx->pc = 0x329e38u;
    // NOP
    // 0x329e3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329e3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329e40: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x329e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x329e44: 0xc6002824  lwc1        $f0, 0x2824($s0)
    ctx->pc = 0x329e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e48: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x329e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x329e4c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x329E4Cu;
    {
        const bool branch_taken_0x329e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e4c) {
            ctx->pc = 0x329E98u;
            goto label_329e98;
        }
    }
    ctx->pc = 0x329E54u;
label_329e54:
    // 0x329e54: 0x92032904  lbu         $v1, 0x2904($s0)
    ctx->pc = 0x329e54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10500)));
    // 0x329e58: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x329e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x329e5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e60: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x329E60u;
    {
        const bool branch_taken_0x329e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x329e60) {
            ctx->pc = 0x329E8Cu;
            goto label_329e8c;
        }
    }
    ctx->pc = 0x329E68u;
    // 0x329e68: 0xc6002824  lwc1        $f0, 0x2824($s0)
    ctx->pc = 0x329e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e6c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x329e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x329e70: 0x864310a6  lh          $v1, 0x10A6($s2)
    ctx->pc = 0x329e70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4262)));
    // 0x329e74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329e74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329e78: 0x0  nop
    ctx->pc = 0x329e78u;
    // NOP
    // 0x329e7c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x329e7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x329e80: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x329e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x329e84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x329E84u;
    {
        const bool branch_taken_0x329e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329e84) {
            ctx->pc = 0x329E98u;
            goto label_329e98;
        }
    }
    ctx->pc = 0x329E8Cu;
label_329e8c:
    // 0x329e8c: 0xc6002824  lwc1        $f0, 0x2824($s0)
    ctx->pc = 0x329e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329e90: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x329e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x329e94: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x329e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_329e98:
    // 0x329e98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x329e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x329e9c: 0x12230010  beq         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x329E9Cu;
    {
        const bool branch_taken_0x329e9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x329e9c) {
            ctx->pc = 0x329EE0u;
            goto label_329ee0;
        }
    }
    ctx->pc = 0x329EA4u;
    // 0x329ea4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x329EA4u;
    {
        const bool branch_taken_0x329ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ea4) {
            ctx->pc = 0x329EB4u;
            goto label_329eb4;
        }
    }
    ctx->pc = 0x329EACu;
    // 0x329eac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x329EACu;
    {
        const bool branch_taken_0x329eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329eac) {
            ctx->pc = 0x329F18u;
            goto label_329f18;
        }
    }
    ctx->pc = 0x329EB4u;
label_329eb4:
    // 0x329eb4: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329eb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329ebc: 0x0  nop
    ctx->pc = 0x329ebcu;
    // NOP
    // 0x329ec0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329ec0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329ec4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x329ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329ec8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x329ec8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329ecc: 0x0  nop
    ctx->pc = 0x329eccu;
    // NOP
    // 0x329ed0: 0x0  nop
    ctx->pc = 0x329ed0u;
    // NOP
    // 0x329ed4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x329ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x329ed8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x329ED8u;
    {
        const bool branch_taken_0x329ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329ed8) {
            ctx->pc = 0x329F18u;
            goto label_329f18;
        }
    }
    ctx->pc = 0x329EE0u;
label_329ee0:
    // 0x329ee0: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x329ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x329ee4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x329ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x329ee8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x329ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329eec: 0xc4601028  lwc1        $f0, 0x1028($v1)
    ctx->pc = 0x329eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329ef0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x329ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x329ef4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x329ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329ef8: 0xe4601020  swc1        $f0, 0x1020($v1)
    ctx->pc = 0x329ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4128), bits); }
    // 0x329efc: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x329efcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x329f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f04: 0x0  nop
    ctx->pc = 0x329f04u;
    // NOP
    // 0x329f08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329f0c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x329f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329f10: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x329f10u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x329f14: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x329f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_329f18:
    // 0x329f18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x329f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x329f1c: 0x8c241a3c  lw          $a0, 0x1A3C($at)
    ctx->pc = 0x329f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x329f20: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x329f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x329f24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x329f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x329f28: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x329F28u;
    {
        const bool branch_taken_0x329f28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x329f28) {
            ctx->pc = 0x329F98u;
            goto label_329f98;
        }
    }
    ctx->pc = 0x329F30u;
    // 0x329f30: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x329f30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x329f34: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329F34u;
    {
        const bool branch_taken_0x329f34 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x329f34) {
            ctx->pc = 0x329F50u;
            goto label_329f50;
        }
    }
    ctx->pc = 0x329F3Cu;
    // 0x329f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f40: 0x0  nop
    ctx->pc = 0x329f40u;
    // NOP
    // 0x329f44: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329f44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329f48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329F48u;
    {
        const bool branch_taken_0x329f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f48) {
            ctx->pc = 0x329F6Cu;
            goto label_329f6c;
        }
    }
    ctx->pc = 0x329F50u;
label_329f50:
    // 0x329f50: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x329f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x329f54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x329f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x329f58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x329f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x329f5c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x329f5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f60: 0x0  nop
    ctx->pc = 0x329f60u;
    // NOP
    // 0x329f64: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329f64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329f68: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x329f68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_329f6c:
    // 0x329f6c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x329f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329f70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x329f70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329f74: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329f7c: 0x0  nop
    ctx->pc = 0x329f7cu;
    // NOP
    // 0x329f80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x329f80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329f84: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x329f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x329f88: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x329f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x329f8c: 0xe4601028  swc1        $f0, 0x1028($v1)
    ctx->pc = 0x329f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4136), bits); }
    // 0x329f90: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x329F90u;
    {
        const bool branch_taken_0x329f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329f90) {
            ctx->pc = 0x32A020u;
            goto label_32a020;
        }
    }
    ctx->pc = 0x329F98u;
label_329f98:
    // 0x329f98: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x329f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x329f9c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x329F9Cu;
    {
        const bool branch_taken_0x329f9c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x329f9c) {
            ctx->pc = 0x329FB8u;
            goto label_329fb8;
        }
    }
    ctx->pc = 0x329FA4u;
    // 0x329fa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329fa8: 0x0  nop
    ctx->pc = 0x329fa8u;
    // NOP
    // 0x329fac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329facu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329fb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x329FB0u;
    {
        const bool branch_taken_0x329fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x329fb0) {
            ctx->pc = 0x329FD4u;
            goto label_329fd4;
        }
    }
    ctx->pc = 0x329FB8u;
label_329fb8:
    // 0x329fb8: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x329fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x329fbc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x329fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x329fc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x329fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x329fc4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x329fc4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329fc8: 0x0  nop
    ctx->pc = 0x329fc8u;
    // NOP
    // 0x329fcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x329fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x329fd0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x329fd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_329fd4:
    // 0x329fd4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x329fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329fd8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x329fd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x329fdc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x329fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x329fe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x329fe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329fe4: 0x0  nop
    ctx->pc = 0x329fe4u;
    // NOP
    // 0x329fe8: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x329fe8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x329fec: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x329fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x329ff0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x329ff0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x329ff4: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x329ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x329ff8: 0xc420c770  lwc1        $f0, -0x3890($at)
    ctx->pc = 0x329ff8u;
    { uint32_t bits = FAST_READ32(0x62C770u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x329ffc: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x329ffcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32a000: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x32a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x32a004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32a004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a008: 0x0  nop
    ctx->pc = 0x32a008u;
    // NOP
    // 0x32a00c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32a00cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a010: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x32a010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x32a014: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a018: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a01c: 0xe4601028  swc1        $f0, 0x1028($v1)
    ctx->pc = 0x32a01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4136), bits); }
label_32a020:
    // 0x32a020: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x32a020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x32a024: 0x2473a3d8  addiu       $s3, $v1, -0x5C28
    ctx->pc = 0x32a024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943704));
    // 0x32a028: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32a028u;
    { uint32_t bits = FAST_READ32(0x39A3DCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a02c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a030: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a034: 0xe4601820  swc1        $f0, 0x1820($v1)
    ctx->pc = 0x32a034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6176), bits); }
    // 0x32a038: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x32a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a03c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a040: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a044: 0xe4601824  swc1        $f0, 0x1824($v1)
    ctx->pc = 0x32a044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6180), bits); }
    // 0x32a048: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x32a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a04c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a050: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a054: 0xe4601828  swc1        $f0, 0x1828($v1)
    ctx->pc = 0x32a054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6184), bits); }
    // 0x32a058: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x32a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a05c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a060: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a064: 0xe460182c  swc1        $f0, 0x182C($v1)
    ctx->pc = 0x32a064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6188), bits); }
    // 0x32a068: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a06c: 0x12230010  beq         $s1, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x32A06Cu;
    {
        const bool branch_taken_0x32a06c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x32a06c) {
            ctx->pc = 0x32A0B0u;
            goto label_32a0b0;
        }
    }
    ctx->pc = 0x32A074u;
    // 0x32a074: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32A074u;
    {
        const bool branch_taken_0x32a074 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a074) {
            ctx->pc = 0x32A084u;
            goto label_32a084;
        }
    }
    ctx->pc = 0x32A07Cu;
    // 0x32a07c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x32A07Cu;
    {
        const bool branch_taken_0x32a07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a07c) {
            ctx->pc = 0x32A0E8u;
            goto label_32a0e8;
        }
    }
    ctx->pc = 0x32A084u;
label_32a084:
    // 0x32a084: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x32a084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x32a088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32a088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a08c: 0x0  nop
    ctx->pc = 0x32a08cu;
    // NOP
    // 0x32a090: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a094: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x32a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a098: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32a098u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32a09c: 0x0  nop
    ctx->pc = 0x32a09cu;
    // NOP
    // 0x32a0a0: 0x0  nop
    ctx->pc = 0x32a0a0u;
    // NOP
    // 0x32a0a4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32a0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x32a0a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x32A0A8u;
    {
        const bool branch_taken_0x32a0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32a0a8) {
            ctx->pc = 0x32A0E8u;
            goto label_32a0e8;
        }
    }
    ctx->pc = 0x32A0B0u;
label_32a0b0:
    // 0x32a0b0: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x32a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x32a0b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32a0b8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a0bc: 0xc4601828  lwc1        $f0, 0x1828($v1)
    ctx->pc = 0x32a0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a0c0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a0c4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a0c8: 0xe4601820  swc1        $f0, 0x1820($v1)
    ctx->pc = 0x32a0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6176), bits); }
    // 0x32a0cc: 0x8643138c  lh          $v1, 0x138C($s2)
    ctx->pc = 0x32a0ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 5004)));
    // 0x32a0d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32a0d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32a0d4: 0x0  nop
    ctx->pc = 0x32a0d4u;
    // NOP
    // 0x32a0d8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32a0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32a0dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x32a0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a0e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x32a0e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x32a0e4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x32a0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_32a0e8:
    // 0x32a0e8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x32a0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32a0ec: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a0f0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x32a0f0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x32a0f4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x32a0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a0f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x32a0f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32a0fc: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x32a0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32a100: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32a100u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32a104: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x32a104u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x32a108: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x32a108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x32a10c: 0xe4601828  swc1        $f0, 0x1828($v1)
    ctx->pc = 0x32a10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 6184), bits); }
    // 0x32a110: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x32a110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x32a114: 0x0  nop
    ctx->pc = 0x32a114u;
    // NOP
label_32a118:
    // 0x32a118: 0x2a240002  slti        $a0, $s1, 0x2
    ctx->pc = 0x32a118u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a11c: 0x1480ff3a  bnez        $a0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x32A11Cu;
    {
        const bool branch_taken_0x32a11c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a11c) {
            ctx->pc = 0x329E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_329e08;
        }
    }
    ctx->pc = 0x32A124u;
    // 0x32a124: 0x0  nop
    ctx->pc = 0x32a124u;
    // NOP
label_32a128:
    // 0x32a128: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x32a128u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32a12c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x32a12cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32a130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x32a130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32a134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x32a134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32a138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32a138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a13c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x32a13cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x32a140: 0x3e00008  jr          $ra
    ctx->pc = 0x32A140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A148u;
}
