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

// Function: e2d_id73_type06
// Address: 0x2bbb50 - 0x2bbc78
void e2d_id73_type06_0x2bbb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type06_0x2bbb50");
#endif

    switch (ctx->pc) {
        case 0x2bbba4u: goto label_2bbba4;
        case 0x2bbbe8u: goto label_2bbbe8;
        case 0x2bbc0cu: goto label_2bbc0c;
        default: break;
    }

    ctx->pc = 0x2bbb50u;

    // 0x2bbb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbb54: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bbb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bbb58: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bbb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bbb5c: 0x3c02431c  lui         $v0, 0x431C
    ctx->pc = 0x2bbb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17180 << 16));
    // 0x2bbb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb68: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bbb68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bbb6c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2bbb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2bbb70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbb70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb78: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bbb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bbb7c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2bbb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2bbb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb88: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bbb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bbb8c: 0x3c0242ac  lui         $v0, 0x42AC
    ctx->pc = 0x2bbb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17068 << 16));
    // 0x2bbb90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbb90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbb94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbb98: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bbb98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bbb9c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BBB9Cu;
    SET_GPR_U32(ctx, 31, 0x2BBBA4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BBB9Cu, 0x2BBBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBA4u;
label_2bbba4:
    // 0x2bbba4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bbba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bbba8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bbba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbbac: 0x0  nop
    ctx->pc = 0x2bbbacu;
    // NOP
    // 0x2bbbb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bbbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbbb4: 0x3c0243d7  lui         $v0, 0x43D7
    ctx->pc = 0x2bbbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17367 << 16));
    // 0x2bbbb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbbb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbbbc: 0x0  nop
    ctx->pc = 0x2bbbbcu;
    // NOP
    // 0x2bbbc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbbc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbbc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbbc8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bbbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bbbcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbbd0: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bbbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbbd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbbd8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbbdc: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bbbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbbe0: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BBBE0u;
    SET_GPR_U32(ctx, 31, 0x2BBBE8u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BBBE0u, 0x2BBBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBBE8u;
label_2bbbe8:
    // 0x2bbbe8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bbbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bbbec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bbbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bbbf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bbbf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbbf4: 0x0  nop
    ctx->pc = 0x2bbbf4u;
    // NOP
    // 0x2bbbf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bbbf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbbfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbc00: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bbc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bbc04: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BBC04u;
    SET_GPR_U32(ctx, 31, 0x2BBC0Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BBC04u, 0x2BBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBC0Cu;
label_2bbc0c:
    // 0x2bbc0c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bbc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bbc10: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bbc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bbc14: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bbc14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbc18: 0x0  nop
    ctx->pc = 0x2bbc18u;
    // NOP
    // 0x2bbc1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bbc1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbc20: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bbc24: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bbc24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bbc28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbc28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc2c: 0x0  nop
    ctx->pc = 0x2bbc2cu;
    // NOP
    // 0x2bbc30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbc30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbc34: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbc38: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bbc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bbc3c: 0x3c03453b  lui         $v1, 0x453B
    ctx->pc = 0x2bbc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17723 << 16));
    // 0x2bbc40: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x2bbc40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x2bbc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc48: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbc4c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bbc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bbc50: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x2bbc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2bbc54: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbc58: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bbc58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbc5c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2bbc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2bbc60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbc64: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bbc64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbc68: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bbc68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbc6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bbc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbc70: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBC78u;
}
