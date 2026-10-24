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

// Function: entry_0015e9c0
// Address: 0x15e9c0 - 0x15e9e4
void entry_0015e9c0_0x15e9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015e9c0_0x15e9c0");
#endif

    ctx->pc = 0x15e9c0u;

    // 0x15e9c0: 0x920200ae  lbu         $v0, 0xAE($s0)
    ctx->pc = 0x15e9c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 174)));
    // 0x15e9c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x15e9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15e9c8: 0x28420040  slti        $v0, $v0, 0x40
    ctx->pc = 0x15e9c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x15e9cc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E9CCu;
    {
        const bool branch_taken_0x15e9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e9cc) {
            ctx->pc = 0x15E9E4u;
            return;
        }
    }
    ctx->pc = 0x15E9D4u;
    // 0x15e9d4: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x15e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x15e9d8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x15e9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x15e9dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15E9DCu;
    {
        const bool branch_taken_0x15e9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e9dc) {
            ctx->pc = 0x15E9E8u;
            return;
        }
    }
    ctx->pc = 0x15E9E4u;
}
