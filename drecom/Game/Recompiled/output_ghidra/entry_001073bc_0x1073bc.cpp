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

// Function: entry_001073bc
// Address: 0x1073bc - 0x1073e0
void entry_001073bc_0x1073bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001073bc_0x1073bc");
#endif

    ctx->pc = 0x1073bcu;

    // 0x1073bc: 0xae424498  sw          $v0, 0x4498($s2)
    ctx->pc = 0x1073bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17560), GPR_U32(ctx, 2));
    // 0x1073c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1073c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1073c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1073c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1073c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1073cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1073ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1073d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1073d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1073d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1073d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1073d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1073D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1073DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1073D8u;
        // 0x1073dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1073D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1073E0u;
}
