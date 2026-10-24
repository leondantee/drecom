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

// Function: entry_00108c14
// Address: 0x108c14 - 0x108c1c
void entry_00108c14_0x108c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108c14_0x108c14");
#endif

    ctx->pc = 0x108c14u;

    // 0x108c14: 0x8d023b28  lw          $v0, 0x3B28($t0)
    ctx->pc = 0x108c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15144)));
    // 0x108c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x108c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x108c1cu;
}
