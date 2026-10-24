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

// Function: entry_00214ad0
// Address: 0x214ad0 - 0x214af8
void entry_00214ad0_0x214ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214ad0_0x214ad0");
#endif

    switch (ctx->pc) {
        case 0x214ad0u: goto label_214ad0;
        case 0x214ad4u: goto label_214ad4;
        case 0x214ad8u: goto label_214ad8;
        case 0x214adcu: goto label_214adc;
        case 0x214ae0u: goto label_214ae0;
        case 0x214ae4u: goto label_214ae4;
        case 0x214ae8u: goto label_214ae8;
        case 0x214aecu: goto label_214aec;
        case 0x214af0u: goto label_214af0;
        case 0x214af4u: goto label_214af4;
        default: break;
    }

    ctx->pc = 0x214ad0u;

label_214ad0:
    // 0x214ad0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x214ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_214ad4:
    // 0x214ad4: 0x3c150039  lui         $s5, 0x39
    ctx->pc = 0x214ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)57 << 16));
label_214ad8:
    // 0x214ad8: 0x8271fff8  lb          $s1, -0x8($s3)
    ctx->pc = 0x214ad8u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_214adc:
    // 0x214adc: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x214adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_214ae0:
    // 0x214ae0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x214ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
label_214ae4:
    // 0x214ae4: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x214ae4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_214ae8:
    // 0x214ae8: 0x40f809  jalr        $v0
label_214aec:
    if (ctx->pc == 0x214AECu) {
        ctx->pc = 0x214AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AE8u;
        // 0x214aec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AF0u;
        goto label_214af0;
    }
    ctx->pc = 0x214AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x214AF0u);
        ctx->pc = 0x214AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AE8u;
        // 0x214aec: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214AE8u, 0x214AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x214AF0u;
label_214af0:
    // 0x214af0: 0x1000000b  b           . + 4 + (0xB << 2)
label_214af4:
    if (ctx->pc == 0x214AF4u) {
        ctx->pc = 0x214AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AF0u;
        // 0x214af4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214AF8u;
        goto label_fallthrough_0x214af0;
    }
    ctx->pc = 0x214AF0u;
    {
        const bool branch_taken_0x214af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214AF0u;
        // 0x214af4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214af0) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x214af0:
    ctx->pc = 0x214AF8u;
}
