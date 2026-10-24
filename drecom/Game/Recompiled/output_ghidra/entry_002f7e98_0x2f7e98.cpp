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

// Function: entry_002f7e98
// Address: 0x2f7e98 - 0x2f7ed8
void entry_002f7e98_0x2f7e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f7e98_0x2f7e98");
#endif

    ctx->pc = 0x2f7e98u;

label_2f7e98:
    // 0x2f7e98: 0x8fa90048  lw          $t1, 0x48($sp)
    ctx->pc = 0x2f7e98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7e9c:
    // 0x2f7e9c: 0x91230101  lbu         $v1, 0x101($t1)
    ctx->pc = 0x2f7e9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 257)));
label_2f7ea0:
    // 0x2f7ea0: 0x14600333  bnez        $v1, . + 4 + (0x333 << 2)
label_2f7ea4:
    if (ctx->pc == 0x2F7EA4u) {
        ctx->pc = 0x2F7EA8u;
        goto label_2f7ea8;
    }
    ctx->pc = 0x2F7EA0u;
    {
        const bool branch_taken_0x2f7ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f7ea0) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F7EA8u;
label_2f7ea8:
    // 0x2f7ea8: 0x8faa0048  lw          $t2, 0x48($sp)
    ctx->pc = 0x2f7ea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2f7eac:
    // 0x2f7eac: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x2f7eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2f7eb0:
    // 0x2f7eb0: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x2f7eb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_2f7eb4:
    // 0x2f7eb4: 0x1020032e  beqz        $at, . + 4 + (0x32E << 2)
label_2f7eb8:
    if (ctx->pc == 0x2F7EB8u) {
        ctx->pc = 0x2F7EBCu;
        goto label_2f7ebc;
    }
    ctx->pc = 0x2F7EB4u;
    {
        const bool branch_taken_0x2f7eb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f7eb4) {
            ctx->pc = 0x2F8B70u;
            return;
        }
    }
    ctx->pc = 0x2F7EBCu;
label_2f7ebc:
    // 0x2f7ebc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x2f7ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_2f7ec0:
    // 0x2f7ec0: 0x24831b10  addiu       $v1, $a0, 0x1B10
    ctx->pc = 0x2f7ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 6928));
label_2f7ec4:
    // 0x2f7ec4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2f7ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2f7ec8:
    // 0x2f7ec8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2f7ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2f7ecc:
    // 0x2f7ecc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2f7eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f7ed0:
    // 0x2f7ed0: 0x600008  jr          $v1
label_2f7ed4:
    if (ctx->pc == 0x2F7ED4u) {
        ctx->pc = 0x2F7ED8u;
        goto label_fallthrough_0x2f7ed0;
    }
    ctx->pc = 0x2F7ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7ED0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2f7ed0:
    ctx->pc = 0x2F7ED8u;
}
