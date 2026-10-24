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

// Function: entry_002156fc
// Address: 0x2156fc - 0x21571c
void entry_002156fc_0x2156fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002156fc_0x2156fc");
#endif

    switch (ctx->pc) {
        case 0x215704u: goto label_215704;
        default: break;
    }

    ctx->pc = 0x2156fcu;

    // 0x2156fc: 0xc085576  jal         func_2155D8
    ctx->pc = 0x2156FCu;
    SET_GPR_U32(ctx, 31, 0x215704u);
    ctx->pc = 0x215700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2156FCu;
    // 0x215700: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2155D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2155D8u, 0x2156FCu, 0x215704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215704u;
label_215704:
    // 0x215704: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x215704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x215708: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x215708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21570c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x21570cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x215710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215714: 0x3e00008  jr          $ra
    ctx->pc = 0x215714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215714u;
        // 0x215718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21571Cu;
}
