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

// Function: entry_00102790
// Address: 0x102790 - 0x1027b0
void entry_00102790_0x102790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102790_0x102790");
#endif

    ctx->pc = 0x102790u;

label_102790:
    // 0x102790: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x102790u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x102794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102798: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x102798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10279c: 0x0  nop
    ctx->pc = 0x10279cu;
    // NOP
    // 0x1027a0: 0x0  nop
    ctx->pc = 0x1027a0u;
    // NOP
    // 0x1027a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1027A4u;
    {
        const bool branch_taken_0x1027a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1027a4) {
            ctx->pc = 0x102790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102790;
        }
    }
    ctx->pc = 0x1027ACu;
    // 0x1027ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1027acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1027b0u;
}
