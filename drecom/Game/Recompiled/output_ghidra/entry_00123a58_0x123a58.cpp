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

// Function: entry_00123a58
// Address: 0x123a58 - 0x123a9c
void entry_00123a58_0x123a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a58_0x123a58");
#endif

    ctx->pc = 0x123a58u;

    // 0x123a58: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x123a58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123a5c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x123A5Cu;
    {
        const bool branch_taken_0x123a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123a5c) {
            ctx->pc = 0x1239C8u;
            return;
        }
    }
    ctx->pc = 0x123A64u;
    // 0x123a64: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x123a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x123a68: 0x94a3000e  lhu         $v1, 0xE($a1)
    ctx->pc = 0x123a68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x123a6c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x123a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x123a70: 0x30440018  andi        $a0, $v0, 0x18
    ctx->pc = 0x123a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x123a74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x123a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x123a78: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x123A78u;
    {
        const bool branch_taken_0x123a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x123a78) {
            ctx->pc = 0x123B08u;
            return;
        }
    }
    ctx->pc = 0x123A80u;
    // 0x123a80: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x123a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x123a84: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x123A84u;
    {
        const bool branch_taken_0x123a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x123a84) {
            ctx->pc = 0x123AD0u;
            return;
        }
    }
    ctx->pc = 0x123A8Cu;
    // 0x123a8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123A8Cu;
    {
        const bool branch_taken_0x123a8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a8c) {
            ctx->pc = 0x123A9Cu;
            return;
        }
    }
    ctx->pc = 0x123A94u;
    // 0x123a94: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x123A94u;
    {
        const bool branch_taken_0x123a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x123a94) {
            ctx->pc = 0x123A9Cu;
            return;
        }
    }
    ctx->pc = 0x123A9Cu;
}
