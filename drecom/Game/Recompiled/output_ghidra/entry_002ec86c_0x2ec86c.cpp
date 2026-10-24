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

// Function: entry_002ec86c
// Address: 0x2ec86c - 0x2ec890
void entry_002ec86c_0x2ec86c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ec86c_0x2ec86c");
#endif

    ctx->pc = 0x2ec86cu;

    // 0x2ec86c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec870: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec870u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec874: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2ec874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2ec878: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2ec878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ec87c: 0x24630118  addiu       $v1, $v1, 0x118
    ctx->pc = 0x2ec87cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2ec880: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x2ec880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x2ec884: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x2ec884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2ec888: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x2ec888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ec88c: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x2ec88cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x2ec890u;
}
