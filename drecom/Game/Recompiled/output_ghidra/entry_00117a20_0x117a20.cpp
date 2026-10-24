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

// Function: entry_00117a20
// Address: 0x117a20 - 0x117a24
void entry_00117a20_0x117a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117a20_0x117a20");
#endif

    ctx->pc = 0x117a20u;

    // 0x117a20: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x117a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    ctx->pc = 0x117a24u;
}
