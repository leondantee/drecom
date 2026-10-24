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

// Function: entry_001e4e94
// Address: 0x1e4e94 - 0x1e4ed8
void entry_001e4e94_0x1e4e94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4e94_0x1e4e94");
#endif

    switch (ctx->pc) {
        case 0x1e4ed0u: goto label_1e4ed0;
        default: break;
    }

    ctx->pc = 0x1e4e94u;

    // 0x1e4e94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1e4e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1e4e98: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1e4e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1e4e9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e4e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1e4ea0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1e4ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e4ea4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4eac: 0x8c4701f0  lw          $a3, 0x1F0($v0)
    ctx->pc = 0x1e4eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x1e4eb0: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4eb4: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x1e4eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e4eb8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e4eb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e4ebc: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x1e4ebcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1e4ec0: 0x24480020  addiu       $t0, $v0, 0x20
    ctx->pc = 0x1e4ec0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1e4ec4: 0xc7ac009c  lwc1        $f12, 0x9C($sp)
    ctx->pc = 0x1e4ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1e4ec8: 0xc0796a8  jal         func_1E5AA0
    ctx->pc = 0x1E4EC8u;
    SET_GPR_U32(ctx, 31, 0x1E4ED0u);
    ctx->pc = 0x1E5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AA0u, 0x1E4EC8u, 0x1E4ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4ED0u;
label_1e4ed0:
    // 0x1e4ed0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1E4ED0u;
    {
        const bool branch_taken_0x1e4ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4ed0) {
            ctx->pc = 0x1E4F10u;
            return;
        }
    }
    ctx->pc = 0x1E4ED8u;
}
