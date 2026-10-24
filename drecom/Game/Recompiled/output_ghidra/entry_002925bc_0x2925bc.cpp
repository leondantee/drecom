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

// Function: entry_002925bc
// Address: 0x2925bc - 0x2925c4
void entry_002925bc_0x2925bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002925bc_0x2925bc");
#endif

    ctx->pc = 0x2925bcu;

    // 0x2925bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2925bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2925c0: 0xa2026608  sb          $v0, 0x6608($s0)
    ctx->pc = 0x2925c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26120), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2925c4u;
}
