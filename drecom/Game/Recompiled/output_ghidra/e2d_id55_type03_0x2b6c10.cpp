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

// Function: e2d_id55_type03
// Address: 0x2b6c10 - 0x2b6c78
void e2d_id55_type03_0x2b6c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_type03_0x2b6c10");
#endif

    switch (ctx->pc) {
        case 0x2b6c28u: goto label_2b6c28;
        case 0x2b6c30u: goto label_2b6c30;
        default: break;
    }

    ctx->pc = 0x2b6c10u;

    // 0x2b6c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6c14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6c18: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b6c1c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b6c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6c20: 0xc0ada10  jal         func_2B6840
    ctx->pc = 0x2B6C20u;
    SET_GPR_U32(ctx, 31, 0x2B6C28u);
    ctx->pc = 0x2B6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6840u, 0x2B6C20u, 0x2B6C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C28u;
label_2b6c28:
    // 0x2b6c28: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B6C28u;
    SET_GPR_U32(ctx, 31, 0x2B6C30u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B6C28u, 0x2B6C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C30u;
label_2b6c30:
    // 0x2b6c30: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6c34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6c34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6c38: 0x0  nop
    ctx->pc = 0x2b6c38u;
    // NOP
    // 0x2b6c3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6c40: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b6c44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6c44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6c48: 0x0  nop
    ctx->pc = 0x2b6c48u;
    // NOP
    // 0x2b6c4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6c4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6c50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6c54: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6c58: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6c60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6c64: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b6c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b6c68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b6c68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6c6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6c6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6C78u;
}
