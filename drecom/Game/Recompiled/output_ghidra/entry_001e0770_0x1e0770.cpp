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

// Function: entry_001e0770
// Address: 0x1e0770 - 0x1e07a8
void entry_001e0770_0x1e0770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0770_0x1e0770");
#endif

    switch (ctx->pc) {
        case 0x1e0790u: goto label_1e0790;
        default: break;
    }

    ctx->pc = 0x1e0770u;

    // 0x1e0770: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e0774: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e0774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e0778: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1e0778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1e077c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0780: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0780u;
    {
        const bool branch_taken_0x1e0780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0780) {
            ctx->pc = 0x1E07A8u;
            return;
        }
    }
    ctx->pc = 0x1E0788u;
    // 0x1e0788: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0788u;
    SET_GPR_U32(ctx, 31, 0x1E0790u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0788u, 0x1E0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0790u;
label_1e0790:
    // 0x1e0790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e0794: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e0794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e0798: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e0798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e079c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e07a0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e07a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e07a4: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e07a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e07a8u;
}
