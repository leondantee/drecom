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

// Function: entry_001492a4
// Address: 0x1492a4 - 0x149334
void entry_001492a4_0x1492a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001492a4_0x1492a4");
#endif

    switch (ctx->pc) {
        case 0x1492b0u: goto label_1492b0;
        case 0x1492e4u: goto label_1492e4;
        default: break;
    }

    ctx->pc = 0x1492a4u;

    // 0x1492a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1492a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1492a8: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1492A8u;
    SET_GPR_U32(ctx, 31, 0x1492B0u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1492A8u, 0x1492B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492B0u;
label_1492b0:
    // 0x1492b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1492b4: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x1492b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1492b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1492b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1492bc: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1492bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1492c0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1492c0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1492c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1492c8: 0xc4401b30  lwc1        $f0, 0x1B30($v0)
    ctx->pc = 0x1492c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1492cc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1492ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1492d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1492d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1492d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1492d8: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1492d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1492dc: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1492DCu;
    SET_GPR_U32(ctx, 31, 0x1492E4u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1492DCu, 0x1492E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1492E4u;
label_1492e4:
    // 0x1492e4: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1492e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1492e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1492e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1492ec: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x1492ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1492f0: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1492f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1492f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1492f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1492f8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1492f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1492fc: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1492fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149300: 0x3c02c37a  lui         $v0, 0xC37A
    ctx->pc = 0x149300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50042 << 16));
    // 0x149304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149308: 0x0  nop
    ctx->pc = 0x149308u;
    // NOP
    // 0x14930c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x14930cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149310: 0x0  nop
    ctx->pc = 0x149310u;
    // NOP
    // 0x149314: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x149314u;
    {
        const bool branch_taken_0x149314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x149314) {
            ctx->pc = 0x149334u;
            return;
        }
    }
    ctx->pc = 0x14931Cu;
    // 0x14931c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149320: 0xc4411b50  lwc1        $f1, 0x1B50($v0)
    ctx->pc = 0x149320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x149324: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x149324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x149328: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x149328u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x14932c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x149330: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x149330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x149334u;
}
