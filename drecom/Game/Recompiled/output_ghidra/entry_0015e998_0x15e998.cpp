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

// Function: entry_0015e998
// Address: 0x15e998 - 0x15e9bc
void entry_0015e998_0x15e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e998_0x15e998");
#endif

    ctx->pc = 0x15e998u;

    // 0x15e998: 0x920200ae  lbu         $v0, 0xAE($s0)
    ctx->pc = 0x15e998u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 174)));
    // 0x15e99c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e9a0: 0x284100c1  slti        $at, $v0, 0xC1
    ctx->pc = 0x15e9a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)193) ? 1 : 0);
    // 0x15e9a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E9A4u;
    {
        const bool branch_taken_0x15e9a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9a4) {
            ctx->pc = 0x15E9BCu;
            return;
        }
    }
    ctx->pc = 0x15E9ACu;
    // 0x15e9ac: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e9b0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15e9b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E9B4u;
    {
        const bool branch_taken_0x15e9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9b4) {
            ctx->pc = 0x15E9C0u;
            return;
        }
    }
    ctx->pc = 0x15E9BCu;
}
