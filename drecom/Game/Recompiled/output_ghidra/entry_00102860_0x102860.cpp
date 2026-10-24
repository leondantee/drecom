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

// Function: entry_00102860
// Address: 0x102860 - 0x102880
void entry_00102860_0x102860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102860_0x102860");
#endif

    ctx->pc = 0x102860u;

label_102860:
    // 0x102860: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x102860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x102864: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102868: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x102868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10286c: 0x0  nop
    ctx->pc = 0x10286cu;
    // NOP
    // 0x102870: 0x0  nop
    ctx->pc = 0x102870u;
    // NOP
    // 0x102874: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102874u;
    {
        const bool branch_taken_0x102874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102874) {
            ctx->pc = 0x102860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102860;
        }
    }
    ctx->pc = 0x10287Cu;
    // 0x10287c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x10287cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x102880u;
}
