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

// Function: entry_0028c470
// Address: 0x28c470 - 0x28c4c0
void entry_0028c470_0x28c470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c470_0x28c470");
#endif

    switch (ctx->pc) {
        case 0x28c49cu: goto label_28c49c;
        case 0x28c4b4u: goto label_28c4b4;
        default: break;
    }

    ctx->pc = 0x28c470u;

    // 0x28c470: 0x8fb50158  lw          $s5, 0x158($sp)
    ctx->pc = 0x28c470u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x28c474: 0xae950008  sw          $s5, 0x8($s4)
    ctx->pc = 0x28c474u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 21));
    // 0x28c478: 0x92036624  lbu         $v1, 0x6624($s0)
    ctx->pc = 0x28c478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28c47c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28c47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28c480: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x28C480u;
    {
        const bool branch_taken_0x28c480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c480) {
            ctx->pc = 0x28C4C0u;
            return;
        }
    }
    ctx->pc = 0x28C488u;
    // 0x28c488: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c48c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c48cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c490: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x28c490u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x28c494: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C494u;
    SET_GPR_U32(ctx, 31, 0x28C49Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C494u, 0x28C49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C49Cu;
label_28c49c:
    // 0x28c49c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28c49cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c4a0: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x28c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x28c4a4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28c4a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28c4a8: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x28c4a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x28c4ac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x28C4ACu;
    SET_GPR_U32(ctx, 31, 0x28C4B4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x28C4ACu, 0x28C4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28C4B4u;
label_28c4b4:
    // 0x28c4b4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x28c4b4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28c4b8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28C4B8u;
    {
        const bool branch_taken_0x28c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c4b8) {
            ctx->pc = 0x28C504u;
            return;
        }
    }
    ctx->pc = 0x28C4C0u;
}
