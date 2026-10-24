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

// Function: entry_0016c398
// Address: 0x16c398 - 0x16c3a4
void entry_0016c398_0x16c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c398_0x16c398");
#endif

    ctx->pc = 0x16c398u;

    // 0x16c398: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x16c398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x16c39c: 0x1000ff8a  b           . + 4 + (-0x76 << 2)
    ctx->pc = 0x16C39Cu;
    {
        const bool branch_taken_0x16c39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c39c) {
            ctx->pc = 0x16C1C8u;
            return;
        }
    }
    ctx->pc = 0x16C3A4u;
}
