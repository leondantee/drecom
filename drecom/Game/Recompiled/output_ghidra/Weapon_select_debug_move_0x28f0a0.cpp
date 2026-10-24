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

// Function: Weapon_select_debug_move
// Address: 0x28f0a0 - 0x28f4a0
void Weapon_select_debug_move_0x28f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Weapon_select_debug_move_0x28f0a0");
#endif

    ctx->pc = 0x28f0a0u;

    // 0x28f0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28f0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28f0a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f0a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f0ac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x28f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x28f0b0: 0x24706150  addiu       $s0, $v1, 0x6150
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x28f0b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f0b8: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f0bc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f0c0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x28f0c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28f0c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F0C4u;
    {
        const bool branch_taken_0x28f0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f0c4) {
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28F0CCu;
    // 0x28f0cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f0d0: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f0d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f0d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f0d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f0d8: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f0d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f0dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F0DCu;
    {
        const bool branch_taken_0x28f0dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f0dc) {
            ctx->pc = 0x28F0F0u;
            goto label_28f0f0;
        }
    }
    ctx->pc = 0x28F0E4u;
    // 0x28f0e4: 0x8e035db0  lw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23984)));
    // 0x28f0e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f0ec: 0xae035db0  sw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 3));
label_28f0f0:
    // 0x28f0f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f0f4: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f0f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f0f8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f0fc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x28f0fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x28f100: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F100u;
    {
        const bool branch_taken_0x28f100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f100) {
            ctx->pc = 0x28F13Cu;
            goto label_28f13c;
        }
    }
    ctx->pc = 0x28F108u;
    // 0x28f108: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f10c: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f10cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f110: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f114: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f118: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F118u;
    {
        const bool branch_taken_0x28f118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f118) {
            ctx->pc = 0x28F13Cu;
            goto label_28f13c;
        }
    }
    ctx->pc = 0x28F120u;
    // 0x28f120: 0x8e035db0  lw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23984)));
    // 0x28f124: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x28f124u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28f128: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F128u;
    {
        const bool branch_taken_0x28f128 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f128) {
            ctx->pc = 0x28F13Cu;
            goto label_28f13c;
        }
    }
    ctx->pc = 0x28F130u;
    // 0x28f130: 0x8e035db0  lw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 23984)));
    // 0x28f134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f138: 0xae035db0  sw          $v1, 0x5DB0($s0)
    ctx->pc = 0x28f138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23984), GPR_U32(ctx, 3));
label_28f13c:
    // 0x28f13c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f140: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f140u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f144: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f148: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28f148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28f14c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28F14Cu;
    {
        const bool branch_taken_0x28f14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f14c) {
            ctx->pc = 0x28F178u;
            goto label_28f178;
        }
    }
    ctx->pc = 0x28F154u;
    // 0x28f154: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f158: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f15c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f160: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f164: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F164u;
    {
        const bool branch_taken_0x28f164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f164) {
            ctx->pc = 0x28F178u;
            goto label_28f178;
        }
    }
    ctx->pc = 0x28F16Cu;
    // 0x28f16c: 0x92035dfc  lbu         $v1, 0x5DFC($s0)
    ctx->pc = 0x28f16cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24060)));
    // 0x28f170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f174: 0xa2035dfc  sb          $v1, 0x5DFC($s0)
    ctx->pc = 0x28f174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 3));
label_28f178:
    // 0x28f178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f17c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f17cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f180: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f184: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x28f184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x28f188: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F188u;
    {
        const bool branch_taken_0x28f188 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f188) {
            ctx->pc = 0x28F1C4u;
            goto label_28f1c4;
        }
    }
    ctx->pc = 0x28F190u;
    // 0x28f190: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f194: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f198: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f19c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f1a0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F1A0u;
    {
        const bool branch_taken_0x28f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1a0) {
            ctx->pc = 0x28F1C4u;
            goto label_28f1c4;
        }
    }
    ctx->pc = 0x28F1A8u;
    // 0x28f1a8: 0x92035dfc  lbu         $v1, 0x5DFC($s0)
    ctx->pc = 0x28f1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24060)));
    // 0x28f1ac: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28f1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28f1b0: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F1B0u;
    {
        const bool branch_taken_0x28f1b0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28f1b0) {
            ctx->pc = 0x28F1C4u;
            goto label_28f1c4;
        }
    }
    ctx->pc = 0x28F1B8u;
    // 0x28f1b8: 0x92035dfc  lbu         $v1, 0x5DFC($s0)
    ctx->pc = 0x28f1b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24060)));
    // 0x28f1bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f1c0: 0xa2035dfc  sb          $v1, 0x5DFC($s0)
    ctx->pc = 0x28f1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24060), (uint8_t)GPR_U32(ctx, 3));
label_28f1c4:
    // 0x28f1c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f1c8: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f1c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f1cc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f1d0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f1d4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x28F1D4u;
    {
        const bool branch_taken_0x28f1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1d4) {
            ctx->pc = 0x28F224u;
            goto label_28f224;
        }
    }
    ctx->pc = 0x28F1DCu;
    // 0x28f1dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f1e0: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f1e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f1e4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f1e8: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f1ec: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x28F1ECu;
    {
        const bool branch_taken_0x28f1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1ec) {
            ctx->pc = 0x28F224u;
            goto label_28f224;
        }
    }
    ctx->pc = 0x28F1F4u;
    // 0x28f1f4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f1f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f1f8: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f1fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f200: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f204: 0xac232850  sw          $v1, 0x2850($at)
    ctx->pc = 0x28f204u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
    // 0x28f208: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f20c: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f20cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f210: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F210u;
    {
        const bool branch_taken_0x28f210 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x28f210) {
            ctx->pc = 0x28F224u;
            goto label_28f224;
        }
    }
    ctx->pc = 0x28F218u;
    // 0x28f218: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28f218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f21c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f220: 0xac232850  sw          $v1, 0x2850($at)
    ctx->pc = 0x28f220u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
label_28f224:
    // 0x28f224: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f228: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f22c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f230: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f234: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28F234u;
    {
        const bool branch_taken_0x28f234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f234) {
            ctx->pc = 0x28F280u;
            goto label_28f280;
        }
    }
    ctx->pc = 0x28F23Cu;
    // 0x28f23c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f23cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f240: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f240u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f244: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f248: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f24c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28F24Cu;
    {
        const bool branch_taken_0x28f24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f24c) {
            ctx->pc = 0x28F280u;
            goto label_28f280;
        }
    }
    ctx->pc = 0x28F254u;
    // 0x28f254: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f258: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f25c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28f25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28f260: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f264: 0xac232850  sw          $v1, 0x2850($at)
    ctx->pc = 0x28f264u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
    // 0x28f268: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f26c: 0x8c232850  lw          $v1, 0x2850($at)
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x622850u));
    // 0x28f270: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F270u;
    {
        const bool branch_taken_0x28f270 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28f270) {
            ctx->pc = 0x28F280u;
            goto label_28f280;
        }
    }
    ctx->pc = 0x28F278u;
    // 0x28f278: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f27c: 0xac202850  sw          $zero, 0x2850($at)
    ctx->pc = 0x28f27cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x622850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622850u, _value); } while (0);
label_28f280:
    // 0x28f280: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28f280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28f284: 0x8c242850  lw          $a0, 0x2850($at)
    ctx->pc = 0x28f284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x622850u));
    // 0x28f288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f28c: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F28Cu;
    {
        const bool branch_taken_0x28f28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f28c) {
            ctx->pc = 0x28F2C8u;
            goto label_28f2c8;
        }
    }
    ctx->pc = 0x28F294u;
    // 0x28f294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28f294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f298: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F298u;
    {
        const bool branch_taken_0x28f298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x28f298) {
            ctx->pc = 0x28F2BCu;
            goto label_28f2bc;
        }
    }
    ctx->pc = 0x28F2A0u;
    // 0x28f2a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F2A0u;
    {
        const bool branch_taken_0x28f2a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2a0) {
            ctx->pc = 0x28F2B0u;
            goto label_28f2b0;
        }
    }
    ctx->pc = 0x28F2A8u;
    // 0x28f2a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28F2A8u;
    {
        const bool branch_taken_0x28f2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2a8) {
            ctx->pc = 0x28F2CCu;
            goto label_28f2cc;
        }
    }
    ctx->pc = 0x28F2B0u;
label_28f2b0:
    // 0x28f2b0: 0x26115df0  addiu       $s1, $s0, 0x5DF0
    ctx->pc = 0x28f2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24048));
    // 0x28f2b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F2B4u;
    {
        const bool branch_taken_0x28f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2b4) {
            ctx->pc = 0x28F2CCu;
            goto label_28f2cc;
        }
    }
    ctx->pc = 0x28F2BCu;
label_28f2bc:
    // 0x28f2bc: 0x26115df4  addiu       $s1, $s0, 0x5DF4
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24052));
    // 0x28f2c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F2C0u;
    {
        const bool branch_taken_0x28f2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2c0) {
            ctx->pc = 0x28F2CCu;
            goto label_28f2cc;
        }
    }
    ctx->pc = 0x28F2C8u;
label_28f2c8:
    // 0x28f2c8: 0x26115df8  addiu       $s1, $s0, 0x5DF8
    ctx->pc = 0x28f2c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 24056));
label_28f2cc:
    // 0x28f2cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f2d0: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f2d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f2d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f2d8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f2dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F2DCu;
    {
        const bool branch_taken_0x28f2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2dc) {
            ctx->pc = 0x28F348u;
            goto label_28f348;
        }
    }
    ctx->pc = 0x28F2E4u;
    // 0x28f2e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f2e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f2e8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f2e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f2ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f2f0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x28f2f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x28f2f4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28F2F4u;
    {
        const bool branch_taken_0x28f2f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f2f4) {
            ctx->pc = 0x28F348u;
            goto label_28f348;
        }
    }
    ctx->pc = 0x28F2FCu;
    // 0x28f2fc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f300: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x28f300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x28f304: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f30c: 0x0  nop
    ctx->pc = 0x28f30cu;
    // NOP
    // 0x28f310: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28f310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f314: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28f318: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f31c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28f320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f324: 0x0  nop
    ctx->pc = 0x28f324u;
    // NOP
    // 0x28f328: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28f328u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f32c: 0x0  nop
    ctx->pc = 0x28f32cu;
    // NOP
    // 0x28f330: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28F330u;
    {
        const bool branch_taken_0x28f330 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f330) {
            ctx->pc = 0x28F348u;
            goto label_28f348;
        }
    }
    ctx->pc = 0x28F338u;
    // 0x28f338: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x28f33c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f33cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f340: 0x0  nop
    ctx->pc = 0x28f340u;
    // NOP
    // 0x28f344: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_28f348:
    // 0x28f348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f34c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f34cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f350: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f354: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x28f354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x28f358: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x28F358u;
    {
        const bool branch_taken_0x28f358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f358) {
            ctx->pc = 0x28F3CCu;
            goto label_28f3cc;
        }
    }
    ctx->pc = 0x28F360u;
    // 0x28f360: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f364: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f364u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f368: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f36c: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x28f36cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x28f370: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x28F370u;
    {
        const bool branch_taken_0x28f370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f370) {
            ctx->pc = 0x28F3CCu;
            goto label_28f3cc;
        }
    }
    ctx->pc = 0x28F378u;
    // 0x28f378: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f37c: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x28f380: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f388: 0x0  nop
    ctx->pc = 0x28f388u;
    // NOP
    // 0x28f38c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28f38cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f390: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x28f394: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x28f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f398: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f39c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f39cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f3a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f3a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3a4: 0x0  nop
    ctx->pc = 0x28f3a4u;
    // NOP
    // 0x28f3a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f3a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f3ac: 0x0  nop
    ctx->pc = 0x28f3acu;
    // NOP
    // 0x28f3b0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x28F3B0u;
    {
        const bool branch_taken_0x28f3b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f3b0) {
            ctx->pc = 0x28F3CCu;
            goto label_28f3cc;
        }
    }
    ctx->pc = 0x28F3B8u;
    // 0x28f3b8: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f3bc: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f3c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f3c4: 0x0  nop
    ctx->pc = 0x28f3c4u;
    // NOP
    // 0x28f3c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x28f3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_28f3cc:
    // 0x28f3cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f3d0: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f3d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f3d4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f3d8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28f3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28f3dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x28F3DCu;
    {
        const bool branch_taken_0x28f3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f3dc) {
            ctx->pc = 0x28F418u;
            goto label_28f418;
        }
    }
    ctx->pc = 0x28F3E4u;
    // 0x28f3e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f3e8: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f3e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f3ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f3f0: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x28f3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x28f3f4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F3F4u;
    {
        const bool branch_taken_0x28f3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f3f4) {
            ctx->pc = 0x28F418u;
            goto label_28f418;
        }
    }
    ctx->pc = 0x28F3FCu;
    // 0x28f3fc: 0xc6015dbc  lwc1        $f1, 0x5DBC($s0)
    ctx->pc = 0x28f3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f400: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f404: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f408: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f408u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f40c: 0x0  nop
    ctx->pc = 0x28f40cu;
    // NOP
    // 0x28f410: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28f410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28f414: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28f414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
label_28f418:
    // 0x28f418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f41c: 0x942300c8  lhu         $v1, 0xC8($at)
    ctx->pc = 0x28f41cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00C8u));
    // 0x28f420: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f424: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x28f424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28f428: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F428u;
    {
        const bool branch_taken_0x28f428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f428) {
            ctx->pc = 0x28F48Cu;
            goto label_28f48c;
        }
    }
    ctx->pc = 0x28F430u;
    // 0x28f430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28f430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28f434: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x28f434u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x28f438: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x28f43c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28f440: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28F440u;
    {
        const bool branch_taken_0x28f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f440) {
            ctx->pc = 0x28F48Cu;
            goto label_28f48c;
        }
    }
    ctx->pc = 0x28F448u;
    // 0x28f448: 0xc6015dbc  lwc1        $f1, 0x5DBC($s0)
    ctx->pc = 0x28f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f44c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x28f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x28f450: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x28f450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x28f454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28f454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f458: 0x0  nop
    ctx->pc = 0x28f458u;
    // NOP
    // 0x28f45c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28f45cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28f460: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28f460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
    // 0x28f464: 0xc6015dbc  lwc1        $f1, 0x5DBC($s0)
    ctx->pc = 0x28f464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f468: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28f468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f46c: 0x0  nop
    ctx->pc = 0x28f46cu;
    // NOP
    // 0x28f470: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f474: 0x0  nop
    ctx->pc = 0x28f474u;
    // NOP
    // 0x28f478: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x28F478u;
    {
        const bool branch_taken_0x28f478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f478) {
            ctx->pc = 0x28F48Cu;
            goto label_28f48c;
        }
    }
    ctx->pc = 0x28F480u;
    // 0x28f480: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28f480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28f484: 0x0  nop
    ctx->pc = 0x28f484u;
    // NOP
    // 0x28f488: 0xe6005dbc  swc1        $f0, 0x5DBC($s0)
    ctx->pc = 0x28f488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 23996), bits); }
label_28f48c:
    // 0x28f48c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28f48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f490: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28f490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f494: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28f494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28f498: 0x3e00008  jr          $ra
    ctx->pc = 0x28F498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F4A0u;
}
