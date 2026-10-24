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

// Function: entry_0010caf8
// Address: 0x10caf8 - 0x10cb54
void entry_0010caf8_0x10caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010caf8_0x10caf8");
#endif

    switch (ctx->pc) {
        case 0x10cb44u: goto label_10cb44;
        default: break;
    }

    ctx->pc = 0x10caf8u;

label_10caf8:
    // 0x10caf8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x10caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x10cafc: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x10cafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x10cb00: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x10cb00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cb04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10cb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10cb08: 0x28a20006  slti        $v0, $a1, 0x6
    ctx->pc = 0x10cb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x10cb0c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x10cb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10cb10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x10CB10u;
    {
        const bool branch_taken_0x10cb10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cb10) {
            ctx->pc = 0x10CAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10caf8;
        }
    }
    ctx->pc = 0x10CB18u;
    // 0x10cb18: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10cb18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10cb1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10cb20: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10cb24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb2c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cb2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb30: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cb34: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cb34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb38: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cb38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cb3c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10CB3Cu;
    SET_GPR_U32(ctx, 31, 0x10CB44u);
    ctx->pc = 0x10CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB3Cu;
    // 0x10cb40: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10CB44u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10CB44u) { return; }
    ctx->pc = 0x10CB44u;
label_10cb44:
    // 0x10cb44: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CB44u;
    {
        const bool branch_taken_0x10cb44 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10cb44) {
            ctx->pc = 0x10CB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CB44u;
            // 0x10cb48: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CB54u;
            return;
        }
    }
    ctx->pc = 0x10CB4Cu;
    // 0x10cb4c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10CB4Cu;
    {
        const bool branch_taken_0x10cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB4Cu;
        // 0x10cb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb4c) {
            ctx->pc = 0x10CB78u;
            return;
        }
    }
    ctx->pc = 0x10CB54u;
}
