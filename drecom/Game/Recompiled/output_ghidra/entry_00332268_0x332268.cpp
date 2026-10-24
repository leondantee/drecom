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

// Function: entry_00332268
// Address: 0x332268 - 0x332278
void entry_00332268_0x332268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00332268_0x332268");
#endif

    ctx->pc = 0x332268u;

    // 0x332268: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x332268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x33226c: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x33226cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x332270: 0x26a40028  addiu       $a0, $s5, 0x28
    ctx->pc = 0x332270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x332274: 0x7080ae28  paddub      $s5, $a0, $zero
    ctx->pc = 0x332274u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x332278u;
}
