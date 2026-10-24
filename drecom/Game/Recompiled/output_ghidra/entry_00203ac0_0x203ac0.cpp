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

// Function: entry_00203ac0
// Address: 0x203ac0 - 0x203ad0
void entry_00203ac0_0x203ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203ac0_0x203ac0");
#endif

    ctx->pc = 0x203ac0u;

    // 0x203ac0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x203ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x203ac4: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x203ac8: 0xafa600d4  sw          $a2, 0xD4($sp)
    ctx->pc = 0x203ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 6));
    // 0x203acc: 0x0  nop
    ctx->pc = 0x203accu;
    // NOP
    ctx->pc = 0x203ad0u;
}
