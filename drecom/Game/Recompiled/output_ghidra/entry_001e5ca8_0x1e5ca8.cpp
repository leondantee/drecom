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

// Function: entry_001e5ca8
// Address: 0x1e5ca8 - 0x1e5cdc
void entry_001e5ca8_0x1e5ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e5ca8_0x1e5ca8");
#endif

    switch (ctx->pc) {
        case 0x1e5cb0u: goto label_1e5cb0;
        default: break;
    }

    ctx->pc = 0x1e5ca8u;

    // 0x1e5ca8: 0xc079630  jal         func_1E58C0
    ctx->pc = 0x1E5CA8u;
    SET_GPR_U32(ctx, 31, 0x1E5CB0u);
    ctx->pc = 0x1E58C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E58C0u, 0x1E5CA8u, 0x1E5CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5CB0u;
label_1e5cb0:
    // 0x1e5cb0: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x1e5cb0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e5cb4: 0x14f3bc  dsll32      $fp, $s4, 14
    ctx->pc = 0x1e5cb4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 20) << (32 + 14));
    // 0x1e5cb8: 0x1ef3be  dsrl32      $fp, $fp, 14
    ctx->pc = 0x1e5cb8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> (32 + 14));
    // 0x1e5cbc: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5CBCu;
    {
        const bool branch_taken_0x1e5cbc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cbc) {
            ctx->pc = 0x1E5CDCu;
            return;
        }
    }
    ctx->pc = 0x1E5CC4u;
    // 0x1e5cc4: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x1e5cc8: 0xa06001b0  sb          $zero, 0x1B0($v1)
    ctx->pc = 0x1e5cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 432), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e5ccc: 0x26350010  addiu       $s5, $s1, 0x10
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1e5cd0: 0x72a08e28  paddub      $s1, $s5, $zero
    ctx->pc = 0x1e5cd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1e5cd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E5CD4u;
    {
        const bool branch_taken_0x1e5cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5cd4) {
            ctx->pc = 0x1E5D18u;
            return;
        }
    }
    ctx->pc = 0x1E5CDCu;
}
