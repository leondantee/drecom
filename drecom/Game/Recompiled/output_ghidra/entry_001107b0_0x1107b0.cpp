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

// Function: entry_001107b0
// Address: 0x1107b0 - 0x1107b8
void entry_001107b0_0x1107b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001107b0_0x1107b0");
#endif

    ctx->pc = 0x1107b0u;

    // 0x1107b0: 0x26225280  addiu       $v0, $s1, 0x5280
    ctx->pc = 0x1107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
    // 0x1107b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1107b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->pc = 0x1107b8u;
}
