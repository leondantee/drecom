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

// Function: $L14
// Address: 0x11b018 - 0x11b030
void ps2__L14_0x11b018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L14_0x11b018");
#endif

    ctx->pc = 0x11b018u;

    // 0x11b018: 0x10c0ffa1  beqz        $a2, . + 4 + (-0x5F << 2)
    ctx->pc = 0x11B018u;
    {
        const bool branch_taken_0x11b018 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b018) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11B020u;
    // 0x11b020: 0x10e0ff9f  beqz        $a3, . + 4 + (-0x61 << 2)
    ctx->pc = 0x11B020u;
    {
        const bool branch_taken_0x11b020 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B020u;
        // 0x11b024: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b020) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11B028u;
    // 0x11b028: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b02c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x11b02cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->pc = 0x11b030u;
}
