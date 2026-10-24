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

// Function: entry_0010ff40
// Address: 0x10ff40 - 0x10ff60
void entry_0010ff40_0x10ff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ff40_0x10ff40");
#endif

    switch (ctx->pc) {
        case 0x10ff54u: goto label_10ff54;
        default: break;
    }

    ctx->pc = 0x10ff40u;

    // 0x10ff40: 0x2842020a  slti        $v0, $v0, 0x20A
    ctx->pc = 0x10ff40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)522) ? 1 : 0);
    // 0x10ff44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FF44u;
    {
        const bool branch_taken_0x10ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF44u;
        // 0x10ff48: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff44) {
            ctx->pc = 0x10FF60u;
            return;
        }
    }
    ctx->pc = 0x10FF4Cu;
    // 0x10ff4c: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FF4Cu;
    SET_GPR_U32(ctx, 31, 0x10FF54u);
    ctx->pc = 0x10FF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF4Cu;
    // 0x10ff50: 0x2484d018  addiu       $a0, $a0, -0x2FE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FF54u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FF54u) { return; }
    ctx->pc = 0x10FF54u;
label_10ff54:
    // 0x10ff54: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x10ff54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x10ff58: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10FF58u;
    {
        const bool branch_taken_0x10ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF58u;
        // 0x10ff5c: 0x2402ff88  addiu       $v0, $zero, -0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff58) {
            ctx->pc = 0x10FF88u;
            return;
        }
    }
    ctx->pc = 0x10FF60u;
}
