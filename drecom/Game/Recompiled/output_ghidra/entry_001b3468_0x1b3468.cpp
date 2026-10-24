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

// Function: entry_001b3468
// Address: 0x1b3468 - 0x1b347c
void entry_001b3468_0x1b3468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3468_0x1b3468");
#endif

    ctx->pc = 0x1b3468u;

    // 0x1b3468: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b3468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b346c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b346cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b3470: 0xac221a68  sw          $v0, 0x1A68($at)
    ctx->pc = 0x1b3470u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    // 0x1b3474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3474u;
    {
        const bool branch_taken_0x1b3474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3474) {
            ctx->pc = 0x1B3498u;
            return;
        }
    }
    ctx->pc = 0x1B347Cu;
}
