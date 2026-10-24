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

// Function: entry_0019fe30
// Address: 0x19fe30 - 0x19fe40
void entry_0019fe30_0x19fe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe30_0x19fe30");
#endif

    ctx->pc = 0x19fe30u;

    // 0x19fe30: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x19fe30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x19fe34: 0x1460ffd6  bnez        $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x19FE34u;
    {
        const bool branch_taken_0x19fe34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fe34) {
            ctx->pc = 0x19FD90u;
            return;
        }
    }
    ctx->pc = 0x19FE3Cu;
    // 0x19fe3c: 0x0  nop
    ctx->pc = 0x19fe3cu;
    // NOP
    ctx->pc = 0x19fe40u;
}
