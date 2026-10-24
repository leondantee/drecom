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

// Function: entry_001171b8
// Address: 0x1171b8 - 0x1171bc
void entry_001171b8_0x1171b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001171b8_0x1171b8");
#endif

    ctx->pc = 0x1171b8u;

    // 0x1171b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1171b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x1171bcu;
}
