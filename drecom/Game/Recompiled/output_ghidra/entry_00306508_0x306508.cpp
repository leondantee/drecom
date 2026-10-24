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

// Function: entry_00306508
// Address: 0x306508 - 0x306510
void entry_00306508_0x306508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306508_0x306508");
#endif

    ctx->pc = 0x306508u;

    // 0x306508: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x306508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30650c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x30650cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x306510u;
}
