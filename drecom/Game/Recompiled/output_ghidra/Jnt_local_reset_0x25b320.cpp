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

// Function: Jnt_local_reset
// Address: 0x25b320 - 0x25b414
void Jnt_local_reset_0x25b320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Jnt_local_reset_0x25b320");
#endif

    switch (ctx->pc) {
        case 0x25b374u: goto label_25b374;
        case 0x25b388u: goto label_25b388;
        case 0x25b39cu: goto label_25b39c;
        default: break;
    }

    ctx->pc = 0x25b320u;

    // 0x25b320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25b320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25b324: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x25b324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x25b328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25b328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25b32c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25b32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25b330: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x25b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x25b334: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25b334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b338: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25b338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25b33c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b340: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25b340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b344: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x25b344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25b348: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x25b348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25b34c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25b34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25b350: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x25b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x25b354: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x25b354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25b358: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25b358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25b35c: 0x3042fffb  andi        $v0, $v0, 0xFFFB
    ctx->pc = 0x25b35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65531);
    // 0x25b360: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x25b360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x25b364: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b364u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b368: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x25b368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b36c: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x25B36Cu;
    SET_GPR_U32(ctx, 31, 0x25B374u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x25B36Cu, 0x25B374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B374u;
label_25b374:
    // 0x25b374: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b374u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b378: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b378u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b37c: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x25b37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b380: 0xc067808  jal         func_19E020
    ctx->pc = 0x25B380u;
    SET_GPR_U32(ctx, 31, 0x25B388u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x25B380u, 0x25B388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B388u;
label_25b388:
    // 0x25b388: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25b388u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b38c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x25b38cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25b390: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x25b390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25b394: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x25B394u;
    SET_GPR_U32(ctx, 31, 0x25B39Cu);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x25B394u, 0x25B39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25B39Cu;
label_25b39c:
    // 0x25b39c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25b39cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b3a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25b3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25b3a4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b3a8: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x25b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x25b3ac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b3b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x25b3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b3b4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x25b3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x25b3b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b3bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25b3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25b3c0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b3c4: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x25b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x25b3c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b3cc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x25b3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b3d0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x25b3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x25b3d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25b3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b3d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x25b3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25b3dc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x25b3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25b3e0: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x25b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x25b3e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25b3e8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x25b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25b3ec: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x25b3ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x25b3f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x25b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25b3f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25b3f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25b3f8: 0x0  nop
    ctx->pc = 0x25b3f8u;
    // NOP
    // 0x25b3fc: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x25b3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x25b400: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x25b400u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25b404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b408: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25b408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25b40c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B414u;
}
