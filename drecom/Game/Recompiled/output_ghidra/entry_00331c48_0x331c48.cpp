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

// Function: entry_00331c48
// Address: 0x331c48 - 0x331c50
void entry_00331c48_0x331c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00331c48_0x331c48");
#endif

    ctx->pc = 0x331c48u;

    // 0x331c48: 0x26c6000a  addiu       $a2, $s6, 0xA
    ctx->pc = 0x331c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 10));
    // 0x331c4c: 0x70c0b628  paddub      $s6, $a2, $zero
    ctx->pc = 0x331c4cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x331c50u;
}
