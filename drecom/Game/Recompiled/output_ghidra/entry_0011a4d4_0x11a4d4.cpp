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

// Function: entry_0011a4d4
// Address: 0x11a4d4 - 0x11a514
void entry_0011a4d4_0x11a4d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011a4d4_0x11a4d4");
#endif

    switch (ctx->pc) {
        case 0x11a4f0u: goto label_11a4f0;
        default: break;
    }

    ctx->pc = 0x11a4d4u;

label_11a4d4:
    // 0x11a4d4: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
label_11a4d8:
    if (ctx->pc == 0x11A4D8u) {
        ctx->pc = 0x11A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D4u;
        // 0x11a4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4DCu;
        goto label_11a4dc;
    }
    ctx->pc = 0x11A4D4u;
    {
        const bool branch_taken_0x11a4d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D4u;
        // 0x11a4d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d4) {
            ctx->pc = 0x11A514u;
            return;
        }
    }
    ctx->pc = 0x11A4DCu;
label_11a4dc:
    // 0x11a4dc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x11a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_11a4e0:
    // 0x11a4e0: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x11a4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_11a4e4:
    // 0x11a4e4: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x11a4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
label_11a4e8:
    // 0x11a4e8: 0x2e0f809  jalr        $s7
label_11a4ec:
    if (ctx->pc == 0x11A4ECu) {
        ctx->pc = 0x11A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E8u;
        // 0x11a4ec: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A4F0u;
        goto label_11a4f0;
    }
    ctx->pc = 0x11A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x11A4F0u);
        ctx->pc = 0x11A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4E8u;
        // 0x11a4ec: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A4E8u, 0x11A4F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A4F0u;
label_11a4f0:
    // 0x11a4f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11a4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11a4f4:
    // 0x11a4f4: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x11a4f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11a4f8:
    // 0x11a4f8: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x11a4f8u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11a4fc:
    // 0x11a4fc: 0x4a1ffca  bgez        $a1, . + 4 + (-0x36 << 2)
label_11a500:
    if (ctx->pc == 0x11A500u) {
        ctx->pc = 0x11A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4FCu;
        // 0x11a500: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A504u;
        goto label_11a504;
    }
    ctx->pc = 0x11A4FCu;
    {
        const bool branch_taken_0x11a4fc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x11A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4FCu;
        // 0x11a500: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4fc) {
            ctx->pc = 0x11A428u;
            return;
        }
    }
    ctx->pc = 0x11A504u;
label_11a504:
    // 0x11a504: 0x17c0ff66  bnez        $fp, . + 4 + (-0x9A << 2)
label_11a508:
    if (ctx->pc == 0x11A508u) {
        ctx->pc = 0x11A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A504u;
        // 0x11a508: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A50Cu;
        goto label_11a50c;
    }
    ctx->pc = 0x11A504u;
    {
        const bool branch_taken_0x11a504 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A504u;
        // 0x11a508: 0x8fa4001c  lw          $a0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a504) {
            ctx->pc = 0x11A2A0u;
            return;
        }
    }
    ctx->pc = 0x11A50Cu;
label_11a50c:
    // 0x11a50c: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_11a510:
    if (ctx->pc == 0x11A510u) {
        ctx->pc = 0x11A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A50Cu;
        // 0x11a510: 0xde230000  ld          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11A514u;
        goto label_fallthrough_0x11a50c;
    }
    ctx->pc = 0x11A50Cu;
    {
        const bool branch_taken_0x11a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11A510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A50Cu;
        // 0x11a510: 0xde230000  ld          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a50c) {
            ctx->pc = 0x11A288u;
            return;
        }
    }
label_fallthrough_0x11a50c:
    ctx->pc = 0x11A514u;
}
