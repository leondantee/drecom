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

// Function: entry_0010d858
// Address: 0x10d858 - 0x10d890
void entry_0010d858_0x10d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d858_0x10d858");
#endif

    switch (ctx->pc) {
        case 0x10d86cu: goto label_10d86c;
        case 0x10d88cu: goto label_10d88c;
        default: break;
    }

    ctx->pc = 0x10d858u;

    // 0x10d858: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10d858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10d85c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d860: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x10d860u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x10d864: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10D864u;
    SET_GPR_U32(ctx, 31, 0x10D86Cu);
    ctx->pc = 0x10D868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D864u;
    // 0x10d868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10D86Cu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D86Cu) { return; }
    ctx->pc = 0x10D86Cu;
label_10d86c:
    // 0x10d86c: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10D86Cu;
    {
        const bool branch_taken_0x10d86c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10d86c) {
            ctx->pc = 0x10D870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D86Cu;
            // 0x10d870: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D8BCu;
            return;
        }
    }
    ctx->pc = 0x10D874u;
    // 0x10d874: 0x8e8245a8  lw          $v0, 0x45A8($s4)
    ctx->pc = 0x10d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17832)));
    // 0x10d878: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D878u;
    {
        const bool branch_taken_0x10d878 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D878u;
        // 0x10d87c: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d878) {
            ctx->pc = 0x10D890u;
            return;
        }
    }
    ctx->pc = 0x10D880u;
    // 0x10d880: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10d880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10d884: 0xc046760  jal         func_119D80
    ctx->pc = 0x10D884u;
    SET_GPR_U32(ctx, 31, 0x10D88Cu);
    ctx->pc = 0x10D888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D884u;
    // 0x10d888: 0x2484cc30  addiu       $a0, $a0, -0x33D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D88Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D88Cu) { return; }
    ctx->pc = 0x10D88Cu;
label_10d88c:
    // 0x10d88c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x10d890u;
}
