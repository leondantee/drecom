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

// Function: entry_00215248
// Address: 0x215248 - 0x21527c
void entry_00215248_0x215248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215248_0x215248");
#endif

    switch (ctx->pc) {
        case 0x215248u: goto label_215248;
        case 0x21524cu: goto label_21524c;
        case 0x215250u: goto label_215250;
        case 0x215254u: goto label_215254;
        case 0x215258u: goto label_215258;
        case 0x21525cu: goto label_21525c;
        case 0x215260u: goto label_215260;
        case 0x215264u: goto label_215264;
        case 0x215268u: goto label_215268;
        case 0x21526cu: goto label_21526c;
        case 0x215270u: goto label_215270;
        case 0x215274u: goto label_215274;
        case 0x215278u: goto label_215278;
        default: break;
    }

    ctx->pc = 0x215248u;

label_215248:
    // 0x215248: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x215248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21524c:
    // 0x21524c: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x21524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_215250:
    // 0x215250: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x215250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_215254:
    // 0x215254: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_215258:
    if (ctx->pc == 0x215258u) {
        ctx->pc = 0x215258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215254u;
        // 0x215258: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21525Cu;
        goto label_21525c;
    }
    ctx->pc = 0x215254u;
    {
        const bool branch_taken_0x215254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215254u;
        // 0x215258: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215254) {
            ctx->pc = 0x21527Cu;
            return;
        }
    }
    ctx->pc = 0x21525Cu;
label_21525c:
    // 0x21525c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x21525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_215260:
    // 0x215260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x215260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_215264:
    // 0x215264: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x215264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215268:
    // 0x215268: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_21526c:
    if (ctx->pc == 0x21526Cu) {
        ctx->pc = 0x215270u;
        goto label_215270;
    }
    ctx->pc = 0x215268u;
    {
        const bool branch_taken_0x215268 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x215268) {
            ctx->pc = 0x21527Cu;
            return;
        }
    }
    ctx->pc = 0x215270u;
label_215270:
    // 0x215270: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x215270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_215274:
    // 0x215274: 0xc0f809  jalr        $a2
label_215278:
    if (ctx->pc == 0x215278u) {
        ctx->pc = 0x215278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215274u;
        // 0x215278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21527Cu;
        goto label_fallthrough_0x215274;
    }
    ctx->pc = 0x215274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x21527Cu);
        ctx->pc = 0x215278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215274u;
        // 0x215278: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215274u, 0x21527Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x215274:
    ctx->pc = 0x21527Cu;
}
