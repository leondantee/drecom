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

// Function: ectrl12_init00_t02
// Address: 0x251710 - 0x2517e0
void ectrl12_init00_t02_0x251710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ectrl12_init00_t02_0x251710");
#endif

    switch (ctx->pc) {
        case 0x251770u: goto label_251770;
        case 0x25177cu: goto label_25177c;
        case 0x2517b0u: goto label_2517b0;
        case 0x2517bcu: goto label_2517bc;
        default: break;
    }

    ctx->pc = 0x251710u;

    // 0x251710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x251710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x251714: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x251714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x251718: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x251718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x25171c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251720: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x251720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x251724: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x251724u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x251728: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x251728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25172c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x25172cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x251730: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251734: 0xc44000dc  lwc1        $f0, 0xDC($v0)
    ctx->pc = 0x251734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251738: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x251738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x25173c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251740: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251744: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251748: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25174c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251750: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251754: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251758: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251758u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25175c: 0x24046100  addiu       $a0, $zero, 0x6100
    ctx->pc = 0x25175cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24832));
    // 0x251760: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x251760u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x251764: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x251764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251768: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x251768u;
    SET_GPR_U32(ctx, 31, 0x251770u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x251768u, 0x251770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251770u;
label_251770:
    // 0x251770: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x251770u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x251774: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x251774u;
    SET_GPR_U32(ctx, 31, 0x25177Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x251774u, 0x25177Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25177Cu;
label_25177c:
    // 0x25177c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x251780: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x251780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x251784: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x251784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x251788: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x251788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x25178c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x25178cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x251790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x251790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x251794: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x251794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x251798: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x251798u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25179c: 0x24046200  addiu       $a0, $zero, 0x6200
    ctx->pc = 0x25179cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25088));
    // 0x2517a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2517a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2517a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2517a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2517a8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2517A8u;
    SET_GPR_U32(ctx, 31, 0x2517B0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2517A8u, 0x2517B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517B0u;
label_2517b0:
    // 0x2517b0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2517b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2517b4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2517B4u;
    SET_GPR_U32(ctx, 31, 0x2517BCu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2517B4u, 0x2517BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2517BCu;
label_2517bc:
    // 0x2517bc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2517c0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2517c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2517c4: 0x38640010  xori        $a0, $v1, 0x10
    ctx->pc = 0x2517c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x2517c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2517c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2517cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2517ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2517d0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2517d0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2517d4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2517d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2517d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2517D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2517D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2517E0u;
}
