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

// Function: Change_Camera_Pos_CX
// Address: 0x159a00 - 0x159b30
void Change_Camera_Pos_CX_0x159a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Pos_CX_0x159a00");
#endif

    switch (ctx->pc) {
        case 0x159a94u: goto label_159a94;
        case 0x159ab0u: goto label_159ab0;
        case 0x159ac4u: goto label_159ac4;
        case 0x159b00u: goto label_159b00;
        case 0x159b0cu: goto label_159b0c;
        case 0x159b18u: goto label_159b18;
        default: break;
    }

    ctx->pc = 0x159a00u;

    // 0x159a00: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159a04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159a08: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x159a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x159a0c: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x159a0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x159a10: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a18: 0x0  nop
    ctx->pc = 0x159a18u;
    // NOP
    // 0x159a1c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x159a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x159a20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a24: 0x0  nop
    ctx->pc = 0x159a24u;
    // NOP
    // 0x159a28: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x159a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159a2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159a2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a30: 0x0  nop
    ctx->pc = 0x159a30u;
    // NOP
    // 0x159a34: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x159a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159a38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159a3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159a3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a40: 0x0  nop
    ctx->pc = 0x159a40u;
    // NOP
    // 0x159a44: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x159a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x159a48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159a48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a4c: 0x0  nop
    ctx->pc = 0x159a4cu;
    // NOP
    // 0x159a50: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159a54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159a54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a58: 0x0  nop
    ctx->pc = 0x159a58u;
    // NOP
    // 0x159a5c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159a60: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159a64: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x159a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159a68: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159a74: 0x0  nop
    ctx->pc = 0x159a74u;
    // NOP
    // 0x159a78: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x159a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x159a7c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159a80: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x159a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159a84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159a88: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x159a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159a8c: 0xc056858  jal         func_15A160
    ctx->pc = 0x159A8Cu;
    SET_GPR_U32(ctx, 31, 0x159A94u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x159A8Cu, 0x159A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A94u;
label_159a94:
    // 0x159a94: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159a98: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159a9c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x159a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x159aa0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159aa4: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x159aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159aa8: 0xc040c00  jal         func_103000
    ctx->pc = 0x159AA8u;
    SET_GPR_U32(ctx, 31, 0x159AB0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x159AB0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159AB0u) { return; }
    ctx->pc = 0x159AB0u;
label_159ab0:
    // 0x159ab0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159ab4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159ab8: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159abc: 0xc040c44  jal         func_103110
    ctx->pc = 0x159ABCu;
    SET_GPR_U32(ctx, 31, 0x159AC4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x159AC4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159AC4u) { return; }
    ctx->pc = 0x159AC4u;
label_159ac4:
    // 0x159ac4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159ac4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ac8: 0x0  nop
    ctx->pc = 0x159ac8u;
    // NOP
    // 0x159acc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159ad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159ad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ad4: 0x0  nop
    ctx->pc = 0x159ad4u;
    // NOP
    // 0x159ad8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159ad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159adc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ae0: 0x0  nop
    ctx->pc = 0x159ae0u;
    // NOP
    // 0x159ae4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159ae8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159aec: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x159aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x159af0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159af4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159af8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159AF8u;
    SET_GPR_U32(ctx, 31, 0x159B00u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159B00u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159B00u) { return; }
    ctx->pc = 0x159B00u;
label_159b00:
    // 0x159b00: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159b04: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159B04u;
    SET_GPR_U32(ctx, 31, 0x159B0Cu);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159B04u, 0x159B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B0Cu;
label_159b0c:
    // 0x159b0c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159b10: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x159B10u;
    SET_GPR_U32(ctx, 31, 0x159B18u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x159B10u, 0x159B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159B18u;
label_159b18:
    // 0x159b18: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159b1c: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x159b20: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159b20u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159b24: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x159b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159b28: 0x3e00008  jr          $ra
    ctx->pc = 0x159B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159B30u;
}
