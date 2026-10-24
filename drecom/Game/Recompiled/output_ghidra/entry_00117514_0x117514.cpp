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

// Function: entry_00117514
// Address: 0x117514 - 0x117534
void entry_00117514_0x117514(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117514_0x117514");
#endif

    ctx->pc = 0x117514u;

    // 0x117514: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x117514u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x117518: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x117518u;
    {
        const bool branch_taken_0x117518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117518u;
        // 0x11751c: 0x2466005b  addiu       $a2, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117518) {
            ctx->pc = 0x117560u;
            return;
        }
    }
    ctx->pc = 0x117520u;
    // 0x117520: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x117520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x117524: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117524u;
    {
        const bool branch_taken_0x117524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117524u;
        // 0x117528: 0x91302  srl         $v0, $t1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117524) {
            ctx->pc = 0x117534u;
            return;
        }
    }
    ctx->pc = 0x11752Cu;
    // 0x11752c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11752Cu;
    {
        const bool branch_taken_0x11752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x117530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11752Cu;
        // 0x117530: 0x2446006e  addiu       $a2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11752c) {
            ctx->pc = 0x117560u;
            return;
        }
    }
    ctx->pc = 0x117534u;
}
