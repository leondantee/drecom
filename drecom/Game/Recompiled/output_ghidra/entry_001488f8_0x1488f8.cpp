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

// Function: entry_001488f8
// Address: 0x1488f8 - 0x148930
void entry_001488f8_0x1488f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001488f8_0x1488f8");
#endif

    switch (ctx->pc) {
        case 0x148904u: goto label_148904;
        case 0x148920u: goto label_148920;
        default: break;
    }

    ctx->pc = 0x1488f8u;

    // 0x1488f8: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1488f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1488fc: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1488FCu;
    SET_GPR_U32(ctx, 31, 0x148904u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1488FCu, 0x148904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148904u;
label_148904:
    // 0x148904: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148908: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x148908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14890c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14890cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148910: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x148910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
    // 0x148914: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148918: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x148918u;
    SET_GPR_U32(ctx, 31, 0x148920u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x148918u, 0x148920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148920u;
label_148920:
    // 0x148920: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x148920u;
    {
        const bool branch_taken_0x148920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148920) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148928u;
    // 0x148928: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x148928u;
    {
        const bool branch_taken_0x148928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148928) {
            ctx->pc = 0x148AD4u;
            return;
        }
    }
    ctx->pc = 0x148930u;
}
