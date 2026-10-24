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

// Function: entry_00341d6c
// Address: 0x341d6c - 0x341eb0
void entry_00341d6c_0x341d6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341d6c_0x341d6c");
#endif

    switch (ctx->pc) {
        case 0x341dbcu: goto label_341dbc;
        case 0x341ddcu: goto label_341ddc;
        case 0x341e3cu: goto label_341e3c;
        case 0x341e5cu: goto label_341e5c;
        default: break;
    }

    ctx->pc = 0x341d6cu;

    // 0x341d6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d70: 0x0  nop
    ctx->pc = 0x341d70u;
    // NOP
    // 0x341d74: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x341d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x341d78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d7c: 0x0  nop
    ctx->pc = 0x341d7cu;
    // NOP
    // 0x341d80: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x341d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x341d84: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x341d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x341d88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d8c: 0x0  nop
    ctx->pc = 0x341d8cu;
    // NOP
    // 0x341d90: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x341d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x341d94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341d98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d9c: 0x0  nop
    ctx->pc = 0x341d9cu;
    // NOP
    // 0x341da0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x341da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x341da4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341da8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341dac: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x341dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341db0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341db4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341DB4u;
    SET_GPR_U32(ctx, 31, 0x341DBCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x341DBCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341DBCu) { return; }
    ctx->pc = 0x341DBCu;
label_341dbc:
    // 0x341dbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341dc0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x341dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341dc4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x341dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341dc8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x341dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x341dcc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341dd0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341dd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341dd4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x341DD4u;
    SET_GPR_U32(ctx, 31, 0x341DDCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x341DD4u, 0x341DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341DDCu;
label_341ddc:
    // 0x341ddc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341de0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341de4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x341de4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x341de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x341de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341dec: 0x0  nop
    ctx->pc = 0x341decu;
    // NOP
    // 0x341df0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x341df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x341df4: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x341df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x341df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341dfc: 0x0  nop
    ctx->pc = 0x341dfcu;
    // NOP
    // 0x341e00: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x341e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x341e04: 0x3c0244e1  lui         $v0, 0x44E1
    ctx->pc = 0x341e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17633 << 16));
    // 0x341e08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e0c: 0x0  nop
    ctx->pc = 0x341e0cu;
    // NOP
    // 0x341e10: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x341e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x341e14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x341e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x341e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341e1c: 0x0  nop
    ctx->pc = 0x341e1cu;
    // NOP
    // 0x341e20: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x341e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x341e24: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e28: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341e2c: 0x8c450130  lw          $a1, 0x130($v0)
    ctx->pc = 0x341e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341e30: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341e34: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x341E34u;
    SET_GPR_U32(ctx, 31, 0x341E3Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x341E3Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341E3Cu) { return; }
    ctx->pc = 0x341E3Cu;
label_341e3c:
    // 0x341e3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x341e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x341e44: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x341e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341e48: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x341e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x341e4c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x341e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341e50: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341e50u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341e54: 0xc059e1c  jal         func_167870
    ctx->pc = 0x341E54u;
    SET_GPR_U32(ctx, 31, 0x341E5Cu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x341E54u, 0x341E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341E5Cu;
label_341e5c:
    // 0x341e5c: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e60: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341e64: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x341e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x341e68: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x341e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x341e70: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x341e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x341e74: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x341e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x341e78: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x341E78u;
    {
        const bool branch_taken_0x341e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x341e78) {
            ctx->pc = 0x341EB0u;
            return;
        }
    }
    ctx->pc = 0x341E80u;
    // 0x341e80: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341e84: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x341e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341e88: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x341e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341e8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x341e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x341e90: 0x0  nop
    ctx->pc = 0x341e90u;
    // NOP
    // 0x341e94: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x341E94u;
    {
        const bool branch_taken_0x341e94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x341e94) {
            ctx->pc = 0x341EBCu;
            return;
        }
    }
    ctx->pc = 0x341E9Cu;
    // 0x341e9c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x341e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341ea0: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x341ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341ea4: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x341ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x341ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x341EA8u;
    {
        const bool branch_taken_0x341ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341ea8) {
            ctx->pc = 0x341EBCu;
            return;
        }
    }
    ctx->pc = 0x341EB0u;
}
