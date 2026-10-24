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

// Function: entry_001930ac
// Address: 0x1930ac - 0x1930e8
void entry_001930ac_0x1930ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001930ac_0x1930ac");
#endif

    ctx->pc = 0x1930acu;

    // 0x1930ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1930acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1930b0: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1930b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1930b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1930b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1930b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1930b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1930bc: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1930bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1930c0: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x1930c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1930c4: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x1930c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1930c8: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x1930c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x1930cc: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x1930ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x1930d0: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1930d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1930d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1930d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1930d8: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1930d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1930dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1930dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1930e0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1930e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1930e4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x1930e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1930e8u;
}
