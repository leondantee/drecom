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

// Function: entry_00214268
// Address: 0x214268 - 0x214290
void entry_00214268_0x214268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214268_0x214268");
#endif

    ctx->pc = 0x214268u;

    // 0x214268: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x214268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x21426c: 0xae23aad0  sw          $v1, -0x5530($s1)
    ctx->pc = 0x21426cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294945488), GPR_U32(ctx, 3));
    // 0x214270: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x214270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x214274: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x214274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x214278: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x214278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21427c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21427cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214280: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x214280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x214284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214288: 0x3e00008  jr          $ra
    ctx->pc = 0x214288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214288u;
        // 0x21428c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214290u;
}
