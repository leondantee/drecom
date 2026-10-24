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

// Function: entry_0013ed24
// Address: 0x13ed24 - 0x13ed40
void entry_0013ed24_0x13ed24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ed24_0x13ed24");
#endif

    ctx->pc = 0x13ed24u;

    // 0x13ed24: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ed28: 0x8fa41688  lw          $a0, 0x1688($sp)
    ctx->pc = 0x13ed28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed2c: 0x449023  subu        $s2, $v0, $a0
    ctx->pc = 0x13ed2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ed30: 0x8fa21688  lw          $v0, 0x1688($sp)
    ctx->pc = 0x13ed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed34: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x13ed34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13ed38: 0xafa51688  sw          $a1, 0x1688($sp)
    ctx->pc = 0x13ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 5));
    // 0x13ed3c: 0x0  nop
    ctx->pc = 0x13ed3cu;
    // NOP
    ctx->pc = 0x13ed40u;
}
