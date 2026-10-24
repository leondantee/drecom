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

// Function: entry_00102590
// Address: 0x102590 - 0x1025b0
void entry_00102590_0x102590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102590_0x102590");
#endif

    ctx->pc = 0x102590u;

label_102590:
    // 0x102590: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x102590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x102594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102598: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x102598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10259c: 0x0  nop
    ctx->pc = 0x10259cu;
    // NOP
    // 0x1025a0: 0x0  nop
    ctx->pc = 0x1025a0u;
    // NOP
    // 0x1025a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1025A4u;
    {
        const bool branch_taken_0x1025a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1025a4) {
            ctx->pc = 0x102590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102590;
        }
    }
    ctx->pc = 0x1025ACu;
    // 0x1025ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1025acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1025b0u;
}
