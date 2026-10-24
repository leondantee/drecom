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

// Function: entry_00320818
// Address: 0x320818 - 0x3208cc
void entry_00320818_0x320818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320818_0x320818");
#endif

    ctx->pc = 0x320818u;

    // 0x320818: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x320818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32081c: 0x90a40346  lbu         $a0, 0x346($a1)
    ctx->pc = 0x32081cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 838)));
    // 0x320820: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x320820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x320824: 0xa0a30346  sb          $v1, 0x346($a1)
    ctx->pc = 0x320824u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 838), (uint8_t)GPR_U32(ctx, 3));
    // 0x320828: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32082c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x32082cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320830: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x320830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x320834: 0xa0830348  sb          $v1, 0x348($a0)
    ctx->pc = 0x320834u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 840), (uint8_t)GPR_U32(ctx, 3));
    // 0x320838: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32083c: 0x90830348  lbu         $v1, 0x348($a0)
    ctx->pc = 0x32083cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 840)));
    // 0x320840: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x320840u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320844: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x320844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x320848: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x320848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x32084c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32084cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320850: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x320850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320854: 0xa064034b  sb          $a0, 0x34B($v1)
    ctx->pc = 0x320854u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 843), (uint8_t)GPR_U32(ctx, 4));
    // 0x320858: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32085c: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x32085cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x320860: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x320860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320864: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x320864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320868: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x32086c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x32086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x320870: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x320870u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x320874: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320878: 0x90830346  lbu         $v1, 0x346($a0)
    ctx->pc = 0x320878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 838)));
    // 0x32087c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x32087cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x320880: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x320880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x320884: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320888: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x320888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x32088c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x32088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x320890: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x320890u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x320894: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x320894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320898: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x320898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x32089c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x32089cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3208a0: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x3208a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208a4: 0x92030346  lbu         $v1, 0x346($s0)
    ctx->pc = 0x3208a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 838)));
    // 0x3208a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3208a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3208ac: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x3208acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3208b0: 0x14200143  bnez        $at, . + 4 + (0x143 << 2)
    ctx->pc = 0x3208B0u;
    {
        const bool branch_taken_0x3208b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3208b0) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x3208B8u;
    // 0x3208b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3208b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3208bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3208bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3208c0: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x3208c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x3208c4: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x3208C4u;
    {
        const bool branch_taken_0x3208c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3208c4) {
            ctx->pc = 0x320DC0u;
            return;
        }
    }
    ctx->pc = 0x3208CCu;
}
