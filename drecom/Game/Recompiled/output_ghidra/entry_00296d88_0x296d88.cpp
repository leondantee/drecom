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

// Function: entry_00296d88
// Address: 0x296d88 - 0x296d98
void entry_00296d88_0x296d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296d88_0x296d88");
#endif

    ctx->pc = 0x296d88u;

    // 0x296d88: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x296d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296d8c: 0x8c836998  lw          $v1, 0x6998($a0)
    ctx->pc = 0x296d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27032)));
    // 0x296d90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296d94: 0xac836998  sw          $v1, 0x6998($a0)
    ctx->pc = 0x296d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27032), GPR_U32(ctx, 3));
    ctx->pc = 0x296d98u;
}
