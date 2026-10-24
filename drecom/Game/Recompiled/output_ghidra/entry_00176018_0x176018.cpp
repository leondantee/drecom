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

// Function: entry_00176018
// Address: 0x176018 - 0x176020
void entry_00176018_0x176018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176018_0x176018");
#endif

    ctx->pc = 0x176018u;

    // 0x176018: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x176018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x17601c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17601cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    ctx->pc = 0x176020u;
}
