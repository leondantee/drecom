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

// Function: _sysbitMarker
// Address: 0x109078 - 0x1090bc
void _sysbitMarker_0x109078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitMarker_0x109078");
#endif

    switch (ctx->pc) {
        case 0x109094u: goto label_109094;
        case 0x1090a4u: goto label_1090a4;
        default: break;
    }

    ctx->pc = 0x109078u;

    // 0x109078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x109078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10907c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10907cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109084: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x109084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109088: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x109088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10908c: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x10908Cu;
    SET_GPR_U32(ctx, 31, 0x109094u);
    ctx->pc = 0x109090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10908Cu;
    // 0x109090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x10908Cu, 0x109094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109094u;
label_109094:
    // 0x109094: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109094u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10909c: 0xc0423e4  jal         func_108F90
    ctx->pc = 0x10909Cu;
    SET_GPR_U32(ctx, 31, 0x1090A4u);
    ctx->pc = 0x1090A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10909Cu;
    // 0x1090a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F90u, 0x10909Cu, 0x1090A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1090A4u;
label_1090a4:
    // 0x1090a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1090a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1090a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1090a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1090ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1090acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1090b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1090b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1090b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1090B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1090B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1090B4u;
        // 0x1090b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1090B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1090BCu;
}
