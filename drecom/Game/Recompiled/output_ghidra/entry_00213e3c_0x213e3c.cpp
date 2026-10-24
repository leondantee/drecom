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

// Function: entry_00213e3c
// Address: 0x213e3c - 0x213e70
void entry_00213e3c_0x213e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00213e3c_0x213e3c");
#endif

    switch (ctx->pc) {
        case 0x213e50u: goto label_213e50;
        case 0x213e68u: goto label_213e68;
        default: break;
    }

    ctx->pc = 0x213e3cu;

    // 0x213e3c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x213e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x213e40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x213e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x213e44: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x213e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x213e48: 0xc084eea  jal         func_213BA8
    ctx->pc = 0x213E48u;
    SET_GPR_U32(ctx, 31, 0x213E50u);
    ctx->pc = 0x213E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E48u;
    // 0x213e4c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x213BA8u;
    {
        ctx->pc = 0x213E50u;
        ps2_stubs::sceDeci2ExSend(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x213E50u) { return; }
    ctx->pc = 0x213E50u;
label_213e50:
    // 0x213e50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x213e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213e54: 0x4a30006  bgezl       $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x213E54u;
    {
        const bool branch_taken_0x213e54 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x213e54) {
            ctx->pc = 0x213E58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x213E54u;
            // 0x213e58: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x213E70u;
            return;
        }
    }
    ctx->pc = 0x213E5Cu;
    // 0x213e5c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x213e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x213e60: 0xc0852d4  jal         func_214B50
    ctx->pc = 0x213E60u;
    SET_GPR_U32(ctx, 31, 0x213E68u);
    ctx->pc = 0x213E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213E60u;
    // 0x213e64: 0x24840f10  addiu       $a0, $a0, 0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B50u, 0x213E60u, 0x213E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213E68u;
label_213e68:
    // 0x213e68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x213E68u;
    {
        const bool branch_taken_0x213e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x213e68) {
            ctx->pc = 0x213EA8u;
            return;
        }
    }
    ctx->pc = 0x213E70u;
}
