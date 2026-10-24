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

// Function: entry_0013fd50
// Address: 0x13fd50 - 0x13fda0
void entry_0013fd50_0x13fd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013fd50_0x13fd50");
#endif

    switch (ctx->pc) {
        case 0x13fd64u: goto label_13fd64;
        case 0x13fd98u: goto label_13fd98;
        default: break;
    }

    ctx->pc = 0x13fd50u;

    // 0x13fd50: 0x27a415c0  addiu       $a0, $sp, 0x15C0
    ctx->pc = 0x13fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fd54: 0x27b11610  addiu       $s1, $sp, 0x1610
    ctx->pc = 0x13fd54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd58: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x13fd58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x13fd5c: 0xc04f9c0  jal         func_13E700
    ctx->pc = 0x13FD5Cu;
    SET_GPR_U32(ctx, 31, 0x13FD64u);
    ctx->pc = 0x13E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E700u, 0x13FD5Cu, 0x13FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD64u;
label_13fd64:
    // 0x13fd64: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x13fd64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd68: 0x32040208  andi        $a0, $s0, 0x208
    ctx->pc = 0x13fd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)520);
    // 0x13fd6c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FD6Cu;
    {
        const bool branch_taken_0x13fd6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd6c) {
            ctx->pc = 0x13FDA0u;
            return;
        }
    }
    ctx->pc = 0x13FD74u;
    // 0x13fd74: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
    // 0x13fd78: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x13fd78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x13fd7c: 0x27a21610  addiu       $v0, $sp, 0x1610
    ctx->pc = 0x13fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd80: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x13fd80u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd84: 0x27a515c0  addiu       $a1, $sp, 0x15C0
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 5568));
    // 0x13fd88: 0x27a61610  addiu       $a2, $sp, 0x1610
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 5648));
    // 0x13fd8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd90: 0xc04f984  jal         func_13E610
    ctx->pc = 0x13FD90u;
    SET_GPR_U32(ctx, 31, 0x13FD98u);
    ctx->pc = 0x13E610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E610u, 0x13FD90u, 0x13FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FD98u;
label_13fd98:
    // 0x13fd98: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x13fd98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x13fd9c: 0x0  nop
    ctx->pc = 0x13fd9cu;
    // NOP
    ctx->pc = 0x13fda0u;
}
