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

// Function: srp_id07_type03
// Address: 0x2bffa0 - 0x2c00cc
void srp_id07_type03_0x2bffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id07_type03_0x2bffa0");
#endif

    switch (ctx->pc) {
        case 0x2bffbcu: goto label_2bffbc;
        case 0x2bfff4u: goto label_2bfff4;
        case 0x2c0024u: goto label_2c0024;
        case 0x2c0044u: goto label_2c0044;
        case 0x2c0074u: goto label_2c0074;
        default: break;
    }

    ctx->pc = 0x2bffa0u;

    // 0x2bffa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bffa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bffa4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bffa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bffa8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bffac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bffacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bffb0: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2bffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2bffb4: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2BFFB4u;
    SET_GPR_U32(ctx, 31, 0x2BFFBCu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2BFFB4u, 0x2BFFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFBCu;
label_2bffbc:
    // 0x2bffbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bffc0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bffc4: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2bffc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bffc8: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bffcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bffd0: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2bffd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bffd4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bffd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bffd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bffdc: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2bffdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bffe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bffe4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bffe8: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2bffe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bffec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFFECu;
    SET_GPR_U32(ctx, 31, 0x2BFFF4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFFECu, 0x2BFFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFFF4u;
label_2bfff4:
    // 0x2bfff4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2bfff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2bfff8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfffc: 0x0  nop
    ctx->pc = 0x2bfffcu;
    // NOP
    // 0x2c0000: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0000u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0004: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2c0004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2c0008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c000c: 0x0  nop
    ctx->pc = 0x2c000cu;
    // NOP
    // 0x2c0010: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0010u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0014: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0018: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2c0018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2c001c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C001Cu;
    SET_GPR_U32(ctx, 31, 0x2C0024u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C001Cu, 0x2C0024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0024u;
label_2c0024:
    // 0x2c0024: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c0024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0028: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c002c: 0x0  nop
    ctx->pc = 0x2c002cu;
    // NOP
    // 0x2c0030: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2c0030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0034: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0038: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2c0038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2c003c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C003Cu;
    SET_GPR_U32(ctx, 31, 0x2C0044u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C003Cu, 0x2C0044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0044u;
label_2c0044:
    // 0x2c0044: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2c0044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2c0048: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c0048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c004c: 0x0  nop
    ctx->pc = 0x2c004cu;
    // NOP
    // 0x2c0050: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0050u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0054: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2c0054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2c0058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c0058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c005c: 0x0  nop
    ctx->pc = 0x2c005cu;
    // NOP
    // 0x2c0060: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0060u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0064: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2c0064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0068: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2c0068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2c006c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2C006Cu;
    SET_GPR_U32(ctx, 31, 0x2C0074u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2C006Cu, 0x2C0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0074u;
label_2c0074:
    // 0x2c0074: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x2c0074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x2c0078: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2c0078u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c007c: 0x0  nop
    ctx->pc = 0x2c007cu;
    // NOP
    // 0x2c0080: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c0080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c0084: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2c0084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2c0088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c0088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c008c: 0x0  nop
    ctx->pc = 0x2c008cu;
    // NOP
    // 0x2c0090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c0090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c0094: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c0094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0098: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2c0098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2c009c: 0x3c03bfb3  lui         $v1, 0xBFB3
    ctx->pc = 0x2c009cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49075 << 16));
    // 0x2c00a0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2c00a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2c00a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c00a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c00a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c00ac: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c00acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c00b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c00b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c00b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2c00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c00b8: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2c00b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c00bc: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2c00bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c00c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c00c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c00c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C00C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C00C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C00CCu;
}
