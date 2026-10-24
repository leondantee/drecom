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

// Function: entry_003588ac
// Address: 0x3588ac - 0x3588bc
void entry_003588ac_0x3588ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003588ac_0x3588ac");
#endif

    ctx->pc = 0x3588acu;

    // 0x3588ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3588acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3588b0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x3588b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3588b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3588b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3588b8: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x3588b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x3588bcu;
}
