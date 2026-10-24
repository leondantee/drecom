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

// Function: entry_00215c90
// Address: 0x215c90 - 0x215ca8
void entry_00215c90_0x215c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215c90_0x215c90");
#endif

    ctx->pc = 0x215c90u;

    // 0x215c90: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x215C90u;
    {
        const bool branch_taken_0x215c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x215c90) {
            ctx->pc = 0x215C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215C90u;
            // 0x215c94: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215CE4u;
            return;
        }
    }
    ctx->pc = 0x215C98u;
    // 0x215c98: 0x16e00003  bnez        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x215C98u;
    {
        const bool branch_taken_0x215c98 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x215C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215C98u;
        // 0x215c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c98) {
            ctx->pc = 0x215CA8u;
            return;
        }
    }
    ctx->pc = 0x215CA0u;
    // 0x215ca0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x215CA0u;
    {
        const bool branch_taken_0x215ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215CA0u;
        // 0x215ca4: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ca0) {
            ctx->pc = 0x215CACu;
            return;
        }
    }
    ctx->pc = 0x215CA8u;
}
