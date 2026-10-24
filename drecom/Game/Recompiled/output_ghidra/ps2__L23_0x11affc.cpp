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

// Function: $L23
// Address: 0x11affc - 0x11b004
void ps2__L23_0x11affc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L23_0x11affc");
#endif

    ctx->pc = 0x11affcu;

    // 0x11affc: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x11affcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b000: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x11b000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b004u;
}
