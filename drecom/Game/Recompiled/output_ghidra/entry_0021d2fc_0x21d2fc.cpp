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

// Function: entry_0021d2fc
// Address: 0x21d2fc - 0x21d30c
void entry_0021d2fc_0x21d2fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d2fc_0x21d2fc");
#endif

    ctx->pc = 0x21d2fcu;

    // 0x21d2fc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x21d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x21d300: 0x2456a610  addiu       $s6, $v0, -0x59F0
    ctx->pc = 0x21d300u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944272));
    // 0x21d304: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x21d304u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21d308: 0x0  nop
    ctx->pc = 0x21d308u;
    // NOP
    ctx->pc = 0x21d30cu;
}
