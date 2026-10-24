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

// Function: entry_0013fcf8
// Address: 0x13fcf8 - 0x13fd50
void entry_0013fcf8_0x13fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fcf8_0x13fcf8");
#endif

    switch (ctx->pc) {
        case 0x13fd10u: goto label_13fd10;
        case 0x13fd4cu: goto label_13fd4c;
        default: break;
    }

    ctx->pc = 0x13fcf8u;

    // 0x13fcf8: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fcfc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x13fcfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x13fd00: 0x27b11610  addiu       $s1, $sp, 0x1610
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd04: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13fd04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13fd08: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FD08u;
    SET_GPR_U32(ctx, 31, 0x13FD10u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FD08u, 0x13FD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD10u;
label_13fd10:
    // 0x13fd10: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fd10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd14: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x13fd14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x13fd18: 0x32050104  andi        $a1, $s0, 0x104
    ctx->pc = 0x13fd18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)260);
    // 0x13fd1c: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x13FD1Cu;
    {
        const bool branch_taken_0x13fd1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd1c) {
            ctx->pc = 0x13FD50u;
            return;
        }
    }
    ctx->pc = 0x13FD24u;
    // 0x13fd24: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x13fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x13fd28: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x13fd28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fd2c: 0x27a41610  addiu       $a0, $sp, 0x1610
    ctx->pc = 0x13fd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd30: 0x27a215c0  addiu       $v0, $sp, 0x15C0
    ctx->pc = 0x13fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fd34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fd34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd38: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd3c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x13fd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd40: 0x72203e28  paddub      $a3, $s1, $zero
    ctx->pc = 0x13fd40u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13fd44: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FD44u;
    SET_GPR_U32(ctx, 31, 0x13FD4Cu);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FD44u, 0x13FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD4Cu;
label_13fd4c:
    // 0x13fd4c: 0x0  nop
    ctx->pc = 0x13fd4cu;
    // NOP
    ctx->pc = 0x13fd50u;
}
