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

// Function: entry_00110240
// Address: 0x110240 - 0x11027c
void entry_00110240_0x110240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110240_0x110240");
#endif

    switch (ctx->pc) {
        case 0x11026cu: goto label_11026c;
        default: break;
    }

    ctx->pc = 0x110240u;

    // 0x110240: 0x3c09003b  lui         $t1, 0x3B
    ctx->pc = 0x110240u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)59 << 16));
    // 0x110244: 0xace55280  sw          $a1, 0x5280($a3)
    ctx->pc = 0x110244u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 21120), GPR_U32(ctx, 5));
    // 0x110248: 0x252967c0  addiu       $t1, $t1, 0x67C0
    ctx->pc = 0x110248u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26560));
    // 0x11024c: 0x24e75280  addiu       $a3, $a3, 0x5280
    ctx->pc = 0x11024cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x110250: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x110250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x110254: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x110254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x110258: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x110258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11025c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x11025cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x110260: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x110260u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x110264: 0xc0856ea  jal         func_215BA8
    ctx->pc = 0x110264u;
    SET_GPR_U32(ctx, 31, 0x11026Cu);
    ctx->pc = 0x110268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110264u;
    // 0x110268: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BA8u;
    {
        ctx->pc = 0x11026Cu;
        ps2_syscalls::sceSifCallRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11026Cu) { return; }
    ctx->pc = 0x11026Cu;
label_11026c:
    // 0x11026c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11026cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110270: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x110270u;
    {
        const bool branch_taken_0x110270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x110274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110270u;
        // 0x110274: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110270) {
            ctx->pc = 0x110284u;
            return;
        }
    }
    ctx->pc = 0x110278u;
    // 0x110278: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x110278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x11027cu;
}
