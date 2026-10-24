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

// Function: entry_001122a8
// Address: 0x1122a8 - 0x1122b0
void entry_001122a8_0x1122a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001122a8_0x1122a8");
#endif

    ctx->pc = 0x1122a8u;

    // 0x1122a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1122a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1122ac: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1122acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    ctx->pc = 0x1122b0u;
}
