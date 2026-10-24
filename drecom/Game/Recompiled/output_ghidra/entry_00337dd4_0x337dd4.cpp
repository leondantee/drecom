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

// Function: entry_00337dd4
// Address: 0x337dd4 - 0x337de0
void entry_00337dd4_0x337dd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00337dd4_0x337dd4");
#endif

    ctx->pc = 0x337dd4u;

    // 0x337dd4: 0xae006850  sw          $zero, 0x6850($s0)
    ctx->pc = 0x337dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26704), GPR_U32(ctx, 0));
    // 0x337dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x337DD8u;
    {
        const bool branch_taken_0x337dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x337dd8) {
            ctx->pc = 0x337DF0u;
            return;
        }
    }
    ctx->pc = 0x337DE0u;
}
