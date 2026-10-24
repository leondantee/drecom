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

// Function: entry_00118da8
// Address: 0x118da8 - 0x118db4
void entry_00118da8_0x118da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118da8_0x118da8");
#endif

    ctx->pc = 0x118da8u;

    // 0x118da8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x118da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x118dac: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x118dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118db0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x118db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x118db4u;
}
