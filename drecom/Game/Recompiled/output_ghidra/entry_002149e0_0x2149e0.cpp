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

// Function: entry_002149e0
// Address: 0x2149e0 - 0x214a14
void entry_002149e0_0x2149e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002149e0_0x2149e0");
#endif

    switch (ctx->pc) {
        case 0x2149e0u: goto label_2149e0;
        case 0x2149e4u: goto label_2149e4;
        case 0x2149e8u: goto label_2149e8;
        case 0x2149ecu: goto label_2149ec;
        case 0x2149f0u: goto label_2149f0;
        case 0x2149f4u: goto label_2149f4;
        case 0x2149f8u: goto label_2149f8;
        case 0x2149fcu: goto label_2149fc;
        case 0x214a00u: goto label_214a00;
        case 0x214a04u: goto label_214a04;
        case 0x214a08u: goto label_214a08;
        case 0x214a0cu: goto label_214a0c;
        case 0x214a10u: goto label_214a10;
        default: break;
    }

    ctx->pc = 0x2149e0u;

label_2149e0:
    // 0x2149e0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x2149e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_2149e4:
    // 0x2149e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2149e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2149e8:
    // 0x2149e8: 0xc66cfff8  lwc1        $f12, -0x8($s3)
    ctx->pc = 0x2149e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2149ec:
    // 0x2149ec: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2149ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2149f0:
    // 0x2149f0: 0x0  nop
    ctx->pc = 0x2149f0u;
    // NOP
label_2149f4:
    // 0x2149f4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_2149f8:
    if (ctx->pc == 0x2149F8u) {
        ctx->pc = 0x2149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149F4u;
        // 0x2149f8: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149FCu;
        goto label_2149fc;
    }
    ctx->pc = 0x2149F4u;
    {
        const bool branch_taken_0x2149f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2149F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149F4u;
        // 0x2149f8: 0x3c150039  lui         $s5, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149f4) {
            ctx->pc = 0x214A14u;
            return;
        }
    }
    ctx->pc = 0x2149FCu;
label_2149fc:
    // 0x2149fc: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x2149fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_214a00:
    // 0x214a00: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x214a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214a04:
    // 0x214a04: 0x40f809  jalr        $v0
label_214a08:
    if (ctx->pc == 0x214A08u) {
        ctx->pc = 0x214A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A04u;
        // 0x214a08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A0Cu;
        goto label_214a0c;
    }
    ctx->pc = 0x214A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214A0Cu);
        ctx->pc = 0x214A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A04u;
        // 0x214a08: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214A04u, 0x214A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214A0Cu;
label_214a0c:
    // 0x214a0c: 0x10000044  b           . + 4 + (0x44 << 2)
label_214a10:
    if (ctx->pc == 0x214A10u) {
        ctx->pc = 0x214A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A0Cu;
        // 0x214a10: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214A14u;
        goto label_fallthrough_0x214a0c;
    }
    ctx->pc = 0x214A0Cu;
    {
        const bool branch_taken_0x214a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214A0Cu;
        // 0x214a10: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214a0c) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214a0c:
    ctx->pc = 0x214A14u;
}
