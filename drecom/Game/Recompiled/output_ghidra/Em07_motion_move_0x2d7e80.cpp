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

// Function: Em07_motion_move
// Address: 0x2d7e80 - 0x2d7f50
void Em07_motion_move_0x2d7e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em07_motion_move_0x2d7e80");
#endif

    switch (ctx->pc) {
        case 0x2d7ea8u: goto label_2d7ea8;
        case 0x2d7ee4u: goto label_2d7ee4;
        case 0x2d7f00u: goto label_2d7f00;
        case 0x2d7f14u: goto label_2d7f14;
        case 0x2d7f30u: goto label_2d7f30;
        case 0x2d7f3cu: goto label_2d7f3c;
        default: break;
    }

    ctx->pc = 0x2d7e80u;

    // 0x2d7e80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d7e84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2d7e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2d7e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d7e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d7e8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x2d7e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x2d7e90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7e94: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d7e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d7e98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2d7e98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7e9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7ea0: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x2D7EA0u;
    SET_GPR_U32(ctx, 31, 0x2D7EA8u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x2D7EA0u, 0x2D7EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7EA8u;
label_2d7ea8:
    // 0x2d7ea8: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x2d7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2d7eac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d7eacu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7eb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7eb4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x2d7eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2d7eb8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d7eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d7ebc: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x2d7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2d7ec0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d7ec0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7ec4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7ec8: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2d7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d7ecc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d7eccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d7ed0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7ed4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x2d7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7ed8: 0x8e050130  lw          $a1, 0x130($s0)
    ctx->pc = 0x2d7ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d7edc: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D7EDCu;
    SET_GPR_U32(ctx, 31, 0x2D7EE4u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D7EE4u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D7EE4u) { return; }
    ctx->pc = 0x2D7EE4u;
label_2d7ee4:
    // 0x2d7ee4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7ee8: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x2d7ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d7eec: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2d7eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2d7ef0: 0x24640040  addiu       $a0, $v1, 0x40
    ctx->pc = 0x2d7ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x2d7ef4: 0x24450800  addiu       $a1, $v0, 0x800
    ctx->pc = 0x2d7ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x2d7ef8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D7EF8u;
    SET_GPR_U32(ctx, 31, 0x2D7F00u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D7F00u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D7F00u) { return; }
    ctx->pc = 0x2D7F00u;
label_2d7f00:
    // 0x2d7f00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7f04: 0x8c4402d0  lw          $a0, 0x2D0($v0)
    ctx->pc = 0x2d7f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d7f08: 0x8e0502d0  lw          $a1, 0x2D0($s0)
    ctx->pc = 0x2d7f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2d7f0c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D7F0Cu;
    SET_GPR_U32(ctx, 31, 0x2D7F14u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D7F14u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D7F14u) { return; }
    ctx->pc = 0x2D7F14u;
label_2d7f14:
    // 0x2d7f14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7f18: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x2d7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d7f1c: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x2d7f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x2d7f20: 0x24640190  addiu       $a0, $v1, 0x190
    ctx->pc = 0x2d7f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x2d7f24: 0x24453200  addiu       $a1, $v0, 0x3200
    ctx->pc = 0x2d7f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12800));
    // 0x2d7f28: 0xc040ca2  jal         func_103288
    ctx->pc = 0x2D7F28u;
    SET_GPR_U32(ctx, 31, 0x2D7F30u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x2D7F30u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2D7F30u) { return; }
    ctx->pc = 0x2D7F30u;
label_2d7f30:
    // 0x2d7f30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7f34: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2D7F34u;
    SET_GPR_U32(ctx, 31, 0x2D7F3Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2D7F34u, 0x2D7F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7F3Cu;
label_2d7f3c:
    // 0x2d7f3c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2d7f3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7f40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d7f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7f44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d7f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d7f48: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7F50u;
}
