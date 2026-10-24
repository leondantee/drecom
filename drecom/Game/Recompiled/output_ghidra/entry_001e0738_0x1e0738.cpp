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

// Function: entry_001e0738
// Address: 0x1e0738 - 0x1e0770
void entry_001e0738_0x1e0738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0738_0x1e0738");
#endif

    switch (ctx->pc) {
        case 0x1e0758u: goto label_1e0758;
        default: break;
    }

    ctx->pc = 0x1e0738u;

    // 0x1e0738: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1e0738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e073c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1e073cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1e0740: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1e0740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1e0744: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1e0744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e0748: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0748u;
    {
        const bool branch_taken_0x1e0748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0748) {
            ctx->pc = 0x1E0770u;
            return;
        }
    }
    ctx->pc = 0x1E0750u;
    // 0x1e0750: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1E0750u;
    SET_GPR_U32(ctx, 31, 0x1E0758u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1E0750u, 0x1E0758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0758u;
label_1e0758:
    // 0x1e0758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1e0758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e075c: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x1e075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x1e0760: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1e0760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1e0764: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e0764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e0768: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e0768u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e076c: 0xa6020102  sh          $v0, 0x102($s0)
    ctx->pc = 0x1e076cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 258), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1e0770u;
}
