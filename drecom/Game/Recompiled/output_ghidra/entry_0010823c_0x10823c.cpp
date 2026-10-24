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

// Function: entry_0010823c
// Address: 0x10823c - 0x108260
void entry_0010823c_0x10823c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010823c_0x10823c");
#endif

    ctx->pc = 0x10823cu;

    // 0x10823c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x108240: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x108240u;
    {
        const bool branch_taken_0x108240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x108240) {
            ctx->pc = 0x10827Cu;
            return;
        }
    }
    ctx->pc = 0x108248u;
    // 0x108248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108248u;
    {
        const bool branch_taken_0x108248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108248u;
        // 0x10824c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108248) {
            ctx->pc = 0x108260u;
            return;
        }
    }
    ctx->pc = 0x108250u;
    // 0x108250: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x108250u;
    {
        const bool branch_taken_0x108250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x108254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108250u;
        // 0x108254: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108250) {
            ctx->pc = 0x108274u;
            return;
        }
    }
    ctx->pc = 0x108258u;
    // 0x108258: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x108258u;
    {
        const bool branch_taken_0x108258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108258u;
        // 0x10825c: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108258) {
            ctx->pc = 0x108288u;
            return;
        }
    }
    ctx->pc = 0x108260u;
}
