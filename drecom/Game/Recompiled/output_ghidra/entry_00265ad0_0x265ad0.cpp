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

// Function: entry_00265ad0
// Address: 0x265ad0 - 0x265ad8
void entry_00265ad0_0x265ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265ad0_0x265ad0");
#endif

    ctx->pc = 0x265ad0u;

    // 0x265ad0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265ad4: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x265ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    ctx->pc = 0x265ad8u;
}
