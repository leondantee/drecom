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

// Function: caseD_0
// Address: 0x148f04 - 0x148fd8
void caseD_0_0x148f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x148f04");
#endif

    switch (ctx->pc) {
        case 0x148f88u: goto label_148f88;
        case 0x148f98u: goto label_148f98;
        case 0x148fbcu: goto label_148fbc;
        default: break;
    }

    ctx->pc = 0x148f04u;

    // 0x148f04: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f08: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x148f08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x148f0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f10: 0xc4411b30  lwc1        $f1, 0x1B30($v0)
    ctx->pc = 0x148f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x148f14: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f18: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x148f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148f1c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x148f1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x148f20: 0x3c02447c  lui         $v0, 0x447C
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17532 << 16));
    // 0x148f24: 0x3442208b  ori         $v0, $v0, 0x208B
    ctx->pc = 0x148f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8331);
    // 0x148f28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f2c: 0x0  nop
    ctx->pc = 0x148f2cu;
    // NOP
    // 0x148f30: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x148f30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x148f34: 0x3c02433e  lui         $v0, 0x433E
    ctx->pc = 0x148f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17214 << 16));
    // 0x148f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x148f3c: 0x0  nop
    ctx->pc = 0x148f3cu;
    // NOP
    // 0x148f40: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x148f40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x148f44: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f48: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x148f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x148f4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f50: 0x3c024198  lui         $v0, 0x4198
    ctx->pc = 0x148f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16792 << 16));
    // 0x148f54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x148f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x148f58: 0xc4601280  lwc1        $f0, 0x1280($v1)
    ctx->pc = 0x148f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148f5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x148f5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x148f60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f64: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x148f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x148f68: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x148f74: 0x24060a21  addiu       $a2, $zero, 0xA21
    ctx->pc = 0x148f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2593));
    // 0x148f78: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x148f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x148f7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x148f80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x148F80u;
    SET_GPR_U32(ctx, 31, 0x148F88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148F80u, 0x148F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F88u;
label_148f88:
    // 0x148f88: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f8c: 0x24441b40  addiu       $a0, $v0, 0x1B40
    ctx->pc = 0x148f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6976));
    // 0x148f90: 0xc058b98  jal         func_162E60
    ctx->pc = 0x148F90u;
    SET_GPR_U32(ctx, 31, 0x148F98u);
    ctx->pc = 0x162E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162E60u, 0x148F90u, 0x148F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F98u;
label_148f98:
    // 0x148f98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x148f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148f9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148fa0: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x148fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x148fa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x148fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x148fa8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x148fa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x148fac: 0x24841b40  addiu       $a0, $a0, 0x1B40
    ctx->pc = 0x148facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
    // 0x148fb0: 0x24651b40  addiu       $a1, $v1, 0x1B40
    ctx->pc = 0x148fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 6976));
    // 0x148fb4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x148FB4u;
    SET_GPR_U32(ctx, 31, 0x148FBCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x148FBCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x148FBCu) { return; }
    ctx->pc = 0x148FBCu;
label_148fbc:
    // 0x148fbc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x148fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x148fc0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x148fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148fc4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x148fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x148fc8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x148fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x148fcc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148fccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x148fd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x148fd4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x148fd8u;
}
