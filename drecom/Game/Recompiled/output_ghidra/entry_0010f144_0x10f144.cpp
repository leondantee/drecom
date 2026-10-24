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

// Function: entry_0010f144
// Address: 0x10f144 - 0x10f190
void entry_0010f144_0x10f144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f144_0x10f144");
#endif

    switch (ctx->pc) {
        case 0x10f174u: goto label_10f174;
        case 0x10f188u: goto label_10f188;
        default: break;
    }

    ctx->pc = 0x10f144u;

    // 0x10f144: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10f144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10f148: 0x24504bc0  addiu       $s0, $v0, 0x4BC0
    ctx->pc = 0x10f148u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 19392));
    // 0x10f14c: 0x24844fe0  addiu       $a0, $a0, 0x4FE0
    ctx->pc = 0x10f14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20448));
    // 0x10f150: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f154: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x10f154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10f158: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10f158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f15c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10f15cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f160: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10f160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f164: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10f164u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f168: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x10f168u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10f16c: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10F16Cu;
    SET_GPR_U32(ctx, 31, 0x10F174u);
    ctx->pc = 0x10F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F16Cu;
    // 0x10f170: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10F174u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F174u) { return; }
    ctx->pc = 0x10F174u;
label_10f174:
    // 0x10f174: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F174u;
    {
        const bool branch_taken_0x10f174 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x10F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F174u;
        // 0x10f178: 0x3c030038  lui         $v1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f174) {
            ctx->pc = 0x10F190u;
            return;
        }
    }
    ctx->pc = 0x10F17Cu;
    // 0x10f17c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10f180: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10F180u;
    SET_GPR_U32(ctx, 31, 0x10F188u);
    ctx->pc = 0x10F184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F180u;
    // 0x10f184: 0x8c4445bc  lw          $a0, 0x45BC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10F188u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F188u) { return; }
    ctx->pc = 0x10F188u;
label_10f188:
    // 0x10f188: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10F188u;
    {
        const bool branch_taken_0x10f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F188u;
        // 0x10f18c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f188) {
            ctx->pc = 0x10F1C8u;
            return;
        }
    }
    ctx->pc = 0x10F190u;
}
