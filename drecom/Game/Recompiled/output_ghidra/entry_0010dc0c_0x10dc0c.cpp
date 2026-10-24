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

// Function: entry_0010dc0c
// Address: 0x10dc0c - 0x10dc58
void entry_0010dc0c_0x10dc0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dc0c_0x10dc0c");
#endif

    switch (ctx->pc) {
        case 0x10dc3cu: goto label_10dc3c;
        case 0x10dc50u: goto label_10dc50;
        default: break;
    }

    ctx->pc = 0x10dc0cu;

    // 0x10dc0c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10dc10: 0x24503c00  addiu       $s0, $v0, 0x3C00
    ctx->pc = 0x10dc10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15360));
    // 0x10dc14: 0x24843e80  addiu       $a0, $a0, 0x3E80
    ctx->pc = 0x10dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16000));
    // 0x10dc18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10dc1c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x10dc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10dc20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10dc20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10dc24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10dc28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10dc2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dc30: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10dc30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10dc34: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10DC34u;
    SET_GPR_U32(ctx, 31, 0x10DC3Cu);
    ctx->pc = 0x10DC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DC34u;
    // 0x10dc38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10DC3Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DC3Cu) { return; }
    ctx->pc = 0x10DC3Cu;
label_10dc3c:
    // 0x10dc3c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DC3Cu;
    {
        const bool branch_taken_0x10dc3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10DC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC3Cu;
        // 0x10dc40: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc3c) {
            ctx->pc = 0x10DC58u;
            return;
        }
    }
    ctx->pc = 0x10DC44u;
    // 0x10dc44: 0x8c4445b8  lw          $a0, 0x45B8($v0)
    ctx->pc = 0x10dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17848)));
    // 0x10dc48: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DC48u;
    SET_GPR_U32(ctx, 31, 0x10DC50u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DC50u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DC50u) { return; }
    ctx->pc = 0x10DC50u;
label_10dc50:
    // 0x10dc50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10DC50u;
    {
        const bool branch_taken_0x10dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DC50u;
        // 0x10dc54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dc50) {
            ctx->pc = 0x10DC70u;
            return;
        }
    }
    ctx->pc = 0x10DC58u;
}
