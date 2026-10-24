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

// Function: entry_0016c8b4
// Address: 0x16c8b4 - 0x16c8c0
void entry_0016c8b4_0x16c8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c8b4_0x16c8b4");
#endif

    ctx->pc = 0x16c8b4u;

    // 0x16c8b4: 0x8fb100d4  lw          $s1, 0xD4($sp)
    ctx->pc = 0x16c8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x16c8b8: 0x8fb200c4  lw          $s2, 0xC4($sp)
    ctx->pc = 0x16c8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x16c8bc: 0x0  nop
    ctx->pc = 0x16c8bcu;
    // NOP
    ctx->pc = 0x16c8c0u;
}
