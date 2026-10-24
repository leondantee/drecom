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

// Function: entry_00326658
// Address: 0x326658 - 0x326668
void entry_00326658_0x326658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00326658_0x326658");
#endif

    ctx->pc = 0x326658u;

    // 0x326658: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x326658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x32665c: 0xa0400b1c  sb          $zero, 0xB1C($v0)
    ctx->pc = 0x32665cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2844), (uint8_t)GPR_U32(ctx, 0));
    // 0x326660: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x326660u;
    {
        const bool branch_taken_0x326660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x326660) {
            ctx->pc = 0x3266C8u;
            return;
        }
    }
    ctx->pc = 0x326668u;
}
