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

// Function: caseD_1
// Address: 0x26cadc - 0x26cba0
void caseD_1_0x26cadc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x26cadc");
#endif

    switch (ctx->pc) {
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb5cu: goto label_26cb5c;
        default: break;
    }

    ctx->pc = 0x26cadcu;

    // 0x26cadc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x26cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x26cae0: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x26cae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x26cae4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x26cae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26cae8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26caec: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26caf0: 0xc44c1b50  lwc1        $f12, 0x1B50($v0)
    ctx->pc = 0x26caf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26caf4: 0xc46d1b58  lwc1        $f13, 0x1B58($v1)
    ctx->pc = 0x26caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26caf8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x26CAF8u;
    SET_GPR_U32(ctx, 31, 0x26CB00u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x26CAF8u, 0x26CB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB00u;
label_26cb00:
    // 0x26cb00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb04: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x26cb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x26cb08: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26cb10: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26CB10u;
    SET_GPR_U32(ctx, 31, 0x26CB18u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26CB10u, 0x26CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB18u;
label_26cb18:
    // 0x26cb18: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cb18u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26cb1c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb20: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26CB20u;
    SET_GPR_U32(ctx, 31, 0x26CB28u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26CB20u, 0x26CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB28u;
label_26cb28:
    // 0x26cb28: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cb28u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26cb2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26cb2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26cb30: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26cb34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26cb38: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26CB38u;
    SET_GPR_U32(ctx, 31, 0x26CB40u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26CB38u, 0x26CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB40u;
label_26cb40:
    // 0x26cb40: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x26cb40u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26cb44: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb48: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cb48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb4c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x26cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x26cb50: 0x246512c0  addiu       $a1, $v1, 0x12C0
    ctx->pc = 0x26cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x26cb54: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26CB54u;
    SET_GPR_U32(ctx, 31, 0x26CB5Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26CB54u, 0x26CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB5Cu;
label_26cb5c:
    // 0x26cb5c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x26cb60: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26cb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x26cb64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26cb64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cb68: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cb6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26cb6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cb70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb74: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x26cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cb78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26cb78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26cb7c: 0x0  nop
    ctx->pc = 0x26cb7cu;
    // NOP
    // 0x26cb80: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26CB80u;
    {
        const bool branch_taken_0x26cb80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cb80) {
            ctx->pc = 0x26CBA0u;
            return;
        }
    }
    ctx->pc = 0x26CB88u;
    // 0x26cb88: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x26cb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
    // 0x26cb8c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x26cb8cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26cb90: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x26cb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26cb94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26cb94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26cb98: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26cb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x26cb9c: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x26cb9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    ctx->pc = 0x26cba0u;
}
