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

// Function: entry_00111610
// Address: 0x111610 - 0x111630
void entry_00111610_0x111610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111610_0x111610");
#endif

    ctx->pc = 0x111610u;

label_111610:
    // 0x111610: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x111610u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x111614: 0x24a5ffeb  addiu       $a1, $a1, -0x15
    ctx->pc = 0x111614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x111618: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x111618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x11161c: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x11161cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x111620: 0x0  nop
    ctx->pc = 0x111620u;
    // NOP
    // 0x111624: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x111624u;
    {
        const bool branch_taken_0x111624 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x111624) {
            ctx->pc = 0x111610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_111610;
        }
    }
    ctx->pc = 0x11162Cu;
    // 0x11162c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11162cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x111630u;
}
