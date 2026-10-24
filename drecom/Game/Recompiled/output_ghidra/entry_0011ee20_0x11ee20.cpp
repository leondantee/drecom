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

// Function: entry_0011ee20
// Address: 0x11ee20 - 0x11ee24
void entry_0011ee20_0x11ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ee20_0x11ee20");
#endif

    ctx->pc = 0x11ee20u;

    // 0x11ee20: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x11ee20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->pc = 0x11ee24u;
}
