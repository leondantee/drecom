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

// Function: entry_001a7398
// Address: 0x1a7398 - 0x1a73a8
void entry_001a7398_0x1a7398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7398_0x1a7398");
#endif

    ctx->pc = 0x1a7398u;

    // 0x1a7398: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x1a7398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1a739c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x1a739cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1a73a0: 0x26080001  addiu       $t0, $s0, 0x1
    ctx->pc = 0x1a73a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a73a4: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x1a73a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a73a8u;
}
