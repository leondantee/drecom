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

// Function: entry_0032342c
// Address: 0x32342c - 0x323650
void entry_0032342c_0x32342c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032342c_0x32342c");
#endif

    switch (ctx->pc) {
        case 0x323548u: goto label_323548;
        case 0x323590u: goto label_323590;
        default: break;
    }

    ctx->pc = 0x32342cu;

    // 0x32342c: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x32342cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
    // 0x323430: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x323430u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x323434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x323438: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x323438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x32343c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x32343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x323440: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323444: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x323448: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x323448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x32344c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x32344cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323450: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323454: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x323458: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x323458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32345c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32345cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x323460: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x323460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x323464: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323468: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32346c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323470: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323474: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323478: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32347c: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x32347cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323480: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x323480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x323484: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323488: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32348c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32348cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323490: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323494: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323498: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32349c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x32349cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3234a0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x3234a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3234a4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3234a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3234a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3234ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3234acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3234b0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3234b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3234b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3234b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3234b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3234b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3234bc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3234bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234c0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3234c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3234c4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3234c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234c8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3234c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3234cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3234ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3234d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3234d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3234d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3234d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3234d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3234d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3234dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x3234dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x3234e0: 0x8fa70098  lw          $a3, 0x98($sp)
    ctx->pc = 0x3234e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x3234e4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3234e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3234e8: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3234ec: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x3234ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x3234f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3234f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3234f4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3234f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3234f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3234f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3234fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3234fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323500: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323508: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32350c: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x32350cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323510: 0x8fa700b0  lw          $a3, 0xB0($sp)
    ctx->pc = 0x323510u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x323514: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x323514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x323518: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x323518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x32351c: 0x8ce20130  lw          $v0, 0x130($a3)
    ctx->pc = 0x32351cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
    // 0x323520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x323520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323524: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x323524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x323528: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x323528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x32352c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x32352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x323530: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x323530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x323534: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x323534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x323538: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x323538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x32353c: 0x1023825  or          $a3, $t0, $v0
    ctx->pc = 0x32353cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x323540: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x323540u;
    SET_GPR_U32(ctx, 31, 0x323548u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x323540u, 0x323548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323548u;
label_323548:
    // 0x323548: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x323548u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32354c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x32354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x323550: 0xa2220347  sb          $v0, 0x347($s1)
    ctx->pc = 0x323550u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x323554: 0x328200ff  andi        $v0, $s4, 0xFF
    ctx->pc = 0x323554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
    // 0x323558: 0xa222036b  sb          $v0, 0x36B($s1)
    ctx->pc = 0x323558u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 875), (uint8_t)GPR_U32(ctx, 2));
    // 0x32355c: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x32355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x323560: 0xa222036c  sb          $v0, 0x36C($s1)
    ctx->pc = 0x323560u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 876), (uint8_t)GPR_U32(ctx, 2));
    // 0x323564: 0x96220340  lhu         $v0, 0x340($s1)
    ctx->pc = 0x323564u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x323568: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x323568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x32356c: 0xa6220340  sh          $v0, 0x340($s1)
    ctx->pc = 0x32356cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x323570: 0x96220340  lhu         $v0, 0x340($s1)
    ctx->pc = 0x323570u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 832)));
    // 0x323574: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x323574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x323578: 0xa6220340  sh          $v0, 0x340($s1)
    ctx->pc = 0x323578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x32357c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x32357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x323580: 0xa2220344  sb          $v0, 0x344($s1)
    ctx->pc = 0x323580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x323584: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x323584u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x323588: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x323588u;
    SET_GPR_U32(ctx, 31, 0x323590u);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x323588u, 0x323590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323590u;
label_323590:
    // 0x323590: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x323590u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x323594: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x323594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x323598: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x323598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x32359c: 0x1203002c  beq         $s0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x32359Cu;
    {
        const bool branch_taken_0x32359c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x32359c) {
            ctx->pc = 0x323650u;
            return;
        }
    }
    ctx->pc = 0x3235A4u;
    // 0x3235a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3235a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3235a8: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x3235a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x3235ac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235b4: 0x0  nop
    ctx->pc = 0x3235b4u;
    // NOP
    // 0x3235b8: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x3235b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x3235bc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235c4: 0x0  nop
    ctx->pc = 0x3235c4u;
    // NOP
    // 0x3235c8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x3235c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x3235cc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235d4: 0x0  nop
    ctx->pc = 0x3235d4u;
    // NOP
    // 0x3235d8: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x3235d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x3235dc: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3235dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3235e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3235e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3235e4: 0x0  nop
    ctx->pc = 0x3235e4u;
    // NOP
    // 0x3235e8: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x3235e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x3235ec: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x3235ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3235f0: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x3235f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x3235f4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3235f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3235f8: 0xe6000270  swc1        $f0, 0x270($s0)
    ctx->pc = 0x3235f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 624), bits); }
    // 0x3235fc: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3235fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323600: 0xe6000274  swc1        $f0, 0x274($s0)
    ctx->pc = 0x323600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 628), bits); }
    // 0x323604: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x323604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323608: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x323608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x32360c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x32360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x323610: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x323610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323614: 0xe6000280  swc1        $f0, 0x280($s0)
    ctx->pc = 0x323614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x323618: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x32361c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x32361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323620: 0xe6000284  swc1        $f0, 0x284($s0)
    ctx->pc = 0x323620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 644), bits); }
    // 0x323624: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x323624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x323628: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x323628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32362c: 0xe6000288  swc1        $f0, 0x288($s0)
    ctx->pc = 0x32362cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 648), bits); }
    // 0x323630: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x323630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x323634: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x323634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x323638: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x323638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x32363c: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x32363cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x323640: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x323640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x323644: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x323644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x323648: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323648u;
    {
        const bool branch_taken_0x323648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x323648) {
            ctx->pc = 0x323658u;
            return;
        }
    }
    ctx->pc = 0x323650u;
}
