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

// Function: entry_001022f8
// Address: 0x1022f8 - 0x102318
void entry_001022f8_0x1022f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001022f8_0x1022f8");
#endif

    ctx->pc = 0x1022f8u;

label_1022f8:
    // 0x1022f8: 0x851824  and         $v1, $a0, $a1
    ctx->pc = 0x1022f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1022fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1022fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102300: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x102300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102304: 0x0  nop
    ctx->pc = 0x102304u;
    // NOP
    // 0x102308: 0x0  nop
    ctx->pc = 0x102308u;
    // NOP
    // 0x10230c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10230Cu;
    {
        const bool branch_taken_0x10230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10230c) {
            ctx->pc = 0x1022F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1022f8;
        }
    }
    ctx->pc = 0x102314u;
    // 0x102314: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x102314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x102318u;
}
