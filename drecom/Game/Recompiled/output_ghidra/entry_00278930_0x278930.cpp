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

// Function: entry_00278930
// Address: 0x278930 - 0x278938
void entry_00278930_0x278930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00278930_0x278930");
#endif

    ctx->pc = 0x278930u;

    // 0x278930: 0x2442e4b0  addiu       $v0, $v0, -0x1B50
    ctx->pc = 0x278930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960304));
    // 0x278934: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x278934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x278938u;
}
