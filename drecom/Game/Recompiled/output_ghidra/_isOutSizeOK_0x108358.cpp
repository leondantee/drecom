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

// Function: _isOutSizeOK
// Address: 0x108358 - 0x1083f4
void _isOutSizeOK_0x108358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_isOutSizeOK_0x108358");
#endif

    switch (ctx->pc) {
        case 0x1083d8u: goto label_1083d8;
        case 0x1083e0u: goto label_1083e0;
        default: break;
    }

    ctx->pc = 0x108358u;

    // 0x108358: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x108358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x10835c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10835cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x108360: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x108360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x108364: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x108364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108368: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x108368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10836c: 0x8c623bf4  lw          $v0, 0x3BF4($v1)
    ctx->pc = 0x10836cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x383BF4u));
    // 0x108370: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x108370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x108374: 0x8c4400e0  lw          $a0, 0xE0($v0)
    ctx->pc = 0x108374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x108378: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x108378u;
    {
        const bool branch_taken_0x108378 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x108378) {
            ctx->pc = 0x10837Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108378u;
            // 0x10837c: 0x8cc3000c  lw          $v1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1083A4u;
            goto label_1083a4;
        }
    }
    ctx->pc = 0x108380u;
    // 0x108380: 0x8c4200dc  lw          $v0, 0xDC($v0)
    ctx->pc = 0x108380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
    // 0x108384: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x108384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x108388: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x108388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x10838c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10838Cu;
    {
        const bool branch_taken_0x10838c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10838Cu;
        // 0x108390: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10838c) {
            ctx->pc = 0x1083B8u;
            goto label_1083b8;
        }
    }
    ctx->pc = 0x108394u;
    // 0x108394: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x108394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x108398: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x108398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10839c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x10839Cu;
    {
        const bool branch_taken_0x10839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1083A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10839Cu;
        // 0x1083a0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10839c) {
            ctx->pc = 0x1083B8u;
            goto label_1083b8;
        }
    }
    ctx->pc = 0x1083A4u;
label_1083a4:
    // 0x1083a4: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1083a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1083a8: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1083a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1083ac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1083acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1083b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1083b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1083b4: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x1083b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1083b8:
    // 0x1083b8: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1083B8u;
    {
        const bool branch_taken_0x1083b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1083BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083B8u;
        // 0x1083bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1083b8) {
            ctx->pc = 0x1083E4u;
            goto label_1083e4;
        }
    }
    ctx->pc = 0x1083C0u;
    // 0x1083c0: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1083c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1083c4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1083c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1083c8: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1083c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1083cc: 0x24a5c828  addiu       $a1, $a1, -0x37D8
    ctx->pc = 0x1083ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953000));
    // 0x1083d0: 0xc046a48  jal         func_11A920
    ctx->pc = 0x1083D0u;
    SET_GPR_U32(ctx, 31, 0x1083D8u);
    ctx->pc = 0x1083D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083D0u;
    // 0x1083d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x1083D8u;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1083D8u) { return; }
    ctx->pc = 0x1083D8u;
label_1083d8:
    // 0x1083d8: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x1083D8u;
    SET_GPR_U32(ctx, 31, 0x1083E0u);
    ctx->pc = 0x1083DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1083D8u;
    // 0x1083dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x1083D8u, 0x1083E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1083E0u;
label_1083e0:
    // 0x1083e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1083e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1083e4:
    // 0x1083e4: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1083e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1083e8: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1083e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1083ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1083ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1083F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1083ECu;
        // 0x1083f0: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1083ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1083F4u;
}
