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

// Function: entry_00108fc0
// Address: 0x108fc0 - 0x108ffc
void entry_00108fc0_0x108fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00108fc0_0x108fc0");
#endif

    ctx->pc = 0x108fc0u;

    // 0x108fc0: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x108fc4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x108fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x108fc8: 0x8cc70010  lw          $a3, 0x10($a2)
    ctx->pc = 0x108fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x108fcc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x108fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x108fd0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x108fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x108fd4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x108fd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x108fd8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x108fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x108fdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x108fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x108fe0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x108fe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x108fe4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x108fe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x108fe8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x108fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x108fec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108FECu;
    {
        const bool branch_taken_0x108fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108FECu;
        // 0x108ff0: 0xacc5000c  sw          $a1, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108fec) {
            ctx->pc = 0x108FFCu;
            return;
        }
    }
    ctx->pc = 0x108FF4u;
    // 0x108ff4: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x108ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x108ff8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x108ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    ctx->pc = 0x108ffcu;
}
