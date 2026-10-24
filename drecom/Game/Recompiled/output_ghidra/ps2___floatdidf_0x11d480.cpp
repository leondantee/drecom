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

// Function: __floatdidf
// Address: 0x11d480 - 0x11d518
void ps2___floatdidf_0x11d480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___floatdidf_0x11d480");
#endif

    switch (ctx->pc) {
        case 0x11d4a8u: goto label_11d4a8;
        case 0x11d4b4u: goto label_11d4b4;
        case 0x11d4c0u: goto label_11d4c0;
        case 0x11d4e0u: goto label_11d4e0;
        case 0x11d4f8u: goto label_11d4f8;
        case 0x11d504u: goto label_11d504;
        default: break;
    }

    ctx->pc = 0x11d480u;

    // 0x11d480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11d480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11d484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d48c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11d48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11d490: 0x341181e0  ori         $s1, $zero, 0x81E0
    ctx->pc = 0x11d490u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33248);
    // 0x11d494: 0x118bfc  dsll32      $s1, $s1, 15
    ctx->pc = 0x11d494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 15));
    // 0x11d498: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x11d498u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x11d49c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11d49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11d4a0: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x11D4A0u;
    SET_GPR_U32(ctx, 31, 0x11D4A8u);
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x11D4A0u, 0x11D4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4A8u;
label_11d4a8:
    // 0x11d4a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4ac: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11D4ACu;
    SET_GPR_U32(ctx, 31, 0x11D4B4u);
    ctx->pc = 0x11D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4ACu;
    // 0x11d4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11D4ACu, 0x11D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4B4u;
label_11d4b4:
    // 0x11d4b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11d4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4b8: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11D4B8u;
    SET_GPR_U32(ctx, 31, 0x11D4C0u);
    ctx->pc = 0x11D4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4B8u;
    // 0x11d4bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11D4B8u, 0x11D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4C0u;
label_11d4c0:
    // 0x11d4c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d4c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11d4c8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d4c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d4cc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x11d4ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x11d4d0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x11d4d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x11d4d4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x11d4d4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x11d4d8: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x11D4D8u;
    SET_GPR_U32(ctx, 31, 0x11D4E0u);
    ctx->pc = 0x11D4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4D8u;
    // 0x11d4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x11D4D8u, 0x11D4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4E0u;
label_11d4e0:
    // 0x11d4e0: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11D4E0u;
    {
        const bool branch_taken_0x11d4e0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x11D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D4E0u;
        // 0x11d4e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d4e0) {
            ctx->pc = 0x11D4FCu;
            goto label_11d4fc;
        }
    }
    ctx->pc = 0x11D4E8u;
    // 0x11d4e8: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x11d4e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x11d4ec: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x11d4ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11d4f0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11D4F0u;
    SET_GPR_U32(ctx, 31, 0x11D4F8u);
    ctx->pc = 0x11D4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4F0u;
    // 0x11d4f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11D4F0u, 0x11D4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D4F8u;
label_11d4f8:
    // 0x11d4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11d4fc:
    // 0x11d4fc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11D4FCu;
    SET_GPR_U32(ctx, 31, 0x11D504u);
    ctx->pc = 0x11D500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D4FCu;
    // 0x11d500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11D4FCu, 0x11D504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D504u;
label_11d504:
    // 0x11d504: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11d504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d508: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11d508u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d50c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d50cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d510: 0x3e00008  jr          $ra
    ctx->pc = 0x11D510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D510u;
        // 0x11d514: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D518u;
}
