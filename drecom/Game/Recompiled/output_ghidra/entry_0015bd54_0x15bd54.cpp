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

// Function: entry_0015bd54
// Address: 0x15bd54 - 0x15bd60
void entry_0015bd54_0x15bd54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd54_0x15bd54");
#endif

    ctx->pc = 0x15bd54u;

    // 0x15bd54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15bd54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15bd58: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x15BD58u;
    {
        const bool branch_taken_0x15bd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bd58) {
            ctx->pc = 0x15BED0u;
            return;
        }
    }
    ctx->pc = 0x15BD60u;
}
