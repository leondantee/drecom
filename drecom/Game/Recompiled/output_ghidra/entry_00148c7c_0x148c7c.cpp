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

// Function: entry_00148c7c
// Address: 0x148c7c - 0x148cb4
void entry_00148c7c_0x148c7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148c7c_0x148c7c");
#endif

    switch (ctx->pc) {
        case 0x148c88u: goto label_148c88;
        case 0x148ca4u: goto label_148ca4;
        default: break;
    }

    ctx->pc = 0x148c7cu;

    // 0x148c7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148c7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x148c80: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x148C80u;
    SET_GPR_U32(ctx, 31, 0x148C88u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148C80u, 0x148C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148C88u;
label_148c88:
    // 0x148c88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c8c: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x148c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x148c90: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148c94: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x148c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
    // 0x148c98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x148c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x148c9c: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x148C9Cu;
    SET_GPR_U32(ctx, 31, 0x148CA4u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x148C9Cu, 0x148CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148CA4u;
label_148ca4:
    // 0x148ca4: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x148CA4u;
    {
        const bool branch_taken_0x148ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148ca4) {
            ctx->pc = 0x148E58u;
            return;
        }
    }
    ctx->pc = 0x148CACu;
    // 0x148cac: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x148CACu;
    {
        const bool branch_taken_0x148cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148cac) {
            ctx->pc = 0x148E58u;
            return;
        }
    }
    ctx->pc = 0x148CB4u;
}
