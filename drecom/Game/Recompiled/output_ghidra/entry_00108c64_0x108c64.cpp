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

// Function: entry_00108c64
// Address: 0x108c64 - 0x108ca0
void entry_00108c64_0x108c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c64_0x108c64");
#endif

    ctx->pc = 0x108c64u;

    // 0x108c64: 0x24c33b28  addiu       $v1, $a2, 0x3B28
    ctx->pc = 0x108c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 15144));
    // 0x108c68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x108c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x108c6c: 0x240203ff  addiu       $v0, $zero, 0x3FF
    ctx->pc = 0x108c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x108c70: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x108c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x108c74: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x108c74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x108c78: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x108c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x108c7c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x108c7cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x108c80: 0xacc03b28  sw          $zero, 0x3B28($a2)
    ctx->pc = 0x108c80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15144), GPR_U32(ctx, 0));
    // 0x108c84: 0x109180  sll         $s2, $s0, 6
    ctx->pc = 0x108c84u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x108c88: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x108c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x108c8c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x108c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x108c90: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x108c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x108c94: 0x34c62010  ori         $a2, $a2, 0x2010
    ctx->pc = 0x108c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8208);
    // 0x108c98: 0xae803b20  sw          $zero, 0x3B20($s4)
    ctx->pc = 0x108c98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 15136), GPR_U32(ctx, 0));
    // 0x108c9c: 0x0  nop
    ctx->pc = 0x108c9cu;
    // NOP
    ctx->pc = 0x108ca0u;
}
