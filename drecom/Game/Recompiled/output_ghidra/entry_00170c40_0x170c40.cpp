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

// Function: entry_00170c40
// Address: 0x170c40 - 0x170c50
void entry_00170c40_0x170c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170c40_0x170c40");
#endif

    ctx->pc = 0x170c40u;

    // 0x170c40: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x170c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x170c44: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x170c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170c48: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x170c48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x170c4c: 0x0  nop
    ctx->pc = 0x170c4cu;
    // NOP
    ctx->pc = 0x170c50u;
}
