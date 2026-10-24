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

// Function: entry_00215570
// Address: 0x215570 - 0x2155a8
void entry_00215570_0x215570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215570_0x215570");
#endif

    ctx->pc = 0x215570u;

    // 0x215570: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x215570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x215574: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x215574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x215578: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x215578u;
    {
        const bool branch_taken_0x215578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215578) {
            ctx->pc = 0x21557Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215578u;
            // 0x21557c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2155BCu;
            return;
        }
    }
    ctx->pc = 0x215580u;
    // 0x215580: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x215580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x215584: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x215584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
    // 0x215588: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x215588u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x21558c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x215590: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x215590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x215594: 0x14670004  bne         $v1, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x215594u;
    {
        const bool branch_taken_0x215594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x215598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215594u;
        // 0x215598: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215594) {
            ctx->pc = 0x2155A8u;
            return;
        }
    }
    ctx->pc = 0x21559Cu;
    // 0x21559c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x21559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2155a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2155a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2155a4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2155a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x2155a8u;
}
