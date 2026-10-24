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

// Function: entry_0011c978
// Address: 0x11c978 - 0x11c984
void entry_0011c978_0x11c978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c978_0x11c978");
#endif

    ctx->pc = 0x11c978u;

    // 0x11c978: 0x32e20001  andi        $v0, $s7, 0x1
    ctx->pc = 0x11c978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)1);
    // 0x11c97c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x11C97Cu;
    {
        const bool branch_taken_0x11c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C97Cu;
        // 0x11c980: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c97c) {
            ctx->pc = 0x11CA10u;
            return;
        }
    }
    ctx->pc = 0x11C984u;
}
