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

// Function: entry_0010be38
// Address: 0x10be38 - 0x10be58
void entry_0010be38_0x10be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010be38_0x10be38");
#endif

    ctx->pc = 0x10be38u;

    // 0x10be38: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x10be38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x10be3c: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x10be3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x10be40: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x10be40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x10be44: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x10be44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x10be48: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x10be48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10be4c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10be4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10be50: 0x3e00008  jr          $ra
    ctx->pc = 0x10BE50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE50u;
        // 0x10be54: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BE50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BE58u;
}
