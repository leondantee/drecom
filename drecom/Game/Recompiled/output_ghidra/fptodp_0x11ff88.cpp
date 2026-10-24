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

// Function: fptodp
// Address: 0x11ff88 - 0x11ffc8
void fptodp_0x11ff88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptodp_0x11ff88");
#endif

    switch (ctx->pc) {
        case 0x11ffa0u: goto label_11ffa0;
        case 0x11ffbcu: goto label_11ffbc;
        default: break;
    }

    ctx->pc = 0x11ff88u;

    // 0x11ff88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ff88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11ff8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11ff8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11ff90: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11ff94: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x11ff94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11ff98: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FF98u;
    SET_GPR_U32(ctx, 31, 0x11FFA0u);
    ctx->pc = 0x11FF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FF98u;
    // 0x11ff9c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FF98u, 0x11FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFA0u;
label_11ffa0:
    // 0x11ffa0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x11ffa0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11ffa4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ffa8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x11ffa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11ffac: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x11ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11ffb0: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x11ffb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11ffb4: 0xc047cd8  jal         func_11F360
    ctx->pc = 0x11FFB4u;
    SET_GPR_U32(ctx, 31, 0x11FFBCu);
    ctx->pc = 0x11FFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FFB4u;
    // 0x11ffb8: 0x738ba  dsrl        $a3, $a3, 2 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 2);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F360u, 0x11FFB4u, 0x11FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FFBCu;
label_11ffbc:
    // 0x11ffbc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11ffbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ffc0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FFC0u;
        // 0x11ffc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FFC8u;
}
