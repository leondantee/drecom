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

// Function: entry_0032ccb0
// Address: 0x32ccb0 - 0x32ccc8
void entry_0032ccb0_0x32ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032ccb0_0x32ccb0");
#endif

    ctx->pc = 0x32ccb0u;

    // 0x32ccb0: 0x26030054  addiu       $v1, $s0, 0x54
    ctx->pc = 0x32ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x32ccb4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x32ccb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32ccb8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x32ccb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x32ccbc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x32ccbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32ccc0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x32ccc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x32ccc4: 0x0  nop
    ctx->pc = 0x32ccc4u;
    // NOP
    ctx->pc = 0x32ccc8u;
}
