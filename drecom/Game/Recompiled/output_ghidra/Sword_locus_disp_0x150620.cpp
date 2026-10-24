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

// Function: Sword_locus_disp
// Address: 0x150620 - 0x151594
void Sword_locus_disp_0x150620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Sword_locus_disp_0x150620");
#endif

    switch (ctx->pc) {
        case 0x150830u: goto label_150830;
        case 0x150894u: goto label_150894;
        case 0x1508d4u: goto label_1508d4;
        case 0x15090cu: goto label_15090c;
        case 0x150944u: goto label_150944;
        case 0x15096cu: goto label_15096c;
        case 0x15098cu: goto label_15098c;
        case 0x1509acu: goto label_1509ac;
        case 0x1509c0u: goto label_1509c0;
        case 0x1509fcu: goto label_1509fc;
        case 0x150a1cu: goto label_150a1c;
        case 0x150a3cu: goto label_150a3c;
        case 0x150a50u: goto label_150a50;
        case 0x150b80u: goto label_150b80;
        case 0x150bc8u: goto label_150bc8;
        case 0x150be8u: goto label_150be8;
        case 0x150c58u: goto label_150c58;
        case 0x150c80u: goto label_150c80;
        case 0x150cd8u: goto label_150cd8;
        case 0x150cfcu: goto label_150cfc;
        case 0x150d54u: goto label_150d54;
        case 0x150d78u: goto label_150d78;
        case 0x150dd4u: goto label_150dd4;
        case 0x150df4u: goto label_150df4;
        case 0x150e58u: goto label_150e58;
        case 0x150e7cu: goto label_150e7c;
        case 0x150edcu: goto label_150edc;
        case 0x150efcu: goto label_150efc;
        case 0x150f5cu: goto label_150f5c;
        case 0x150f80u: goto label_150f80;
        case 0x150fe0u: goto label_150fe0;
        case 0x151008u: goto label_151008;
        case 0x151078u: goto label_151078;
        case 0x151098u: goto label_151098;
        case 0x151150u: goto label_151150;
        case 0x151168u: goto label_151168;
        case 0x151190u: goto label_151190;
        case 0x15122cu: goto label_15122c;
        case 0x151248u: goto label_151248;
        case 0x151270u: goto label_151270;
        case 0x1512c0u: goto label_1512c0;
        case 0x1512e0u: goto label_1512e0;
        case 0x1513b8u: goto label_1513b8;
        case 0x1513ccu: goto label_1513cc;
        case 0x1513fcu: goto label_1513fc;
        case 0x1514a0u: goto label_1514a0;
        case 0x1514c0u: goto label_1514c0;
        case 0x1514e8u: goto label_1514e8;
        case 0x151544u: goto label_151544;
        case 0x151560u: goto label_151560;
        default: break;
    }

    ctx->pc = 0x150620u;

    // 0x150620: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x150620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x150624: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x150624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x150628: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x150628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x15062c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15062cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x150630: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x150630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x150634: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x150634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x150638: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x150638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15063c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15063cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x150640: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x150640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x150644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x150644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x150648: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x150648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x15064c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x150650: 0x24869240  addiu       $a2, $a0, -0x6DC0
    ctx->pc = 0x150650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939200));
    // 0x150654: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x150654u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150658: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x150658u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15065c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x15065cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x150660: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x150660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x150664: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x150664u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x150668: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15066c: 0x8c261a48  lw          $a2, 0x1A48($at)
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x150670: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x150670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x150674: 0xc71824  and         $v1, $a2, $a3
    ctx->pc = 0x150674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x150678: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150678u;
    {
        const bool branch_taken_0x150678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150678) {
            ctx->pc = 0x150694u;
            goto label_150694;
        }
    }
    ctx->pc = 0x150680u;
    // 0x150680: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150684: 0x8c251a98  lw          $a1, 0x1A98($at)
    ctx->pc = 0x150684u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x150688: 0x30a30002  andi        $v1, $a1, 0x2
    ctx->pc = 0x150688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x15068c: 0x106003b5  beqz        $v1, . + 4 + (0x3B5 << 2)
    ctx->pc = 0x15068Cu;
    {
        const bool branch_taken_0x15068c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15068c) {
            ctx->pc = 0x151564u;
            goto label_151564;
        }
    }
    ctx->pc = 0x150694u;
label_150694:
    // 0x150694: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150698: 0x846215f0  lh          $v0, 0x15F0($v1)
    ctx->pc = 0x150698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5616)));
    // 0x15069c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x15069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1506a0: 0xa46415f0  sh          $a0, 0x15F0($v1)
    ctx->pc = 0x1506a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5616), (uint16_t)GPR_U32(ctx, 4));
    // 0x1506a4: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x1506a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1506a8: 0x84a615f0  lh          $a2, 0x15F0($a1)
    ctx->pc = 0x1506a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5616)));
    // 0x1506ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1506acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1506b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1506b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1506b4: 0x28440005  slti        $a0, $v0, 0x5
    ctx->pc = 0x1506b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1506b8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1506B8u;
    {
        const bool branch_taken_0x1506b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1506b8) {
            ctx->pc = 0x1506C8u;
            goto label_1506c8;
        }
    }
    ctx->pc = 0x1506C0u;
    // 0x1506c0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1506c4: 0xa46015f0  sh          $zero, 0x15F0($v1)
    ctx->pc = 0x1506c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5616), (uint16_t)GPR_U32(ctx, 0));
label_1506c8:
    // 0x1506c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1506c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1506cc: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1506d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1506d4: 0x453024  and         $a2, $v0, $a1
    ctx->pc = 0x1506d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1506d8: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1506D8u;
    {
        const bool branch_taken_0x1506d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506d8) {
            ctx->pc = 0x150714u;
            goto label_150714;
        }
    }
    ctx->pc = 0x1506E0u;
    // 0x1506e0: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1506e4: 0x84e215ee  lh          $v0, 0x15EE($a3)
    ctx->pc = 0x1506e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 5614)));
    // 0x1506e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1506e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1506ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1506ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1506f0: 0x28610005  slti        $at, $v1, 0x5
    ctx->pc = 0x1506f0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1506f4: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x1506F4u;
    {
        const bool branch_taken_0x1506f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506f4) {
            ctx->pc = 0x150734u;
            goto label_150734;
        }
    }
    ctx->pc = 0x1506FCu;
    // 0x1506fc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1506fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150700: 0x846215ee  lh          $v0, 0x15EE($v1)
    ctx->pc = 0x150700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5614)));
    // 0x150704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x150704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x150708: 0xa46215ee  sh          $v0, 0x15EE($v1)
    ctx->pc = 0x150708u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5614), (uint16_t)GPR_U32(ctx, 2));
    // 0x15070c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15070Cu;
    {
        const bool branch_taken_0x15070c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15070c) {
            ctx->pc = 0x150734u;
            goto label_150734;
        }
    }
    ctx->pc = 0x150714u;
label_150714:
    // 0x150714: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150718: 0x844415ee  lh          $a0, 0x15EE($v0)
    ctx->pc = 0x150718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5614)));
    // 0x15071c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15071Cu;
    {
        const bool branch_taken_0x15071c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15071c) {
            ctx->pc = 0x150734u;
            goto label_150734;
        }
    }
    ctx->pc = 0x150724u;
    // 0x150724: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x150724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150728: 0x84a615ee  lh          $a2, 0x15EE($a1)
    ctx->pc = 0x150728u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5614)));
    // 0x15072c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x15072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x150730: 0xa4a215ee  sh          $v0, 0x15EE($a1)
    ctx->pc = 0x150730u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5614), (uint16_t)GPR_U32(ctx, 2));
label_150734:
    // 0x150734: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150738: 0x848215f0  lh          $v0, 0x15F0($a0)
    ctx->pc = 0x150738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5616)));
    // 0x15073c: 0x2ac3c  dsll32      $s5, $v0, 16
    ctx->pc = 0x15073cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x150740: 0x15ac3f  dsra32      $s5, $s5, 16
    ctx->pc = 0x150740u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 16));
    // 0x150744: 0x26a5ffff  addiu       $a1, $s5, -0x1
    ctx->pc = 0x150744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x150748: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x150748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x15074c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x15074cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x150750: 0x6a43c  dsll32      $s4, $a2, 16
    ctx->pc = 0x150750u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 16));
    // 0x150754: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x150754u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
    // 0x150758: 0x6810002  bgez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x150758u;
    {
        const bool branch_taken_0x150758 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x150758) {
            ctx->pc = 0x150764u;
            goto label_150764;
        }
    }
    ctx->pc = 0x150760u;
    // 0x150760: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x150760u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_150764:
    // 0x150764: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150768: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x150768u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15076c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15076cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x150770: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x150770u;
    {
        const bool branch_taken_0x150770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150770) {
            ctx->pc = 0x1507D4u;
            goto label_1507d4;
        }
    }
    ctx->pc = 0x150778u;
    // 0x150778: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15077c: 0x904213a7  lbu         $v0, 0x13A7($v0)
    ctx->pc = 0x15077cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5031)));
    // 0x150780: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x150780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x150784: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x150784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150788: 0x14440012  bne         $v0, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x150788u;
    {
        const bool branch_taken_0x150788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x150788) {
            ctx->pc = 0x1507D4u;
            goto label_1507d4;
        }
    }
    ctx->pc = 0x150790u;
    // 0x150790: 0x3c05c1a0  lui         $a1, 0xC1A0
    ctx->pc = 0x150790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49568 << 16));
    // 0x150794: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150794u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150798: 0x0  nop
    ctx->pc = 0x150798u;
    // NOP
    // 0x15079c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15079cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1507a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1507a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507a4: 0x0  nop
    ctx->pc = 0x1507a4u;
    // NOP
    // 0x1507a8: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1507a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1507ac: 0x3c06447a  lui         $a2, 0x447A
    ctx->pc = 0x1507acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17530 << 16));
    // 0x1507b0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1507b0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507b4: 0x0  nop
    ctx->pc = 0x1507b4u;
    // NOP
    // 0x1507b8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1507b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1507bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1507c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1507c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507c4: 0x0  nop
    ctx->pc = 0x1507c4u;
    // NOP
    // 0x1507c8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1507c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1507cc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1507CCu;
    {
        const bool branch_taken_0x1507cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1507cc) {
            ctx->pc = 0x150810u;
            goto label_150810;
        }
    }
    ctx->pc = 0x1507D4u;
label_1507d4:
    // 0x1507d4: 0x3c04c1a0  lui         $a0, 0xC1A0
    ctx->pc = 0x1507d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49568 << 16));
    // 0x1507d8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1507d8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507dc: 0x0  nop
    ctx->pc = 0x1507dcu;
    // NOP
    // 0x1507e0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1507e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1507e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1507e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507e8: 0x0  nop
    ctx->pc = 0x1507e8u;
    // NOP
    // 0x1507ec: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1507ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1507f0: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x1507f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x1507f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1507f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1507f8: 0x0  nop
    ctx->pc = 0x1507f8u;
    // NOP
    // 0x1507fc: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1507fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x150800: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150808: 0x0  nop
    ctx->pc = 0x150808u;
    // NOP
    // 0x15080c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x15080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_150810:
    // 0x150810: 0x1529c0  sll         $a1, $s5, 7
    ctx->pc = 0x150810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x150814: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150818: 0xc53821  addu        $a3, $a2, $a1
    ctx->pc = 0x150818u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x15081c: 0x24e41600  addiu       $a0, $a3, 0x1600
    ctx->pc = 0x15081cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 5632));
    // 0x150820: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150824: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x150824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150828: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150828u;
    SET_GPR_U32(ctx, 31, 0x150830u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150830u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150830u) { return; }
    ctx->pc = 0x150830u;
label_150830:
    // 0x150830: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x150830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x150834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150838: 0x0  nop
    ctx->pc = 0x150838u;
    // NOP
    // 0x15083c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x15083cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x150840: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150844: 0x0  nop
    ctx->pc = 0x150844u;
    // NOP
    // 0x150848: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x150848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x15084c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x15084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x150850: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150854: 0x0  nop
    ctx->pc = 0x150854u;
    // NOP
    // 0x150858: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x150858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x15085c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x15085cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x150860: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150860u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150864: 0x0  nop
    ctx->pc = 0x150864u;
    // NOP
    // 0x150868: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x150868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x15086c: 0x1529c0  sll         $a1, $s5, 7
    ctx->pc = 0x15086cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x150870: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150874: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x150874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x150878: 0x24441610  addiu       $a0, $v0, 0x1610
    ctx->pc = 0x150878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x15087c: 0x8e660130  lw          $a2, 0x130($s3)
    ctx->pc = 0x15087cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150880: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x150880u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150884: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x150884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150888: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x150888u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x15088c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15088Cu;
    SET_GPR_U32(ctx, 31, 0x150894u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150894u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150894u) { return; }
    ctx->pc = 0x150894u;
label_150894:
    // 0x150894: 0x153140  sll         $a2, $s5, 5
    ctx->pc = 0x150894u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x150898: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x150898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15089c: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x15089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1508a0: 0x1521c0  sll         $a0, $s5, 7
    ctx->pc = 0x1508a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1508a4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508a8: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x1508a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1508ac: 0x1421c0  sll         $a0, $s4, 7
    ctx->pc = 0x1508acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x1508b0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1508b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1508b8: 0x24451880  addiu       $a1, $v0, 0x1880
    ctx->pc = 0x1508b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x1508bc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1508bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1508c0: 0x24c61600  addiu       $a2, $a2, 0x1600
    ctx->pc = 0x1508c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5632));
    // 0x1508c4: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1508c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1508c8: 0x24661600  addiu       $a2, $v1, 0x1600
    ctx->pc = 0x1508c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x1508cc: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1508CCu;
    SET_GPR_U32(ctx, 31, 0x1508D4u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1508CCu, 0x1508D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1508D4u;
label_1508d4:
    // 0x1508d4: 0x153140  sll         $a2, $s5, 5
    ctx->pc = 0x1508d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x1508d8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508dc: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x1508dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1508e0: 0x1531c0  sll         $a2, $s5, 7
    ctx->pc = 0x1508e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1508e4: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1508e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508e8: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x1508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1508ec: 0x1421c0  sll         $a0, $s4, 7
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x1508f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1508f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1508f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1508f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1508f8: 0x24a41890  addiu       $a0, $a1, 0x1890
    ctx->pc = 0x1508f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 6288));
    // 0x1508fc: 0x24451610  addiu       $a1, $v0, 0x1610
    ctx->pc = 0x1508fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x150900: 0x24661610  addiu       $a2, $v1, 0x1610
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5648));
    // 0x150904: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x150904u;
    SET_GPR_U32(ctx, 31, 0x15090Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x150904u, 0x15090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15090Cu;
label_15090c:
    // 0x15090c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x15090cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150910: 0x1529c0  sll         $a1, $s5, 7
    ctx->pc = 0x150910u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x150914: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150918: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x150918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15091c: 0x24701620  addiu       $s0, $v1, 0x1620
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5664));
    // 0x150920: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x150920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x150924: 0x24765510  addiu       $s6, $v1, 0x5510
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 21776));
    // 0x150928: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x150928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
    // 0x15092c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15092cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150930: 0x0  nop
    ctx->pc = 0x150930u;
    // NOP
    // 0x150934: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x150934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x150938: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x150938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15093c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x15093Cu;
    {
        const bool branch_taken_0x15093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15093c) {
            ctx->pc = 0x150A88u;
            goto label_150a88;
        }
    }
    ctx->pc = 0x150944u;
label_150944:
    // 0x150944: 0x152140  sll         $a0, $s5, 5
    ctx->pc = 0x150944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x150948: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15094c: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x15094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150950: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x150950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150954: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x150954u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150958: 0x24471880  addiu       $a3, $v0, 0x1880
    ctx->pc = 0x150958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x15095c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x15095cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x150960: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x150960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150964: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x150964u;
    SET_GPR_U32(ctx, 31, 0x15096Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15096Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15096Cu) { return; }
    ctx->pc = 0x15096Cu;
label_15096c:
    // 0x15096c: 0x141940  sll         $v1, $s4, 5
    ctx->pc = 0x15096cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x150970: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150978: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x15097c: 0x24451880  addiu       $a1, $v0, 0x1880
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6272));
    // 0x150980: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x150980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150984: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x150984u;
    SET_GPR_U32(ctx, 31, 0x15098Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x15098Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15098Cu) { return; }
    ctx->pc = 0x15098Cu;
label_15098c:
    // 0x15098c: 0x1419c0  sll         $v1, $s4, 7
    ctx->pc = 0x15098cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x150990: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150998: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150998u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15099c: 0x24451600  addiu       $a1, $v0, 0x1600
    ctx->pc = 0x15099cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1509a0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1509a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1509a4: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1509A4u;
    SET_GPR_U32(ctx, 31, 0x1509ACu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1509A4u, 0x1509ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509ACu;
label_1509ac:
    // 0x1509ac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1509acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1509b0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1509b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1509b4: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1509b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1509b8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x1509B8u;
    SET_GPR_U32(ctx, 31, 0x1509C0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x1509B8u, 0x1509C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509C0u;
label_1509c0:
    // 0x1509c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1509c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1509c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1509c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1509c8: 0x0  nop
    ctx->pc = 0x1509c8u;
    // NOP
    // 0x1509cc: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1509ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1509d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1509d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1509d4: 0x153140  sll         $a2, $s5, 5
    ctx->pc = 0x1509d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x1509d8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1509d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1509dc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1509e0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1509e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1509e4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1509e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1509e8: 0x24431890  addiu       $v1, $v0, 0x1890
    ctx->pc = 0x1509e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 6288));
    // 0x1509ec: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1509ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1509f0: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x1509f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1509f4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x1509F4u;
    SET_GPR_U32(ctx, 31, 0x1509FCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x1509FCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1509FCu) { return; }
    ctx->pc = 0x1509FCu;
label_1509fc:
    // 0x1509fc: 0x143140  sll         $a2, $s4, 5
    ctx->pc = 0x1509fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 5));
    // 0x150a00: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x150a00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150a04: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x150a08: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x150a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150a0c: 0x24451890  addiu       $a1, $v0, 0x1890
    ctx->pc = 0x150a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6288));
    // 0x150a10: 0xc6cc0000  lwc1        $f12, 0x0($s6)
    ctx->pc = 0x150a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150a14: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x150A14u;
    SET_GPR_U32(ctx, 31, 0x150A1Cu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x150A1Cu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150A1Cu) { return; }
    ctx->pc = 0x150A1Cu;
label_150a1c:
    // 0x150a1c: 0x1419c0  sll         $v1, $s4, 7
    ctx->pc = 0x150a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 7));
    // 0x150a20: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150a28: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150a28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150a2c: 0x24451610  addiu       $a1, $v0, 0x1610
    ctx->pc = 0x150a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5648));
    // 0x150a30: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x150a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x150a34: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x150A34u;
    SET_GPR_U32(ctx, 31, 0x150A3Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x150A34u, 0x150A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A3Cu;
label_150a3c:
    // 0x150a3c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x150a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150a40: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x150a40u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x150a44: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x150a44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x150a48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x150A48u;
    SET_GPR_U32(ctx, 31, 0x150A50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x150A48u, 0x150A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A50u;
label_150a50:
    // 0x150a50: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x150a54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150a54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150a58: 0x0  nop
    ctx->pc = 0x150a58u;
    // NOP
    // 0x150a5c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x150a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x150a60: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x150a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x150a64: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x150a64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x150a68: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x150a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150a6c: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x150a70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150a70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150a74: 0x0  nop
    ctx->pc = 0x150a74u;
    // NOP
    // 0x150a78: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x150a78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x150a7c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x150a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x150a80: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x150a80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x150a84: 0x0  nop
    ctx->pc = 0x150a84u;
    // NOP
label_150a88:
    // 0x150a88: 0x2a430004  slti        $v1, $s2, 0x4
    ctx->pc = 0x150a88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x150a8c: 0x1460ffad  bnez        $v1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x150A8Cu;
    {
        const bool branch_taken_0x150a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150a8c) {
            ctx->pc = 0x150944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150944;
        }
    }
    ctx->pc = 0x150A94u;
    // 0x150a94: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x150a94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150a98: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x150a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x150a9c: 0x3c07fff7  lui         $a3, 0xFFF7
    ctx->pc = 0x150a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65527 << 16));
    // 0x150aa0: 0x34e6ffff  ori         $a2, $a3, 0xFFFF
    ctx->pc = 0x150aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x150aa4: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x150aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x150aa8: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x150aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x150aac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150ab0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x150ab4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x150ab8: 0x833024  and         $a2, $a0, $v1
    ctx->pc = 0x150ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x150abc: 0x10c00295  beqz        $a2, . + 4 + (0x295 << 2)
    ctx->pc = 0x150ABCu;
    {
        const bool branch_taken_0x150abc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x150abc) {
            ctx->pc = 0x151514u;
            goto label_151514;
        }
    }
    ctx->pc = 0x150AC4u;
    // 0x150ac4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ac8: 0x90831576  lbu         $v1, 0x1576($a0)
    ctx->pc = 0x150ac8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5494)));
    // 0x150acc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x150accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x150ad0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x150ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150ad4: 0x10a301f3  beq         $a1, $v1, . + 4 + (0x1F3 << 2)
    ctx->pc = 0x150AD4u;
    {
        const bool branch_taken_0x150ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x150ad4) {
            ctx->pc = 0x1512A4u;
            goto label_1512a4;
        }
    }
    ctx->pc = 0x150ADCu;
    // 0x150adc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150ae0: 0x10a201f0  beq         $a1, $v0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x150AE0u;
    {
        const bool branch_taken_0x150ae0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150ae0) {
            ctx->pc = 0x1512A4u;
            goto label_1512a4;
        }
    }
    ctx->pc = 0x150AE8u;
    // 0x150ae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x150ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150aec: 0x10a201ed  beq         $a1, $v0, . + 4 + (0x1ED << 2)
    ctx->pc = 0x150AECu;
    {
        const bool branch_taken_0x150aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150aec) {
            ctx->pc = 0x1512A4u;
            goto label_1512a4;
        }
    }
    ctx->pc = 0x150AF4u;
    // 0x150af4: 0x10a001eb  beqz        $a1, . + 4 + (0x1EB << 2)
    ctx->pc = 0x150AF4u;
    {
        const bool branch_taken_0x150af4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150af4) {
            ctx->pc = 0x1512A4u;
            goto label_1512a4;
        }
    }
    ctx->pc = 0x150AFCu;
    // 0x150afc: 0x2410000d  addiu       $s0, $zero, 0xD
    ctx->pc = 0x150afcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x150b00: 0x10b00155  beq         $a1, $s0, . + 4 + (0x155 << 2)
    ctx->pc = 0x150B00u;
    {
        const bool branch_taken_0x150b00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x150b00) {
            ctx->pc = 0x151058u;
            goto label_151058;
        }
    }
    ctx->pc = 0x150B08u;
    // 0x150b08: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x150b0c: 0x10a40152  beq         $a1, $a0, . + 4 + (0x152 << 2)
    ctx->pc = 0x150B0Cu;
    {
        const bool branch_taken_0x150b0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x150b0c) {
            ctx->pc = 0x151058u;
            goto label_151058;
        }
    }
    ctx->pc = 0x150B14u;
    // 0x150b14: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x150b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x150b18: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150B18u;
    {
        const bool branch_taken_0x150b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x150b18) {
            ctx->pc = 0x150B34u;
            goto label_150b34;
        }
    }
    ctx->pc = 0x150B20u;
    // 0x150b20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x150b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x150b24: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150B24u;
    {
        const bool branch_taken_0x150b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x150b24) {
            ctx->pc = 0x150B34u;
            goto label_150b34;
        }
    }
    ctx->pc = 0x150B2Cu;
    // 0x150b2c: 0x100001dd  b           . + 4 + (0x1DD << 2)
    ctx->pc = 0x150B2Cu;
    {
        const bool branch_taken_0x150b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150b2c) {
            ctx->pc = 0x1512A4u;
            goto label_1512a4;
        }
    }
    ctx->pc = 0x150B34u;
label_150b34:
    // 0x150b34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b38: 0x0  nop
    ctx->pc = 0x150b38u;
    // NOP
    // 0x150b3c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x150b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x150b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b44: 0x0  nop
    ctx->pc = 0x150b44u;
    // NOP
    // 0x150b48: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x150b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x150b4c: 0x3c064416  lui         $a2, 0x4416
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17430 << 16));
    // 0x150b50: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150b50u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b54: 0x0  nop
    ctx->pc = 0x150b54u;
    // NOP
    // 0x150b58: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x150b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x150b5c: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x150b5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x150b60: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x150b60u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b64: 0x0  nop
    ctx->pc = 0x150b64u;
    // NOP
    // 0x150b68: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x150b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x150b6c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x150b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150b70: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150b74: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x150b74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150b78: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150B78u;
    SET_GPR_U32(ctx, 31, 0x150B80u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150B80u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150B80u) { return; }
    ctx->pc = 0x150B80u;
label_150b80:
    // 0x150b80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b84: 0x0  nop
    ctx->pc = 0x150b84u;
    // NOP
    // 0x150b88: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150b8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b90: 0x0  nop
    ctx->pc = 0x150b90u;
    // NOP
    // 0x150b94: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150b98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150b9c: 0x0  nop
    ctx->pc = 0x150b9cu;
    // NOP
    // 0x150ba0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150ba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150bac: 0x0  nop
    ctx->pc = 0x150bacu;
    // NOP
    // 0x150bb0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150bb4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150bb8: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150bbc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150bc0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150BC0u;
    SET_GPR_U32(ctx, 31, 0x150BC8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150BC8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150BC8u) { return; }
    ctx->pc = 0x150BC8u;
label_150bc8:
    // 0x150bc8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150bcc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150bd0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150bd4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150bd8: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150bd8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150bdc: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150bdcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150be0: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150BE0u;
    SET_GPR_U32(ctx, 31, 0x150BE8u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150BE0u, 0x150BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150BE8u;
label_150be8:
    // 0x150be8: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x150be8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150bec: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x150becu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x150bf0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x150bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x150bf4: 0x8c25013c  lw          $a1, 0x13C($at)
    ctx->pc = 0x150bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x150bf8: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x150bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x150bfc: 0x10c00081  beqz        $a2, . + 4 + (0x81 << 2)
    ctx->pc = 0x150BFCu;
    {
        const bool branch_taken_0x150bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x150bfc) {
            ctx->pc = 0x150E04u;
            goto label_150e04;
        }
    }
    ctx->pc = 0x150C04u;
    // 0x150c04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c08: 0x0  nop
    ctx->pc = 0x150c08u;
    // NOP
    // 0x150c0c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150c10: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x150c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x150c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c18: 0x0  nop
    ctx->pc = 0x150c18u;
    // NOP
    // 0x150c1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150c20: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x150c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x150c24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150c24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c28: 0x0  nop
    ctx->pc = 0x150c28u;
    // NOP
    // 0x150c2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150c30: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x150c30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x150c34: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150c34u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c38: 0x0  nop
    ctx->pc = 0x150c38u;
    // NOP
    // 0x150c3c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150c40: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150c44: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x150c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150c48: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150c4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150c50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150C50u;
    SET_GPR_U32(ctx, 31, 0x150C58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150C58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150C58u) { return; }
    ctx->pc = 0x150C58u;
label_150c58:
    // 0x150c58: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x150c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150c5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150c60: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150c64: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x150c64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x150c68: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x150c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150c6c: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x150c6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x150c70: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150c70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150c74: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150c74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150c78: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150C78u;
    SET_GPR_U32(ctx, 31, 0x150C80u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150C78u, 0x150C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150C80u;
label_150c80:
    // 0x150c80: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x150c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150c84: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x150c84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150c88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150c88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c8c: 0x0  nop
    ctx->pc = 0x150c8cu;
    // NOP
    // 0x150c90: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150c94: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x150c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x150c98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150c98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150c9c: 0x0  nop
    ctx->pc = 0x150c9cu;
    // NOP
    // 0x150ca0: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150ca4: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150cac: 0x0  nop
    ctx->pc = 0x150cacu;
    // NOP
    // 0x150cb0: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150cb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150cbc: 0x0  nop
    ctx->pc = 0x150cbcu;
    // NOP
    // 0x150cc0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150cc4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cc8: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150ccc: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150cd0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150CD0u;
    SET_GPR_U32(ctx, 31, 0x150CD8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150CD8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150CD8u) { return; }
    ctx->pc = 0x150CD8u;
label_150cd8:
    // 0x150cd8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150cdc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ce0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ce4: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x150ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150ce8: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x150ce8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x150cec: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150cecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150cf0: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150cf0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150cf4: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150CF4u;
    SET_GPR_U32(ctx, 31, 0x150CFCu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150CF4u, 0x150CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150CFCu;
label_150cfc:
    // 0x150cfc: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x150cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150d00: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x150d00u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x150d04: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x150d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x150d08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x150d08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d0c: 0x0  nop
    ctx->pc = 0x150d0cu;
    // NOP
    // 0x150d10: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150d14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150d14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d18: 0x0  nop
    ctx->pc = 0x150d18u;
    // NOP
    // 0x150d1c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150d20: 0x3c064348  lui         $a2, 0x4348
    ctx->pc = 0x150d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17224 << 16));
    // 0x150d24: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150d24u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d28: 0x0  nop
    ctx->pc = 0x150d28u;
    // NOP
    // 0x150d2c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150d30: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x150d30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x150d34: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x150d34u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d38: 0x0  nop
    ctx->pc = 0x150d38u;
    // NOP
    // 0x150d3c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150d40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150d44: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150d48: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150d4c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150D4Cu;
    SET_GPR_U32(ctx, 31, 0x150D54u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150D54u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150D54u) { return; }
    ctx->pc = 0x150D54u;
label_150d54:
    // 0x150d54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x150d54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150d58: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150d5c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150d60: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150d64: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150d68: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x150d68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x150d6c: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x150d6cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x150d70: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150D70u;
    SET_GPR_U32(ctx, 31, 0x150D78u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150D70u, 0x150D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150D78u;
label_150d78:
    // 0x150d78: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x150d78u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150d7c: 0x2232825  or          $a1, $s1, $v1
    ctx->pc = 0x150d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x150d80: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x150d80u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x150d84: 0x3c03c3fa  lui         $v1, 0xC3FA
    ctx->pc = 0x150d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50170 << 16));
    // 0x150d88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d8c: 0x0  nop
    ctx->pc = 0x150d8cu;
    // NOP
    // 0x150d90: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150d94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x150d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150d98: 0x0  nop
    ctx->pc = 0x150d98u;
    // NOP
    // 0x150d9c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150da0: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x150da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x150da4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150da4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150da8: 0x0  nop
    ctx->pc = 0x150da8u;
    // NOP
    // 0x150dac: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150db0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150db4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150db8: 0x0  nop
    ctx->pc = 0x150db8u;
    // NOP
    // 0x150dbc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150dc0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150dc4: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150dc8: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150dcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150DCCu;
    SET_GPR_U32(ctx, 31, 0x150DD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150DD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150DD4u) { return; }
    ctx->pc = 0x150DD4u;
label_150dd4:
    // 0x150dd4: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150dd8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ddc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150de0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150de4: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150de4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150de8: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150de8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150dec: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150DECu;
    SET_GPR_U32(ctx, 31, 0x150DF4u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150DECu, 0x150DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150DF4u;
label_150df4:
    // 0x150df4: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x150df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150df8: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x150df8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x150dfc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x150DFCu;
    {
        const bool branch_taken_0x150dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150dfc) {
            ctx->pc = 0x151010u;
            goto label_151010;
        }
    }
    ctx->pc = 0x150E04u;
label_150e04:
    // 0x150e04: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x150e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x150e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e0c: 0x0  nop
    ctx->pc = 0x150e0cu;
    // NOP
    // 0x150e10: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150e14: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x150e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e1c: 0x0  nop
    ctx->pc = 0x150e1cu;
    // NOP
    // 0x150e20: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150e24: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150e28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e2c: 0x0  nop
    ctx->pc = 0x150e2cu;
    // NOP
    // 0x150e30: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150e34: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e3c: 0x0  nop
    ctx->pc = 0x150e3cu;
    // NOP
    // 0x150e40: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150e44: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150e48: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150e4c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150e50: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150E50u;
    SET_GPR_U32(ctx, 31, 0x150E58u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150E58u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150E58u) { return; }
    ctx->pc = 0x150E58u;
label_150e58:
    // 0x150e58: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150e5c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150e60: 0x8fb500e8  lw          $s5, 0xE8($sp)
    ctx->pc = 0x150e60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150e64: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150e68: 0x90461576  lbu         $a2, 0x1576($v0)
    ctx->pc = 0x150e68u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5494)));
    // 0x150e6c: 0x92b41577  lbu         $s4, 0x1577($s5)
    ctx->pc = 0x150e6cu;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5495)));
    // 0x150e70: 0x72803e28  paddub      $a3, $s4, $zero
    ctx->pc = 0x150e70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x150e74: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150E74u;
    SET_GPR_U32(ctx, 31, 0x150E7Cu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150E74u, 0x150E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E7Cu;
label_150e7c:
    // 0x150e7c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x150e7cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150e80: 0x2341025  or          $v0, $s1, $s4
    ctx->pc = 0x150e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x150e84: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x150e84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150e88: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x150e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150e90: 0x0  nop
    ctx->pc = 0x150e90u;
    // NOP
    // 0x150e94: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150e98: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x150e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ea0: 0x0  nop
    ctx->pc = 0x150ea0u;
    // NOP
    // 0x150ea4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150ea8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150eb0: 0x0  nop
    ctx->pc = 0x150eb0u;
    // NOP
    // 0x150eb4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ec0: 0x0  nop
    ctx->pc = 0x150ec0u;
    // NOP
    // 0x150ec4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150ec8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150ecc: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150ed0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150ed4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150ED4u;
    SET_GPR_U32(ctx, 31, 0x150EDCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150EDCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150EDCu) { return; }
    ctx->pc = 0x150EDCu;
label_150edc:
    // 0x150edc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ee0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ee4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ee8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150eec: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x150eecu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x150ef0: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x150ef0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x150ef4: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150EF4u;
    SET_GPR_U32(ctx, 31, 0x150EFCu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150EF4u, 0x150EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150EFCu;
label_150efc:
    // 0x150efc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x150efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150f00: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x150f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x150f04: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x150f04u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x150f08: 0x3c06c3fa  lui         $a2, 0xC3FA
    ctx->pc = 0x150f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50170 << 16));
    // 0x150f0c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150f0cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f10: 0x0  nop
    ctx->pc = 0x150f10u;
    // NOP
    // 0x150f14: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150f18: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x150f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x150f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f20: 0x0  nop
    ctx->pc = 0x150f20u;
    // NOP
    // 0x150f24: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150f28: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x150f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x150f2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f30: 0x0  nop
    ctx->pc = 0x150f30u;
    // NOP
    // 0x150f34: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150f38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x150f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x150f3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f40: 0x0  nop
    ctx->pc = 0x150f40u;
    // NOP
    // 0x150f44: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150f48: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x150f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150f4c: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150f50: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150f54: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150F54u;
    SET_GPR_U32(ctx, 31, 0x150F5Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150F5Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150F5Cu) { return; }
    ctx->pc = 0x150F5Cu;
label_150f5c:
    // 0x150f5c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x150f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150f60: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150f60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150f64: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150f68: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x150f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150f6c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x150f6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150f70: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x150f70u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x150f74: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x150f74u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x150f78: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x150F78u;
    SET_GPR_U32(ctx, 31, 0x150F80u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x150F78u, 0x150F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150F80u;
label_150f80:
    // 0x150f80: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x150f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x150f84: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x150f84u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x150f88: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x150f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x150f8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150f8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150f90: 0x0  nop
    ctx->pc = 0x150f90u;
    // NOP
    // 0x150f94: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x150f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x150f98: 0x3c06c3fa  lui         $a2, 0xC3FA
    ctx->pc = 0x150f98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)50170 << 16));
    // 0x150f9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x150f9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fa0: 0x0  nop
    ctx->pc = 0x150fa0u;
    // NOP
    // 0x150fa4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x150fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x150fa8: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x150fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x150fac: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x150facu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fb0: 0x0  nop
    ctx->pc = 0x150fb0u;
    // NOP
    // 0x150fb4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x150fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x150fb8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x150fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x150fbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x150fbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150fc0: 0x0  nop
    ctx->pc = 0x150fc0u;
    // NOP
    // 0x150fc4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x150fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x150fc8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x150fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150fcc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x150fccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x150fd0: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x150fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x150fd4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x150fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x150fd8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x150FD8u;
    SET_GPR_U32(ctx, 31, 0x150FE0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x150FE0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x150FE0u) { return; }
    ctx->pc = 0x150FE0u;
label_150fe0:
    // 0x150fe0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x150fe0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150fe4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x150fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150fe8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x150fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150fec: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x150fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x150ff0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x150ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x150ff4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x150ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x150ff8: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x150ff8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x150ffc: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x150ffcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x151000: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151000u;
    SET_GPR_U32(ctx, 31, 0x151008u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151000u, 0x151008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151008u;
label_151008:
    // 0x151008: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x151008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x15100c: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x15100cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_151010:
    // 0x151010: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x151010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x151014: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151014u;
    {
        const bool branch_taken_0x151014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151014) {
            ctx->pc = 0x151030u;
            goto label_151030;
        }
    }
    ctx->pc = 0x15101Cu;
    // 0x15101c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151020: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x151024: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x151024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x151028: 0x853025  or          $a2, $a0, $a1
    ctx->pc = 0x151028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x15102c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x15102cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_151030:
    // 0x151030: 0x32230008  andi        $v1, $s1, 0x8
    ctx->pc = 0x151030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x151034: 0x10600137  beqz        $v1, . + 4 + (0x137 << 2)
    ctx->pc = 0x151034u;
    {
        const bool branch_taken_0x151034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151034) {
            ctx->pc = 0x151514u;
            goto label_151514;
        }
    }
    ctx->pc = 0x15103Cu;
    // 0x15103c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151040: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x151040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151044: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x151044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x151048: 0x838025  or          $s0, $a0, $v1
    ctx->pc = 0x151048u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x15104c: 0xacb00008  sw          $s0, 0x8($a1)
    ctx->pc = 0x15104cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 16));
    // 0x151050: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x151050u;
    {
        const bool branch_taken_0x151050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151050) {
            ctx->pc = 0x151514u;
            goto label_151514;
        }
    }
    ctx->pc = 0x151058u;
label_151058:
    // 0x151058: 0x1519c0  sll         $v1, $s5, 7
    ctx->pc = 0x151058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x15105c: 0x8fb600e8  lw          $s6, 0xE8($sp)
    ctx->pc = 0x15105cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151060: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x151060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x151064: 0x24721600  addiu       $s2, $v1, 0x1600
    ctx->pc = 0x151064u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5632));
    // 0x151068: 0x72408628  paddub      $s0, $s2, $zero
    ctx->pc = 0x151068u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x15106c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15106cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151070: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x151070u;
    {
        const bool branch_taken_0x151070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151070) {
            ctx->pc = 0x1510B0u;
            goto label_1510b0;
        }
    }
    ctx->pc = 0x151078u;
label_151078:
    // 0x151078: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x151078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15107c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x15107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151080: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x151080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151084: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151088: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x151088u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x15108c: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x15108cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x151090: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151090u;
    SET_GPR_U32(ctx, 31, 0x151098u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151090u, 0x151098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151098u;
label_151098:
    // 0x151098: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x151098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x15109c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x15109cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1510a0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1510a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1510a4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1510a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1510a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1510ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1510acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1510b0:
    // 0x1510b0: 0x2a440004  slti        $a0, $s2, 0x4
    ctx->pc = 0x1510b0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1510b4: 0x1480fff0  bnez        $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1510B4u;
    {
        const bool branch_taken_0x1510b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1510b4) {
            ctx->pc = 0x151078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151078;
        }
    }
    ctx->pc = 0x1510BCu;
    // 0x1510bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1510bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510c0: 0x0  nop
    ctx->pc = 0x1510c0u;
    // NOP
    // 0x1510c4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1510c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1510c8: 0x3c05c2c8  lui         $a1, 0xC2C8
    ctx->pc = 0x1510c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49864 << 16));
    // 0x1510cc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1510ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510d0: 0x0  nop
    ctx->pc = 0x1510d0u;
    // NOP
    // 0x1510d4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1510d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1510d8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1510d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1510dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1510dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510e0: 0x0  nop
    ctx->pc = 0x1510e0u;
    // NOP
    // 0x1510e4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1510e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1510e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1510e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1510ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1510ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510f0: 0x0  nop
    ctx->pc = 0x1510f0u;
    // NOP
    // 0x1510f4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1510f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1510f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1510f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510fc: 0x0  nop
    ctx->pc = 0x1510fcu;
    // NOP
    // 0x151100: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x151100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x151104: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x151104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x151108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15110c: 0x0  nop
    ctx->pc = 0x15110cu;
    // NOP
    // 0x151110: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x151110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x151114: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x151114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x151118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15111c: 0x0  nop
    ctx->pc = 0x15111cu;
    // NOP
    // 0x151120: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x151120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151124: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x151124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x151128: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151128u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15112c: 0x0  nop
    ctx->pc = 0x15112cu;
    // NOP
    // 0x151130: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x151130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x151134: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151138: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x151138u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x15113c: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x15113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x151140: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x151140u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151144: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151148: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151148u;
    SET_GPR_U32(ctx, 31, 0x151150u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x151150u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x151150u) { return; }
    ctx->pc = 0x151150u;
label_151150:
    // 0x151150: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x151150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151154: 0x8e700130  lw          $s0, 0x130($s3)
    ctx->pc = 0x151154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x151158: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x15115c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15115cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151160: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151160u;
    SET_GPR_U32(ctx, 31, 0x151168u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x151168u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x151168u) { return; }
    ctx->pc = 0x151168u;
label_151168:
    // 0x151168: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15116c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151170: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151174: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x151174u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151178: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x151178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15117c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x15117cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151180: 0x90c61576  lbu         $a2, 0x1576($a2)
    ctx->pc = 0x151180u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5494)));
    // 0x151184: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x151184u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x151188: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151188u;
    SET_GPR_U32(ctx, 31, 0x151190u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151188u, 0x151190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151190u;
label_151190:
    // 0x151190: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x151190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x151194: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x151194u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x151198: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151198u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15119c: 0x0  nop
    ctx->pc = 0x15119cu;
    // NOP
    // 0x1511a0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1511a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1511a4: 0x3c0542c8  lui         $a1, 0x42C8
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17096 << 16));
    // 0x1511a8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1511a8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511ac: 0x0  nop
    ctx->pc = 0x1511acu;
    // NOP
    // 0x1511b0: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1511b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1511b4: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x1511b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x1511b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1511b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511bc: 0x0  nop
    ctx->pc = 0x1511bcu;
    // NOP
    // 0x1511c0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1511c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1511c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1511c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1511c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1511c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511cc: 0x0  nop
    ctx->pc = 0x1511ccu;
    // NOP
    // 0x1511d0: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x1511d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x1511d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1511d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511d8: 0x0  nop
    ctx->pc = 0x1511d8u;
    // NOP
    // 0x1511dc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1511dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1511e0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1511e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1511e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511e8: 0x0  nop
    ctx->pc = 0x1511e8u;
    // NOP
    // 0x1511ec: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1511ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1511f0: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x1511f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x1511f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1511f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1511f8: 0x0  nop
    ctx->pc = 0x1511f8u;
    // NOP
    // 0x1511fc: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1511fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151200: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x151200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x151204: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151204u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151208: 0x0  nop
    ctx->pc = 0x151208u;
    // NOP
    // 0x15120c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x151210: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151214: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x151214u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x151218: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x151218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15121c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x15121cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151220: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151224: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151224u;
    SET_GPR_U32(ctx, 31, 0x15122Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15122Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15122Cu) { return; }
    ctx->pc = 0x15122Cu;
label_15122c:
    // 0x15122c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x151230: 0x8e700130  lw          $s0, 0x130($s3)
    ctx->pc = 0x151230u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x151234: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151234u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151238: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x151238u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15123c: 0x72c03628  paddub      $a2, $s6, $zero
    ctx->pc = 0x15123cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x151240: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151240u;
    SET_GPR_U32(ctx, 31, 0x151248u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x151248u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x151248u) { return; }
    ctx->pc = 0x151248u;
label_151248:
    // 0x151248: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151248u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15124c: 0x8fb200e8  lw          $s2, 0xE8($sp)
    ctx->pc = 0x15124cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151250: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151254: 0x8fa800e8  lw          $t0, 0xE8($sp)
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151258: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x151258u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x15125c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x15125cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151260: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x151260u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x151264: 0x91071577  lbu         $a3, 0x1577($t0)
    ctx->pc = 0x151264u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 5495)));
    // 0x151268: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151268u;
    SET_GPR_U32(ctx, 31, 0x151270u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151268u, 0x151270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151270u;
label_151270:
    // 0x151270: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151270u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151274: 0x2232025  or          $a0, $s1, $v1
    ctx->pc = 0x151274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x151278: 0x70808e28  paddub      $s1, $a0, $zero
    ctx->pc = 0x151278u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x15127c: 0x32230006  andi        $v1, $s1, 0x6
    ctx->pc = 0x15127cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x151280: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x151280u;
    {
        const bool branch_taken_0x151280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151280) {
            ctx->pc = 0x151514u;
            goto label_151514;
        }
    }
    ctx->pc = 0x151288u;
    // 0x151288: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x151288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15128c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x151290: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x151290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x151294: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x151294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x151298: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x151298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x15129c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x15129Cu;
    {
        const bool branch_taken_0x15129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15129c) {
            ctx->pc = 0x151514u;
            goto label_151514;
        }
    }
    ctx->pc = 0x1512A4u;
label_1512a4:
    // 0x1512a4: 0x1519c0  sll         $v1, $s5, 7
    ctx->pc = 0x1512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 7));
    // 0x1512a8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1512a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1512acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1512b0: 0x24501600  addiu       $s0, $v0, 0x1600
    ctx->pc = 0x1512b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5632));
    // 0x1512b4: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1512b4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1512b8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1512B8u;
    {
        const bool branch_taken_0x1512b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512b8) {
            ctx->pc = 0x151300u;
            goto label_151300;
        }
    }
    ctx->pc = 0x1512C0u;
label_1512c0:
    // 0x1512c0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512c4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1512c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1512c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512cc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1512ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1512d0: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x1512d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x1512d4: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x1512d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x1512d8: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x1512D8u;
    SET_GPR_U32(ctx, 31, 0x1512E0u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x1512D8u, 0x1512E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E0u;
label_1512e0:
    // 0x1512e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1512e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1512e4: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x1512e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x1512e8: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1512e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1512ec: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1512ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1512f0: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1512f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1512f4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1512f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1512f8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1512f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1512fc: 0x0  nop
    ctx->pc = 0x1512fcu;
    // NOP
label_151300:
    // 0x151300: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x151300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x151304: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x151304u;
    {
        const bool branch_taken_0x151304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151304) {
            ctx->pc = 0x1512C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1512c0;
        }
    }
    ctx->pc = 0x15130Cu;
    // 0x15130c: 0x32240006  andi        $a0, $s1, 0x6
    ctx->pc = 0x15130cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x151310: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x151310u;
    {
        const bool branch_taken_0x151310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151310) {
            ctx->pc = 0x15132Cu;
            goto label_15132c;
        }
    }
    ctx->pc = 0x151318u;
    // 0x151318: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x151318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15131c: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x15131cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151320: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x151320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x151324: 0xc22025  or          $a0, $a2, $v0
    ctx->pc = 0x151324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x151328: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x151328u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_15132c:
    // 0x15132c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15132cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151330: 0x0  nop
    ctx->pc = 0x151330u;
    // NOP
    // 0x151334: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x151334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x151338: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x151338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x15133c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15133cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151340: 0x0  nop
    ctx->pc = 0x151340u;
    // NOP
    // 0x151344: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x151344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x151348: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x151348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x15134c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15134cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151350: 0x0  nop
    ctx->pc = 0x151350u;
    // NOP
    // 0x151354: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x151354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x151358: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x151358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x15135c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x15135cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151360: 0x0  nop
    ctx->pc = 0x151360u;
    // NOP
    // 0x151364: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x151364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x151368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15136c: 0x0  nop
    ctx->pc = 0x15136cu;
    // NOP
    // 0x151370: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x151370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x151374: 0x3c06c2c8  lui         $a2, 0xC2C8
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49864 << 16));
    // 0x151378: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x151378u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15137c: 0x0  nop
    ctx->pc = 0x15137cu;
    // NOP
    // 0x151380: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x151380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x151384: 0x3c07c2c8  lui         $a3, 0xC2C8
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49864 << 16));
    // 0x151388: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x151388u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15138c: 0x0  nop
    ctx->pc = 0x15138cu;
    // NOP
    // 0x151390: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x151390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15139c: 0x0  nop
    ctx->pc = 0x15139cu;
    // NOP
    // 0x1513a0: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x1513a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x1513a4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1513a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1513a8: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x1513a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1513ac: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1513acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1513b0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1513B0u;
    SET_GPR_U32(ctx, 31, 0x1513B8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1513B8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1513B8u) { return; }
    ctx->pc = 0x1513B8u;
label_1513b8:
    // 0x1513b8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1513bc: 0x8e650130  lw          $a1, 0x130($s3)
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1513c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1513c4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1513C4u;
    SET_GPR_U32(ctx, 31, 0x1513CCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1513CCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1513CCu) { return; }
    ctx->pc = 0x1513CCu;
label_1513cc:
    // 0x1513cc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1513ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1513d0: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x1513d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1513d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1513d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1513d8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1513d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1513dc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x1513dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1513e0: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1513e4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x1513e4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1513e8: 0x90421576  lbu         $v0, 0x1576($v0)
    ctx->pc = 0x1513e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5494)));
    // 0x1513ec: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1513ecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1513f0: 0x90e71577  lbu         $a3, 0x1577($a3)
    ctx->pc = 0x1513f0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5495)));
    // 0x1513f4: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x1513F4u;
    SET_GPR_U32(ctx, 31, 0x1513FCu);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x1513F4u, 0x1513FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513FCu;
label_1513fc:
    // 0x1513fc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1513fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151400: 0x2263825  or          $a3, $s1, $a2
    ctx->pc = 0x151400u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x151404: 0x70e08e28  paddub      $s1, $a3, $zero
    ctx->pc = 0x151404u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151408: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151408u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15140c: 0x0  nop
    ctx->pc = 0x15140cu;
    // NOP
    // 0x151410: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x151410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x151414: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x151414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x151418: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151418u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15141c: 0x0  nop
    ctx->pc = 0x15141cu;
    // NOP
    // 0x151420: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x151420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x151424: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x151428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15142c: 0x0  nop
    ctx->pc = 0x15142cu;
    // NOP
    // 0x151430: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x151430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x151434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15143c: 0x0  nop
    ctx->pc = 0x15143cu;
    // NOP
    // 0x151440: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x151440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x151444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151448: 0x0  nop
    ctx->pc = 0x151448u;
    // NOP
    // 0x15144c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x15144cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x151450: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x151454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151458: 0x0  nop
    ctx->pc = 0x151458u;
    // NOP
    // 0x15145c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x15145cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x151460: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x151460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x151464: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151468: 0x0  nop
    ctx->pc = 0x151468u;
    // NOP
    // 0x15146c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x15146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x151470: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x151474: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151474u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151478: 0x0  nop
    ctx->pc = 0x151478u;
    // NOP
    // 0x15147c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x15147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x151480: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x151480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151484: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x151484u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x151488: 0x8e660130  lw          $a2, 0x130($s3)
    ctx->pc = 0x151488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x15148c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x15148cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x151490: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x151494: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x151494u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151498: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x151498u;
    SET_GPR_U32(ctx, 31, 0x1514A0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1514A0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1514A0u) { return; }
    ctx->pc = 0x1514A0u;
label_1514a0:
    // 0x1514a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1514a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514a4: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1514a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1514a8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1514a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1514ac: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x1514acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
    // 0x1514b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1514b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514b4: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1514b8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1514B8u;
    SET_GPR_U32(ctx, 31, 0x1514C0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1514C0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1514C0u) { return; }
    ctx->pc = 0x1514C0u;
label_1514c0:
    // 0x1514c0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1514c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514c4: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1514c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1514c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1514cc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1514d0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1514d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1514d4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1514d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1514d8: 0x90461576  lbu         $a2, 0x1576($v0)
    ctx->pc = 0x1514d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5494)));
    // 0x1514dc: 0x90671577  lbu         $a3, 0x1577($v1)
    ctx->pc = 0x1514dcu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5495)));
    // 0x1514e0: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x1514E0u;
    SET_GPR_U32(ctx, 31, 0x1514E8u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x1514E0u, 0x1514E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514E8u;
label_1514e8:
    // 0x1514e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1514e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1514ec: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x1514ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x1514f0: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1514f0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1514f4: 0x32260006  andi        $a2, $s1, 0x6
    ctx->pc = 0x1514f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x1514f8: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1514F8u;
    {
        const bool branch_taken_0x1514f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1514f8) {
            ctx->pc = 0x151514u;
            goto label_151514;
        }
    }
    ctx->pc = 0x151500u;
    // 0x151500: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151504: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151508: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x15150c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x15150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x151510: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x151510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_151514:
    // 0x151514: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x151514u;
    {
        const bool branch_taken_0x151514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x151514) {
            ctx->pc = 0x151564u;
            goto label_151564;
        }
    }
    ctx->pc = 0x15151Cu;
    // 0x15151c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x15151cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x151520: 0xaee419e8  sw          $a0, 0x19E8($s7)
    ctx->pc = 0x151520u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6632), GPR_U32(ctx, 4));
    // 0x151524: 0x32260001  andi        $a2, $s1, 0x1
    ctx->pc = 0x151524u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x151528: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x151528u;
    {
        const bool branch_taken_0x151528 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x151528) {
            ctx->pc = 0x151564u;
            goto label_151564;
        }
    }
    ctx->pc = 0x151530u;
    // 0x151530: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x151530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x151534: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x151534u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x151538: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x15153c: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x15153Cu;
    SET_GPR_U32(ctx, 31, 0x151544u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x15153Cu, 0x151544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151544u;
label_151544:
    // 0x151544: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x151544u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x151548: 0x3c030600  lui         $v1, 0x600
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1536 << 16));
    // 0x15154c: 0x3467ff80  ori         $a3, $v1, 0xFF80
    ctx->pc = 0x15154cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
    // 0x151550: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x151550u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x151554: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x151554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x151558: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x151558u;
    SET_GPR_U32(ctx, 31, 0x151560u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x151558u, 0x151560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151560u;
label_151560:
    // 0x151560: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x151560u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_151564:
    // 0x151564: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x151564u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151568: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x151568u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15156c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15156cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151570: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x151570u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151574: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x151574u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x151578: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x151578u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15157c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15157cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151580: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x151580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x151584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151588: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x15158c: 0x3e00008  jr          $ra
    ctx->pc = 0x15158Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15158Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151594u;
}
