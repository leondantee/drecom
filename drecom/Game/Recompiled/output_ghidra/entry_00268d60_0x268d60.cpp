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

// Function: entry_00268d60
// Address: 0x268d60 - 0x268d7c
void entry_00268d60_0x268d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00268d60_0x268d60");
#endif

    ctx->pc = 0x268d60u;

    // 0x268d60: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d64: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x268d64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d68: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x268d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x268d6c: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x268d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x268d70: 0x24720118  addiu       $s2, $v1, 0x118
    ctx->pc = 0x268d70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x268d74: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x268d74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x268d78: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x268d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x268d7cu;
}
