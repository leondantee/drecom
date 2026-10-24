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

// Function: e2d_id73_type05
// Address: 0x2bba20 - 0x2bbb48
void e2d_id73_type05_0x2bba20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type05_0x2bba20");
#endif

    switch (ctx->pc) {
        case 0x2bba74u: goto label_2bba74;
        case 0x2bbab8u: goto label_2bbab8;
        case 0x2bbadcu: goto label_2bbadc;
        default: break;
    }

    ctx->pc = 0x2bba20u;

    // 0x2bba20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bba20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bba24: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bba24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bba28: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bba28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bba2c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bba30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bba30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bba34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bba38: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bba38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bba3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bba40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bba40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bba44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bba44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bba48: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bba48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bba4c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bba50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bba50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bba54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bba54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bba58: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bba58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bba5c: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x2bba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x2bba60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bba60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bba64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bba64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bba68: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bba68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bba6c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BBA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA74u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BBA6Cu, 0x2BBA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA74u;
label_2bba74:
    // 0x2bba74: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bba78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bba78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bba7c: 0x0  nop
    ctx->pc = 0x2bba7cu;
    // NOP
    // 0x2bba80: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bba80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bba84: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2bba84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2bba88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bba88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bba8c: 0x0  nop
    ctx->pc = 0x2bba8cu;
    // NOP
    // 0x2bba90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bba90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bba94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bba98: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bba98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bba9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbaa0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bbaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbaa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbaa8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbaac: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bbaacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbab0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BBAB0u;
    SET_GPR_U32(ctx, 31, 0x2BBAB8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BBAB0u, 0x2BBAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAB8u;
label_2bbab8:
    // 0x2bbab8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bbab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bbabc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bbabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bbac0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bbac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbac4: 0x0  nop
    ctx->pc = 0x2bbac4u;
    // NOP
    // 0x2bbac8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bbac8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbacc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbad0: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bbad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bbad4: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BBAD4u;
    SET_GPR_U32(ctx, 31, 0x2BBADCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BBAD4u, 0x2BBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBADCu;
label_2bbadc:
    // 0x2bbadc: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bbae0: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bbae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bbae4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bbae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbae8: 0x0  nop
    ctx->pc = 0x2bbae8u;
    // NOP
    // 0x2bbaec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bbaecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbaf0: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bbaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bbaf4: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bbaf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bbaf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbaf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbafc: 0x0  nop
    ctx->pc = 0x2bbafcu;
    // NOP
    // 0x2bbb00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbb00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbb04: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb08: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bbb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bbb0c: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2bbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2bbb10: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2bbb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2bbb14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbb14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb1c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bbb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bbb20: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2bbb20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2bbb24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb28: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bbb28u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbb2c: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2bbb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2bbb30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb34: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bbb34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbb38: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bbb38u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbb3c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bbb3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbb40: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBB40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBB40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBB48u;
}
