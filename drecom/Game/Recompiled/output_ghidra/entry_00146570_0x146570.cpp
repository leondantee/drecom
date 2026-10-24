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

// Function: entry_00146570
// Address: 0x146570 - 0x1465a4
void entry_00146570_0x146570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146570_0x146570");
#endif

    ctx->pc = 0x146570u;

label_146570:
    // 0x146570: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x146570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_146574:
    // 0x146574: 0x90640002  lbu         $a0, 0x2($v1)
    ctx->pc = 0x146574u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_146578:
    // 0x146578: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x146578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_14657c:
    // 0x14657c: 0x2ca1001e  sltiu       $at, $a1, 0x1E
    ctx->pc = 0x14657cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_146580:
    // 0x146580: 0x10200421  beqz        $at, . + 4 + (0x421 << 2)
label_146584:
    if (ctx->pc == 0x146584u) {
        ctx->pc = 0x146588u;
        goto label_146588;
    }
    ctx->pc = 0x146580u;
    {
        const bool branch_taken_0x146580 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x146580) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x146588u;
label_146588:
    // 0x146588: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x146588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_14658c:
    // 0x14658c: 0x2464e6c0  addiu       $a0, $v1, -0x1940
    ctx->pc = 0x14658cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960832));
label_146590:
    // 0x146590: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x146590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_146594:
    // 0x146594: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x146594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_146598:
    // 0x146598: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x146598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14659c:
    // 0x14659c: 0x600008  jr          $v1
label_1465a0:
    if (ctx->pc == 0x1465A0u) {
        ctx->pc = 0x1465A4u;
        goto label_fallthrough_0x14659c;
    }
    ctx->pc = 0x14659Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14659Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14659c:
    ctx->pc = 0x1465A4u;
}
