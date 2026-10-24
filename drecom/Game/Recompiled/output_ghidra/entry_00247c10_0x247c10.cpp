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

// Function: entry_00247c10
// Address: 0x247c10 - 0x247cd4
void entry_00247c10_0x247c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247c10_0x247c10");
#endif

    switch (ctx->pc) {
        case 0x247c18u: goto label_247c18;
        default: break;
    }

    ctx->pc = 0x247c10u;

    // 0x247c10: 0xc067694  jal         func_19DA50
    ctx->pc = 0x247C10u;
    SET_GPR_U32(ctx, 31, 0x247C18u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x247C10u, 0x247C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247C18u;
label_247c18:
    // 0x247c18: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x247c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247c1c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x247c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x247c20: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x247c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x247c24: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x247c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x247c28: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x247c28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x247c2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c34: 0xa464005e  sh          $a0, 0x5E($v1)
    ctx->pc = 0x247c34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 94), (uint16_t)GPR_U32(ctx, 4));
    // 0x247c38: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c40: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c44: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c48: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x247c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c50: 0x0  nop
    ctx->pc = 0x247c50u;
    // NOP
    // 0x247c54: 0x4501003d  bc1t        . + 4 + (0x3D << 2)
    ctx->pc = 0x247C54u;
    {
        const bool branch_taken_0x247c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c54) {
            ctx->pc = 0x247D4Cu;
            return;
        }
    }
    ctx->pc = 0x247C5Cu;
    // 0x247c5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c64: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c6c: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c70: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247c70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247c74: 0x0  nop
    ctx->pc = 0x247c74u;
    // NOP
    // 0x247c78: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x247C78u;
    {
        const bool branch_taken_0x247c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x247c78) {
            ctx->pc = 0x247CD4u;
            return;
        }
    }
    ctx->pc = 0x247C80u;
    // 0x247c80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c84: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247c88: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x247c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247c8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247c90: 0xc4600184  lwc1        $f0, 0x184($v1)
    ctx->pc = 0x247c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247c94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x247c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247c98: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x247c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x247c9c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247ca0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247ca4: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x247ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247ca8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cac: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x247cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247cb0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x247cb0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247cb4: 0x0  nop
    ctx->pc = 0x247cb4u;
    // NOP
    // 0x247cb8: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x247CB8u;
    {
        const bool branch_taken_0x247cb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x247cb8) {
            ctx->pc = 0x247CD4u;
            return;
        }
    }
    ctx->pc = 0x247CC0u;
    // 0x247cc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x247cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cc4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x247cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x247cc8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x247cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247ccc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x247cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x247cd0: 0xe4800184  swc1        $f0, 0x184($a0)
    ctx->pc = 0x247cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    ctx->pc = 0x247cd4u;
}
