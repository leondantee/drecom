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

// Function: entry_0011a4cc
// Address: 0x11a4cc - 0x11a4d4
void entry_0011a4cc_0x11a4cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a4cc_0x11a4cc");
#endif

    ctx->pc = 0x11a4ccu;

    // 0x11a4cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x11a4ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4d0: 0x232802b  sltu        $s0, $s1, $s2
    ctx->pc = 0x11a4d0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    ctx->pc = 0x11a4d4u;
}
