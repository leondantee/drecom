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

// Function: entry_002149b8
// Address: 0x2149b8 - 0x2149e0
void entry_002149b8_0x2149b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002149b8_0x2149b8");
#endif

    switch (ctx->pc) {
        case 0x2149b8u: goto label_2149b8;
        case 0x2149bcu: goto label_2149bc;
        case 0x2149c0u: goto label_2149c0;
        case 0x2149c4u: goto label_2149c4;
        case 0x2149c8u: goto label_2149c8;
        case 0x2149ccu: goto label_2149cc;
        case 0x2149d0u: goto label_2149d0;
        case 0x2149d4u: goto label_2149d4;
        case 0x2149d8u: goto label_2149d8;
        case 0x2149dcu: goto label_2149dc;
        default: break;
    }

    ctx->pc = 0x2149b8u;

label_2149b8:
    // 0x2149b8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2149b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2149bc:
    // 0x2149bc: 0x8ea2aad4  lw          $v0, -0x552C($s5)
    ctx->pc = 0x2149bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294945492)));
label_2149c0:
    // 0x2149c0: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2149c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_2149c4:
    // 0x2149c4: 0x40f809  jalr        $v0
label_2149c8:
    if (ctx->pc == 0x2149C8u) {
        ctx->pc = 0x2149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149C4u;
        // 0x2149c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149CCu;
        goto label_2149cc;
    }
    ctx->pc = 0x2149C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2149CCu);
        ctx->pc = 0x2149C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149C4u;
        // 0x2149c8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2149C4u, 0x2149CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2149CCu;
label_2149cc:
    // 0x2149cc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2149ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2149d0:
    // 0x2149d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2149d4:
    if (ctx->pc == 0x2149D4u) {
        ctx->pc = 0x2149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D0u;
        // 0x2149d4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149D8u;
        goto label_2149d8;
    }
    ctx->pc = 0x2149D0u;
    {
        const bool branch_taken_0x2149d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D0u;
        // 0x2149d4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149d0) {
            ctx->pc = 0x2149B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2149b8;
        }
    }
    ctx->pc = 0x2149D8u;
label_2149d8:
    // 0x2149d8: 0x10000051  b           . + 4 + (0x51 << 2)
label_2149dc:
    if (ctx->pc == 0x2149DCu) {
        ctx->pc = 0x2149DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D8u;
        // 0x2149dc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2149E0u;
        goto label_fallthrough_0x2149d8;
    }
    ctx->pc = 0x2149D8u;
    {
        const bool branch_taken_0x2149d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2149DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149D8u;
        // 0x2149dc: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2149d8) {
            ctx->pc = 0x214B20u;
            return;
        }
    }
label_fallthrough_0x2149d8:
    ctx->pc = 0x2149E0u;
}
