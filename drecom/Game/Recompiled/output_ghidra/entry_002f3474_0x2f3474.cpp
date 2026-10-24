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

// Function: entry_002f3474
// Address: 0x2f3474 - 0x2f34f4
void entry_002f3474_0x2f3474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f3474_0x2f3474");
#endif

    switch (ctx->pc) {
        case 0x2f34e4u: goto label_2f34e4;
        default: break;
    }

    ctx->pc = 0x2f3474u;

    // 0x2f3474: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f3478: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2f3478u;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f347c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2f347cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2f3480: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x2f3480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x2f3484: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f3484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3488: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f348c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x2f348cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f3490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f3494: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2f3494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2f3498: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2f3498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2f349c: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2f349cu;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f34a0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2f34a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2f34a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f34a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f34a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f34a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f34ac: 0x0  nop
    ctx->pc = 0x2f34acu;
    // NOP
    // 0x2f34b0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2f34b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2f34b4: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x2f34b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x2f34b8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f34b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f34bc: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x2f34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x2f34c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f34c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f34c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2f34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2f34c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f34c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f34cc: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2f34ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f34d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f34d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f34d4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2f34d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2f34d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f34d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f34dc: 0xc086488  jal         func_219220
    ctx->pc = 0x2F34DCu;
    SET_GPR_U32(ctx, 31, 0x2F34E4u);
    ctx->pc = 0x219220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219220u, 0x2F34DCu, 0x2F34E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F34E4u;
label_2f34e4:
    // 0x2f34e4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2f34e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f34e8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2f34e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F34ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F34ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F34F4u;
}
