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

// Function: entry_0011e190
// Address: 0x11e190 - 0x11e198
void entry_0011e190_0x11e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e190_0x11e190");
#endif

    ctx->pc = 0x11e190u;

    // 0x11e190: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x11e190u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e194: 0x0  nop
    ctx->pc = 0x11e194u;
    // NOP
    ctx->pc = 0x11e198u;
}
