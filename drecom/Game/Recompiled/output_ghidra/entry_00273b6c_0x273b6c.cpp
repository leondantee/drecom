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

// Function: entry_00273b6c
// Address: 0x273b6c - 0x273b78
void entry_00273b6c_0x273b6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273b6c_0x273b6c");
#endif

    ctx->pc = 0x273b6cu;

    // 0x273b6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x273b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x273b70: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x273b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x273b74: 0x0  nop
    ctx->pc = 0x273b74u;
    // NOP
    ctx->pc = 0x273b78u;
}
