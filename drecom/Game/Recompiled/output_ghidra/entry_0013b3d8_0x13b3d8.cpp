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

// Function: entry_0013b3d8
// Address: 0x13b3d8 - 0x13b3dc
void entry_0013b3d8_0x13b3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b3d8_0x13b3d8");
#endif

    ctx->pc = 0x13b3d8u;

    // 0x13b3d8: 0xac231a3c  sw          $v1, 0x1A3C($at)
    ctx->pc = 0x13b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 3));
    ctx->pc = 0x13b3dcu;
}
