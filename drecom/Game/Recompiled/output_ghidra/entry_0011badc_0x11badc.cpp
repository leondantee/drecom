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

// Function: entry_0011badc
// Address: 0x11badc - 0x11baec
void entry_0011badc_0x11badc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011badc_0x11badc");
#endif

    ctx->pc = 0x11badcu;

    // 0x11badc: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BADCu;
    {
        const bool branch_taken_0x11badc = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x11BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BADCu;
        // 0x11bae0: 0xafb2020c  sw          $s2, 0x20C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11badc) {
            ctx->pc = 0x11BAECu;
            return;
        }
    }
    ctx->pc = 0x11BAE4u;
    // 0x11bae4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x11bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x11bae8: 0x3c2f024  and         $fp, $fp, $v0
    ctx->pc = 0x11bae8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    ctx->pc = 0x11baecu;
}
