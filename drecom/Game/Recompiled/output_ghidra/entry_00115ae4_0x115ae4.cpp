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

// Function: entry_00115ae4
// Address: 0x115ae4 - 0x115af4
void entry_00115ae4_0x115ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115ae4_0x115ae4");
#endif

    ctx->pc = 0x115ae4u;

    // 0x115ae4: 0x8e020e20  lw          $v0, 0xE20($s0)
    ctx->pc = 0x115ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3616)));
    // 0x115ae8: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x115AE8u;
    {
        const bool branch_taken_0x115ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115ae8) {
            ctx->pc = 0x115AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115AE8u;
            // 0x115aec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115AF4u;
            return;
        }
    }
    ctx->pc = 0x115AF0u;
    // 0x115af0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x115af4u;
}
