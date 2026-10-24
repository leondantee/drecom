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

// Function: entry_002161e8
// Address: 0x2161e8 - 0x216210
void entry_002161e8_0x2161e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002161e8_0x2161e8");
#endif

    ctx->pc = 0x2161e8u;

label_2161e8:
    // 0x2161e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2161e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2161ec: 0x0  nop
    ctx->pc = 0x2161ecu;
    // NOP
    // 0x2161f0: 0x0  nop
    ctx->pc = 0x2161f0u;
    // NOP
    // 0x2161f4: 0x0  nop
    ctx->pc = 0x2161f4u;
    // NOP
    // 0x2161f8: 0x0  nop
    ctx->pc = 0x2161f8u;
    // NOP
    // 0x2161fc: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2161FCu;
    {
        const bool branch_taken_0x2161fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2161fc) {
            ctx->pc = 0x2161E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2161e8;
        }
    }
    ctx->pc = 0x216204u;
    // 0x216204: 0x5040fff2  beql        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x216204u;
    {
        const bool branch_taken_0x216204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216204) {
            ctx->pc = 0x216208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216204u;
            // 0x216208: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2161D0u;
            return;
        }
    }
    ctx->pc = 0x21620Cu;
    // 0x21620c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x21620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->pc = 0x216210u;
}
