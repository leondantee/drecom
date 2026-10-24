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

// Function: e2d_id73_type07
// Address: 0x2bbc80 - 0x2bbda4
void e2d_id73_type07_0x2bbc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id73_type07_0x2bbc80");
#endif

    switch (ctx->pc) {
        case 0x2bbcd4u: goto label_2bbcd4;
        case 0x2bbd18u: goto label_2bbd18;
        case 0x2bbd3cu: goto label_2bbd3c;
        default: break;
    }

    ctx->pc = 0x2bbc80u;

    // 0x2bbc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bbc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bbc84: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bbc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bbc88: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bbc88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bbc8c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bbc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bbc90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbc90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbc94: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbc98: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bbc98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bbc9c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bbc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bbca0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbca4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbca8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bbca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bbcac: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bbcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bbcb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbcb4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbcb8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bbcb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bbcbc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2bbcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2bbcc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbcc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbcc8: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bbcc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bbccc: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BBCCCu;
    SET_GPR_U32(ctx, 31, 0x2BBCD4u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BBCCCu, 0x2BBCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBCD4u;
label_2bbcd4:
    // 0x2bbcd4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2bbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2bbcd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bbcd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbcdc: 0x0  nop
    ctx->pc = 0x2bbcdcu;
    // NOP
    // 0x2bbce0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bbce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbce4: 0x3c0243be  lui         $v0, 0x43BE
    ctx->pc = 0x2bbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17342 << 16));
    // 0x2bbce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bbce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbcec: 0x0  nop
    ctx->pc = 0x2bbcecu;
    // NOP
    // 0x2bbcf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbcf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbcf4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbcf8: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2bbcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2bbcfc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd00: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2bbd00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbd04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2bbd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bbd08: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd0c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2bbd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bbd10: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BBD10u;
    SET_GPR_U32(ctx, 31, 0x2BBD18u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BBD10u, 0x2BBD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD18u;
label_2bbd18:
    // 0x2bbd18: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2bbd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2bbd1c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2bbd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2bbd20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2bbd20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbd24: 0x0  nop
    ctx->pc = 0x2bbd24u;
    // NOP
    // 0x2bbd28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2bbd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbd2c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd30: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2bbd30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2bbd34: 0xc067654  jal         func_19D950
    ctx->pc = 0x2BBD34u;
    SET_GPR_U32(ctx, 31, 0x2BBD3Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2BBD34u, 0x2BBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD3Cu;
label_2bbd3c:
    // 0x2bbd3c: 0x3c033b03  lui         $v1, 0x3B03
    ctx->pc = 0x2bbd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15107 << 16));
    // 0x2bbd40: 0x3463126f  ori         $v1, $v1, 0x126F
    ctx->pc = 0x2bbd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4719);
    // 0x2bbd44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bbd44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bbd48: 0x0  nop
    ctx->pc = 0x2bbd48u;
    // NOP
    // 0x2bbd4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bbd4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bbd50: 0x3c033b44  lui         $v1, 0x3B44
    ctx->pc = 0x2bbd50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15172 << 16));
    // 0x2bbd54: 0x34639ba6  ori         $v1, $v1, 0x9BA6
    ctx->pc = 0x2bbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39846);
    // 0x2bbd58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbd58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbd5c: 0x0  nop
    ctx->pc = 0x2bbd5cu;
    // NOP
    // 0x2bbd60: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bbd60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bbd64: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd68: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x2bbd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2bbd6c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x2bbd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x2bbd70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bbd70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bbd74: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd78: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2bbd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2bbd7c: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x2bbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2bbd80: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd84: 0xa064002c  sb          $a0, 0x2C($v1)
    ctx->pc = 0x2bbd84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbd88: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2bbd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2bbd8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bbd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bbd90: 0xa064002d  sb          $a0, 0x2D($v1)
    ctx->pc = 0x2bbd90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 4));
    // 0x2bbd94: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bbd94u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd98: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bbd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bbd9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBDA4u;
}
