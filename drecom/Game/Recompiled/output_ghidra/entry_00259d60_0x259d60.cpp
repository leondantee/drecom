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

// Function: entry_00259d60
// Address: 0x259d60 - 0x259d68
void entry_00259d60_0x259d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00259d60_0x259d60");
#endif

    ctx->pc = 0x259d60u;

    // 0x259d60: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x259d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x259d64: 0x282a023  subu        $s4, $s4, $v0
    ctx->pc = 0x259d64u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    ctx->pc = 0x259d68u;
}
