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

// Function: caseD_0
// Address: 0x140f98 - 0x140fb0
void caseD_0_0x140f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x140f98");
#endif

    ctx->pc = 0x140f98u;

    // 0x140f98: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x140f98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x140f9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x140f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x140fa0: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x140fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x140fa4: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x140fa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x140fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x140fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140fac: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x140facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x140fb0u;
}
