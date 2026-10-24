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

// Function: caseD_1
// Address: 0x318d5c - 0x318d6c
void caseD_1_0x318d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x318d5c");
#endif

    ctx->pc = 0x318d5cu;

    // 0x318d5c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x318d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x318d60: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x318d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x318d64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x318d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x318d68: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x318d68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x318d6cu;
}
