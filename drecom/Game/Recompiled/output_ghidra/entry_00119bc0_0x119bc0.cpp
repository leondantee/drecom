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

// Function: entry_00119bc0
// Address: 0x119bc0 - 0x119be0
void entry_00119bc0_0x119bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119bc0_0x119bc0");
#endif

    switch (ctx->pc) {
        case 0x119bd8u: goto label_119bd8;
        default: break;
    }

    ctx->pc = 0x119bc0u;

    // 0x119bc0: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x119bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x119bc4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x119bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x119bc8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x119bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x119bcc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x119bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x119bd0: 0xc046416  jal         func_119058
    ctx->pc = 0x119BD0u;
    SET_GPR_U32(ctx, 31, 0x119BD8u);
    ctx->pc = 0x119BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119BD0u;
    // 0x119bd4: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119058u, 0x119BD0u, 0x119BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119BD8u;
label_119bd8:
    // 0x119bd8: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x119bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x119bdc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x119bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->pc = 0x119be0u;
}
