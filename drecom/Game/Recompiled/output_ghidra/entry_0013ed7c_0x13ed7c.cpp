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

// Function: entry_0013ed7c
// Address: 0x13ed7c - 0x13ed98
void entry_0013ed7c_0x13ed7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ed7c_0x13ed7c");
#endif

    ctx->pc = 0x13ed7cu;

    // 0x13ed7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13ed80: 0x8fa61688  lw          $a2, 0x1688($sp)
    ctx->pc = 0x13ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed84: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x13ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13ed88: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x13ed88u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13ed8c: 0x8fa41688  lw          $a0, 0x1688($sp)
    ctx->pc = 0x13ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5768)));
    // 0x13ed90: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x13ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13ed94: 0xafa51688  sw          $a1, 0x1688($sp)
    ctx->pc = 0x13ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5768), GPR_U32(ctx, 5));
    ctx->pc = 0x13ed98u;
}
