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

// Function: entry_00187d94
// Address: 0x187d94 - 0x187da4
void entry_00187d94_0x187d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187d94_0x187d94");
#endif

    ctx->pc = 0x187d94u;

    // 0x187d94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x187d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x187d98: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x187d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x187d9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x187D9Cu;
    {
        const bool branch_taken_0x187d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187d9c) {
            ctx->pc = 0x187DD0u;
            return;
        }
    }
    ctx->pc = 0x187DA4u;
}
