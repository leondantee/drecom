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

// Function: entry_001091b0
// Address: 0x1091b0 - 0x1091b8
void entry_001091b0_0x1091b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001091b0_0x1091b0");
#endif

    ctx->pc = 0x1091b0u;

    // 0x1091b0: 0x25023b38  addiu       $v0, $t0, 0x3B38
    ctx->pc = 0x1091b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 15160));
    // 0x1091b4: 0xa72014  dsllv       $a0, $a3, $a1
    ctx->pc = 0x1091b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
    ctx->pc = 0x1091b8u;
}
