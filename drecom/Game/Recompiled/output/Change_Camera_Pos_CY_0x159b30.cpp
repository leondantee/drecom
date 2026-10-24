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

// Function: Change_Camera_Pos_CY
// Address: 0x159b30 - 0x159c60
void Change_Camera_Pos_CY_0x159b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Change_Camera_Pos_CY_0x159b30");
#endif

    switch (ctx->pc) {
        case 0x159bc4u: goto label_159bc4;
        case 0x159be0u: goto label_159be0;
        case 0x159bf4u: goto label_159bf4;
        case 0x159c30u: goto label_159c30;
        case 0x159c3cu: goto label_159c3c;
        case 0x159c48u: goto label_159c48;
        default: break;
    }

    ctx->pc = 0x159b30u;

    // 0x159b30: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x159b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x159b34: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x159b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x159b38: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x159b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x159b3c: 0xe7ac0078  swc1        $f12, 0x78($sp)
    ctx->pc = 0x159b3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x159b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b44: 0x0  nop
    ctx->pc = 0x159b44u;
    // NOP
    // 0x159b48: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x159b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x159b4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b54: 0x0  nop
    ctx->pc = 0x159b54u;
    // NOP
    // 0x159b58: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x159b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x159b5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159b5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b60: 0x0  nop
    ctx->pc = 0x159b60u;
    // NOP
    // 0x159b64: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x159b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x159b68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b70: 0x0  nop
    ctx->pc = 0x159b70u;
    // NOP
    // 0x159b74: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x159b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x159b78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159b78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b7c: 0x0  nop
    ctx->pc = 0x159b7cu;
    // NOP
    // 0x159b80: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159b84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159b84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159b88: 0x0  nop
    ctx->pc = 0x159b88u;
    // NOP
    // 0x159b8c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159b90: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159b94: 0xc44001b8  lwc1        $f0, 0x1B8($v0)
    ctx->pc = 0x159b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159b98: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159b9c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x159b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x159ba0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x159ba0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159ba4: 0x0  nop
    ctx->pc = 0x159ba4u;
    // NOP
    // 0x159ba8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x159ba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x159bac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159bb0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x159bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x159bb4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159bb8: 0xc7ac0078  lwc1        $f12, 0x78($sp)
    ctx->pc = 0x159bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x159bbc: 0xc056858  jal         func_15A160
    ctx->pc = 0x159BBCu;
    SET_GPR_U32(ctx, 31, 0x159BC4u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x159BBCu, 0x159BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159BC4u;
label_159bc4:
    // 0x159bc4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159bc8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159bcc: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x159bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x159bd0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159bd4: 0x24460110  addiu       $a2, $v0, 0x110
    ctx->pc = 0x159bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159bd8: 0xc040c00  jal         func_103000
    ctx->pc = 0x159BD8u;
    SET_GPR_U32(ctx, 31, 0x159BE0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x159BE0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159BE0u) { return; }
    ctx->pc = 0x159BE0u;
label_159be0:
    // 0x159be0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159be4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x159be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159be8: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x159be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x159bec: 0xc040c44  jal         func_103110
    ctx->pc = 0x159BECu;
    SET_GPR_U32(ctx, 31, 0x159BF4u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x159BF4u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159BF4u) { return; }
    ctx->pc = 0x159BF4u;
label_159bf4:
    // 0x159bf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159bf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159bf8: 0x0  nop
    ctx->pc = 0x159bf8u;
    // NOP
    // 0x159bfc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x159bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x159c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c04: 0x0  nop
    ctx->pc = 0x159c04u;
    // NOP
    // 0x159c08: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x159c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x159c0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x159c0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x159c10: 0x0  nop
    ctx->pc = 0x159c10u;
    // NOP
    // 0x159c14: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x159c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x159c18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x159c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159c1c: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x159c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x159c20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x159c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x159c24: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x159c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x159c28: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x159C28u;
    SET_GPR_U32(ctx, 31, 0x159C30u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x159C30u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x159C30u) { return; }
    ctx->pc = 0x159C30u;
label_159c30:
    // 0x159c30: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159c34: 0xc0567fc  jal         func_159FF0
    ctx->pc = 0x159C34u;
    SET_GPR_U32(ctx, 31, 0x159C3Cu);
    ctx->pc = 0x159FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159FF0u, 0x159C34u, 0x159C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C3Cu;
label_159c3c:
    // 0x159c3c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x159c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159c40: 0xc0563c8  jal         func_158F20
    ctx->pc = 0x159C40u;
    SET_GPR_U32(ctx, 31, 0x159C48u);
    ctx->pc = 0x158F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158F20u, 0x159C40u, 0x159C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159C48u;
label_159c48:
    // 0x159c48: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x159c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x159c4c: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x159c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x159c50: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x159c50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159c54: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x159c54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x159c58: 0x3e00008  jr          $ra
    ctx->pc = 0x159C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159C60u;
}
