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

// Function: entry_00140f68
// Address: 0x140f68 - 0x140f98
void entry_00140f68_0x140f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140f68_0x140f68");
#endif

    ctx->pc = 0x140f68u;

label_140f68:
    // 0x140f68: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x140f68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_140f6c:
    // 0x140f6c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x140f6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_140f70:
    // 0x140f70: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x140f70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_140f74:
    // 0x140f74: 0x10200150  beqz        $at, . + 4 + (0x150 << 2)
label_140f78:
    if (ctx->pc == 0x140F78u) {
        ctx->pc = 0x140F7Cu;
        goto label_140f7c;
    }
    ctx->pc = 0x140F74u;
    {
        const bool branch_taken_0x140f74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140f74) {
            ctx->pc = 0x1414B8u;
            return;
        }
    }
    ctx->pc = 0x140F7Cu;
label_140f7c:
    // 0x140f7c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x140f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_140f80:
    // 0x140f80: 0x2443e670  addiu       $v1, $v0, -0x1990
    ctx->pc = 0x140f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960752));
label_140f84:
    // 0x140f84: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x140f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_140f88:
    // 0x140f88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x140f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_140f8c:
    // 0x140f8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_140f90:
    // 0x140f90: 0x400008  jr          $v0
label_140f94:
    if (ctx->pc == 0x140F94u) {
        ctx->pc = 0x140F98u;
        goto label_fallthrough_0x140f90;
    }
    ctx->pc = 0x140F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140F90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x140f90:
    ctx->pc = 0x140F98u;
}
