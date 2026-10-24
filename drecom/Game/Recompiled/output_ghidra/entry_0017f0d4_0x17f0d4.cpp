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

// Function: entry_0017f0d4
// Address: 0x17f0d4 - 0x17f0e0
void entry_0017f0d4_0x17f0d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017f0d4_0x17f0d4");
#endif

    ctx->pc = 0x17f0d4u;

    // 0x17f0d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17f0d8: 0x8c7000f0  lw          $s0, 0xF0($v1)
    ctx->pc = 0x17f0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x17f0dc: 0x0  nop
    ctx->pc = 0x17f0dcu;
    // NOP
    ctx->pc = 0x17f0e0u;
}
