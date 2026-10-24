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

// Function: entry_00215f64
// Address: 0x215f64 - 0x215f68
void entry_00215f64_0x215f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215f64_0x215f64");
#endif

    ctx->pc = 0x215f64u;

    // 0x215f64: 0xacc20038  sw          $v0, 0x38($a2)
    ctx->pc = 0x215f64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 56), GPR_U32(ctx, 2));
    ctx->pc = 0x215f68u;
}
