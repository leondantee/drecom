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

// Function: entry_00117b08
// Address: 0x117b08 - 0x117b38
void entry_00117b08_0x117b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00117b08_0x117b08");
#endif

    switch (ctx->pc) {
        case 0x117b24u: goto label_117b24;
        default: break;
    }

    ctx->pc = 0x117b08u;

label_117b08:
    // 0x117b08: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x117b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_117b0c:
    // 0x117b0c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_117b10:
    if (ctx->pc == 0x117B10u) {
        ctx->pc = 0x117B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B0Cu;
        // 0x117b10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B14u;
        goto label_117b14;
    }
    ctx->pc = 0x117B0Cu;
    {
        const bool branch_taken_0x117b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x117B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B0Cu;
        // 0x117b10: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b0c) {
            ctx->pc = 0x117B38u;
            return;
        }
    }
    ctx->pc = 0x117B14u;
label_117b14:
    // 0x117b14: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x117b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_117b18:
    // 0x117b18: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x117b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_117b1c:
    // 0x117b1c: 0x40f809  jalr        $v0
label_117b20:
    if (ctx->pc == 0x117B20u) {
        ctx->pc = 0x117B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B1Cu;
        // 0x117b20: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B24u;
        goto label_117b24;
    }
    ctx->pc = 0x117B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117B24u);
        ctx->pc = 0x117B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B1Cu;
        // 0x117b20: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117B1Cu, 0x117B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x117B24u;
label_117b24:
    // 0x117b24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x117b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_117b28:
    // 0x117b28: 0x1a00001c  blez        $s0, . + 4 + (0x1C << 2)
label_117b2c:
    if (ctx->pc == 0x117B2Cu) {
        ctx->pc = 0x117B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B28u;
        // 0x117b2c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x117B30u;
        goto label_117b30;
    }
    ctx->pc = 0x117B28u;
    {
        const bool branch_taken_0x117b28 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x117B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117B28u;
        // 0x117b2c: 0x2b0a823  subu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117b28) {
            ctx->pc = 0x117B9Cu;
            return;
        }
    }
    ctx->pc = 0x117B30u;
label_117b30:
    // 0x117b30: 0x1000000c  b           . + 4 + (0xC << 2)
label_117b34:
    if (ctx->pc == 0x117B34u) {
        ctx->pc = 0x117B38u;
        goto label_fallthrough_0x117b30;
    }
    ctx->pc = 0x117B30u;
    {
        const bool branch_taken_0x117b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x117b30) {
            ctx->pc = 0x117B64u;
            return;
        }
    }
label_fallthrough_0x117b30:
    ctx->pc = 0x117B38u;
}
