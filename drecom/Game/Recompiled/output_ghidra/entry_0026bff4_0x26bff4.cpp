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

// Function: entry_0026bff4
// Address: 0x26bff4 - 0x26c04c
void entry_0026bff4_0x26bff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026bff4_0x26bff4");
#endif

    ctx->pc = 0x26bff4u;

label_26bff4:
    // 0x26bff4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26bff8:
    // 0x26bff8: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x26bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
label_26bffc:
    // 0x26bffc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c000:
    // 0x26c000: 0x8c631b64  lw          $v1, 0x1B64($v1)
    ctx->pc = 0x26c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7012)));
label_26c004:
    // 0x26c004: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
label_26c008:
    if (ctx->pc == 0x26C008u) {
        ctx->pc = 0x26C00Cu;
        goto label_26c00c;
    }
    ctx->pc = 0x26C004u;
    {
        const bool branch_taken_0x26c004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x26c004) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C00Cu;
label_26c00c:
    // 0x26c00c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x26c00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c010:
    // 0x26c010: 0x8c821b60  lw          $v0, 0x1B60($a0)
    ctx->pc = 0x26c010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
label_26c014:
    // 0x26c014: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x26c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c018:
    // 0x26c018: 0xac621b64  sw          $v0, 0x1B64($v1)
    ctx->pc = 0x26c018u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7012), GPR_U32(ctx, 2));
label_26c01c:
    // 0x26c01c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x26c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_26c020:
    // 0x26c020: 0x8c441b60  lw          $a0, 0x1B60($v0)
    ctx->pc = 0x26c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7008)));
label_26c024:
    // 0x26c024: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x26c024u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_26c028:
    // 0x26c028: 0x1020007c  beqz        $at, . + 4 + (0x7C << 2)
label_26c02c:
    if (ctx->pc == 0x26C02Cu) {
        ctx->pc = 0x26C030u;
        goto label_26c030;
    }
    ctx->pc = 0x26C028u;
    {
        const bool branch_taken_0x26c028 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c028) {
            ctx->pc = 0x26C21Cu;
            return;
        }
    }
    ctx->pc = 0x26C030u;
label_26c030:
    // 0x26c030: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26c030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_26c034:
    // 0x26c034: 0x244314d0  addiu       $v1, $v0, 0x14D0
    ctx->pc = 0x26c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5328));
label_26c038:
    // 0x26c038: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x26c038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_26c03c:
    // 0x26c03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26c040:
    // 0x26c040: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26c044:
    // 0x26c044: 0x400008  jr          $v0
label_26c048:
    if (ctx->pc == 0x26C048u) {
        ctx->pc = 0x26C04Cu;
        goto label_fallthrough_0x26c044;
    }
    ctx->pc = 0x26C044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C044u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x26c044:
    ctx->pc = 0x26C04Cu;
}
