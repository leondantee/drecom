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

// Function: entry_00253ed8
// Address: 0x253ed8 - 0x253eec
void entry_00253ed8_0x253ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253ed8_0x253ed8");
#endif

    ctx->pc = 0x253ed8u;

    // 0x253ed8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x253ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x253edc: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x253edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x253ee0: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x253ee0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x253ee4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x253ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x253ee8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x253ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    ctx->pc = 0x253eecu;
}
