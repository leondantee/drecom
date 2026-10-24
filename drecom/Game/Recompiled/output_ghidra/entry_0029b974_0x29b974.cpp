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

// Function: entry_0029b974
// Address: 0x29b974 - 0x29b978
void entry_0029b974_0x29b974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029b974_0x29b974");
#endif

    ctx->pc = 0x29b974u;

    // 0x29b974: 0xffa001f0  sd          $zero, 0x1F0($sp)
    ctx->pc = 0x29b974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 0));
    ctx->pc = 0x29b978u;
}
