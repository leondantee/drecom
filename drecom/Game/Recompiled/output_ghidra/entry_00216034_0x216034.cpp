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

// Function: entry_00216034
// Address: 0x216034 - 0x216040
void entry_00216034_0x216034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216034_0x216034");
#endif

    ctx->pc = 0x216034u;

    // 0x216034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216038: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x216038u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x21603c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x21603cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x216040u;
}
