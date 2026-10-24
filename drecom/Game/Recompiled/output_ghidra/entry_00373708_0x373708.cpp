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

// Function: entry_00373708
// Address: 0x373708 - 0x373710
void entry_00373708_0x373708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373708_0x373708");
#endif

    ctx->pc = 0x373708u;

    // 0x373708: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x373708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37370c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x37370cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x373710u;
}
