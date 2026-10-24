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

// Function: entry_00215e2c
// Address: 0x215e2c - 0x215e40
void entry_00215e2c_0x215e2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215e2c_0x215e2c");
#endif

    ctx->pc = 0x215e2cu;

    // 0x215e2c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x215e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e30: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x215e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x215e34: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x215E34u;
    {
        const bool branch_taken_0x215e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215e34) {
            ctx->pc = 0x215E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215E34u;
            // 0x215e38: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215E60u;
            return;
        }
    }
    ctx->pc = 0x215E3Cu;
    // 0x215e3c: 0x0  nop
    ctx->pc = 0x215e3cu;
    // NOP
    ctx->pc = 0x215e40u;
}
