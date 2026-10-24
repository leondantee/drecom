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

// Function: entry_0010a5ec
// Address: 0x10a5ec - 0x10a5f8
void entry_0010a5ec_0x10a5ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a5ec_0x10a5ec");
#endif

    ctx->pc = 0x10a5ecu;

    // 0x10a5ec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10a5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10a5f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10A5F0u;
    {
        const bool branch_taken_0x10a5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5F0u;
        // 0x10a5f4: 0xace40008  sw          $a0, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5f0) {
            ctx->pc = 0x10A604u;
            return;
        }
    }
    ctx->pc = 0x10A5F8u;
}
