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

// Function: make_dummy_scene_head
// Address: 0x1d9a90 - 0x1d9af8
void make_dummy_scene_head_0x1d9a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("make_dummy_scene_head_0x1d9a90");
#endif

    switch (ctx->pc) {
        case 0x1d9accu: goto label_1d9acc;
        default: break;
    }

    ctx->pc = 0x1d9a90u;

    // 0x1d9a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9a94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d9a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d9a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d9a9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1d9a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1d9aa0: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1d9aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1d9aa4: 0x8e020a68  lw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1d9aa8: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x1d9aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1d9aac: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d9aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d9ab0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9ab4: 0xae020a68  sw          $v0, 0xA68($s0)
    ctx->pc = 0x1d9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 2));
    // 0x1d9ab8: 0x8e040a68  lw          $a0, 0xA68($s0)
    ctx->pc = 0x1d9ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d9abc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1d9abcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d9ac0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x1d9ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d9ac4: 0xc046314  jal         func_118C50
    ctx->pc = 0x1D9AC4u;
    SET_GPR_U32(ctx, 31, 0x1D9ACCu);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x1D9ACCu;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D9ACCu) { return; }
    ctx->pc = 0x1D9ACCu;
label_1d9acc:
    // 0x1d9acc: 0x8e030a68  lw          $v1, 0xA68($s0)
    ctx->pc = 0x1d9accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2664)));
    // 0x1d9ad0: 0xae031a14  sw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 3));
    // 0x1d9ad4: 0x26040a68  addiu       $a0, $s0, 0xA68
    ctx->pc = 0x1d9ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2664));
    // 0x1d9ad8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9adc: 0x2463006c  addiu       $v1, $v1, 0x6C
    ctx->pc = 0x1d9adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x1d9ae0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1d9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1d9ae4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d9ae4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9ae8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9aec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d9aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d9af0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9AF8u;
}
