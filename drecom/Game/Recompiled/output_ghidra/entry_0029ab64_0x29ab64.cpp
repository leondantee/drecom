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

// Function: entry_0029ab64
// Address: 0x29ab64 - 0x29ab70
void entry_0029ab64_0x29ab64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ab64_0x29ab64");
#endif

    ctx->pc = 0x29ab64u;

    // 0x29ab64: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x29ab64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x29ab68: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x29ab68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x29ab6c: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x29ab6cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x29ab70u;
}
