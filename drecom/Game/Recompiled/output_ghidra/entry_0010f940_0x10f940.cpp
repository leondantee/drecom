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

// Function: entry_0010f940
// Address: 0x10f940 - 0x10f958
void entry_0010f940_0x10f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f940_0x10f940");
#endif

    ctx->pc = 0x10f940u;

    // 0x10f940: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F940u;
    {
        const bool branch_taken_0x10f940 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F940u;
        // 0x10f944: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f940) {
            ctx->pc = 0x10F958u;
            return;
        }
    }
    ctx->pc = 0x10F948u;
    // 0x10f948: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x10f948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x10f94c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10f950: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10f954: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x10f954u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x10f958u;
}
