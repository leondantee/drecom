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

// Function: entry_0025e644
// Address: 0x25e644 - 0x25e668
void entry_0025e644_0x25e644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e644_0x25e644");
#endif

    ctx->pc = 0x25e644u;

    // 0x25e644: 0x920209e6  lbu         $v0, 0x9E6($s0)
    ctx->pc = 0x25e644u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2534)));
    // 0x25e648: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E648u;
    {
        const bool branch_taken_0x25e648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e648) {
            ctx->pc = 0x25E668u;
            return;
        }
    }
    ctx->pc = 0x25E650u;
    // 0x25e650: 0xde050a08  ld          $a1, 0xA08($s0)
    ctx->pc = 0x25e650u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 2568)));
    // 0x25e654: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E654u;
    {
        const bool branch_taken_0x25e654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e654) {
            ctx->pc = 0x25E674u;
            return;
        }
    }
    ctx->pc = 0x25E65Cu;
    // 0x25e65c: 0x92021084  lbu         $v0, 0x1084($s0)
    ctx->pc = 0x25e65cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4228)));
    // 0x25e660: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E660u;
    {
        const bool branch_taken_0x25e660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e660) {
            ctx->pc = 0x25E674u;
            return;
        }
    }
    ctx->pc = 0x25E668u;
}
