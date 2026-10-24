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

// Function: entry_00118720
// Address: 0x118720 - 0x118728
void entry_00118720_0x118720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118720_0x118720");
#endif

    ctx->pc = 0x118720u;

    // 0x118720: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118724: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x118724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
    ctx->pc = 0x118728u;
}
