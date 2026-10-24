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

// Function: entry_002657d4
// Address: 0x2657d4 - 0x265810
void entry_002657d4_0x2657d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002657d4_0x2657d4");
#endif

    ctx->pc = 0x2657d4u;

    // 0x2657d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2657d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2657d8: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2657d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2657dc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2657dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2657e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2657e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2657e4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2657e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2657e8: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x2657e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x2657ec: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x2657ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x2657f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2657f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2657f4: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x2657f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x2657f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2657f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2657fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x265800: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x265800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x265804: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x265804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x265808: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x265808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x26580c: 0x0  nop
    ctx->pc = 0x26580cu;
    // NOP
    ctx->pc = 0x265810u;
}
