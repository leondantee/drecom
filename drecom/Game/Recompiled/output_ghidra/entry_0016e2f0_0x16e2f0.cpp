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

// Function: entry_0016e2f0
// Address: 0x16e2f0 - 0x16e304
void entry_0016e2f0_0x16e2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e2f0_0x16e2f0");
#endif

    ctx->pc = 0x16e2f0u;

    // 0x16e2f0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x16e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x16e2f4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x16e2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x16e2f8: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x16e2f8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e2fc: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x16e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16e300: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x16e300u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x16e304u;
}
