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

// Function: entry_002786a8
// Address: 0x2786a8 - 0x2786ac
void entry_002786a8_0x2786a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002786a8_0x2786a8");
#endif

    ctx->pc = 0x2786a8u;

    // 0x2786a8: 0xac231a80  sw          $v1, 0x1A80($at)
    ctx->pc = 0x2786a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6784), GPR_U32(ctx, 3));
    ctx->pc = 0x2786acu;
}
