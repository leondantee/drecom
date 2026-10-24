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

// Function: entry_0019fe28
// Address: 0x19fe28 - 0x19fe30
void entry_0019fe28_0x19fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe28_0x19fe28");
#endif

    ctx->pc = 0x19fe28u;

    // 0x19fe28: 0x26100090  addiu       $s0, $s0, 0x90
    ctx->pc = 0x19fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x19fe2c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19fe2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x19fe30u;
}
