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

// Function: entry_00215060
// Address: 0x215060 - 0x2150cc
void entry_00215060_0x215060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215060_0x215060");
#endif

    switch (ctx->pc) {
        case 0x2150b0u: goto label_2150b0;
        case 0x2150c4u: goto label_2150c4;
        default: break;
    }

    ctx->pc = 0x215060u;

    // 0x215060: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x215060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x215064: 0x8c44a260  lw          $a0, -0x5DA0($v0)
    ctx->pc = 0x215064u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61A260u));
    // 0x215068: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x215068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x21506c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x21506cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x215070: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x215070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x215074: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x215074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x215078: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x215078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x21507c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x21507cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x215080: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x215080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x215084: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x215084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x215088: 0x27a4000c  addiu       $a0, $sp, 0xC
    ctx->pc = 0x215088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x21508c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x215090: 0xae140008  sw          $s4, 0x8($s0)
    ctx->pc = 0x215090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 20));
    // 0x215094: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x215094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x215098: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x215098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x21509c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21509cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2150a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2150a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2150a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2150a8: 0xc0854a6  jal         func_215298
    ctx->pc = 0x2150A8u;
    SET_GPR_U32(ctx, 31, 0x2150B0u);
    ctx->pc = 0x2150ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150A8u;
    // 0x2150ac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215298u, 0x2150A8u, 0x2150B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2150B0u;
label_2150b0:
    // 0x2150b0: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x2150b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x2150b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2150B4u;
    {
        const bool branch_taken_0x2150b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150B4u;
        // 0x2150b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150b4) {
            ctx->pc = 0x2150CCu;
            return;
        }
    }
    ctx->pc = 0x2150BCu;
    // 0x2150bc: 0xc084b7c  jal         func_212DF0
    ctx->pc = 0x2150BCu;
    SET_GPR_U32(ctx, 31, 0x2150C4u);
    ctx->pc = 0x2150C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2150BCu;
    // 0x2150c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212DF0u;
    {
        ctx->pc = 0x2150C4u;
        ps2_stubs::isceSifSetDma(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2150C4u) { return; }
    ctx->pc = 0x2150C4u;
label_2150c4:
    // 0x2150c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2150C4u;
    {
        const bool branch_taken_0x2150c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2150C4u;
        // 0x2150c8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150c4) {
            ctx->pc = 0x2150D8u;
            return;
        }
    }
    ctx->pc = 0x2150CCu;
}
