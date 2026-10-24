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

// Function: entry_00273b30
// Address: 0x273b30 - 0x273b3c
void entry_00273b30_0x273b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b30_0x273b30");
#endif

    ctx->pc = 0x273b30u;

    // 0x273b30: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x273b30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x273b34: 0x1000018c  b           . + 4 + (0x18C << 2)
    ctx->pc = 0x273B34u;
    {
        const bool branch_taken_0x273b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b34) {
            ctx->pc = 0x274168u;
            return;
        }
    }
    ctx->pc = 0x273B3Cu;
}
