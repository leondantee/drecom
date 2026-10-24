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

// Function: entry_00148350
// Address: 0x148350 - 0x148388
void entry_00148350_0x148350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148350_0x148350");
#endif

    switch (ctx->pc) {
        case 0x14835cu: goto label_14835c;
        case 0x148378u: goto label_148378;
        default: break;
    }

    ctx->pc = 0x148350u;

    // 0x148350: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148354: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148354u;
    SET_GPR_U32(ctx, 31, 0x14835Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148354u, 0x14835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14835Cu;
label_14835c:
    // 0x14835c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148360: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x148360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148364: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148368: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x148368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
    // 0x14836c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148370: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x148370u;
    SET_GPR_U32(ctx, 31, 0x148378u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x148370u, 0x148378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148378u;
label_148378:
    // 0x148378: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x148378u;
    {
        const bool branch_taken_0x148378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148378) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x148380u;
    // 0x148380: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x148380u;
    {
        const bool branch_taken_0x148380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148380) {
            ctx->pc = 0x148520u;
            return;
        }
    }
    ctx->pc = 0x148388u;
}
