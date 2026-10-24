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

// Function: entry_0010de20
// Address: 0x10de20 - 0x10de24
void entry_0010de20_0x10de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de20_0x10de20");
#endif

    ctx->pc = 0x10de20u;

    // 0x10de20: 0x8ea245a8  lw          $v0, 0x45A8($s5)
    ctx->pc = 0x10de20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
    ctx->pc = 0x10de24u;
}
