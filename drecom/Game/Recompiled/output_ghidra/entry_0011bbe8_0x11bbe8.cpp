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

// Function: entry_0011bbe8
// Address: 0x11bbe8 - 0x11bbf4
void entry_0011bbe8_0x11bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bbe8_0x11bbe8");
#endif

    ctx->pc = 0x11bbe8u;

    // 0x11bbe8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11bbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bbec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11BBECu;
    {
        const bool branch_taken_0x11bbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BBECu;
        // 0x11bbf0: 0xa2620000  sb          $v0, 0x0($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbec) {
            ctx->pc = 0x11BC38u;
            return;
        }
    }
    ctx->pc = 0x11BBF4u;
}
