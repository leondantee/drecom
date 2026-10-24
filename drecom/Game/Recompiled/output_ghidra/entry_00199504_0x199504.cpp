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

// Function: entry_00199504
// Address: 0x199504 - 0x199540
void entry_00199504_0x199504(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199504_0x199504");
#endif

    ctx->pc = 0x199504u;

label_199504:
    // 0x199504: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x199504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_199508:
    // 0x199508: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x199508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_19950c:
    // 0x19950c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x19950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_199510:
    // 0x199510: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x199510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_199514:
    // 0x199514: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x199514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_199518:
    // 0x199518: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x199518u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_19951c:
    // 0x19951c: 0x102001ac  beqz        $at, . + 4 + (0x1AC << 2)
label_199520:
    if (ctx->pc == 0x199520u) {
        ctx->pc = 0x199524u;
        goto label_199524;
    }
    ctx->pc = 0x19951Cu;
    {
        const bool branch_taken_0x19951c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19951c) {
            ctx->pc = 0x199BD0u;
            return;
        }
    }
    ctx->pc = 0x199524u;
label_199524:
    // 0x199524: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x199524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_199528:
    // 0x199528: 0x2464edf0  addiu       $a0, $v1, -0x1210
    ctx->pc = 0x199528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962672));
label_19952c:
    // 0x19952c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x19952cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_199530:
    // 0x199530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_199534:
    // 0x199534: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x199534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_199538:
    // 0x199538: 0x600008  jr          $v1
label_19953c:
    if (ctx->pc == 0x19953Cu) {
        ctx->pc = 0x199540u;
        goto label_fallthrough_0x199538;
    }
    ctx->pc = 0x199538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x199538:
    ctx->pc = 0x199540u;
}
