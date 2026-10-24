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

// Function: entry_0021645c
// Address: 0x21645c - 0x216464
void entry_0021645c_0x21645c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021645c_0x21645c");
#endif

    ctx->pc = 0x21645cu;

    // 0x21645c: 0xac83aae8  sw          $v1, -0x5518($a0)
    ctx->pc = 0x21645cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294945512), GPR_U32(ctx, 3));
    // 0x216460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x216460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216464u;
}
