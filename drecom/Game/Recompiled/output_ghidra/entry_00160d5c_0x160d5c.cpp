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

// Function: entry_00160d5c
// Address: 0x160d5c - 0x160da8
void entry_00160d5c_0x160d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00160d5c_0x160d5c");
#endif

    ctx->pc = 0x160d5cu;

    // 0x160d5c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x160d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x160d60: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x160d60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x160d64: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x160d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x160d68: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x160d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x160d6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x160d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x160d70: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x160d70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x160d74: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x160d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x160d78: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x160D78u;
    {
        const bool branch_taken_0x160d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160d78) {
            ctx->pc = 0x160DD0u;
            return;
        }
    }
    ctx->pc = 0x160D80u;
    // 0x160d80: 0x920213a6  lbu         $v0, 0x13A6($s0)
    ctx->pc = 0x160d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5030)));
    // 0x160d84: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x160d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160d88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x160d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160d8c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x160D8Cu;
    {
        const bool branch_taken_0x160d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160d8c) {
            ctx->pc = 0x160DA8u;
            return;
        }
    }
    ctx->pc = 0x160D94u;
    // 0x160d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160d98: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160D98u;
    {
        const bool branch_taken_0x160d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x160d98) {
            ctx->pc = 0x160DA8u;
            return;
        }
    }
    ctx->pc = 0x160DA0u;
    // 0x160da0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x160DA0u;
    {
        const bool branch_taken_0x160da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160da0) {
            ctx->pc = 0x160DD0u;
            return;
        }
    }
    ctx->pc = 0x160DA8u;
}
