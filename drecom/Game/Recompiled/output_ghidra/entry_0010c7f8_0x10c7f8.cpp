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

// Function: entry_0010c7f8
// Address: 0x10c7f8 - 0x10c810
void entry_0010c7f8_0x10c7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c7f8_0x10c7f8");
#endif

    ctx->pc = 0x10c7f8u;

    // 0x10c7f8: 0x1203000c  beq         $s0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x10C7F8u;
    {
        const bool branch_taken_0x10c7f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7F8u;
        // 0x10c7fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7f8) {
            ctx->pc = 0x10C82Cu;
            return;
        }
    }
    ctx->pc = 0x10C800u;
    // 0x10c800: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10C800u;
    {
        const bool branch_taken_0x10c800 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C800u;
        // 0x10c804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c800) {
            ctx->pc = 0x10C83Cu;
            return;
        }
    }
    ctx->pc = 0x10C808u;
    // 0x10c808: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10C808u;
    {
        const bool branch_taken_0x10c808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C808u;
        // 0x10c80c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c808) {
            ctx->pc = 0x10C854u;
            return;
        }
    }
    ctx->pc = 0x10C810u;
}
