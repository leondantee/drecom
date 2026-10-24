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

// Function: entry_001105ac
// Address: 0x1105ac - 0x1105b4
void entry_001105ac_0x1105ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001105ac_0x1105ac");
#endif

    ctx->pc = 0x1105acu;

    // 0x1105ac: 0xae624618  sw          $v0, 0x4618($s3)
    ctx->pc = 0x1105acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 17944), GPR_U32(ctx, 2));
    // 0x1105b0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1105b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1105b4u;
}
