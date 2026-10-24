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

// Function: entry_00107a40
// Address: 0x107a40 - 0x107a4c
void entry_00107a40_0x107a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a40_0x107a40");
#endif

    ctx->pc = 0x107a40u;

    // 0x107a40: 0xac603aa0  sw          $zero, 0x3AA0($v1)
    ctx->pc = 0x107a40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15008), GPR_U32(ctx, 0));
    // 0x107a44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x107A44u;
    {
        const bool branch_taken_0x107a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107A44u;
        // 0x107a48: 0xace23ad8  sw          $v0, 0x3AD8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 15064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107a44) {
            ctx->pc = 0x107A54u;
            return;
        }
    }
    ctx->pc = 0x107A4Cu;
}
