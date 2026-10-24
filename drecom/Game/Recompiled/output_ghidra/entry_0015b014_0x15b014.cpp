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

// Function: entry_0015b014
// Address: 0x15b014 - 0x15b050
void entry_0015b014_0x15b014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b014_0x15b014");
#endif

    ctx->pc = 0x15b014u;

    // 0x15b014: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b018: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x15b018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b01c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15b01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x15b020: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15b024: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b028: 0x8c630064  lw          $v1, 0x64($v1)
    ctx->pc = 0x15b028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x15b02c: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x15b02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    // 0x15b030: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b034: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x15b034u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b038: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15b038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x15b03c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15b03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15b040: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15b040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15b044: 0x8c630138  lw          $v1, 0x138($v1)
    ctx->pc = 0x15b044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 312)));
    // 0x15b048: 0xae030134  sw          $v1, 0x134($s0)
    ctx->pc = 0x15b048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 3));
    // 0x15b04c: 0x0  nop
    ctx->pc = 0x15b04cu;
    // NOP
    ctx->pc = 0x15b050u;
}
