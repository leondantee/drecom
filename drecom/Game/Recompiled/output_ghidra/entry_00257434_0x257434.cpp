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

// Function: entry_00257434
// Address: 0x257434 - 0x257490
void entry_00257434_0x257434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00257434_0x257434");
#endif

    ctx->pc = 0x257434u;

    // 0x257434: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x257438: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x257438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x25743c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25743cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x257440: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x257440u;
    {
        const bool branch_taken_0x257440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257440) {
            ctx->pc = 0x257490u;
            return;
        }
    }
    ctx->pc = 0x257448u;
    // 0x257448: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x257448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25744c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x25744cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x257450: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x257450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x257454: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x257454u;
    {
        const bool branch_taken_0x257454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x257454) {
            ctx->pc = 0x257490u;
            return;
        }
    }
    ctx->pc = 0x25745Cu;
    // 0x25745c: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x25745cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257460: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x257464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x257464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257468: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25746c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x25746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x257470: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x257470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x257474: 0x97a30088  lhu         $v1, 0x88($sp)
    ctx->pc = 0x257474u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x257478: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x257478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25747c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25747cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x257480: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x257480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x257484: 0x8c720018  lw          $s2, 0x18($v1)
    ctx->pc = 0x257484u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x257488: 0x0  nop
    ctx->pc = 0x257488u;
    // NOP
    // 0x25748c: 0x0  nop
    ctx->pc = 0x25748cu;
    // NOP
    ctx->pc = 0x257490u;
}
