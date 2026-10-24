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

// Function: caseD_1
// Address: 0x330acc - 0x330ad8
void caseD_1_0x330acc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x330acc");
#endif

    ctx->pc = 0x330accu;

    // 0x330acc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x330accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x330ad0: 0x244695dc  addiu       $a2, $v0, -0x6A24
    ctx->pc = 0x330ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940124));
    // 0x330ad4: 0x70c08e28  paddub      $s1, $a2, $zero
    ctx->pc = 0x330ad4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    ctx->pc = 0x330ad8u;
}
