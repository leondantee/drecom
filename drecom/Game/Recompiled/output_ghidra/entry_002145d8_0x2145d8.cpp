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

// Function: entry_002145d8
// Address: 0x2145d8 - 0x21460c
void entry_002145d8_0x2145d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002145d8_0x2145d8");
#endif

    switch (ctx->pc) {
        case 0x2145d8u: goto label_2145d8;
        case 0x2145dcu: goto label_2145dc;
        case 0x2145e0u: goto label_2145e0;
        case 0x2145e4u: goto label_2145e4;
        case 0x2145e8u: goto label_2145e8;
        case 0x2145ecu: goto label_2145ec;
        case 0x2145f0u: goto label_2145f0;
        case 0x2145f4u: goto label_2145f4;
        case 0x2145f8u: goto label_2145f8;
        case 0x2145fcu: goto label_2145fc;
        case 0x214600u: goto label_214600;
        case 0x214604u: goto label_214604;
        case 0x214608u: goto label_214608;
        default: break;
    }

    ctx->pc = 0x2145d8u;

label_2145d8:
    // 0x2145d8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x2145d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2145dc:
    // 0x2145dc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x2145dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
label_2145e0:
    // 0x2145e0: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2145e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2145e4:
    // 0x2145e4: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x2145e4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_2145e8:
    // 0x2145e8: 0x2c830049  sltiu       $v1, $a0, 0x49
    ctx->pc = 0x2145e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)73) ? 1 : 0);
label_2145ec:
    // 0x2145ec: 0x10600148  beqz        $v1, . + 4 + (0x148 << 2)
label_2145f0:
    if (ctx->pc == 0x2145F0u) {
        ctx->pc = 0x2145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145ECu;
        // 0x2145f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2145F4u;
        goto label_2145f4;
    }
    ctx->pc = 0x2145ECu;
    {
        const bool branch_taken_0x2145ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145ECu;
        // 0x2145f0: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145ec) {
            ctx->pc = 0x214B10u;
            return;
        }
    }
    ctx->pc = 0x2145F4u;
label_2145f4:
    // 0x2145f4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2145f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2145f8:
    // 0x2145f8: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x2145f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
label_2145fc:
    // 0x2145fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2145fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_214600:
    // 0x214600: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x214600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_214604:
    // 0x214604: 0x800008  jr          $a0
label_214608:
    if (ctx->pc == 0x214608u) {
        ctx->pc = 0x21460Cu;
        goto label_fallthrough_0x214604;
    }
    ctx->pc = 0x214604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214604u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x214604:
    ctx->pc = 0x21460Cu;
}
