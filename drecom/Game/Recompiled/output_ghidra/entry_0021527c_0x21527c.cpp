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

// Function: entry_0021527c
// Address: 0x21527c - 0x215288
void entry_0021527c_0x21527c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021527c_0x21527c");
#endif

    ctx->pc = 0x21527cu;

    // 0x21527c: 0xf  sync
    ctx->pc = 0x21527cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x215280: 0x42000038  ei
    ctx->pc = 0x215280u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x215284: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x215284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x215288u;
}
