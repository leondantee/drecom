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

// Function: entry_0034680c
// Address: 0x34680c - 0x346844
void entry_0034680c_0x34680c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034680c_0x34680c");
#endif

    switch (ctx->pc) {
        case 0x34681cu: goto label_34681c;
        case 0x346840u: goto label_346840;
        default: break;
    }

    ctx->pc = 0x34680cu;

    // 0x34680c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x34680cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346810: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x346810u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x346814: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x346814u;
    SET_GPR_U32(ctx, 31, 0x34681Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x346814u, 0x34681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34681Cu;
label_34681c:
    // 0x34681c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x34681cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346820: 0x94440a00  lhu         $a0, 0xA00($v0)
    ctx->pc = 0x346820u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x346824: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x346824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x346828: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x346828u;
    {
        const bool branch_taken_0x346828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x346828) {
            ctx->pc = 0x346844u;
            return;
        }
    }
    ctx->pc = 0x346830u;
    // 0x346830: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x346830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346834: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x346834u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x346838: 0xc05cd10  jal         func_173440
    ctx->pc = 0x346838u;
    SET_GPR_U32(ctx, 31, 0x346840u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x346838u, 0x346840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346840u;
label_346840:
    // 0x346840: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x346840u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x346844u;
}
