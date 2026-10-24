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

// Function: entry_0010ef14
// Address: 0x10ef14 - 0x10ef5c
void entry_0010ef14_0x10ef14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef14_0x10ef14");
#endif

    switch (ctx->pc) {
        case 0x10ef28u: goto label_10ef28;
        case 0x10ef54u: goto label_10ef54;
        default: break;
    }

    ctx->pc = 0x10ef14u;

    // 0x10ef14: 0x269050e0  addiu       $s0, $s4, 0x50E0
    ctx->pc = 0x10ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 20704));
    // 0x10ef18: 0xae9250e0  sw          $s2, 0x50E0($s4)
    ctx->pc = 0x10ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20704), GPR_U32(ctx, 18));
    // 0x10ef1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef20: 0xc0854a6  jal         func_215298
    ctx->pc = 0x10EF20u;
    SET_GPR_U32(ctx, 31, 0x10EF28u);
    ctx->pc = 0x10EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF20u;
    // 0x10ef24: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    {
        ctx->pc = 0x10EF28u;
        ps2_stubs::sceSifWriteBackDCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EF28u) { return; }
    ctx->pc = 0x10EF28u;
label_10ef28:
    // 0x10ef28: 0x26f14bc0  addiu       $s1, $s7, 0x4BC0
    ctx->pc = 0x10ef28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 19392));
    // 0x10ef2c: 0x26a45030  addiu       $a0, $s5, 0x5030
    ctx->pc = 0x10ef2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 20528));
    // 0x10ef30: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10ef30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef34: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10ef38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ef38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10ef3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef40: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x10ef40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ef44: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x10ef44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef48: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10ef48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10ef4c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10EF4Cu;
    SET_GPR_U32(ctx, 31, 0x10EF54u);
    ctx->pc = 0x10EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF4Cu;
    // 0x10ef50: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10EF54u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EF54u) { return; }
    ctx->pc = 0x10EF54u;
label_10ef54:
    // 0x10ef54: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EF54u;
    {
        const bool branch_taken_0x10ef54 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ef54) {
            ctx->pc = 0x10EF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EF54u;
            // 0x10ef58: 0x8ec245a8  lw          $v0, 0x45A8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17832)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EF7Cu;
            return;
        }
    }
    ctx->pc = 0x10EF5Cu;
}
