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

// Function: entry_0026c648
// Address: 0x26c648 - 0x26c654
void entry_0026c648_0x26c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026c648_0x26c648");
#endif

    ctx->pc = 0x26c648u;

    // 0x26c648: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x26c648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26c64c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c650: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x26c650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x26c654u;
}
