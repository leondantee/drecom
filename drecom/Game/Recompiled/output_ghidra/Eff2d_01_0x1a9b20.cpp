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

// Function: Eff2d_01
// Address: 0x1a9b20 - 0x1a9b7c
void Eff2d_01_0x1a9b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Eff2d_01_0x1a9b20");
#endif

    switch (ctx->pc) {
        case 0x1a9b20u: goto label_1a9b20;
        case 0x1a9b24u: goto label_1a9b24;
        case 0x1a9b28u: goto label_1a9b28;
        case 0x1a9b2cu: goto label_1a9b2c;
        case 0x1a9b30u: goto label_1a9b30;
        case 0x1a9b34u: goto label_1a9b34;
        case 0x1a9b38u: goto label_1a9b38;
        case 0x1a9b3cu: goto label_1a9b3c;
        case 0x1a9b40u: goto label_1a9b40;
        case 0x1a9b44u: goto label_1a9b44;
        case 0x1a9b48u: goto label_1a9b48;
        case 0x1a9b4cu: goto label_1a9b4c;
        case 0x1a9b50u: goto label_1a9b50;
        case 0x1a9b54u: goto label_1a9b54;
        case 0x1a9b58u: goto label_1a9b58;
        case 0x1a9b5cu: goto label_1a9b5c;
        case 0x1a9b60u: goto label_1a9b60;
        case 0x1a9b64u: goto label_1a9b64;
        case 0x1a9b68u: goto label_1a9b68;
        case 0x1a9b6cu: goto label_1a9b6c;
        case 0x1a9b70u: goto label_1a9b70;
        case 0x1a9b74u: goto label_1a9b74;
        case 0x1a9b78u: goto label_1a9b78;
        default: break;
    }

    ctx->pc = 0x1a9b20u;

label_1a9b20:
    // 0x1a9b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a9b24:
    // 0x1a9b24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1a9b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_1a9b28:
    // 0x1a9b28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1a9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1a9b2c:
    // 0x1a9b2c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x1a9b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9b30:
    // 0x1a9b30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1a9b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9b34:
    // 0x1a9b34: 0x8c420128  lw          $v0, 0x128($v0)
    ctx->pc = 0x1a9b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 296)));
label_1a9b38:
    // 0x1a9b38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a9b3c:
    // 0x1a9b3c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1a9b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1a9b40:
    // 0x1a9b40: 0x24428158  addiu       $v0, $v0, -0x7EA8
    ctx->pc = 0x1a9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934872));
label_1a9b44:
    // 0x1a9b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a9b48:
    // 0x1a9b48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a9b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a9b4c:
    // 0x1a9b4c: 0x40f809  jalr        $v0
label_1a9b50:
    if (ctx->pc == 0x1A9B50u) {
        ctx->pc = 0x1A9B54u;
        goto label_1a9b54;
    }
    ctx->pc = 0x1A9B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9B54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B4Cu, 0x1A9B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9B54u;
label_1a9b54:
    // 0x1a9b54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9b58:
    // 0x1a9b58: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1a9b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a9b5c:
    // 0x1a9b5c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a9b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9b60:
    // 0x1a9b60: 0xc460010c  lwc1        $f0, 0x10C($v1)
    ctx->pc = 0x1a9b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a9b64:
    // 0x1a9b64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a9b68:
    // 0x1a9b68: 0xe460010c  swc1        $f0, 0x10C($v1)
    ctx->pc = 0x1a9b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 268), bits); }
label_1a9b6c:
    // 0x1a9b6c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1a9b6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9b70:
    // 0x1a9b70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a9b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a9b74:
    // 0x1a9b74: 0x3e00008  jr          $ra
label_1a9b78:
    if (ctx->pc == 0x1A9B78u) {
        ctx->pc = 0x1A9B7Cu;
        goto label_fallthrough_0x1a9b74;
    }
    ctx->pc = 0x1A9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a9b74:
    ctx->pc = 0x1A9B7Cu;
}
