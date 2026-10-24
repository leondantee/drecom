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

// Function: My_rot_dir
// Address: 0x325a50 - 0x325a9c
void My_rot_dir_0x325a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("My_rot_dir_0x325a50");
#endif

    switch (ctx->pc) {
        case 0x325a78u: goto label_325a78;
        case 0x325a8cu: goto label_325a8c;
        default: break;
    }

    ctx->pc = 0x325a50u;

    // 0x325a50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x325a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x325a54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x325a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x325a58: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x325a58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x325a5c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x325a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x325a60: 0xafa60068  sw          $a2, 0x68($sp)
    ctx->pc = 0x325a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 6));
    // 0x325a64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x325a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325a68: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x325a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325a6c: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x325a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x325a70: 0xc0678a4  jal         func_19E290
    ctx->pc = 0x325A70u;
    SET_GPR_U32(ctx, 31, 0x325A78u);
    ctx->pc = 0x19E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E290u, 0x325A70u, 0x325A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325A78u;
label_325a78:
    // 0x325a78: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325a7c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x325a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x325a80: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x325a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x325a84: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x325A84u;
    SET_GPR_U32(ctx, 31, 0x325A8Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x325A8Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x325A8Cu) { return; }
    ctx->pc = 0x325A8Cu;
label_325a8c:
    // 0x325a8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x325a8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325a90: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x325a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x325a94: 0x3e00008  jr          $ra
    ctx->pc = 0x325A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325A9Cu;
}
