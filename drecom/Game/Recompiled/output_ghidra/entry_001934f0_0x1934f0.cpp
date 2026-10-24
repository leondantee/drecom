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

// Function: entry_001934f0
// Address: 0x1934f0 - 0x1934f8
void entry_001934f0_0x1934f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001934f0_0x1934f0");
#endif

    ctx->pc = 0x1934f0u;

    // 0x1934f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1934f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1934f4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1934f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x1934f8u;
}
