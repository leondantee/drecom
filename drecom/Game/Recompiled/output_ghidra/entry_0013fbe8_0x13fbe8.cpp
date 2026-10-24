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

// Function: entry_0013fbe8
// Address: 0x13fbe8 - 0x13fcf8
void entry_0013fbe8_0x13fbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fbe8_0x13fbe8");
#endif

    switch (ctx->pc) {
        case 0x13fc0cu: goto label_13fc0c;
        case 0x13fc1cu: goto label_13fc1c;
        case 0x13fc3cu: goto label_13fc3c;
        case 0x13fc58u: goto label_13fc58;
        case 0x13fcb8u: goto label_13fcb8;
        default: break;
    }

    ctx->pc = 0x13fbe8u;

    // 0x13fbe8: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fbec: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x13fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x13fbf0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x13fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13fbf4: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fbf8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13fbf8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fbfc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x13fbfcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13fc00: 0x27a81690  addiu       $t0, $sp, 0x1690
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5776));
    // 0x13fc04: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x13FC04u;
    SET_GPR_U32(ctx, 31, 0x13FC0Cu);
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x13FC04u, 0x13FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FC0Cu;
label_13fc0c:
    // 0x13fc0c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc10: 0x27a51640  addiu       $a1, $sp, 0x1640
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5696));
    // 0x13fc14: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FC14u;
    SET_GPR_U32(ctx, 31, 0x13FC1Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FC1Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FC1Cu) { return; }
    ctx->pc = 0x13FC1Cu;
label_13fc1c:
    // 0x13fc1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x13fc1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc20: 0x8fa716a8  lw          $a3, 0x16A8($sp)
    ctx->pc = 0x13fc20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc24: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x13fc24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x13fc28: 0x8fa216a8  lw          $v0, 0x16A8($sp)
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fc2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc30: 0xc7ac1690  lwc1        $f12, 0x1690($sp)
    ctx->pc = 0x13fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 5776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13fc34: 0xc040c8c  jal         func_103230
    ctx->pc = 0x13FC34u;
    SET_GPR_U32(ctx, 31, 0x13FC3Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x13FC3Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FC3Cu) { return; }
    ctx->pc = 0x13FC3Cu;
label_13fc3c:
    // 0x13fc3c: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x13fc3cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc40: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc44: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x13fc48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fc48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc4c: 0x27a51630  addiu       $a1, $sp, 0x1630
    ctx->pc = 0x13fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5680));
    // 0x13fc50: 0xc040c9e  jal         func_103278
    ctx->pc = 0x13FC50u;
    SET_GPR_U32(ctx, 31, 0x13FC58u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13FC58u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13FC58u) { return; }
    ctx->pc = 0x13FC58u;
label_13fc58:
    // 0x13fc58: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fc58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fc5c: 0x8fa416a8  lw          $a0, 0x16A8($sp)
    ctx->pc = 0x13fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc60: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x13fc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x13fc64: 0x8fa516a8  lw          $a1, 0x16A8($sp)
    ctx->pc = 0x13fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 5800)));
    // 0x13fc68: 0x24a60030  addiu       $a2, $a1, 0x30
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x13fc6c: 0xafa616a8  sw          $a2, 0x16A8($sp)
    ctx->pc = 0x13fc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 5800), GPR_U32(ctx, 6));
    // 0x13fc70: 0x27a31250  addiu       $v1, $sp, 0x1250
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4688));
    // 0x13fc74: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fc78: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x13fc78u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fc7c: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x13fc7cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13fc80: 0x78670020  lq          $a3, 0x20($v1)
    ctx->pc = 0x13fc80u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13fc84: 0x78680030  lq          $t0, 0x30($v1)
    ctx->pc = 0x13fc84u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13fc88: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x13fc88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
    // 0x13fc8c: 0x7c860010  sq          $a2, 0x10($a0)
    ctx->pc = 0x13fc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 6));
    // 0x13fc90: 0x7c870020  sq          $a3, 0x20($a0)
    ctx->pc = 0x13fc90u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 7));
    // 0x13fc94: 0x7c880030  sq          $t0, 0x30($a0)
    ctx->pc = 0x13fc94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 8));
    // 0x13fc98: 0x78620040  lq          $v0, 0x40($v1)
    ctx->pc = 0x13fc98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x13fc9c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x13fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x13fca0: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fca4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fca4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fca8: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fcac: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fcacu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fcb0: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FCB0u;
    SET_GPR_U32(ctx, 31, 0x13FCB8u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FCB0u, 0x13FCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCB8u;
label_13fcb8:
    // 0x13fcb8: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fcb8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fcbc: 0x32030820  andi        $v1, $s0, 0x820
    ctx->pc = 0x13fcbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2080);
    // 0x13fcc0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13FCC0u;
    {
        const bool branch_taken_0x13fcc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcc0) {
            ctx->pc = 0x13FCF8u;
            return;
        }
    }
    ctx->pc = 0x13FCC8u;
    // 0x13fcc8: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x13fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x13fccc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x13fcccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fcd0: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fcd4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fcd4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fcd8: 0x27a615c0  addiu       $a2, $sp, 0x15C0
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fcdc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x13fcdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x13fce0: 0x27a81610  addiu       $t0, $sp, 0x1610
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fce4: 0x71003628  paddub      $a2, $t0, $zero
    ctx->pc = 0x13fce4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x13fce8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fcec: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x13fcecu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fcf0: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FCF0u;
    SET_GPR_U32(ctx, 31, 0x13FCF8u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FCF0u, 0x13FCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FCF8u;
}
