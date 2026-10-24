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

// Function: e2d_id55_type01
// Address: 0x2b6b30 - 0x2b6b98
void e2d_id55_type01_0x2b6b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_type01_0x2b6b30");
#endif

    switch (ctx->pc) {
        case 0x2b6b48u: goto label_2b6b48;
        case 0x2b6b50u: goto label_2b6b50;
        default: break;
    }

    ctx->pc = 0x2b6b30u;

    // 0x2b6b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6b34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6b38: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b6b3c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6b40: 0xc0ada10  jal         func_2B6840
    ctx->pc = 0x2B6B40u;
    SET_GPR_U32(ctx, 31, 0x2B6B48u);
    ctx->pc = 0x2B6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6840u, 0x2B6B40u, 0x2B6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B48u;
label_2b6b48:
    // 0x2b6b48: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B6B48u;
    SET_GPR_U32(ctx, 31, 0x2B6B50u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B6B48u, 0x2B6B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6B50u;
label_2b6b50:
    // 0x2b6b50: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6b54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6b58: 0x0  nop
    ctx->pc = 0x2b6b58u;
    // NOP
    // 0x2b6b5c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6b5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6b60: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b6b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b6b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6b68: 0x0  nop
    ctx->pc = 0x2b6b68u;
    // NOP
    // 0x2b6b6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6b6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6b70: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6b74: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6b78: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6b80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6b84: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b6b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b6b88: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b6b88u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6b8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6b90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6B98u;
}
