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

// Function: entry_0014fb7c
// Address: 0x14fb7c - 0x14fbb4
void entry_0014fb7c_0x14fb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014fb7c_0x14fb7c");
#endif

    ctx->pc = 0x14fb7cu;

    // 0x14fb7c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb80: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fb84: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fb88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fb8c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fb90: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x14fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x14fb94: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x14fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x14fb98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14fb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14fb9c: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x14fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x14fba0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x14fba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x14fba4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fba8: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14fbac: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x14fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x14fbb0: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x14fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    ctx->pc = 0x14fbb4u;
}
