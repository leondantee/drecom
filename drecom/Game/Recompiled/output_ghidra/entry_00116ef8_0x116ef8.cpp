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

// Function: entry_00116ef8
// Address: 0x116ef8 - 0x116efc
void entry_00116ef8_0x116ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ef8_0x116ef8");
#endif

    ctx->pc = 0x116ef8u;

    // 0x116ef8: 0x8c62490c  lw          $v0, 0x490C($v1)
    ctx->pc = 0x116ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18700)));
    ctx->pc = 0x116efcu;
}
