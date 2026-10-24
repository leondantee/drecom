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

// Function: entry_002130c8
// Address: 0x2130c8 - 0x2130fc
void entry_002130c8_0x2130c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002130c8_0x2130c8");
#endif

    switch (ctx->pc) {
        case 0x2130d0u: goto label_2130d0;
        case 0x2130e4u: goto label_2130e4;
        default: break;
    }

    ctx->pc = 0x2130c8u;

    // 0x2130c8: 0xc084a80  jal         func_212A00
    ctx->pc = 0x2130C8u;
    SET_GPR_U32(ctx, 31, 0x2130D0u);
    ctx->pc = 0x2130CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2130C8u;
    // 0x2130cc: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A00u;
    {
        ctx->pc = 0x2130D0u;
        ps2_syscalls::EndOfHeap(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2130D0u) { return; }
    ctx->pc = 0x2130D0u;
label_2130d0:
    // 0x2130d0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2130d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2130d4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2130D4u;
    {
        const bool branch_taken_0x2130d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2130d4) {
            ctx->pc = 0x2130D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2130D4u;
            // 0x2130d8: 0x8e42aac4  lw          $v0, -0x553C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2130FCu;
            return;
        }
    }
    ctx->pc = 0x2130DCu;
    // 0x2130dc: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x2130DCu;
    SET_GPR_U32(ctx, 31, 0x2130E4u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x2130DCu, 0x2130E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2130E4u;
label_2130e4:
    // 0x2130e4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2130e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2130e8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2130e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2130ec: 0x42000038  ei
    ctx->pc = 0x2130ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2130f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2130f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2130f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2130F4u;
    {
        const bool branch_taken_0x2130f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2130F4u;
        // 0x2130f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2130f4) {
            ctx->pc = 0x213108u;
            return;
        }
    }
    ctx->pc = 0x2130FCu;
}
