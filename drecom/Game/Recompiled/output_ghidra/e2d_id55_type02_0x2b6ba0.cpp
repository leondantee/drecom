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

// Function: e2d_id55_type02
// Address: 0x2b6ba0 - 0x2b6c08
void e2d_id55_type02_0x2b6ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_type02_0x2b6ba0");
#endif

    switch (ctx->pc) {
        case 0x2b6bb8u: goto label_2b6bb8;
        case 0x2b6bc0u: goto label_2b6bc0;
        default: break;
    }

    ctx->pc = 0x2b6ba0u;

    // 0x2b6ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6ba4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6ba8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b6bac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2b6bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6bb0: 0xc0ada10  jal         func_2B6840
    ctx->pc = 0x2B6BB0u;
    SET_GPR_U32(ctx, 31, 0x2B6BB8u);
    ctx->pc = 0x2B6840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6840u, 0x2B6BB0u, 0x2B6BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BB8u;
label_2b6bb8:
    // 0x2b6bb8: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B6BB8u;
    SET_GPR_U32(ctx, 31, 0x2B6BC0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B6BB8u, 0x2B6BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6BC0u;
label_2b6bc0:
    // 0x2b6bc0: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2b6bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2b6bc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b6bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6bc8: 0x0  nop
    ctx->pc = 0x2b6bc8u;
    // NOP
    // 0x2b6bcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b6bccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6bd0: 0x3c0343af  lui         $v1, 0x43AF
    ctx->pc = 0x2b6bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17327 << 16));
    // 0x2b6bd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6bd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6bd8: 0x0  nop
    ctx->pc = 0x2b6bd8u;
    // NOP
    // 0x2b6bdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b6bdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b6be0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6be4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b6be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b6be8: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2b6be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2b6bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6bf0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6bf4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2b6bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2b6bf8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b6bf8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6bfc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b6bfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b6c00: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6C08u;
}
