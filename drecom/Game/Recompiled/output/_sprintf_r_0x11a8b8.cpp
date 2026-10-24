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

// Function: _sprintf_r
// Address: 0x11a8b8 - 0x11a920
void _sprintf_r_0x11a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sprintf_r_0x11a8b8");
#endif

    switch (ctx->pc) {
        case 0x11a90cu: goto label_11a90c;
        default: break;
    }

    ctx->pc = 0x11a8b8u;

    // 0x11a8b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x11a8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x11a8bc: 0xa0602d  daddu       $t4, $a1, $zero
    ctx->pc = 0x11a8bcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8c0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x11a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x11a8c4: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x11a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x11a8c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11a8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11a8cc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x11a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8d0: 0x24030208  addiu       $v1, $zero, 0x208
    ctx->pc = 0x11a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x11a8d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11a8d8: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x11a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x11a8dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a8e0: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x11a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x11a8e4: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x11a8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x11a8e8: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x11a8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x11a8ec: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x11a8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x11a8f0: 0xffab00d8  sd          $t3, 0xD8($sp)
    ctx->pc = 0x11a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
    // 0x11a8f4: 0xa7a3000c  sh          $v1, 0xC($sp)
    ctx->pc = 0x11a8f4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x11a8f8: 0xafac0010  sw          $t4, 0x10($sp)
    ctx->pc = 0x11a8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 12));
    // 0x11a8fc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11a900: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x11a900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x11a904: 0xc046cc4  jal         func_11B310
    ctx->pc = 0x11A904u;
    SET_GPR_U32(ctx, 31, 0x11A90Cu);
    ctx->pc = 0x11A908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A904u;
    // 0x11a908: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B310u;
    {
        ctx->pc = 0x11A90Cu;
        ps2_stubs::vfprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11A90Cu) { return; }
    ctx->pc = 0x11A90Cu;
label_11a90c:
    // 0x11a90c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a910: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11a910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11a914: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x11a914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x11a918: 0x3e00008  jr          $ra
    ctx->pc = 0x11A918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A918u;
        // 0x11a91c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A920u;
}
