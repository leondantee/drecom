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

// Function: Set_light_bank
// Address: 0x176e70 - 0x176ee4
void Set_light_bank_0x176e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_light_bank_0x176e70");
#endif

    switch (ctx->pc) {
        case 0x176eb8u: goto label_176eb8;
        case 0x176ed0u: goto label_176ed0;
        default: break;
    }

    ctx->pc = 0x176e70u;

    // 0x176e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x176e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x176e74: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x176e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x176e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x176e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x176e7c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x176e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x176e80: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x176e84: 0x8c221a94  lw          $v0, 0x1A94($at)
    ctx->pc = 0x176e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A94u));
    // 0x176e88: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x176e88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x176e8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x176e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x176e90: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x176e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x176e94: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x176e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176e98: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x176e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176e9c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x176e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176ea0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x176ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x176ea4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x176ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x176ea8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x176ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x176eac: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x176eacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x176eb0: 0xc05d504  jal         func_175410
    ctx->pc = 0x176EB0u;
    SET_GPR_U32(ctx, 31, 0x176EB8u);
    ctx->pc = 0x175410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175410u, 0x176EB0u, 0x176EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176EB8u;
label_176eb8:
    // 0x176eb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x176ebc: 0x8c240de0  lw          $a0, 0xDE0($at)
    ctx->pc = 0x176ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0DE0u));
    // 0x176ec0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x176ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x176ec4: 0x94250b62  lhu         $a1, 0xB62($at)
    ctx->pc = 0x176ec4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x5D0B62u));
    // 0x176ec8: 0xc05d8c4  jal         func_176310
    ctx->pc = 0x176EC8u;
    SET_GPR_U32(ctx, 31, 0x176ED0u);
    ctx->pc = 0x176310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176310u, 0x176EC8u, 0x176ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176ED0u;
label_176ed0:
    // 0x176ed0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x176ed0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x176ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ed8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x176ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x176edc: 0x3e00008  jr          $ra
    ctx->pc = 0x176EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176EE4u;
}
