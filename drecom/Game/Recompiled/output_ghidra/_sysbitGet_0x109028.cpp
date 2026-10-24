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

// Function: _sysbitGet
// Address: 0x109028 - 0x109074
void _sysbitGet_0x109028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitGet_0x109028");
#endif

    switch (ctx->pc) {
        case 0x109048u: goto label_109048;
        case 0x109058u: goto label_109058;
        default: break;
    }

    ctx->pc = 0x109028u;

    // 0x109028: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x109028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10902c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x109030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109034: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x109034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109038: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x109038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10903c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x109040: 0xc0423dc  jal         func_108F70
    ctx->pc = 0x109040u;
    SET_GPR_U32(ctx, 31, 0x109048u);
    ctx->pc = 0x109044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109040u;
    // 0x109044: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F70u, 0x109040u, 0x109048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109048u;
label_109048:
    // 0x109048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10904c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109050: 0xc0423e4  jal         func_108F90
    ctx->pc = 0x109050u;
    SET_GPR_U32(ctx, 31, 0x109058u);
    ctx->pc = 0x109054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109050u;
    // 0x109054: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F90u, 0x109050u, 0x109058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109058u;
label_109058:
    // 0x109058: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x109058u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10905c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10905cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x109060: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x109060u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x109064: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x109064u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10906c: 0x3e00008  jr          $ra
    ctx->pc = 0x10906Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10906Cu;
        // 0x109070: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10906Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109074u;
}
