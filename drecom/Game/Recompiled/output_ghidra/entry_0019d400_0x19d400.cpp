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

// Function: entry_0019d400
// Address: 0x19d400 - 0x19d404
void entry_0019d400_0x19d400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d400_0x19d400");
#endif

    ctx->pc = 0x19d400u;

    // 0x19d400: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x19d400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x19d404u;
}
