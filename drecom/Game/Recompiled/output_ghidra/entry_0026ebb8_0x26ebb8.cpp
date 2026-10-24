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

// Function: entry_0026ebb8
// Address: 0x26ebb8 - 0x26ec44
void entry_0026ebb8_0x26ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026ebb8_0x26ebb8");
#endif

    switch (ctx->pc) {
        case 0x26ebc8u: goto label_26ebc8;
        case 0x26ebd4u: goto label_26ebd4;
        case 0x26ebe8u: goto label_26ebe8;
        case 0x26ec00u: goto label_26ec00;
        default: break;
    }

    ctx->pc = 0x26ebb8u;

    // 0x26ebb8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebbc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26ebc0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x26EBC0u;
    SET_GPR_U32(ctx, 31, 0x26EBC8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x26EBC0u, 0x26EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBC8u;
label_26ebc8:
    // 0x26ebc8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebcc: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x26EBCCu;
    SET_GPR_U32(ctx, 31, 0x26EBD4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x26EBCCu, 0x26EBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBD4u;
label_26ebd4:
    // 0x26ebd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26ebd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26ebd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x26ebdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26ebe0: 0xc0574f4  jal         func_15D3D0
    ctx->pc = 0x26EBE0u;
    SET_GPR_U32(ctx, 31, 0x26EBE8u);
    ctx->pc = 0x15D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D3D0u, 0x26EBE0u, 0x26EBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EBE8u;
label_26ebe8:
    // 0x26ebe8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x26ebe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ebf0: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x26ebf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x26ebf4: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x26ebf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x26ebf8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x26EBF8u;
    SET_GPR_U32(ctx, 31, 0x26EC00u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x26EBF8u, 0x26EC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EC00u;
label_26ec00:
    // 0x26ec00: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x26ec00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ec04: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ec08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ec0c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26ec10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ec14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x26ec18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26ec1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26ec20: 0x0  nop
    ctx->pc = 0x26ec20u;
    // NOP
    // 0x26ec24: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x26EC24u;
    {
        const bool branch_taken_0x26ec24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26ec24) {
            ctx->pc = 0x26EC44u;
            return;
        }
    }
    ctx->pc = 0x26EC2Cu;
    // 0x26ec2c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x26ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x26ec30: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26ec30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ec34: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26ec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ec38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x26ec38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26ec3c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26ec40: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x26ec40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    ctx->pc = 0x26ec44u;
}
