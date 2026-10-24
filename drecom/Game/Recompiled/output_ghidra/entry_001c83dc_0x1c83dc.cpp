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

// Function: entry_001c83dc
// Address: 0x1c83dc - 0x1c8410
void entry_001c83dc_0x1c83dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c83dc_0x1c83dc");
#endif

    ctx->pc = 0x1c83dcu;

label_1c83dc:
    // 0x1c83dc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_1c83e0:
    // 0x1c83e0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1c83e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1c83e4:
    // 0x1c83e4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c83e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c83e8:
    // 0x1c83e8: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x1c83e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1c83ec:
    // 0x1c83ec: 0x102002ad  beqz        $at, . + 4 + (0x2AD << 2)
label_1c83f0:
    if (ctx->pc == 0x1C83F0u) {
        ctx->pc = 0x1C83F4u;
        goto label_1c83f4;
    }
    ctx->pc = 0x1C83ECu;
    {
        const bool branch_taken_0x1c83ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c83ec) {
            ctx->pc = 0x1C8EA4u;
            return;
        }
    }
    ctx->pc = 0x1C83F4u;
label_1c83f4:
    // 0x1c83f4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1c83f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1c83f8:
    // 0x1c83f8: 0x2464f440  addiu       $a0, $v1, -0xBC0
    ctx->pc = 0x1c83f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964288));
label_1c83fc:
    // 0x1c83fc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1c83fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1c8400:
    // 0x1c8400: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1c8400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1c8404:
    // 0x1c8404: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1c8404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c8408:
    // 0x1c8408: 0xc00008  jr          $a2
label_1c840c:
    if (ctx->pc == 0x1C840Cu) {
        ctx->pc = 0x1C8410u;
        goto label_fallthrough_0x1c8408;
    }
    ctx->pc = 0x1C8408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8408u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1c8408:
    ctx->pc = 0x1C8410u;
}
