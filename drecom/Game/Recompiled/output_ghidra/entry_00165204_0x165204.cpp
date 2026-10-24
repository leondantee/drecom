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

// Function: entry_00165204
// Address: 0x165204 - 0x165218
void entry_00165204_0x165204(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165204_0x165204");
#endif

    ctx->pc = 0x165204u;

    // 0x165204: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x165204u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x165208: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x165208u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x16520c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x165210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x165210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x165214: 0x2238823  subu        $s1, $s1, $v1
    ctx->pc = 0x165214u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    ctx->pc = 0x165218u;
}
