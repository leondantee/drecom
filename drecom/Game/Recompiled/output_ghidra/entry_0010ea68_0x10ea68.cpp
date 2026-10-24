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

// Function: entry_0010ea68
// Address: 0x10ea68 - 0x10eaa4
void entry_0010ea68_0x10ea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ea68_0x10ea68");
#endif

    switch (ctx->pc) {
        case 0x10ea7cu: goto label_10ea7c;
        case 0x10eaa0u: goto label_10eaa0;
        default: break;
    }

    ctx->pc = 0x10ea68u;

    // 0x10ea68: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10ea68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10ea6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10ea6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea70: 0x34a50593  ori         $a1, $a1, 0x593
    ctx->pc = 0x10ea70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1427);
    // 0x10ea74: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10EA74u;
    SET_GPR_U32(ctx, 31, 0x10EA7Cu);
    ctx->pc = 0x10EA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA74u;
    // 0x10ea78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10EA7Cu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EA7Cu) { return; }
    ctx->pc = 0x10EA7Cu;
label_10ea7c:
    // 0x10ea7c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10EA7Cu;
    {
        const bool branch_taken_0x10ea7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10ea7c) {
            ctx->pc = 0x10EA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA7Cu;
            // 0x10ea80: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EACCu;
            return;
        }
    }
    ctx->pc = 0x10EA84u;
    // 0x10ea84: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10ea84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10ea88: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10ea8c: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EA8Cu;
    {
        const bool branch_taken_0x10ea8c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10EA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA8Cu;
        // 0x10ea90: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea8c) {
            ctx->pc = 0x10EAA4u;
            return;
        }
    }
    ctx->pc = 0x10EA94u;
    // 0x10ea94: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ea94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10ea98: 0xc046760  jal         func_119D80
    ctx->pc = 0x10EA98u;
    SET_GPR_U32(ctx, 31, 0x10EAA0u);
    ctx->pc = 0x10EA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA98u;
    // 0x10ea9c: 0x2484cdc8  addiu       $a0, $a0, -0x3238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10EAA0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EAA0u) { return; }
    ctx->pc = 0x10EAA0u;
label_10eaa0:
    // 0x10eaa0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10eaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x10eaa4u;
}
