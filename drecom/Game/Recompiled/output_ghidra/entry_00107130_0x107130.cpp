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

// Function: entry_00107130
// Address: 0x107130 - 0x10715c
void entry_00107130_0x107130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107130_0x107130");
#endif

    ctx->pc = 0x107130u;

    // 0x107130: 0x8e434498  lw          $v1, 0x4498($s2)
    ctx->pc = 0x107130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17560)));
    // 0x107134: 0x111023  negu        $v0, $s1
    ctx->pc = 0x107134u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x107138: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x107138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10713c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x10713cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x107140: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x107140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x107144: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x107144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x107148: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10714c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10714cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107154: 0x3e00008  jr          $ra
    ctx->pc = 0x107154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107154u;
        // 0x107158: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10715Cu;
}
