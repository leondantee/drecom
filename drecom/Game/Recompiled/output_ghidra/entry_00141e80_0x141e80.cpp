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

// Function: entry_00141e80
// Address: 0x141e80 - 0x141e90
void entry_00141e80_0x141e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141e80_0x141e80");
#endif

    ctx->pc = 0x141e80u;

    // 0x141e80: 0x72201e28  paddub      $v1, $s1, $zero
    ctx->pc = 0x141e80u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x141e84: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x141e84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x141e88: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x141e88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x141e8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x141e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x141e90u;
}
