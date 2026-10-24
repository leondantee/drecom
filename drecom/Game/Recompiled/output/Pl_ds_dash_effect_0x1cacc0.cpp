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

// Function: Pl_ds_dash_effect
// Address: 0x1cacc0 - 0x1cae0c
void Pl_ds_dash_effect_0x1cacc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_ds_dash_effect_0x1cacc0");
#endif

    switch (ctx->pc) {
        case 0x1cacd8u: goto label_1cacd8;
        case 0x1cad14u: goto label_1cad14;
        case 0x1cad20u: goto label_1cad20;
        case 0x1cad5cu: goto label_1cad5c;
        case 0x1cad68u: goto label_1cad68;
        case 0x1cada4u: goto label_1cada4;
        case 0x1cadb0u: goto label_1cadb0;
        case 0x1cadfcu: goto label_1cadfc;
        default: break;
    }

    ctx->pc = 0x1cacc0u;

    // 0x1cacc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cacc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cacc4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1cacc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1cacc8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1cacc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1caccc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cacccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cacd0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CACD0u;
    SET_GPR_U32(ctx, 31, 0x1CACD8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CACD0u, 0x1CACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACD8u;
label_1cacd8:
    // 0x1cacd8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1cacdc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cacdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cace0: 0x0  nop
    ctx->pc = 0x1cace0u;
    // NOP
    // 0x1cace4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cace4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cace8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1cace8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cacec: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cacecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cacf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cacf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cacf4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cacf8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cacf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cacfc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1cad00: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cad00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cad04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cad04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cad08: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cad0c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x1CAD0Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD14u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x1CAD0Cu, 0x1CAD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD14u;
label_1cad14:
    // 0x1cad14: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cad14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cad18: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CAD18u;
    SET_GPR_U32(ctx, 31, 0x1CAD20u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CAD18u, 0x1CAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD20u;
label_1cad20:
    // 0x1cad20: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cad20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1cad24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cad24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad28: 0x0  nop
    ctx->pc = 0x1cad28u;
    // NOP
    // 0x1cad2c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cad2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cad30: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cad30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cad34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cad38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1cad38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cad3c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cad40: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cad40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cad44: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1cad48: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cad48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cad4c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cad4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cad50: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cad50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cad54: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x1CAD54u;
    SET_GPR_U32(ctx, 31, 0x1CAD5Cu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x1CAD54u, 0x1CAD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD5Cu;
label_1cad5c:
    // 0x1cad5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cad5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cad60: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CAD60u;
    SET_GPR_U32(ctx, 31, 0x1CAD68u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CAD60u, 0x1CAD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD68u;
label_1cad68:
    // 0x1cad68: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cad68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x1cad6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cad6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cad70: 0x0  nop
    ctx->pc = 0x1cad70u;
    // NOP
    // 0x1cad74: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cad74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1cad78: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1cad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cad7c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cad80: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cad80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cad84: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cad84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cad88: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cad8c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1cad8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1cad90: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cad90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cad94: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cad94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cad98: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cad9c: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x1CAD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CADA4u);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x1CAD9Cu, 0x1CADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADA4u;
label_1cada4:
    // 0x1cada4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cada4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cada8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1CADA8u;
    SET_GPR_U32(ctx, 31, 0x1CADB0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1CADA8u, 0x1CADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADB0u;
label_1cadb0:
    // 0x1cadb0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cadb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cadb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cadb8: 0x0  nop
    ctx->pc = 0x1cadb8u;
    // NOP
    // 0x1cadbc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1cadbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1cadc0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1cadc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1cadc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cadc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cadc8: 0x0  nop
    ctx->pc = 0x1cadc8u;
    // NOP
    // 0x1cadcc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1cadccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cadd0: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x1cadd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cadd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cadd8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1cadd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1caddc: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1caddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x1cade0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cade0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cade4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cade4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cade8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1cade8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1cadec: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1cadecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cadf0: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x1cadf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cadf4: 0xc0bbfe4  jal         func_2EFF90
    ctx->pc = 0x1CADF4u;
    SET_GPR_U32(ctx, 31, 0x1CADFCu);
    ctx->pc = 0x2EFF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFF90u, 0x1CADF4u, 0x1CADFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADFCu;
label_1cadfc:
    // 0x1cadfc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1cadfcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cae04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE0Cu;
}
