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

// Function: entry_002ef420
// Address: 0x2ef420 - 0x2ef448
void entry_002ef420_0x2ef420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ef420_0x2ef420");
#endif

    ctx->pc = 0x2ef420u;

    // 0x2ef420: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef424: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ef424u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef428: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ef428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ef42c: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2ef42cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ef430: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x2ef430u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2ef434: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2ef434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2ef438: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x2ef438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x2ef43c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2ef43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ef440: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x2ef440u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2ef444: 0x32d1ffff  andi        $s1, $s6, 0xFFFF
    ctx->pc = 0x2ef444u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ef448u;
}
