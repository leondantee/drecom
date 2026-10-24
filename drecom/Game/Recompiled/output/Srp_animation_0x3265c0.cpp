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

// Function: Srp_animation
// Address: 0x3265c0 - 0x32675c
void Srp_animation_0x3265c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp_animation_0x3265c0");
#endif

    switch (ctx->pc) {
        case 0x32673cu: goto label_32673c;
        default: break;
    }

    ctx->pc = 0x3265c0u;

    // 0x3265c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3265c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3265c4: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x3265c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x3265c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3265c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3265cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3265ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3265d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3265d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3265d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3265d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3265d8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x3265d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x3265dc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3265dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3265e0: 0x8c510ac4  lw          $s1, 0xAC4($v0)
    ctx->pc = 0x3265e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2756)));
    // 0x3265e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3265e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3265e8: 0x90420b1d  lbu         $v0, 0xB1D($v0)
    ctx->pc = 0x3265e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2845)));
    // 0x3265ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3265ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3265f0: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3265F0u;
    {
        const bool branch_taken_0x3265f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3265f0) {
            ctx->pc = 0x3266F4u;
            goto label_3266f4;
        }
    }
    ctx->pc = 0x3265F8u;
    // 0x3265f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3265f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3265fc: 0x90620b1c  lbu         $v0, 0xB1C($v1)
    ctx->pc = 0x3265fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x326600: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x326600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x326604: 0xa0620b1c  sb          $v0, 0xB1C($v1)
    ctx->pc = 0x326604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x326608: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x326608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32660c: 0x90420b1c  lbu         $v0, 0xB1C($v0)
    ctx->pc = 0x32660cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x326610: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x326610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326614: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x326614u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x326618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x326618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x32661c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x32661cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x326620: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x326620u;
    {
        const bool branch_taken_0x326620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326620) {
            ctx->pc = 0x3266C8u;
            goto label_3266c8;
        }
    }
    ctx->pc = 0x326628u;
    // 0x326628: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x326628u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x32662c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x32662cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326630: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x326630u;
    {
        const bool branch_taken_0x326630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x326630) {
            ctx->pc = 0x326694u;
            goto label_326694;
        }
    }
    ctx->pc = 0x326638u;
    // 0x326638: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x326638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32663c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32663Cu;
    {
        const bool branch_taken_0x32663c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32663c) {
            ctx->pc = 0x326668u;
            goto label_326668;
        }
    }
    ctx->pc = 0x326644u;
    // 0x326644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x326644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326648: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326648u;
    {
        const bool branch_taken_0x326648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x326648) {
            ctx->pc = 0x326658u;
            goto label_326658;
        }
    }
    ctx->pc = 0x326650u;
    // 0x326650: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x326650u;
    {
        const bool branch_taken_0x326650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326650) {
            ctx->pc = 0x326694u;
            goto label_326694;
        }
    }
    ctx->pc = 0x326658u;
label_326658:
    // 0x326658: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x326658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32665c: 0xa0400b1c  sb          $zero, 0xB1C($v0)
    ctx->pc = 0x32665cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2844), (uint8_t)GPR_U32(ctx, 0));
    // 0x326660: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x326660u;
    {
        const bool branch_taken_0x326660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326660) {
            ctx->pc = 0x3266C8u;
            goto label_3266c8;
        }
    }
    ctx->pc = 0x326668u;
label_326668:
    // 0x326668: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32666c: 0x90620b1c  lbu         $v0, 0xB1C($v1)
    ctx->pc = 0x32666cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x326670: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326674: 0xa0620b1c  sb          $v0, 0xB1C($v1)
    ctx->pc = 0x326674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x326678: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x326678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32667c: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x32667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x326680: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x326680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x326684: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x326684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x326688: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x326688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
    // 0x32668c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x32668Cu;
    {
        const bool branch_taken_0x32668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32668c) {
            ctx->pc = 0x3266C8u;
            goto label_3266c8;
        }
    }
    ctx->pc = 0x326694u;
label_326694:
    // 0x326694: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326698: 0x90620b1c  lbu         $v0, 0xB1C($v1)
    ctx->pc = 0x326698u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2844)));
    // 0x32669c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32669cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3266a0: 0xa0620b1c  sb          $v0, 0xB1C($v1)
    ctx->pc = 0x3266a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2844), (uint8_t)GPR_U32(ctx, 2));
    // 0x3266a4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3266a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266a8: 0x8c620b18  lw          $v0, 0xB18($v1)
    ctx->pc = 0x3266a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2840)));
    // 0x3266ac: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x3266acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x3266b0: 0xac620b18  sw          $v0, 0xB18($v1)
    ctx->pc = 0x3266b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2840), GPR_U32(ctx, 2));
    // 0x3266b4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3266b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266b8: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x3266b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x3266bc: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x3266bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x3266c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3266c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3266c4: 0xac820b18  sw          $v0, 0xB18($a0)
    ctx->pc = 0x3266c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 2));
label_3266c8:
    // 0x3266c8: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3266c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3266cc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3266ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266d0: 0x90420b1c  lbu         $v0, 0xB1C($v0)
    ctx->pc = 0x3266d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x3266d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3266d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3266d8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3266d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3266dc: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3266dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3266e0: 0x92430018  lbu         $v1, 0x18($s2)
    ctx->pc = 0x3266e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3266e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3266e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266e8: 0xa0430b1d  sb          $v1, 0xB1D($v0)
    ctx->pc = 0x3266e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2845), (uint8_t)GPR_U32(ctx, 3));
    // 0x3266ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3266ECu;
    {
        const bool branch_taken_0x3266ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3266ec) {
            ctx->pc = 0x32670Cu;
            goto label_32670c;
        }
    }
    ctx->pc = 0x3266F4u;
label_3266f4:
    // 0x3266f4: 0x8e320010  lw          $s2, 0x10($s1)
    ctx->pc = 0x3266f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3266f8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x3266f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3266fc: 0x90420b1c  lbu         $v0, 0xB1C($v0)
    ctx->pc = 0x3266fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2844)));
    // 0x326700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x326700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x326704: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x326704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x326708: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x326708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_32670c:
    // 0x32670c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x32670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326710: 0x90620b1d  lbu         $v0, 0xB1D($v1)
    ctx->pc = 0x326710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2845)));
    // 0x326714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326718: 0xa0620b1d  sb          $v0, 0xB1D($v1)
    ctx->pc = 0x326718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2845), (uint8_t)GPR_U32(ctx, 2));
    // 0x32671c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x32671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326720: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x326724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326728: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x326728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x32672c: 0x246502d0  addiu       $a1, $v1, 0x2D0
    ctx->pc = 0x32672cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x326730: 0x244602e0  addiu       $a2, $v0, 0x2E0
    ctx->pc = 0x326730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x326734: 0xc040c86  jal         func_103218
    ctx->pc = 0x326734u;
    SET_GPR_U32(ctx, 31, 0x32673Cu);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x32673Cu;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32673Cu) { return; }
    ctx->pc = 0x32673Cu;
label_32673c:
    // 0x32673c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x32673cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326740: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32674c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326750: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x326750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x326754: 0x3e00008  jr          $ra
    ctx->pc = 0x326754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32675Cu;
}
