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

// Function: entry_00334c38
// Address: 0x334c38 - 0x334c84
void entry_00334c38_0x334c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00334c38_0x334c38");
#endif

    switch (ctx->pc) {
        case 0x334c5cu: goto label_334c5c;
        default: break;
    }

    ctx->pc = 0x334c38u;

    // 0x334c38: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x334c38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x334c3c: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x334C3Cu;
    {
        const bool branch_taken_0x334c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x334c3c) {
            ctx->pc = 0x3349C0u;
            return;
        }
    }
    ctx->pc = 0x334C44u;
    // 0x334c44: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x334c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x334c48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c4c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x334c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x334c50: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x334c50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x334c54: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C54u;
    SET_GPR_U32(ctx, 31, 0x334C5Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C54u, 0x334C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C5Cu;
label_334c5c:
    // 0x334c5c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x334c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x334c60: 0x8c226570  lw          $v0, 0x6570($at)
    ctx->pc = 0x334c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x396570u));
    // 0x334c64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x334C64u;
    {
        const bool branch_taken_0x334c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x334c64) {
            ctx->pc = 0x334C84u;
            return;
        }
    }
    ctx->pc = 0x334C6Cu;
    // 0x334c6c: 0x2655001c  addiu       $s5, $s2, 0x1C
    ctx->pc = 0x334c6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x334c70: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x334c70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x334c74: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x334c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x334c78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x334c78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x334c7c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x334C7Cu;
    SET_GPR_U32(ctx, 31, 0x334C84u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x334C7Cu, 0x334C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334C84u;
}
