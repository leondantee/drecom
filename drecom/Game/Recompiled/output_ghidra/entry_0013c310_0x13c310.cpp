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

// Function: entry_0013c310
// Address: 0x13c310 - 0x13c344
void entry_0013c310_0x13c310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c310_0x13c310");
#endif

    ctx->pc = 0x13c310u;

label_13c310:
    // 0x13c310: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x13c310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13c314: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13c314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13c318: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x13c318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c31c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x13c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x13c320: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x13c320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x13c324: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x13c324u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13c328: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13C328u;
    {
        const bool branch_taken_0x13c328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c328) {
            ctx->pc = 0x13C310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c310;
        }
    }
    ctx->pc = 0x13C330u;
    // 0x13c330: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c330u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c334: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c338: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13c338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c33c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C344u;
}
