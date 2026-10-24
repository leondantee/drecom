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

// Function: _sysbitPtr
// Address: 0x109118 - 0x109144
void _sysbitPtr_0x109118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitPtr_0x109118");
#endif

    ctx->pc = 0x109118u;

    // 0x109118: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x109118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x10911c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x10911cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x109120: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x109120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x109124: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x109124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x109128: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x109128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10912c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10912Cu;
    {
        const bool branch_taken_0x10912c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10912c) {
            ctx->pc = 0x10913Cu;
            goto label_10913c;
        }
    }
    ctx->pc = 0x109134u;
    // 0x109134: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x109134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x109138: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x109138u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10913c:
    // 0x10913c: 0x3e00008  jr          $ra
    ctx->pc = 0x10913Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10913Cu;
        // 0x109140: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10913Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109144u;
}
