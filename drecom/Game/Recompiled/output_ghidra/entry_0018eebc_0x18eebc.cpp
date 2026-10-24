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

// Function: entry_0018eebc
// Address: 0x18eebc - 0x18eed0
void entry_0018eebc_0x18eebc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018eebc_0x18eebc");
#endif

    ctx->pc = 0x18eebcu;

    // 0x18eebc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x18eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18eec0: 0x8c420b24  lw          $v0, 0xB24($v0)
    ctx->pc = 0x18eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2852)));
    // 0x18eec4: 0xac400b20  sw          $zero, 0xB20($v0)
    ctx->pc = 0x18eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2848), GPR_U32(ctx, 0));
    // 0x18eec8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x18EEC8u;
    {
        const bool branch_taken_0x18eec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18eec8) {
            ctx->pc = 0x18EF14u;
            return;
        }
    }
    ctx->pc = 0x18EED0u;
}
