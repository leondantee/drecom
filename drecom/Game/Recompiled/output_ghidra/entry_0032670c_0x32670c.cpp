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

// Function: entry_0032670c
// Address: 0x32670c - 0x32675c
void entry_0032670c_0x32670c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032670c_0x32670c");
#endif

    switch (ctx->pc) {
        case 0x32673cu: goto label_32673c;
        default: break;
    }

    ctx->pc = 0x32670cu;

    // 0x32670c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x32670cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326710: 0x90620b1d  lbu         $v0, 0xB1D($v1)
    ctx->pc = 0x326710u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2845)));
    // 0x326714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x326714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x326718: 0xa0620b1d  sb          $v0, 0xB1D($v1)
    ctx->pc = 0x326718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2845), (uint8_t)GPR_U32(ctx, 2));
    // 0x32671c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x32671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326720: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x326720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326724: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x326724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x326728: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x326728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x32672c: 0x246502d0  addiu       $a1, $v1, 0x2D0
    ctx->pc = 0x32672cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x326730: 0x244602e0  addiu       $a2, $v0, 0x2E0
    ctx->pc = 0x326730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x326734: 0xc040c86  jal         func_103218
    ctx->pc = 0x326734u;
    SET_GPR_U32(ctx, 31, 0x32673Cu);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x32673Cu;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32673Cu) { return; }
    ctx->pc = 0x32673Cu;
label_32673c:
    // 0x32673c: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x32673cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326740: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x326740u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326744: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x326744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x326748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32674c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x32674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326750: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x326750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x326754: 0x3e00008  jr          $ra
    ctx->pc = 0x326754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32675Cu;
}
