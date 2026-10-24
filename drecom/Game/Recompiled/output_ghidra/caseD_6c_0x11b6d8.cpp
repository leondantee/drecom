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

// Function: caseD_6c
// Address: 0x11b6d8 - 0x11b704
void caseD_6c_0x11b6d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6c_0x11b6d8");
#endif

    ctx->pc = 0x11b6d8u;

    // 0x11b6d8: 0x8fa201ec  lw          $v0, 0x1EC($sp)
    ctx->pc = 0x11b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b6dc: 0x8fa501ec  lw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    // 0x11b6e0: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x11b6e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b6e4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x11b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11b6e8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B6E8u;
    {
        const bool branch_taken_0x11b6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6E8u;
        // 0x11b6ec: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6e8) {
            ctx->pc = 0x11B704u;
            return;
        }
    }
    ctx->pc = 0x11B6F0u;
    // 0x11b6f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b6f4: 0x37de0020  ori         $fp, $fp, 0x20
    ctx->pc = 0x11b6f4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32);
    // 0x11b6f8: 0xafa501ec  sw          $a1, 0x1EC($sp)
    ctx->pc = 0x11b6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 5));
    // 0x11b6fc: 0x1000ff93  b           . + 4 + (-0x6D << 2)
    ctx->pc = 0x11B6FCu;
    {
        const bool branch_taken_0x11b6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B6FCu;
        // 0x11b700: 0x90a40000  lbu         $a0, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b6fc) {
            ctx->pc = 0x11B54Cu;
            return;
        }
    }
    ctx->pc = 0x11B704u;
}
