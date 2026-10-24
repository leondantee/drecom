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

// Function: entry_00291ea8
// Address: 0x291ea8 - 0x291eb8
void entry_00291ea8_0x291ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291ea8_0x291ea8");
#endif

    ctx->pc = 0x291ea8u;

    // 0x291ea8: 0x2662ffc0  addiu       $v0, $s3, -0x40
    ctx->pc = 0x291ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967232));
    // 0x291eac: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x291eacu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x291eb0: 0x2617ffff  addiu       $s7, $s0, -0x1
    ctx->pc = 0x291eb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x291eb4: 0x72e08628  paddub      $s0, $s7, $zero
    ctx->pc = 0x291eb4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    ctx->pc = 0x291eb8u;
}
