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

// Function: entry_003227a0
// Address: 0x3227a0 - 0x3227f4
void entry_003227a0_0x3227a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003227a0_0x3227a0");
#endif

    switch (ctx->pc) {
        case 0x3227c0u: goto label_3227c0;
        default: break;
    }

    ctx->pc = 0x3227a0u;

    // 0x3227a0: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x3227a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3227a4: 0x1440fe90  bnez        $v0, . + 4 + (-0x170 << 2)
    ctx->pc = 0x3227A4u;
    {
        const bool branch_taken_0x3227a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3227a4) {
            ctx->pc = 0x3221E8u;
            return;
        }
    }
    ctx->pc = 0x3227ACu;
    // 0x3227ac: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x3227acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x3227b0: 0x24539ea0  addiu       $s3, $v0, -0x6160
    ctx->pc = 0x3227b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x3227b4: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x3227b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x3227b8: 0xc0a1030  jal         func_2840C0
    ctx->pc = 0x3227B8u;
    SET_GPR_U32(ctx, 31, 0x3227C0u);
    ctx->pc = 0x2840C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2840C0u, 0x3227B8u, 0x3227C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227C0u;
label_3227c0:
    // 0x3227c0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x3227c0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3227c4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3227c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3227c8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3227c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3227cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3227ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3227d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3227d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3227d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3227d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3227d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3227d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3227dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3227dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3227e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3227e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3227e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3227e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3227e8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x3227e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3227ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3227ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3227ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3227F4u;
}
