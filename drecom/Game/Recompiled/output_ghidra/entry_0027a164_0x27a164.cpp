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

// Function: entry_0027a164
// Address: 0x27a164 - 0x27a208
void entry_0027a164_0x27a164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027a164_0x27a164");
#endif

    switch (ctx->pc) {
        case 0x27a170u: goto label_27a170;
        case 0x27a184u: goto label_27a184;
        default: break;
    }

    ctx->pc = 0x27a164u;

    // 0x27a164: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a164u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a168: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x27A168u;
    SET_GPR_U32(ctx, 31, 0x27A170u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x27A170u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27A170u) { return; }
    ctx->pc = 0x27A170u;
label_27a170:
    // 0x27a170: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x27a170u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a174: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x27a174u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x27a178: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x27a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27a17c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x27A17Cu;
    SET_GPR_U32(ctx, 31, 0x27A184u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x27A184u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x27A184u) { return; }
    ctx->pc = 0x27A184u;
label_27a184:
    // 0x27a184: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a188: 0x8c251aa8  lw          $a1, 0x1AA8($at)
    ctx->pc = 0x27a188u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x621AA8u));
    // 0x27a18c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x27a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a190: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27a190u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27a194: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x27a194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x27a198: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a19c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x27a19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a1a0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x27a1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x27a1a4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a1a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a1a8: 0x8c251aa8  lw          $a1, 0x1AA8($at)
    ctx->pc = 0x27a1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x621AA8u));
    // 0x27a1ac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x27a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a1b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27a1b4: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x27a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x27a1b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a1bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x27a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a1c0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x27a1c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x27a1c4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27a1c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27a1c8: 0x8c251aa8  lw          $a1, 0x1AA8($at)
    ctx->pc = 0x27a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x621AA8u));
    // 0x27a1cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x27a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a1d0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x27a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27a1d4: 0x8ca30330  lw          $v1, 0x330($a1)
    ctx->pc = 0x27a1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x27a1d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27a1dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x27a1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a1e0: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x27a1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x27a1e4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x27a1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x27a1e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27a1e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a1ec: 0x0  nop
    ctx->pc = 0x27a1ecu;
    // NOP
    // 0x27a1f0: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x27a1f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x27a1f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27a1f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a1f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27a1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a1fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27a1fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27a200: 0x3e00008  jr          $ra
    ctx->pc = 0x27A200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A208u;
}
