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

// Function: entry_001d3e44
// Address: 0x1d3e44 - 0x1d3e54
void entry_001d3e44_0x1d3e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e44_0x1d3e44");
#endif

    ctx->pc = 0x1d3e44u;

    // 0x1d3e44: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x1d3e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1d3e48: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1d3e48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3e4c: 0x8fb10180  lw          $s1, 0x180($sp)
    ctx->pc = 0x1d3e4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1d3e50: 0x0  nop
    ctx->pc = 0x1d3e50u;
    // NOP
    ctx->pc = 0x1d3e54u;
}
