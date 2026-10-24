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

// Function: entry_00116fe8
// Address: 0x116fe8 - 0x117008
void entry_00116fe8_0x116fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116fe8_0x116fe8");
#endif

    ctx->pc = 0x116fe8u;

    // 0x116fe8: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x116fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x116fec: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x116FECu;
    {
        const bool branch_taken_0x116fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x116fec) {
            ctx->pc = 0x116FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116FECu;
            // 0x116ff0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117008u;
            return;
        }
    }
    ctx->pc = 0x116FF4u;
    // 0x116ff4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x116ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x116ff8: 0x8c43490c  lw          $v1, 0x490C($v0)
    ctx->pc = 0x116ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38490Cu));
    // 0x116ffc: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x116ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
    // 0x117000: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x117000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x117004: 0x0  nop
    ctx->pc = 0x117004u;
    // NOP
    ctx->pc = 0x117008u;
}
