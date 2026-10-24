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

// Function: entry_001c99f8
// Address: 0x1c99f8 - 0x1c9a04
void entry_001c99f8_0x1c99f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c99f8_0x1c99f8");
#endif

    ctx->pc = 0x1c99f8u;

    // 0x1c99f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c99f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c99fc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c99fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9a00: 0xaca21b60  sw          $v0, 0x1B60($a1)
    ctx->pc = 0x1c9a00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7008), GPR_U32(ctx, 2));
    ctx->pc = 0x1c9a04u;
}
