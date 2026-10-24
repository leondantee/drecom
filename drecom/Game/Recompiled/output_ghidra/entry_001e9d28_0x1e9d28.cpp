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

// Function: entry_001e9d28
// Address: 0x1e9d28 - 0x1e9d70
void entry_001e9d28_0x1e9d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e9d28_0x1e9d28");
#endif

    switch (ctx->pc) {
        case 0x1e9d44u: goto label_1e9d44;
        default: break;
    }

    ctx->pc = 0x1e9d28u;

    // 0x1e9d28: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x1e9d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x1e9d2c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1e9d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9d30: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1e9d30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e9d34: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1e9d34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1e9d38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1e9d38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9d3c: 0xc05d328  jal         func_174CA0
    ctx->pc = 0x1E9D3Cu;
    SET_GPR_U32(ctx, 31, 0x1E9D44u);
    ctx->pc = 0x174CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174CA0u, 0x1E9D3Cu, 0x1E9D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9D44u;
label_1e9d44:
    // 0x1e9d44: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x1e9d44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e9d48: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1e9d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9d4c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1e9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1e9d50: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x1e9d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x1e9d54: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x1e9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1e9d58: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1e9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1e9d5c: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1e9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
    // 0x1e9d60: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1e9d60u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9d64: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1e9d64u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1e9d68: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1E9D68u;
    {
        const bool branch_taken_0x1e9d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9d68) {
            ctx->pc = 0x1E9DF8u;
            return;
        }
    }
    ctx->pc = 0x1E9D70u;
}
