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

// Function: srp_id07_type02
// Address: 0x2bfe70 - 0x2bff9c
void srp_id07_type02_0x2bfe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id07_type02_0x2bfe70");
#endif

    switch (ctx->pc) {
        case 0x2bfe8cu: goto label_2bfe8c;
        case 0x2bfec4u: goto label_2bfec4;
        case 0x2bfef4u: goto label_2bfef4;
        case 0x2bff14u: goto label_2bff14;
        case 0x2bff44u: goto label_2bff44;
        default: break;
    }

    ctx->pc = 0x2bfe70u;

    // 0x2bfe70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bfe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bfe74: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bfe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bfe78: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bfe78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bfe7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfe80: 0x244402d0  addiu       $a0, $v0, 0x2D0
    ctx->pc = 0x2bfe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x2bfe84: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x2BFE84u;
    SET_GPR_U32(ctx, 31, 0x2BFE8Cu);
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x2BFE84u, 0x2BFE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE8Cu;
label_2bfe8c:
    // 0x2bfe8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bfe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bfe90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfe94: 0xa0430342  sb          $v1, 0x342($v0)
    ctx->pc = 0x2bfe94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 834), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfe98: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bfe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfe9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfea0: 0xa0430347  sb          $v1, 0x347($v0)
    ctx->pc = 0x2bfea0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 839), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfea4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2bfea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bfea8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfeac: 0xa0430344  sb          $v1, 0x344($v0)
    ctx->pc = 0x2bfeacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 836), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfeb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bfeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bfeb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfeb8: 0xa043036d  sb          $v1, 0x36D($v0)
    ctx->pc = 0x2bfeb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 877), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bfebc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFEBCu;
    SET_GPR_U32(ctx, 31, 0x2BFEC4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFEBCu, 0x2BFEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEC4u;
label_2bfec4:
    // 0x2bfec4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2bfec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2bfec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfecc: 0x0  nop
    ctx->pc = 0x2bfeccu;
    // NOP
    // 0x2bfed0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bfed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bfed4: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x2bfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x2bfed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bfed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfedc: 0x0  nop
    ctx->pc = 0x2bfedcu;
    // NOP
    // 0x2bfee0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bfee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bfee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bfee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bfee8: 0xe4400338  swc1        $f0, 0x338($v0)
    ctx->pc = 0x2bfee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 824), bits); }
    // 0x2bfeec: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFEECu;
    SET_GPR_U32(ctx, 31, 0x2BFEF4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFEECu, 0x2BFEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFEF4u;
label_2bfef4:
    // 0x2bfef4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bfef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bfef8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bfef8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bfefc: 0x0  nop
    ctx->pc = 0x2bfefcu;
    // NOP
    // 0x2bff00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bff00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bff04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bff08: 0xe44002f0  swc1        $f0, 0x2F0($v0)
    ctx->pc = 0x2bff08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 752), bits); }
    // 0x2bff0c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFF0Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF14u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFF0Cu, 0x2BFF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF14u;
label_2bff14:
    // 0x2bff14: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2bff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2bff18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bff18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bff1c: 0x0  nop
    ctx->pc = 0x2bff1cu;
    // NOP
    // 0x2bff20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bff20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bff24: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x2bff24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x2bff28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bff28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bff2c: 0x0  nop
    ctx->pc = 0x2bff2cu;
    // NOP
    // 0x2bff30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bff30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bff34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bff38: 0xe44002f4  swc1        $f0, 0x2F4($v0)
    ctx->pc = 0x2bff38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 756), bits); }
    // 0x2bff3c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2BFF3Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF44u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2BFF3Cu, 0x2BFF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF44u;
label_2bff44:
    // 0x2bff44: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2bff44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2bff48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bff48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bff4c: 0x0  nop
    ctx->pc = 0x2bff4cu;
    // NOP
    // 0x2bff50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bff50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bff54: 0x3c03420c  lui         $v1, 0x420C
    ctx->pc = 0x2bff54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16908 << 16));
    // 0x2bff58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bff58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bff5c: 0x0  nop
    ctx->pc = 0x2bff5cu;
    // NOP
    // 0x2bff60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bff60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bff64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bff64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bff68: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2bff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2bff6c: 0x3c03bfb3  lui         $v1, 0xBFB3
    ctx->pc = 0x2bff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49075 << 16));
    // 0x2bff70: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2bff70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2bff74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bff74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bff78: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bff7c: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2bff7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2bff80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2bff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bff84: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bff88: 0xa064036b  sb          $a0, 0x36B($v1)
    ctx->pc = 0x2bff88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 875), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bff8c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bff8cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bff90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bff90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bff94: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFF9Cu;
}
