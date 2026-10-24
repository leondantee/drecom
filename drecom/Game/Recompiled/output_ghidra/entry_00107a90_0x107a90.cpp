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

// Function: entry_00107a90
// Address: 0x107a90 - 0x107a94
void entry_00107a90_0x107a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107a90_0x107a90");
#endif

    ctx->pc = 0x107a90u;

    // 0x107a90: 0x8cc43e38  lw          $a0, 0x3E38($a2)
    ctx->pc = 0x107a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 15928)));
    ctx->pc = 0x107a94u;
}
