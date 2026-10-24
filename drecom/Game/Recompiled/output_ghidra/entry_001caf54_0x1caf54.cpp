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

// Function: entry_001caf54
// Address: 0x1caf54 - 0x1caf84
void entry_001caf54_0x1caf54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001caf54_0x1caf54");
#endif

    switch (ctx->pc) {
        case 0x1caf68u: goto label_1caf68;
        default: break;
    }

    ctx->pc = 0x1caf54u;

    // 0x1caf54: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1caf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf58: 0xc48c00d4  lwc1        $f12, 0xD4($a0)
    ctx->pc = 0x1caf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1caf5c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1caf5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1caf60: 0xc056f24  jal         func_15BC90
    ctx->pc = 0x1CAF60u;
    SET_GPR_U32(ctx, 31, 0x1CAF68u);
    ctx->pc = 0x15BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BC90u, 0x1CAF60u, 0x1CAF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF68u;
label_1caf68:
    // 0x1caf68: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1caf68u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1caf6c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CAF6Cu;
    {
        const bool branch_taken_0x1caf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf6c) {
            ctx->pc = 0x1CAF84u;
            return;
        }
    }
    ctx->pc = 0x1CAF74u;
    // 0x1caf74: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf78: 0x8c6413ec  lw          $a0, 0x13EC($v1)
    ctx->pc = 0x1caf78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5100)));
    // 0x1caf7c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1caf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1caf80: 0xac6413e8  sw          $a0, 0x13E8($v1)
    ctx->pc = 0x1caf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 4));
    ctx->pc = 0x1caf84u;
}
