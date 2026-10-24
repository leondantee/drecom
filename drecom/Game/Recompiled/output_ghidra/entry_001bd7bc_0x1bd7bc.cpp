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

// Function: entry_001bd7bc
// Address: 0x1bd7bc - 0x1bd7f0
void entry_001bd7bc_0x1bd7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd7bc_0x1bd7bc");
#endif

    ctx->pc = 0x1bd7bcu;

label_1bd7bc:
    // 0x1bd7bc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1bd7c0:
    // 0x1bd7c0: 0x90630003  lbu         $v1, 0x3($v1)
    ctx->pc = 0x1bd7c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_1bd7c4:
    // 0x1bd7c4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd7c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1bd7c8:
    // 0x1bd7c8: 0x2c81000a  sltiu       $at, $a0, 0xA
    ctx->pc = 0x1bd7c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_1bd7cc:
    // 0x1bd7cc: 0x102003cf  beqz        $at, . + 4 + (0x3CF << 2)
label_1bd7d0:
    if (ctx->pc == 0x1BD7D0u) {
        ctx->pc = 0x1BD7D4u;
        goto label_1bd7d4;
    }
    ctx->pc = 0x1BD7CCu;
    {
        const bool branch_taken_0x1bd7cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7cc) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BD7D4u;
label_1bd7d4:
    // 0x1bd7d4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1bd7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1bd7d8:
    // 0x1bd7d8: 0x2463f3c0  addiu       $v1, $v1, -0xC40
    ctx->pc = 0x1bd7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964160));
label_1bd7dc:
    // 0x1bd7dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1bd7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1bd7e0:
    // 0x1bd7e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1bd7e4:
    // 0x1bd7e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bd7e8:
    // 0x1bd7e8: 0x600008  jr          $v1
label_1bd7ec:
    if (ctx->pc == 0x1BD7ECu) {
        ctx->pc = 0x1BD7F0u;
        goto label_fallthrough_0x1bd7e8;
    }
    ctx->pc = 0x1BD7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD7E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1bd7e8:
    ctx->pc = 0x1BD7F0u;
}
