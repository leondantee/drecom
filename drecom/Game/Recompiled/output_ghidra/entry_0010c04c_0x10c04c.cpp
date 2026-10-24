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

// Function: entry_0010c04c
// Address: 0x10c04c - 0x10c090
void entry_0010c04c_0x10c04c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c04c_0x10c04c");
#endif

    switch (ctx->pc) {
        case 0x10c080u: goto label_10c080;
        default: break;
    }

    ctx->pc = 0x10c04cu;

    // 0x10c04c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10c04cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10c050: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10c050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10c054: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10c058: 0xac433b00  sw          $v1, 0x3B00($v0)
    ctx->pc = 0x10c058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15104), GPR_U32(ctx, 3));
    // 0x10c05c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c060: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10c060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10c064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c068: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10c068u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c06c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10c06cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c070: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10c070u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c074: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10c074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10c078: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x10C078u;
    SET_GPR_U32(ctx, 31, 0x10C080u);
    ctx->pc = 0x10C07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C078u;
    // 0x10c07c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x10C080u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10C080u) { return; }
    ctx->pc = 0x10C080u;
label_10c080:
    // 0x10c080: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C080u;
    {
        const bool branch_taken_0x10c080 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10c080) {
            ctx->pc = 0x10C084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C080u;
            // 0x10c084: 0x8e07000c  lw          $a3, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C090u;
            return;
        }
    }
    ctx->pc = 0x10C088u;
    // 0x10c088: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C088u;
    {
        const bool branch_taken_0x10c088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C088u;
        // 0x10c08c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c088) {
            ctx->pc = 0x10C0A8u;
            return;
        }
    }
    ctx->pc = 0x10C090u;
}
