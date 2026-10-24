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

// Function: entry_0031e774
// Address: 0x31e774 - 0x31e77c
void entry_0031e774_0x31e774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031e774_0x31e774");
#endif

    ctx->pc = 0x31e774u;

    // 0x31e774: 0x8c23af6c  lw          $v1, -0x5094($at)
    ctx->pc = 0x31e774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294946668)));
    // 0x31e778: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->pc = 0x31e77cu;
}
