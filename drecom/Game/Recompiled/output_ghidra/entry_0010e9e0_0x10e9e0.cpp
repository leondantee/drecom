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

// Function: entry_0010e9e0
// Address: 0x10e9e0 - 0x10ea18
void entry_0010e9e0_0x10e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e9e0_0x10e9e0");
#endif

    switch (ctx->pc) {
        case 0x10e9fcu: goto label_10e9fc;
        case 0x10ea04u: goto label_10ea04;
        default: break;
    }

    ctx->pc = 0x10e9e0u;

    // 0x10e9e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10e9e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10e9e8: 0x8c443b80  lw          $a0, 0x3B80($v0)
    ctx->pc = 0x10e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B3B80u));
    // 0x10e9ec: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x10e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x10e9f0: 0xac7145ac  sw          $s1, 0x45AC($v1)
    ctx->pc = 0x10e9f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3845ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845ACu, _value); } while (0);
    // 0x10e9f4: 0xc084a48  jal         func_212920
    ctx->pc = 0x10E9F4u;
    SET_GPR_U32(ctx, 31, 0x10E9FCu);
    ctx->pc = 0x10E9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9F4u;
    // 0x10e9f8: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    {
        ctx->pc = 0x10E9FCu;
        ps2_syscalls::ReferThreadStatus(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E9FCu) { return; }
    ctx->pc = 0x10E9FCu;
label_10e9fc:
    // 0x10e9fc: 0xc043a46  jal         func_10E918
    ctx->pc = 0x10E9FCu;
    SET_GPR_U32(ctx, 31, 0x10EA04u);
    ctx->pc = 0x10EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E9FCu;
    // 0x10ea00: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E918u, 0x10E9FCu, 0x10EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA04u;
label_10ea04:
    // 0x10ea04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10EA04u;
    {
        const bool branch_taken_0x10ea04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA04u;
        // 0x10ea08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea04) {
            ctx->pc = 0x10EA20u;
            return;
        }
    }
    ctx->pc = 0x10EA0Cu;
    // 0x10ea0c: 0x8e0445bc  lw          $a0, 0x45BC($s0)
    ctx->pc = 0x10ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17852)));
    // 0x10ea10: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10EA10u;
    SET_GPR_U32(ctx, 31, 0x10EA18u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10EA18u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EA18u) { return; }
    ctx->pc = 0x10EA18u;
}
