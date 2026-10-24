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

// Function: entry_00126654
// Address: 0x126654 - 0x12667c
void entry_00126654_0x126654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00126654_0x126654");
#endif

    ctx->pc = 0x126654u;

    // 0x126654: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x126654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126658: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x126658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x12665c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12665Cu;
    {
        const bool branch_taken_0x12665c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12665c) {
            ctx->pc = 0x12667Cu;
            return;
        }
    }
    ctx->pc = 0x126664u;
    // 0x126664: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x126664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x126668: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x126668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x12666c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x12666cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x126670: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x126670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x126674: 0x100001d9  b           . + 4 + (0x1D9 << 2)
    ctx->pc = 0x126674u;
    {
        const bool branch_taken_0x126674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126674) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x12667Cu;
}
