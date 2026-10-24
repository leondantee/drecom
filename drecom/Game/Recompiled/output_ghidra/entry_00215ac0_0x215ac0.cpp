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

// Function: entry_00215ac0
// Address: 0x215ac0 - 0x215afc
void entry_00215ac0_0x215ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215ac0_0x215ac0");
#endif

    switch (ctx->pc) {
        case 0x215ae8u: goto label_215ae8;
        case 0x215af8u: goto label_215af8;
        default: break;
    }

    ctx->pc = 0x215ac0u;

    // 0x215ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x215ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x215ac4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x215ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x215ac8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x215ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x215acc: 0x34840009  ori         $a0, $a0, 0x9
    ctx->pc = 0x215accu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)9);
    // 0x215ad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x215ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ad4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x215ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x215ad8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215ad8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215adc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x215adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215ae0: 0xc08543e  jal         func_2150F8
    ctx->pc = 0x215AE0u;
    SET_GPR_U32(ctx, 31, 0x215AE8u);
    ctx->pc = 0x215AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AE0u;
    // 0x215ae4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2150F8u;
    {
        ctx->pc = 0x215AE8u;
        ps2_syscalls::sceSifSendCmd(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x215AE8u) { return; }
    ctx->pc = 0x215AE8u;
label_215ae8:
    // 0x215ae8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215AE8u;
    {
        const bool branch_taken_0x215ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AE8u;
        // 0x215aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ae8) {
            ctx->pc = 0x215AFCu;
            return;
        }
    }
    ctx->pc = 0x215AF0u;
    // 0x215af0: 0xc085576  jal         func_2155D8
    ctx->pc = 0x215AF0u;
    SET_GPR_U32(ctx, 31, 0x215AF8u);
    ctx->pc = 0x215AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AF0u;
    // 0x215af4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x215AF0u, 0x215AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AF8u;
label_215af8:
    // 0x215af8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x215af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->pc = 0x215afcu;
}
