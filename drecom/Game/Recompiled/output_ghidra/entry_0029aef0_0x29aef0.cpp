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

// Function: entry_0029aef0
// Address: 0x29aef0 - 0x29aefc
void entry_0029aef0_0x29aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029aef0_0x29aef0");
#endif

    ctx->pc = 0x29aef0u;

    // 0x29aef0: 0x36250008  ori         $a1, $s1, 0x8
    ctx->pc = 0x29aef0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x29aef4: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x29aef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29aef8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29aef8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29aefcu;
}
