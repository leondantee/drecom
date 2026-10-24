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

// Function: entry_002e3d70
// Address: 0x2e3d70 - 0x2e3d80
void entry_002e3d70_0x2e3d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e3d70_0x2e3d70");
#endif

    ctx->pc = 0x2e3d70u;

    // 0x2e3d70: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x2e3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e3d74: 0xa0600083  sb          $zero, 0x83($v1)
    ctx->pc = 0x2e3d74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 131), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3d78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2e3d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2e3d7c: 0x0  nop
    ctx->pc = 0x2e3d7cu;
    // NOP
    ctx->pc = 0x2e3d80u;
}
