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

// Function: entry_00216fec
// Address: 0x216fec - 0x216ff0
void entry_00216fec_0x216fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216fec_0x216fec");
#endif

    ctx->pc = 0x216fecu;

    // 0x216fec: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x216FECu;
    {
        const bool branch_taken_0x216fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216fec) {
            ctx->pc = 0x216FA0u;
            return;
        }
    }
    ctx->pc = 0x216FF4u;
}
