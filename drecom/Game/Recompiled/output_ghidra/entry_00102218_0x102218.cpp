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

// Function: entry_00102218
// Address: 0x102218 - 0x102238
void entry_00102218_0x102218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102218_0x102218");
#endif

    ctx->pc = 0x102218u;

label_102218:
    // 0x102218: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x102218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x10221c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10221cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102220: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x102220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102224: 0x0  nop
    ctx->pc = 0x102224u;
    // NOP
    // 0x102228: 0x0  nop
    ctx->pc = 0x102228u;
    // NOP
    // 0x10222c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10222Cu;
    {
        const bool branch_taken_0x10222c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10222c) {
            ctx->pc = 0x102218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102218;
        }
    }
    ctx->pc = 0x102234u;
    // 0x102234: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x102234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x102238u;
}
