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

// Function: entry_00294a54
// Address: 0x294a54 - 0x294a58
void entry_00294a54_0x294a54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294a54_0x294a54");
#endif

    ctx->pc = 0x294a54u;

    // 0x294a54: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x294a54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x294a58u;
}
