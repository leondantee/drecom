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

// Function: Change_Camera_Inter_CY
// Address: 0x159ec0 - 0x159ff0
void Change_Camera_Inter_CY_0x159ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Inter_CY_0x159ec0");
#endif

    switch (ctx->pc) {
        case 0x159f54u: goto label_159f54;
        case 0x159f70u: goto label_159f70;
        case 0x159f84u: goto label_159f84;
        case 0x159fc0u: goto label_159fc0;
        case 0x159fccu: goto label_159fcc;
        case 0x159fd8u: goto label_159fd8;
        default: break;
    }

    ctx->pc = 0x159ec0u;

    // 0x159ec0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159ec4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159ec8: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x159ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x159ecc: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x159eccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x159ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ed4: 0x0  nop
    ctx->pc = 0x159ed4u;
    // NOP
    // 0x159ed8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x159ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x159edc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ee4: 0x0  nop
    ctx->pc = 0x159ee4u;
    // NOP
    // 0x159ee8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x159ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ef0: 0x0  nop
    ctx->pc = 0x159ef0u;
    // NOP
    // 0x159ef4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x159ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159ef8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159efc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f00: 0x0  nop
    ctx->pc = 0x159f00u;
    // NOP
    // 0x159f04: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x159f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x159f08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f0c: 0x0  nop
    ctx->pc = 0x159f0cu;
    // NOP
    // 0x159f10: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159f14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f18: 0x0  nop
    ctx->pc = 0x159f18u;
    // NOP
    // 0x159f1c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159f20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159f20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f24: 0x0  nop
    ctx->pc = 0x159f24u;
    // NOP
    // 0x159f28: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159f2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159f30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159f30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f34: 0x0  nop
    ctx->pc = 0x159f34u;
    // NOP
    // 0x159f38: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x159f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x159f3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159f40: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x159f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159f44: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159f44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159f48: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x159f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159f4c: 0xc056858  jal         func_15A160
    ctx->pc = 0x159F4Cu;
    SET_GPR_U32(ctx, 31, 0x159F54u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x159F4Cu, 0x159F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159F54u;
label_159f54:
    // 0x159f54: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159f58: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159f5c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x159f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x159f60: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159f64: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x159f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159f68: 0xc040c00  jal         func_103000
    ctx->pc = 0x159F68u;
    SET_GPR_U32(ctx, 31, 0x159F70u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x159F70u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159F70u) { return; }
    ctx->pc = 0x159F70u;
label_159f70:
    // 0x159f70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159f74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159f78: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159f7c: 0xc040c44  jal         func_103110
    ctx->pc = 0x159F7Cu;
    SET_GPR_U32(ctx, 31, 0x159F84u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x159F84u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159F84u) { return; }
    ctx->pc = 0x159F84u;
label_159f84:
    // 0x159f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f88: 0x0  nop
    ctx->pc = 0x159f88u;
    // NOP
    // 0x159f8c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159f94: 0x0  nop
    ctx->pc = 0x159f94u;
    // NOP
    // 0x159f98: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159f9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159fa0: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x159fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159fa4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159fa8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159fac: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x159facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x159fb0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159fb4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159fb8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159FB8u;
    SET_GPR_U32(ctx, 31, 0x159FC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159FC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159FC0u) { return; }
    ctx->pc = 0x159FC0u;
label_159fc0:
    // 0x159fc0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159fc4: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159FC4u;
    SET_GPR_U32(ctx, 31, 0x159FCCu);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159FC4u, 0x159FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FCCu;
label_159fcc:
    // 0x159fcc: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159fd0: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x159FD0u;
    SET_GPR_U32(ctx, 31, 0x159FD8u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x159FD0u, 0x159FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159FD8u;
label_159fd8:
    // 0x159fd8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159fdc: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x159fe0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159fe0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159fe4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x159fe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159fe8: 0x3e00008  jr          $ra
    ctx->pc = 0x159FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159FF0u;
}
