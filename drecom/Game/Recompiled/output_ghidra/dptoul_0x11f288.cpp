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

// Function: dptoul
// Address: 0x11f288 - 0x11f328
void dptoul_0x11f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x11f288");
#endif

    switch (ctx->pc) {
        case 0x11f2a0u: goto label_11f2a0;
        case 0x11f2b8u: goto label_11f2b8;
        default: break;
    }

    ctx->pc = 0x11f288u;

    // 0x11f288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11f28c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x11f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x11f290: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11f290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f294: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11f298: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11F298u;
    SET_GPR_U32(ctx, 31, 0x11F2A0u);
    ctx->pc = 0x11F29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F298u;
    // 0x11f29c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11F298u, 0x11F2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F2A0u;
label_11f2a0:
    // 0x11f2a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f2a4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x11f2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x11f2a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F2A8u;
    {
        const bool branch_taken_0x11f2a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2A8u;
        // 0x11f2ac: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2a8) {
            ctx->pc = 0x11F2B8u;
            goto label_11f2b8;
        }
    }
    ctx->pc = 0x11F2B0u;
    // 0x11f2b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F2B0u;
    {
        const bool branch_taken_0x11f2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2B0u;
        // 0x11f2b4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2b0) {
            ctx->pc = 0x11F2C0u;
            goto label_11f2c0;
        }
    }
    ctx->pc = 0x11F2B8u;
label_11f2b8:
    // 0x11f2b8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11F2B8u;
    {
        const bool branch_taken_0x11f2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2B8u;
        // 0x11f2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2b8) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F2C0u;
label_11f2c0:
    // 0x11f2c0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F2C0u;
    {
        const bool branch_taken_0x11f2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2C0u;
        // 0x11f2c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2c0) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F2C8u;
    // 0x11f2c8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x11f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x11f2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2CCu;
    {
        const bool branch_taken_0x11f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2CCu;
        // 0x11f2d0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2cc) {
            ctx->pc = 0x11F2E4u;
            goto label_11f2e4;
        }
    }
    ctx->pc = 0x11F2D4u;
    // 0x11f2d4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11F2D4u;
    {
        const bool branch_taken_0x11f2d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2D4u;
        // 0x11f2d8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2d4) {
            ctx->pc = 0x11F2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f2b8;
        }
    }
    ctx->pc = 0x11F2DCu;
    // 0x11f2dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F2DCu;
    {
        const bool branch_taken_0x11f2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f2dc) {
            ctx->pc = 0x11F2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F2DCu;
            // 0x11f2e0: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F2F0u;
            goto label_11f2f0;
        }
    }
    ctx->pc = 0x11F2E4u;
label_11f2e4:
    // 0x11f2e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x11f2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x11f2e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x11F2E8u;
    {
        const bool branch_taken_0x11f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2E8u;
        // 0x11f2ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2e8) {
            ctx->pc = 0x11F31Cu;
            goto label_11f31c;
        }
    }
    ctx->pc = 0x11F2F0u;
label_11f2f0:
    // 0x11f2f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F2F0u;
    {
        const bool branch_taken_0x11f2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F2F0u;
        // 0x11f2f4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f2f0) {
            ctx->pc = 0x11F308u;
            goto label_11f308;
        }
    }
    ctx->pc = 0x11F2F8u;
    // 0x11f2f8: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x11f2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f2fc: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x11f2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x11f300: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11F300u;
    {
        const bool branch_taken_0x11f300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F300u;
        // 0x11f304: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f300) {
            ctx->pc = 0x11F314u;
            goto label_11f314;
        }
    }
    ctx->pc = 0x11F308u;
label_11f308:
    // 0x11f308: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x11f308u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f30c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x11f30cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x11f310: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x11f310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_11f314:
    // 0x11f314: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11f314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11f318: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11f318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_11f31c:
    // 0x11f31c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11f31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f320: 0x3e00008  jr          $ra
    ctx->pc = 0x11F320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F320u;
        // 0x11f324: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F328u;
}
