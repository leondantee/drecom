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

// Function: entry_00116e98
// Address: 0x116e98 - 0x116eb8
void entry_00116e98_0x116e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116e98_0x116e98");
#endif

    switch (ctx->pc) {
        case 0x116ea0u: goto label_116ea0;
        default: break;
    }

    ctx->pc = 0x116e98u;

    // 0x116e98: 0xc046372  jal         func_118DC8
    ctx->pc = 0x116E98u;
    SET_GPR_U32(ctx, 31, 0x116EA0u);
    ctx->pc = 0x116E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116E98u;
    // 0x116e9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC8u, 0x116E98u, 0x116EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116EA0u;
label_116ea0:
    // 0x116ea0: 0xa2a00000  sb          $zero, 0x0($s5)
    ctx->pc = 0x116ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x116ea4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x116ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x116ea8: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x116ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x116eac: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x116eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x116eb0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x116EB0u;
    {
        const bool branch_taken_0x116eb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x116eb0) {
            ctx->pc = 0x116EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116EB0u;
            // 0x116eb4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116EB8u;
            return;
        }
    }
    ctx->pc = 0x116EB8u;
}
