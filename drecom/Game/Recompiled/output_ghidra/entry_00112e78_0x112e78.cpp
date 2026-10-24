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

// Function: entry_00112e78
// Address: 0x112e78 - 0x112e84
void entry_00112e78_0x112e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112e78_0x112e78");
#endif

    ctx->pc = 0x112e78u;

    // 0x112e78: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x112e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112E7Cu;
    {
        const bool branch_taken_0x112e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E7Cu;
        // 0x112e80: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e7c) {
            ctx->pc = 0x112E8Cu;
            return;
        }
    }
    ctx->pc = 0x112E84u;
}
