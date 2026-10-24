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

// Function: entry_0010dad8
// Address: 0x10dad8 - 0x10db10
void entry_0010dad8_0x10dad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dad8_0x10dad8");
#endif

    switch (ctx->pc) {
        case 0x10daf4u: goto label_10daf4;
        case 0x10dafcu: goto label_10dafc;
        default: break;
    }

    ctx->pc = 0x10dad8u;

    // 0x10dad8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x10dadc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x10dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x10dae0: 0x8c443b80  lw          $a0, 0x3B80($v0)
    ctx->pc = 0x10dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B3B80u));
    // 0x10dae4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x10dae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x10dae8: 0xac7145b0  sw          $s1, 0x45B0($v1)
    ctx->pc = 0x10dae8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3845B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3845B0u, _value); } while (0);
    // 0x10daec: 0xc084a48  jal         func_212920
    ctx->pc = 0x10DAECu;
    SET_GPR_U32(ctx, 31, 0x10DAF4u);
    ctx->pc = 0x10DAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAECu;
    // 0x10daf0: 0x24a53b88  addiu       $a1, $a1, 0x3B88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212920u;
    {
        ctx->pc = 0x10DAF4u;
        ps2_syscalls::ReferThreadStatus(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DAF4u) { return; }
    ctx->pc = 0x10DAF4u;
label_10daf4:
    // 0x10daf4: 0xc043a1e  jal         func_10E878
    ctx->pc = 0x10DAF4u;
    SET_GPR_U32(ctx, 31, 0x10DAFCu);
    ctx->pc = 0x10DAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAF4u;
    // 0x10daf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E878u, 0x10DAF4u, 0x10DAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAFCu;
label_10dafc:
    // 0x10dafc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10DAFCu;
    {
        const bool branch_taken_0x10dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DAFCu;
        // 0x10db00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10dafc) {
            ctx->pc = 0x10DB18u;
            return;
        }
    }
    ctx->pc = 0x10DB04u;
    // 0x10db04: 0x8e0445b8  lw          $a0, 0x45B8($s0)
    ctx->pc = 0x10db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17848)));
    // 0x10db08: 0xc084a90  jal         func_212A40
    ctx->pc = 0x10DB08u;
    SET_GPR_U32(ctx, 31, 0x10DB10u);
    ctx->pc = 0x212A40u;
    {
        ctx->pc = 0x10DB10u;
        ps2_syscalls::SignalSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DB10u) { return; }
    ctx->pc = 0x10DB10u;
}
