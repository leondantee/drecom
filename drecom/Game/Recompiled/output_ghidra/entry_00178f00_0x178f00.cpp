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

// Function: entry_00178f00
// Address: 0x178f00 - 0x178f10
void entry_00178f00_0x178f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178f00_0x178f00");
#endif

    ctx->pc = 0x178f00u;

    // 0x178f00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x178f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178f04: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x178f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x178f08: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x178f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x178f0c: 0x0  nop
    ctx->pc = 0x178f0cu;
    // NOP
    ctx->pc = 0x178f10u;
}
