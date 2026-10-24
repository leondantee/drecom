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

// Function: caseD_3
// Address: 0x20ee7c - 0x20ee8c
void caseD_3_0x20ee7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x20ee7c");
#endif

    ctx->pc = 0x20ee7cu;

    // 0x20ee7c: 0x8fbe0528  lw          $fp, 0x528($sp)
    ctx->pc = 0x20ee7cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x20ee80: 0x93d00002  lbu         $s0, 0x2($fp)
    ctx->pc = 0x20ee80u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 2)));
    // 0x20ee84: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x20ee84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x20ee88: 0xa3c70002  sb          $a3, 0x2($fp)
    ctx->pc = 0x20ee88u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 2), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x20ee8cu;
}
