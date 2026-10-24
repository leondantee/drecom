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

// Function: entry_001fe050
// Address: 0x1fe050 - 0x1fe058
void entry_001fe050_0x1fe050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe050_0x1fe050");
#endif

    ctx->pc = 0x1fe050u;

    // 0x1fe050: 0x1600ffe0  bnez        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1FE050u;
    {
        const bool branch_taken_0x1fe050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe050) {
            ctx->pc = 0x1FDFD4u;
            return;
        }
    }
    ctx->pc = 0x1FE058u;
}
