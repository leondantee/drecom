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

// Function: entry_0010db60
// Address: 0x10db60 - 0x10db9c
void entry_0010db60_0x10db60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db60_0x10db60");
#endif

    switch (ctx->pc) {
        case 0x10db74u: goto label_10db74;
        case 0x10db98u: goto label_10db98;
        default: break;
    }

    ctx->pc = 0x10db60u;

    // 0x10db60: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x10db60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x10db64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10db64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10db68: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x10db68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x10db6c: 0xc085676  jal         func_2159D8
    ctx->pc = 0x10DB6Cu;
    SET_GPR_U32(ctx, 31, 0x10DB74u);
    ctx->pc = 0x10DB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB6Cu;
    // 0x10db70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2159D8u;
    {
        ctx->pc = 0x10DB74u;
        ps2_stubs::sceSifBindRpc(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB74u) { return; }
    ctx->pc = 0x10DB74u;
label_10db74:
    // 0x10db74: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x10DB74u;
    {
        const bool branch_taken_0x10db74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x10db74) {
            ctx->pc = 0x10DB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DB74u;
            // 0x10db78: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10DBC4u;
            return;
        }
    }
    ctx->pc = 0x10DB7Cu;
    // 0x10db7c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x10db7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x10db80: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10db80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3845A8u));
    // 0x10db84: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10DB84u;
    {
        const bool branch_taken_0x10db84 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB84u;
        // 0x10db88: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10db84) {
            ctx->pc = 0x10DB9Cu;
            return;
        }
    }
    ctx->pc = 0x10DB8Cu;
    // 0x10db8c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10db90: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DB90u;
    SET_GPR_U32(ctx, 31, 0x10DB98u);
    ctx->pc = 0x10DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DB90u;
    // 0x10db94: 0x2484ccc8  addiu       $a0, $a0, -0x3338 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DB98u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB98u) { return; }
    ctx->pc = 0x10DB98u;
label_10db98:
    // 0x10db98: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x10db98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    ctx->pc = 0x10db9cu;
}
