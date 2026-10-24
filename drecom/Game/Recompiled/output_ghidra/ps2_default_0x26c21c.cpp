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

// Function: default
// Address: 0x26c21c - 0x26c2bc
void ps2_default_0x26c21c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2_default_0x26c21c");
#endif

    switch (ctx->pc) {
        case 0x26c224u: goto label_26c224;
        case 0x26c238u: goto label_26c238;
        case 0x26c250u: goto label_26c250;
        case 0x26c264u: goto label_26c264;
        case 0x26c278u: goto label_26c278;
        default: break;
    }

    ctx->pc = 0x26c21cu;

    // 0x26c21c: 0xc09b674  jal         func_26D9D0
    ctx->pc = 0x26C21Cu;
    SET_GPR_U32(ctx, 31, 0x26C224u);
    ctx->pc = 0x26D9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D9D0u, 0x26C21Cu, 0x26C224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C224u;
label_26c224:
    // 0x26c224: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26c224u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c228: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c22c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26c22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26c230: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26C230u;
    SET_GPR_U32(ctx, 31, 0x26C238u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26C230u, 0x26C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C238u;
label_26c238:
    // 0x26c238: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26c238u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26c23c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c240: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c244: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x26c244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c248: 0xc05cd78  jal         func_1735E0
    ctx->pc = 0x26C248u;
    SET_GPR_U32(ctx, 31, 0x26C250u);
    ctx->pc = 0x1735E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735E0u, 0x26C248u, 0x26C250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C250u;
label_26c250:
    // 0x26c250: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26c250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26c254: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c258: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26c258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26c25c: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26C25Cu;
    SET_GPR_U32(ctx, 31, 0x26C264u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26C25Cu, 0x26C264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C264u;
label_26c264:
    // 0x26c264: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c268: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26c26c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x26c26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26c270: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26C270u;
    SET_GPR_U32(ctx, 31, 0x26C278u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26C270u, 0x26C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C278u;
label_26c278:
    // 0x26c278: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26c27c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26c280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26c280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c284: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c288: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26c288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26c28c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c290: 0xc4800124  lwc1        $f0, 0x124($a0)
    ctx->pc = 0x26c290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c294: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26c294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26c298: 0x0  nop
    ctx->pc = 0x26c298u;
    // NOP
    // 0x26c29c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26C29Cu;
    {
        const bool branch_taken_0x26c29c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c29c) {
            ctx->pc = 0x26C2BCu;
            return;
        }
    }
    ctx->pc = 0x26C2A4u;
    // 0x26c2a4: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26c2a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26c2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26c2ac: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26c2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26c2b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26c2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26c2b4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26c2b8: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26c2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x26c2bcu;
}
