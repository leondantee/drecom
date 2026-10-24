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

// Function: caseD_a
// Address: 0x2212a0 - 0x2212ac
void caseD_a_0x2212a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x2212a0");
#endif

    ctx->pc = 0x2212a0u;

    // 0x2212a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2212a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2212a4: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2212a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2212a8: 0xa48311f4  sh          $v1, 0x11F4($a0)
    ctx->pc = 0x2212a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4596), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2212acu;
}
