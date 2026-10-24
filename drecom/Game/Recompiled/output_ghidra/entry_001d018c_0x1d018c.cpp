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

// Function: entry_001d018c
// Address: 0x1d018c - 0x1d01c0
void entry_001d018c_0x1d018c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d018c_0x1d018c");
#endif

    ctx->pc = 0x1d018cu;

label_1d018c:
    // 0x1d018c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_1d0190:
    // 0x1d0190: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1d0190u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1d0194:
    // 0x1d0194: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1d0194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1d0198:
    // 0x1d0198: 0x2c810006  sltiu       $at, $a0, 0x6
    ctx->pc = 0x1d0198u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1d019c:
    // 0x1d019c: 0x10200220  beqz        $at, . + 4 + (0x220 << 2)
label_1d01a0:
    if (ctx->pc == 0x1D01A0u) {
        ctx->pc = 0x1D01A4u;
        goto label_1d01a4;
    }
    ctx->pc = 0x1D019Cu;
    {
        const bool branch_taken_0x1d019c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d019c) {
            ctx->pc = 0x1D0A20u;
            return;
        }
    }
    ctx->pc = 0x1D01A4u;
label_1d01a4:
    // 0x1d01a4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1d01a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1d01a8:
    // 0x1d01a8: 0x2465f580  addiu       $a1, $v1, -0xA80
    ctx->pc = 0x1d01a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964608));
label_1d01ac:
    // 0x1d01ac: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d01b0:
    // 0x1d01b0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d01b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d01b4:
    // 0x1d01b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d01b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d01b8:
    // 0x1d01b8: 0x600008  jr          $v1
label_1d01bc:
    if (ctx->pc == 0x1D01BCu) {
        ctx->pc = 0x1D01C0u;
        goto label_fallthrough_0x1d01b8;
    }
    ctx->pc = 0x1D01B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D01B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1d01b8:
    ctx->pc = 0x1D01C0u;
}
