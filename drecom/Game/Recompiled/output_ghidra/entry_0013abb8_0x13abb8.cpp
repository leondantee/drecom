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

// Function: entry_0013abb8
// Address: 0x13abb8 - 0x13abe0
void entry_0013abb8_0x13abb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013abb8_0x13abb8");
#endif

    ctx->pc = 0x13abb8u;

    // 0x13abb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13abbc: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13ABBCu;
    {
        const bool branch_taken_0x13abbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13abbc) {
            ctx->pc = 0x13ABF8u;
            return;
        }
    }
    ctx->pc = 0x13ABC4u;
    // 0x13abc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13abc8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13ABC8u;
    {
        const bool branch_taken_0x13abc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x13abc8) {
            ctx->pc = 0x13ABE0u;
            return;
        }
    }
    ctx->pc = 0x13ABD0u;
    // 0x13abd0: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x13ABD0u;
    {
        const bool branch_taken_0x13abd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abd0) {
            ctx->pc = 0x13AC60u;
            return;
        }
    }
    ctx->pc = 0x13ABD8u;
    // 0x13abd8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x13ABD8u;
    {
        const bool branch_taken_0x13abd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13abd8) {
            ctx->pc = 0x13AC60u;
            return;
        }
    }
    ctx->pc = 0x13ABE0u;
}
