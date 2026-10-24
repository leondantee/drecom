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
// Address: 0x316d90 - 0x316da0
void caseD_1_0x316d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x316d90");
#endif

    ctx->pc = 0x316d90u;

    // 0x316d90: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x316d90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x316d94: 0x90e40002  lbu         $a0, 0x2($a3)
    ctx->pc = 0x316d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x316d98: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x316d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x316d9c: 0xa0e80002  sb          $t0, 0x2($a3)
    ctx->pc = 0x316d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x316da0u;
}
