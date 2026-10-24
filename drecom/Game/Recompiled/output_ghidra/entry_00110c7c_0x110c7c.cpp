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

// Function: entry_00110c7c
// Address: 0x110c7c - 0x110c84
void entry_00110c7c_0x110c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110c7c_0x110c7c");
#endif

    ctx->pc = 0x110c7cu;

    // 0x110c7c: 0xae024618  sw          $v0, 0x4618($s0)
    ctx->pc = 0x110c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17944), GPR_U32(ctx, 2));
    // 0x110c80: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x110c80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x110c84u;
}
