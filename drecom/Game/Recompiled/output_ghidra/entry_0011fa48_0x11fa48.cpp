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

// Function: entry_0011fa48
// Address: 0x11fa48 - 0x11fa4c
void entry_0011fa48_0x11fa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa48_0x11fa48");
#endif

    ctx->pc = 0x11fa48u;

    // 0x11fa48: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x11fa48u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->pc = 0x11fa4cu;
}
