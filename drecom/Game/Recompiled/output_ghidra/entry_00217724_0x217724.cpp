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

// Function: entry_00217724
// Address: 0x217724 - 0x21775c
void entry_00217724_0x217724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00217724_0x217724");
#endif

    switch (ctx->pc) {
        case 0x21774cu: goto label_21774c;
        default: break;
    }

    ctx->pc = 0x217724u;

    // 0x217724: 0x2607ccc0  addiu       $a3, $s0, -0x3340
    ctx->pc = 0x217724u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954176));
    // 0x217728: 0x24a4cec0  addiu       $a0, $a1, -0x3140
    ctx->pc = 0x217728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954688));
    // 0x21772c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21772cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217730: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x217730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x217734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217738: 0x24080200  addiu       $t0, $zero, 0x200
    ctx->pc = 0x217738u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x21773c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x21773cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217740: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x217740u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x217744: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x217744u;
    SET_GPR_U32(ctx, 31, 0x21774Cu);
    ctx->pc = 0x217748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217744u;
    // 0x217748: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x21774Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21774Cu) { return; }
    ctx->pc = 0x21774Cu;
label_21774c:
    // 0x21774c: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21774Cu;
    {
        const bool branch_taken_0x21774c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x21774c) {
            ctx->pc = 0x217750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21774Cu;
            // 0x217750: 0x8e02ccc0  lw          $v0, -0x3340($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21775Cu;
            return;
        }
    }
    ctx->pc = 0x217754u;
    // 0x217754: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x217754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x217758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x217758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    ctx->pc = 0x21775cu;
}
