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

// Function: entry_00112db0
// Address: 0x112db0 - 0x112dd8
void entry_00112db0_0x112db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112db0_0x112db0");
#endif

    ctx->pc = 0x112db0u;

    // 0x112db0: 0x8fa80248  lw          $t0, 0x248($sp)
    ctx->pc = 0x112db0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x112db4: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112DB4u;
    {
        const bool branch_taken_0x112db4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x112DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DB4u;
        // 0x112db8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112db4) {
            ctx->pc = 0x112DD8u;
            return;
        }
    }
    ctx->pc = 0x112DBCu;
    // 0x112dbc: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x112dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x112dc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x112dc4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x112dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x112dc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x112dcc: 0x425c3  sra         $a0, $a0, 23
    ctx->pc = 0x112dccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 23));
    // 0x112dd0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x112DD0u;
    {
        const bool branch_taken_0x112dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD0u;
        // 0x112dd4: 0xafa4024c  sw          $a0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dd0) {
            ctx->pc = 0x112DFCu;
            return;
        }
    }
    ctx->pc = 0x112DD8u;
}
