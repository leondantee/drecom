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

// Function: entry_00215ca8
// Address: 0x215ca8 - 0x215cac
void entry_00215ca8_0x215ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215ca8_0x215ca8");
#endif

    ctx->pc = 0x215ca8u;

    // 0x215ca8: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x215ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x215cacu;
}
