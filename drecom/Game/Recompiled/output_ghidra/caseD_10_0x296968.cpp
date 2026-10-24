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

// Function: caseD_10
// Address: 0x296968 - 0x296978
void caseD_10_0x296968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_10_0x296968");
#endif

    ctx->pc = 0x296968u;

    // 0x296968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x296968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x29696c: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x29696cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
    // 0x296970: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296974: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x296974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
    ctx->pc = 0x296978u;
}
