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

// Function: entry_00217518
// Address: 0x217518 - 0x217550
void entry_00217518_0x217518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217518_0x217518");
#endif

    switch (ctx->pc) {
        case 0x217540u: goto label_217540;
        default: break;
    }

    ctx->pc = 0x217518u;

    // 0x217518: 0x26a7ccc0  addiu       $a3, $s5, -0x3340
    ctx->pc = 0x217518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954176));
    // 0x21751c: 0x24a4cec0  addiu       $a0, $a1, -0x3140
    ctx->pc = 0x21751cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
    // 0x217520: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217524: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x217524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x217528: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217528u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21752c: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x21752cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x217530: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x217530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217534: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x217534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217538: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217538u;
    SET_GPR_U32(ctx, 31, 0x217540u);
    ctx->pc = 0x21753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217538u;
    // 0x21753c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x217540u;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x217540u) { return; }
    ctx->pc = 0x217540u;
label_217540:
    // 0x217540: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x217540u;
    {
        const bool branch_taken_0x217540 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x217540) {
            ctx->pc = 0x217544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217540u;
            // 0x217544: 0x8e82ccc0  lw          $v0, -0x3340($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217550u;
            return;
        }
    }
    ctx->pc = 0x217548u;
    // 0x217548: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x21754c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21754cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x217550u;
}
