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

// Function: entry_00216860
// Address: 0x216860 - 0x216884
void entry_00216860_0x216860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216860_0x216860");
#endif

    ctx->pc = 0x216860u;

    // 0x216860: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x216860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x216864: 0xae82bc40  sw          $v0, -0x43C0($s4)
    ctx->pc = 0x216864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294949952), GPR_U32(ctx, 2));
    // 0x216868: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x216868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x21686c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x21686cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216870: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x216870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x216874: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216874u;
    {
        const bool branch_taken_0x216874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216874u;
        // 0x216878: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216874) {
            ctx->pc = 0x216884u;
            return;
        }
    }
    ctx->pc = 0x21687Cu;
    // 0x21687c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x21687cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216880: 0x8c55aaec  lw          $s5, -0x5514($v0)
    ctx->pc = 0x216880u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945516)));
    ctx->pc = 0x216884u;
}
