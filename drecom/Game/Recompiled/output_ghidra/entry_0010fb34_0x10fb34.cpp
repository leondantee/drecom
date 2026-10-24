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

// Function: entry_0010fb34
// Address: 0x10fb34 - 0x10fb84
void entry_0010fb34_0x10fb34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb34_0x10fb34");
#endif

    switch (ctx->pc) {
        case 0x10fb4cu: goto label_10fb4c;
        default: break;
    }

    ctx->pc = 0x10fb34u;

    // 0x10fb34: 0x2532823  subu        $a1, $s2, $s3
    ctx->pc = 0x10fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x10fb38: 0x2863021  addu        $a2, $s4, $a2
    ctx->pc = 0x10fb38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x10fb3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10fb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb40: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x10fb40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10fb44: 0xc043f3c  jal         func_10FCF0
    ctx->pc = 0x10FB44u;
    SET_GPR_U32(ctx, 31, 0x10FB4Cu);
    ctx->pc = 0x10FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB44u;
    // 0x10fb48: 0x26a84600  addiu       $t0, $s5, 0x4600 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 17920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCF0u, 0x10FB44u, 0x10FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FB4Cu;
label_10fb4c:
    // 0x10fb4c: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x10fb4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x10fb50: 0x28402  srl         $s0, $v0, 16
    ctx->pc = 0x10fb50u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x10fb54: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x10FB54u;
    {
        const bool branch_taken_0x10fb54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB54u;
        // 0x10fb58: 0x2719821  addu        $s3, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb54) {
            ctx->pc = 0x10FB84u;
            return;
        }
    }
    ctx->pc = 0x10FB5Cu;
    // 0x10fb5c: 0x8ee245a8  lw          $v0, 0x45A8($s7)
    ctx->pc = 0x10fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17832)));
    // 0x10fb60: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10FB60u;
    {
        const bool branch_taken_0x10fb60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB60u;
        // 0x10fb64: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb60) {
            ctx->pc = 0x10FB84u;
            return;
        }
    }
    ctx->pc = 0x10FB68u;
    // 0x10fb68: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fb6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10fb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb70: 0x2484cf20  addiu       $a0, $a0, -0x30E0
    ctx->pc = 0x10fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954784));
    // 0x10fb74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10fb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb78: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x10fb78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fb7c: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FB7Cu;
    SET_GPR_U32(ctx, 31, 0x10FB84u);
    ctx->pc = 0x10FB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB7Cu;
    // 0x10fb80: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FB84u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FB84u) { return; }
    ctx->pc = 0x10FB84u;
}
