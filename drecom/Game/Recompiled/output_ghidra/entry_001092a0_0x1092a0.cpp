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

// Function: entry_001092a0
// Address: 0x1092a0 - 0x1092c8
void entry_001092a0_0x1092a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092a0_0x1092a0");
#endif

    ctx->pc = 0x1092a0u;

    // 0x1092a0: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x1092A0u;
    {
        const bool branch_taken_0x1092a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x1092a0) {
            ctx->pc = 0x1092A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1092A0u;
            // 0x1092a4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            return;
        }
    }
    ctx->pc = 0x1092A8u;
    // 0x1092a8: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1092a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1092ac: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1092b0: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1092B0u;
    {
        const bool branch_taken_0x1092b0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1092b0) {
            ctx->pc = 0x1092B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1092B0u;
            // 0x1092b4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10938Cu;
            return;
        }
    }
    ctx->pc = 0x1092B8u;
    // 0x1092b8: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1092b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1092bc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1092bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1092c0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1092C0u;
    {
        const bool branch_taken_0x1092c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1092C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1092C0u;
        // 0x1092c4: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1092c0) {
            ctx->pc = 0x109388u;
            return;
        }
    }
    ctx->pc = 0x1092C8u;
}
