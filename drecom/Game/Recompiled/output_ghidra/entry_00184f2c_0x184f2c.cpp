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

// Function: entry_00184f2c
// Address: 0x184f2c - 0x184f38
void entry_00184f2c_0x184f2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184f2c_0x184f2c");
#endif

    ctx->pc = 0x184f2cu;

    // 0x184f2c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x184f30: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x184f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x184f34: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x184f34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x184f38u;
}
