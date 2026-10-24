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

// Function: entry_0010d6b8
// Address: 0x10d6b8 - 0x10d6f4
void entry_0010d6b8_0x10d6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d6b8_0x10d6b8");
#endif

    switch (ctx->pc) {
        case 0x10d6ccu: goto label_10d6cc;
        case 0x10d6f0u: goto label_10d6f0;
        default: break;
    }

    ctx->pc = 0x10d6b8u;

    // 0x10d6b8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10d6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10d6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6c0: 0x34a50596  ori         $a1, $a1, 0x596
    ctx->pc = 0x10d6c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1430);
    // 0x10d6c4: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10D6C4u;
    SET_GPR_U32(ctx, 31, 0x10D6CCu);
    ctx->pc = 0x10D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6C4u;
    // 0x10d6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10D6CCu;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D6CCu) { return; }
    ctx->pc = 0x10D6CCu;
label_10d6cc:
    // 0x10d6cc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10D6CCu;
    {
        const bool branch_taken_0x10d6cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10d6cc) {
            ctx->pc = 0x10D6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10D6CCu;
            // 0x10d6d0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D71Cu;
            return;
        }
    }
    ctx->pc = 0x10D6D4u;
    // 0x10d6d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10d6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10d6d8: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10d6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10d6dc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D6DCu;
    {
        const bool branch_taken_0x10d6dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6DCu;
        // 0x10d6e0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6dc) {
            ctx->pc = 0x10D6F4u;
            return;
        }
    }
    ctx->pc = 0x10D6E4u;
    // 0x10d6e4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10d6e8: 0xc046760  jal         func_119D80
    ctx->pc = 0x10D6E8u;
    SET_GPR_U32(ctx, 31, 0x10D6F0u);
    ctx->pc = 0x10D6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6E8u;
    // 0x10d6ec: 0x2484cc10  addiu       $a0, $a0, -0x33F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D6F0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D6F0u) { return; }
    ctx->pc = 0x10D6F0u;
label_10d6f0:
    // 0x10d6f0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10d6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x10d6f4u;
}
