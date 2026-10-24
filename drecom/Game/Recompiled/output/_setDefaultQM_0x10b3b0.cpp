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

// Function: _setDefaultQM
// Address: 0x10b3b0 - 0x10b470
void _setDefaultQM_0x10b3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_setDefaultQM_0x10b3b0");
#endif

    switch (ctx->pc) {
        case 0x10b3e4u: goto label_10b3e4;
        case 0x10b3ecu: goto label_10b3ec;
        case 0x10b3fcu: goto label_10b3fc;
        case 0x10b43cu: goto label_10b43c;
        case 0x10b444u: goto label_10b444;
        case 0x10b458u: goto label_10b458;
        default: break;
    }

    ctx->pc = 0x10b3b0u;

    // 0x10b3b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10b3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10b3b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10b3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b3b8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x10b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x10b3bc: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x10b3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x10b3c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10b3c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3c4: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b3c8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x10b3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x10b3cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10b3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b3d0: 0x8e243bf4  lw          $a0, 0x3BF4($s1)
    ctx->pc = 0x10b3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x383BF4u));
    // 0x10b3d4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10b3d8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x10b3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x10b3dc: 0xc042914  jal         func_10A450
    ctx->pc = 0x10B3DCu;
    SET_GPR_U32(ctx, 31, 0x10B3E4u);
    ctx->pc = 0x10B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3DCu;
    // 0x10b3e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10B3DCu, 0x10B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3E4u;
label_10b3e4:
    // 0x10b3e4: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10B3E4u;
    SET_GPR_U32(ctx, 31, 0x10B3ECu);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10B3E4u, 0x10B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3ECu;
label_10b3ec:
    // 0x10b3ec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b3f0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10b3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10b3f4: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10B3F4u;
    SET_GPR_U32(ctx, 31, 0x10B3FCu);
    ctx->pc = 0x10B3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B3F4u;
    // 0x10b3f8: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10B3F4u, 0x10B3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B3FCu;
label_10b3fc:
    // 0x10b3fc: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x10b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x10b400: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10b400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10b404: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10b404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x10b408: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10b408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x10b40c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10b40cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10b410: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x10b410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x10b414: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x10b414u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x10b418: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x10b418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10b41c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10b420: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10b420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10b424: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10b424u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 3)); // MMIO: 0x1000b420
    // 0x10b428: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x10b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x10b42c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x10b42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10b430: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b434: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x10B434u;
    SET_GPR_U32(ctx, 31, 0x10B43Cu);
    ctx->pc = 0x10B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B434u;
    // 0x10b438: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x10B434u, 0x10B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B43Cu;
label_10b43c:
    // 0x10b43c: 0xc041b46  jal         func_106D18
    ctx->pc = 0x10B43Cu;
    SET_GPR_U32(ctx, 31, 0x10B444u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x10B43Cu, 0x10B444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B444u;
label_10b444:
    // 0x10b444: 0x8e243bf4  lw          $a0, 0x3BF4($s1)
    ctx->pc = 0x10b444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 15348)));
    // 0x10b448: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b44c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x10b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10b450: 0xc042914  jal         func_10A450
    ctx->pc = 0x10B450u;
    SET_GPR_U32(ctx, 31, 0x10B458u);
    ctx->pc = 0x10B454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B450u;
    // 0x10b454: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A450u, 0x10B450u, 0x10B458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B458u;
label_10b458:
    // 0x10b458: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x10b458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10b45c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x10b45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10b460: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x10b460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10b464: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x10b464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b468: 0x3e00008  jr          $ra
    ctx->pc = 0x10B468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B468u;
        // 0x10b46c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B470u;
}
