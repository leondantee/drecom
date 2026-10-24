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

// Function: entry_0010eff8
// Address: 0x10eff8 - 0x10f054
void entry_0010eff8_0x10eff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010eff8_0x10eff8");
#endif

    switch (ctx->pc) {
        case 0x10f034u: goto label_10f034;
        case 0x10f048u: goto label_10f048;
        default: break;
    }

    ctx->pc = 0x10eff8u;

    // 0x10eff8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10eff8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10effc: 0x24514bc0  addiu       $s1, $v0, 0x4BC0
    ctx->pc = 0x10effcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f000: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x10f000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10f004: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f008: 0xae0345f8  sw          $v1, 0x45F8($s0)
    ctx->pc = 0x10f008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3845F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845F8u, _value); } while (0);
    // 0x10f00c: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f010: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f014: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x10f014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x10f018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f01c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f020: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f024: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x10f024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f028: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f028u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f02c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F02Cu;
    SET_GPR_U32(ctx, 31, 0x10F034u);
    ctx->pc = 0x10F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F02Cu;
    // 0x10f030: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F034u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F034u) { return; }
    ctx->pc = 0x10F034u;
label_10f034:
    // 0x10f034: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10F034u;
    {
        const bool branch_taken_0x10f034 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F034u;
        // 0x10f038: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f034) {
            ctx->pc = 0x10F054u;
            return;
        }
    }
    ctx->pc = 0x10F03Cu;
    // 0x10f03c: 0x8c4445bc  lw          $a0, 0x45BC($v0)
    ctx->pc = 0x10f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    // 0x10f040: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F040u;
    SET_GPR_U32(ctx, 31, 0x10F048u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F048u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F048u) { return; }
    ctx->pc = 0x10F048u;
label_10f048:
    // 0x10f048: 0xae0045f8  sw          $zero, 0x45F8($s0)
    ctx->pc = 0x10f048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17912), GPR_U32(ctx, 0));
    // 0x10f04c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10F04Cu;
    {
        const bool branch_taken_0x10f04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F04Cu;
        // 0x10f050: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f04c) {
            ctx->pc = 0x10F070u;
            return;
        }
    }
    ctx->pc = 0x10F054u;
}
