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

// Function: entry_001cb824
// Address: 0x1cb824 - 0x1cb850
void entry_001cb824_0x1cb824(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb824_0x1cb824");
#endif

    switch (ctx->pc) {
        case 0x1cb84cu: goto label_1cb84c;
        default: break;
    }

    ctx->pc = 0x1cb824u;

    // 0x1cb824: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb828: 0x8465127c  lh          $a1, 0x127C($v1)
    ctx->pc = 0x1cb828u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1cb82c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x1cb82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1cb830: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cb830u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cb834: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x1cb834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1cb838: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB838u;
    {
        const bool branch_taken_0x1cb838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb838) {
            ctx->pc = 0x1CB850u;
            return;
        }
    }
    ctx->pc = 0x1CB840u;
    // 0x1cb840: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1cb840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb844: 0xc072b30  jal         func_1CACC0
    ctx->pc = 0x1CB844u;
    SET_GPR_U32(ctx, 31, 0x1CB84Cu);
    ctx->pc = 0x1CACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CACC0u, 0x1CB844u, 0x1CB84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB84Cu;
label_1cb84c:
    // 0x1cb84c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1cb84cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1cb850u;
}
