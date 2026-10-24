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

// Function: entry_001505c0
// Address: 0x1505c0 - 0x150608
void entry_001505c0_0x1505c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001505c0_0x1505c0");
#endif

    ctx->pc = 0x1505c0u;

    // 0x1505c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1505c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1505c4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1505c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1505c8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1505c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1505cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1505ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1505d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1505d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1505d4: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x1505d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1505d8: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x1505d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x1505dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1505dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1505e0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1505e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1505e4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1505e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1505e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1505e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1505ec: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1505ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1505f0: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x1505f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x1505f4: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x1505f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x1505f8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1505f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1505fc: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x1505fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x150600: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x150600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x150604: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x150604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x150608u;
}
