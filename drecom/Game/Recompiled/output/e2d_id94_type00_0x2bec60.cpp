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

// Function: e2d_id94_type00
// Address: 0x2bec60 - 0x2beccc
void e2d_id94_type00_0x2bec60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id94_type00_0x2bec60");
#endif

    switch (ctx->pc) {
        case 0x2bec74u: goto label_2bec74;
        default: break;
    }

    ctx->pc = 0x2bec60u;

    // 0x2bec60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bec60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bec64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bec64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bec68: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bec68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bec6c: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x2BEC6Cu;
    SET_GPR_U32(ctx, 31, 0x2BEC74u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x2BEC6Cu, 0x2BEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEC74u;
label_2bec74:
    // 0x2bec74: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bec74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bec78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bec78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bec7c: 0x0  nop
    ctx->pc = 0x2bec7cu;
    // NOP
    // 0x2bec80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bec80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bec84: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2bec84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2bec88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bec88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bec8c: 0x0  nop
    ctx->pc = 0x2bec8cu;
    // NOP
    // 0x2bec90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bec90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bec94: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bec94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bec98: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bec98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bec9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2bec9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2beca0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2beca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2beca4: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2beca4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2beca8: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x2beca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x2becac: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2becacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2becb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2becb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2becb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2becb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2becb8: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2becb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2becbc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2becbcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2becc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2becc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2becc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BECCCu;
}
