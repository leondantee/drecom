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

// Function: entry_00213f08
// Address: 0x213f08 - 0x213f50
void entry_00213f08_0x213f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213f08_0x213f08");
#endif

    ctx->pc = 0x213f08u;

label_213f08:
    // 0x213f08: 0x42000039  di
    ctx->pc = 0x213f08u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x213f0c: 0x40f  sync.p
    ctx->pc = 0x213f0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x213f10: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x213f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x213f14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x213f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x213f18: 0x0  nop
    ctx->pc = 0x213f18u;
    // NOP
    // 0x213f1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x213F1Cu;
    {
        const bool branch_taken_0x213f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x213f1c) {
            ctx->pc = 0x213F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_213f08;
        }
    }
    ctx->pc = 0x213F24u;
    // 0x213f24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x213f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x213f28: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x213f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x213f2c: 0x24429e80  addiu       $v0, $v0, -0x6180
    ctx->pc = 0x213f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
    // 0x213f30: 0x26249e50  addiu       $a0, $s1, -0x61B0
    ctx->pc = 0x213f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942288));
    // 0x213f34: 0x434825  or          $t1, $v0, $v1
    ctx->pc = 0x213f34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x213f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x213f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x213f3c: 0xac890010  sw          $t1, 0x10($a0)
    ctx->pc = 0x213f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 9));
    // 0x213f40: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x213f40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x213f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x213F44u;
    {
        const bool branch_taken_0x213f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x213F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213F44u;
        // 0x213f48: 0x2526000c  addiu       $a2, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x213f44) {
            ctx->pc = 0x213F54u;
            return;
        }
    }
    ctx->pc = 0x213F4Cu;
    // 0x213f4c: 0x0  nop
    ctx->pc = 0x213f4cu;
    // NOP
    ctx->pc = 0x213f50u;
}
