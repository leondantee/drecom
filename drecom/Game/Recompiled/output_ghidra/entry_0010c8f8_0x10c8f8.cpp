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

// Function: entry_0010c8f8
// Address: 0x10c8f8 - 0x10c910
void entry_0010c8f8_0x10c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c8f8_0x10c8f8");
#endif

    ctx->pc = 0x10c8f8u;

    // 0x10c8f8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C8F8u;
    {
        const bool branch_taken_0x10c8f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8F8u;
        // 0x10c8fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8f8) {
            ctx->pc = 0x10C940u;
            return;
        }
    }
    ctx->pc = 0x10C900u;
    // 0x10c900: 0x12020014  beq         $s0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10C900u;
    {
        const bool branch_taken_0x10c900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C900u;
        // 0x10c904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c900) {
            ctx->pc = 0x10C954u;
            return;
        }
    }
    ctx->pc = 0x10C908u;
    // 0x10c908: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10C908u;
    {
        const bool branch_taken_0x10c908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C908u;
        // 0x10c90c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c908) {
            ctx->pc = 0x10C990u;
            return;
        }
    }
    ctx->pc = 0x10C910u;
}
