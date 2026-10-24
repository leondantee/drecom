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

// Function: Change_Camera_Inter_CX
// Address: 0x159d90 - 0x159ec0
void Change_Camera_Inter_CX_0x159d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Inter_CX_0x159d90");
#endif

    switch (ctx->pc) {
        case 0x159e24u: goto label_159e24;
        case 0x159e40u: goto label_159e40;
        case 0x159e54u: goto label_159e54;
        case 0x159e90u: goto label_159e90;
        case 0x159e9cu: goto label_159e9c;
        case 0x159ea8u: goto label_159ea8;
        default: break;
    }

    ctx->pc = 0x159d90u;

    // 0x159d90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159d94: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159d98: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x159d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x159d9c: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x159d9cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x159da0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159da4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159da8: 0x0  nop
    ctx->pc = 0x159da8u;
    // NOP
    // 0x159dac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x159dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x159db0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159db0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159db4: 0x0  nop
    ctx->pc = 0x159db4u;
    // NOP
    // 0x159db8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x159db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159dc0: 0x0  nop
    ctx->pc = 0x159dc0u;
    // NOP
    // 0x159dc4: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x159dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159dc8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159dcc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159dccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159dd0: 0x0  nop
    ctx->pc = 0x159dd0u;
    // NOP
    // 0x159dd4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x159dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x159dd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159dd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ddc: 0x0  nop
    ctx->pc = 0x159ddcu;
    // NOP
    // 0x159de0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159de8: 0x0  nop
    ctx->pc = 0x159de8u;
    // NOP
    // 0x159dec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159df0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159df4: 0x0  nop
    ctx->pc = 0x159df4u;
    // NOP
    // 0x159df8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159dfc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e04: 0x0  nop
    ctx->pc = 0x159e04u;
    // NOP
    // 0x159e08: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x159e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x159e0c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159e10: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x159e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159e14: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159e18: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x159e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159e1c: 0xc056858  jal         func_15A160
    ctx->pc = 0x159E1Cu;
    SET_GPR_U32(ctx, 31, 0x159E24u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x159E1Cu, 0x159E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E24u;
label_159e24:
    // 0x159e24: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159e28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159e2c: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x159e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x159e30: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159e34: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x159e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159e38: 0xc040c00  jal         func_103000
    ctx->pc = 0x159E38u;
    SET_GPR_U32(ctx, 31, 0x159E40u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x159E40u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159E40u) { return; }
    ctx->pc = 0x159E40u;
label_159e40:
    // 0x159e40: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159e44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159e48: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159e4c: 0xc040c44  jal         func_103110
    ctx->pc = 0x159E4Cu;
    SET_GPR_U32(ctx, 31, 0x159E54u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x159E54u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159E54u) { return; }
    ctx->pc = 0x159E54u;
label_159e54:
    // 0x159e54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e58: 0x0  nop
    ctx->pc = 0x159e58u;
    // NOP
    // 0x159e5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159e60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159e64: 0x0  nop
    ctx->pc = 0x159e64u;
    // NOP
    // 0x159e68: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159e6c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159e70: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x159e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159e74: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159e78: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159e7c: 0x244401a0  addiu       $a0, $v0, 0x1A0
    ctx->pc = 0x159e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
    // 0x159e80: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159e84: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159e88: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159E88u;
    SET_GPR_U32(ctx, 31, 0x159E90u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159E90u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159E90u) { return; }
    ctx->pc = 0x159E90u;
label_159e90:
    // 0x159e90: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159e94: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159E94u;
    SET_GPR_U32(ctx, 31, 0x159E9Cu);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159E94u, 0x159E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159E9Cu;
label_159e9c:
    // 0x159e9c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159ea0: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x159EA0u;
    SET_GPR_U32(ctx, 31, 0x159EA8u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x159EA0u, 0x159EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159EA8u;
label_159ea8:
    // 0x159ea8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159eac: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x159eb0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159eb0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159eb4: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x159eb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x159EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159EC0u;
}
