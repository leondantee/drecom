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

// Function: sceVu0FMATRIX_Normal
// Address: 0x158d20 - 0x158f14
void sceVu0FMATRIX_Normal_0x158d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceVu0FMATRIX_Normal_0x158d20");
#endif

    switch (ctx->pc) {
        case 0x158d78u: goto label_158d78;
        case 0x158e18u: goto label_158e18;
        default: break;
    }

    ctx->pc = 0x158d20u;

    // 0x158d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x158d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x158d24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x158d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x158d28: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x158d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x158d2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d30: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d34: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x158d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d38: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x158d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158d3c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x158d3cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158d40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d48: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x158d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x158d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158d50: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158d54: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x158d54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158d58: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d5c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d60: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x158d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d64: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x158d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158d68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158d6c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x158d6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158d70: 0xc045630  jal         func_1158C0
    ctx->pc = 0x158D70u;
    SET_GPR_U32(ctx, 31, 0x158D78u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x158D70u, 0x158D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158D78u;
label_158d78:
    // 0x158d78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x158d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x158d7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158d7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158d80: 0x0  nop
    ctx->pc = 0x158d80u;
    // NOP
    // 0x158d84: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158d84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x158d88: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x158d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x158d8c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158d90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x158d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158d94: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158d98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158d98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158d9c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158da0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x158da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x158da4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158da8: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x158da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158dac: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158db0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158db4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x158db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x158db8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158dbc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x158dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158dc0: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158dc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158dc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158dc8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x158dc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x158dcc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158dd0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158dd4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x158dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158dd8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x158dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ddc: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x158ddcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158de0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158de4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158de8: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x158de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158dec: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x158decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158df0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158df0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158df4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x158df4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x158df8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158dfc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x158dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e00: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x158e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e04: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x158e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e08: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158e0c: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x158e0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x158e10: 0xc045630  jal         func_1158C0
    ctx->pc = 0x158E10u;
    SET_GPR_U32(ctx, 31, 0x158E18u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x158E10u, 0x158E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158E18u;
label_158e18:
    // 0x158e18: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x158e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x158e1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x158e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158e20: 0x0  nop
    ctx->pc = 0x158e20u;
    // NOP
    // 0x158e24: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158e24u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x158e28: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x158e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x158e2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x158e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e34: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158e3c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x158e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x158e40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e44: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x158e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e48: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e4c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158e50: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x158e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x158e54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e58: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x158e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e5c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x158e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e60: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158e64: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x158e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x158e68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x158e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e6c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e70: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x158e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e74: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x158e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e78: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x158e78u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158e7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x158e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e80: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e84: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x158e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158e88: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x158e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158e8c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158e8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158e90: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x158e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x158e94: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158e98: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x158e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x158e9c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x158e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158ea0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158ea4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x158ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158ea8: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x158ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158eac: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x158eacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158eb0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x158eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158eb4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158eb8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x158eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158ebc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x158ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158ec4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x158ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x158ec8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158ecc: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x158eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x158ed0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x158ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158ed4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158ed8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x158ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158edc: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x158edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ee0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x158ee0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158ee4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x158ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158ee8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158eec: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x158eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158ef0: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x158ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158ef4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x158ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x158ef8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x158ef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x158efc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x158efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158f00: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x158f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x158f04: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x158f04u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158f08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x158f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x158f0c: 0x3e00008  jr          $ra
    ctx->pc = 0x158F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158F0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158F14u;
}
