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

// Function: entry_002ea7d8
// Address: 0x2ea7d8 - 0x2ea8fc
void entry_002ea7d8_0x2ea7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ea7d8_0x2ea7d8");
#endif

    switch (ctx->pc) {
        case 0x2ea834u: goto label_2ea834;
        case 0x2ea8ccu: goto label_2ea8cc;
        default: break;
    }

    ctx->pc = 0x2ea7d8u;

    // 0x2ea7d8: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2ea7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2ea7dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea7dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea7e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ea7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ea7e4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2ea7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x2ea7e8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x2ea7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x2ea7ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ea7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea7f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ea7f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2ea7f4: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x2ea7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2ea7f8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x2ea7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2ea7fc: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x2ea7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2ea800: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2ea800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2ea804: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x2ea804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x2ea808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ea808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ea80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2ea80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2ea810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2ea810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2ea814: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ea814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ea818: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2ea818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2ea81c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x2ea81cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2ea820: 0x653824  and         $a3, $v1, $a1
    ctx->pc = 0x2ea820u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x2ea824: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2ea824u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea828: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x2ea828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2ea82c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2EA82Cu;
    SET_GPR_U32(ctx, 31, 0x2EA834u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2EA82Cu, 0x2EA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA834u;
label_2ea834:
    // 0x2ea834: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea838: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2ea83c: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x2ea83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x2ea840: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea844: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea844u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea848: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2ea848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea84c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ea84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ea850: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea854: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea858: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2ea858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2ea85c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea860: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea860u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea864: 0xa040011a  sb          $zero, 0x11A($v0)
    ctx->pc = 0x2ea864u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea868: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea86c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea86cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea870: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2ea870u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea878: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea878u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea87c: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2ea87cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea880: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea884: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea884u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea888: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2ea888u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea88c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea88cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea890: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2ea890u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea894: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2ea894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea898: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea89c: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ea89cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8a0: 0xa060013d  sb          $zero, 0x13D($v1)
    ctx->pc = 0x2ea8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea8a4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8a8: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ea8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8ac: 0xa060013e  sb          $zero, 0x13E($v1)
    ctx->pc = 0x2ea8acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea8b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8b4: 0x8c23a618  lw          $v1, -0x59E8($at)
    ctx->pc = 0x2ea8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8b8: 0xa060013f  sb          $zero, 0x13F($v1)
    ctx->pc = 0x2ea8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea8bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8c0: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2ea8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2ea8c4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2EA8C4u;
    SET_GPR_U32(ctx, 31, 0x2EA8CCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2EA8C4u, 0x2EA8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA8CCu;
label_2ea8cc:
    // 0x2ea8cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ea8ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ea8d0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8d4: 0xac23a610  sw          $v1, -0x59F0($at)
    ctx->pc = 0x2ea8d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2ea8d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ea8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ea8dc: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ea8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ea8e0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea8e4: 0x34650011  ori         $a1, $v1, 0x11
    ctx->pc = 0x2ea8e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2ea8e8: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA8E8u;
    {
        const bool branch_taken_0x2ea8e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x2ea8e8) {
            ctx->pc = 0x2EA8FCu;
            return;
        }
    }
    ctx->pc = 0x2EA8F0u;
    // 0x2ea8f0: 0x7000be28  paddub      $s7, $zero, $zero
    ctx->pc = 0x2ea8f0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2ea8f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA8F4u;
    {
        const bool branch_taken_0x2ea8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea8f4) {
            ctx->pc = 0x2EA920u;
            return;
        }
    }
    ctx->pc = 0x2EA8FCu;
}
