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

// Function: entry_00293204
// Address: 0x293204 - 0x293210
void entry_00293204_0x293204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00293204_0x293204");
#endif

    ctx->pc = 0x293204u;

    // 0x293204: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x293204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x293208: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x293208u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29320c: 0x0  nop
    ctx->pc = 0x29320cu;
    // NOP
    ctx->pc = 0x293210u;
}
