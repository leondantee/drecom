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

// Function: Change_Camera_Pos_CZ
// Address: 0x159c60 - 0x159d90
void Change_Camera_Pos_CZ_0x159c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Pos_CZ_0x159c60");
#endif

    switch (ctx->pc) {
        case 0x159cf4u: goto label_159cf4;
        case 0x159d10u: goto label_159d10;
        case 0x159d24u: goto label_159d24;
        case 0x159d60u: goto label_159d60;
        case 0x159d6cu: goto label_159d6c;
        case 0x159d78u: goto label_159d78;
        default: break;
    }

    ctx->pc = 0x159c60u;

    // 0x159c60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159c64: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159c68: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x159c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x159c6c: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x159c6cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x159c70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c74: 0x0  nop
    ctx->pc = 0x159c74u;
    // NOP
    // 0x159c78: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x159c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x159c7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c80: 0x0  nop
    ctx->pc = 0x159c80u;
    // NOP
    // 0x159c84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x159c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159c88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159c8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159c8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c90: 0x0  nop
    ctx->pc = 0x159c90u;
    // NOP
    // 0x159c94: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x159c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159c98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ca0: 0x0  nop
    ctx->pc = 0x159ca0u;
    // NOP
    // 0x159ca4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x159ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x159ca8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159cac: 0x0  nop
    ctx->pc = 0x159cacu;
    // NOP
    // 0x159cb0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159cb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159cb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159cb8: 0x0  nop
    ctx->pc = 0x159cb8u;
    // NOP
    // 0x159cbc: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159cc0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159cc4: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x159cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159cc8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159ccc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159cd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159cd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159cd4: 0x0  nop
    ctx->pc = 0x159cd4u;
    // NOP
    // 0x159cd8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x159cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x159cdc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159ce0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x159ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159ce4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159ce8: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x159ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159cec: 0xc056858  jal         func_15A160
    ctx->pc = 0x159CECu;
    SET_GPR_U32(ctx, 31, 0x159CF4u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x159CECu, 0x159CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159CF4u;
label_159cf4:
    // 0x159cf4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159cf8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159cfc: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x159cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x159d00: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159d04: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x159d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159d08: 0xc040c00  jal         func_103000
    ctx->pc = 0x159D08u;
    SET_GPR_U32(ctx, 31, 0x159D10u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x159D10u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159D10u) { return; }
    ctx->pc = 0x159D10u;
label_159d10:
    // 0x159d10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159d14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159d18: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159d1c: 0xc040c44  jal         func_103110
    ctx->pc = 0x159D1Cu;
    SET_GPR_U32(ctx, 31, 0x159D24u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x159D24u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159D24u) { return; }
    ctx->pc = 0x159D24u;
label_159d24:
    // 0x159d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159d28: 0x0  nop
    ctx->pc = 0x159d28u;
    // NOP
    // 0x159d2c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159d30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159d30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159d34: 0x0  nop
    ctx->pc = 0x159d34u;
    // NOP
    // 0x159d38: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159d3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159d3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159d40: 0x0  nop
    ctx->pc = 0x159d40u;
    // NOP
    // 0x159d44: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159d48: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159d4c: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x159d50: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159d54: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159d58: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159D58u;
    SET_GPR_U32(ctx, 31, 0x159D60u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159D60u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159D60u) { return; }
    ctx->pc = 0x159D60u;
label_159d60:
    // 0x159d60: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159d64: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159D64u;
    SET_GPR_U32(ctx, 31, 0x159D6Cu);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159D64u, 0x159D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D6Cu;
label_159d6c:
    // 0x159d6c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159d70: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x159D70u;
    SET_GPR_U32(ctx, 31, 0x159D78u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x159D70u, 0x159D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D78u;
label_159d78:
    // 0x159d78: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159d7c: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x159d80: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159d80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d84: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x159d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159d88: 0x3e00008  jr          $ra
    ctx->pc = 0x159D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D90u;
}
