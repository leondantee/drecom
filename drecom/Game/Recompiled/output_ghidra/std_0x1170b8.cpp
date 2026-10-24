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

// Function: std
// Address: 0x1170b8 - 0x117110
void std_0x1170b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("std_0x1170b8");
#endif

    ctx->pc = 0x1170b8u;

    // 0x1170b8: 0x3c020012  lui         $v0, 0x12
    ctx->pc = 0x1170b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18 << 16));
    // 0x1170bc: 0x3c030012  lui         $v1, 0x12
    ctx->pc = 0x1170bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18 << 16));
    // 0x1170c0: 0x3c080012  lui         $t0, 0x12
    ctx->pc = 0x1170c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)18 << 16));
    // 0x1170c4: 0x3c090012  lui         $t1, 0x12
    ctx->pc = 0x1170c4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)18 << 16));
    // 0x1170c8: 0x2442a990  addiu       $v0, $v0, -0x5670
    ctx->pc = 0x1170c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945168));
    // 0x1170cc: 0x2463a9f8  addiu       $v1, $v1, -0x5608
    ctx->pc = 0x1170ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945272));
    // 0x1170d0: 0x2508aa78  addiu       $t0, $t0, -0x5588
    ctx->pc = 0x1170d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294945400));
    // 0x1170d4: 0x2529aae0  addiu       $t1, $t1, -0x5520
    ctx->pc = 0x1170d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945504));
    // 0x1170d8: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x1170d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x1170dc: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x1170dcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x1170e0: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x1170e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x1170e4: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x1170e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x1170e8: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x1170e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x1170ec: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x1170ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x1170f0: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x1170f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x1170f4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1170f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1170f8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1170f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1170fc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1170fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x117100: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x117100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x117104: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x117104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x117108: 0x3e00008  jr          $ra
    ctx->pc = 0x117108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117108u;
        // 0x11710c: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117110u;
}
