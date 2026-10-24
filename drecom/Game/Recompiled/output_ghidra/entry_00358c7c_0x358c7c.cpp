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

// Function: entry_00358c7c
// Address: 0x358c7c - 0x358c8c
void entry_00358c7c_0x358c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00358c7c_0x358c7c");
#endif

    ctx->pc = 0x358c7cu;

    // 0x358c7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x358c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358c80: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x358c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x358c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x358c88: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x358c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x358c8cu;
}
