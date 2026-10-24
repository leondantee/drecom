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

// Function: entry_00265d5c
// Address: 0x265d5c - 0x265d98
void entry_00265d5c_0x265d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265d5c_0x265d5c");
#endif

    ctx->pc = 0x265d5cu;

    // 0x265d5c: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265d60: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x265d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x265d64: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265d68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d6c: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x265d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x265d70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d74: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265d78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d7c: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265d80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d84: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265d8c: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x265d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x265d90: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265d94: 0x0  nop
    ctx->pc = 0x265d94u;
    // NOP
    ctx->pc = 0x265d98u;
}
