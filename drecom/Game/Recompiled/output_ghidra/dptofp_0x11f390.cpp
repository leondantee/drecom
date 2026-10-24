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

// Function: dptofp
// Address: 0x11f390 - 0x11f3e4
void dptofp_0x11f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptofp_0x11f390");
#endif

    switch (ctx->pc) {
        case 0x11f3a8u: goto label_11f3a8;
        case 0x11f3d8u: goto label_11f3d8;
        default: break;
    }

    ctx->pc = 0x11f390u;

    // 0x11f390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f394: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x11f394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x11f398: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f39c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f3a0: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F3A0u;
    SET_GPR_U32(ctx, 31, 0x11F3A8u);
    ctx->pc = 0x11F3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3A0u;
    // 0x11f3a4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F3A0u, 0x11F3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3A8u;
label_11f3a8:
    // 0x11f3a8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x11f3a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f3ac: 0x3c033fff  lui         $v1, 0x3FFF
    ctx->pc = 0x11f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16383 << 16));
    // 0x11f3b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x11f3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11f3b4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x11f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f3b8: 0x240b8  dsll        $t0, $v0, 2
    ctx->pc = 0x11f3b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << 2);
    // 0x11f3bc: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x11f3bcu;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x11f3c0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x11f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11f3c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x11f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11f3c8: 0x35070001  ori         $a3, $t0, 0x1
    ctx->pc = 0x11f3c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x11f3cc: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x11f3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11f3d0: 0xc047fd6  jal         func_11FF58
    ctx->pc = 0x11F3D0u;
    SET_GPR_U32(ctx, 31, 0x11F3D8u);
    ctx->pc = 0x11F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F3D0u;
    // 0x11f3d4: 0x102380a  movz        $a3, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF58u, 0x11F3D0u, 0x11F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F3D8u;
label_11f3d8:
    // 0x11f3d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F3DCu;
        // 0x11f3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F3E4u;
}
