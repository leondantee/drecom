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

// Function: Set_effect_em02_uji_eki_dmg
// Address: 0x312420 - 0x31251c
void Set_effect_em02_uji_eki_dmg_0x312420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_effect_em02_uji_eki_dmg_0x312420");
#endif

    switch (ctx->pc) {
        case 0x312450u: goto label_312450;
        case 0x31249cu: goto label_31249c;
        case 0x3124fcu: goto label_3124fc;
        default: break;
    }

    ctx->pc = 0x312420u;

    // 0x312420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x312424: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x312424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x312428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31242c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31242cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x312430: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x312430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x312434: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x312434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x312438: 0x24043900  addiu       $a0, $zero, 0x3900
    ctx->pc = 0x312438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14592));
    // 0x31243c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x31243cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312440: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x312440u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x312444: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x312444u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312448: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x312448u;
    SET_GPR_U32(ctx, 31, 0x312450u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x312448u, 0x312450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312450u;
label_312450:
    // 0x312450: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312450u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312454: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312458: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31245c: 0x0  nop
    ctx->pc = 0x31245cu;
    // NOP
    // 0x312460: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x312460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x312464: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31246c: 0x0  nop
    ctx->pc = 0x31246cu;
    // NOP
    // 0x312470: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x312470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x312474: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x312474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x312478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31247c: 0x0  nop
    ctx->pc = 0x31247cu;
    // NOP
    // 0x312480: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x312480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x312484: 0x3c02429c  lui         $v0, 0x429C
    ctx->pc = 0x312484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17052 << 16));
    // 0x312488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31248c: 0x0  nop
    ctx->pc = 0x31248cu;
    // NOP
    // 0x312490: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x312490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x312494: 0xc067648  jal         func_19D920
    ctx->pc = 0x312494u;
    SET_GPR_U32(ctx, 31, 0x31249Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x312494u, 0x31249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31249Cu;
label_31249c:
    // 0x31249c: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x31249cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x3124a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3124a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3124a4: 0x0  nop
    ctx->pc = 0x3124a4u;
    // NOP
    // 0x3124a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3124a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3124ac: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x3124acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
    // 0x3124b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3124b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3124b4: 0x0  nop
    ctx->pc = 0x3124b4u;
    // NOP
    // 0x3124b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3124b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3124bc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x3124bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x3124c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3124c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3124c4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3124c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x3124c8: 0x3c02bcf5  lui         $v0, 0xBCF5
    ctx->pc = 0x3124c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48373 << 16));
    // 0x3124cc: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x3124ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x3124d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3124d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3124d4: 0x0  nop
    ctx->pc = 0x3124d4u;
    // NOP
    // 0x3124d8: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x3124d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x3124dc: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x3124dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x3124e0: 0x3442a3d7  ori         $v0, $v0, 0xA3D7
    ctx->pc = 0x3124e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41943);
    // 0x3124e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3124e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3124e8: 0x0  nop
    ctx->pc = 0x3124e8u;
    // NOP
    // 0x3124ec: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x3124ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x3124f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x3124f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x3124f4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x3124F4u;
    SET_GPR_U32(ctx, 31, 0x3124FCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x3124F4u, 0x3124FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3124FCu;
label_3124fc:
    // 0x3124fc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x3124fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x312500: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x312500u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x312504: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x312504u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31250c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31250cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312510: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x312510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312514: 0x3e00008  jr          $ra
    ctx->pc = 0x312514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31251Cu;
}
