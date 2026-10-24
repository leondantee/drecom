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

// Function: entry_0014f8a4
// Address: 0x14f8a4 - 0x14f8f4
void entry_0014f8a4_0x14f8a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f8a4_0x14f8a4");
#endif

    ctx->pc = 0x14f8a4u;

label_14f8a4:
    // 0x14f8a4: 0x8e6213f4  lw          $v0, 0x13F4($s3)
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5108)));
label_14f8a8:
    // 0x14f8a8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_14f8ac:
    if (ctx->pc == 0x14F8ACu) {
        ctx->pc = 0x14F8B0u;
        goto label_14f8b0;
    }
    ctx->pc = 0x14F8A8u;
    {
        const bool branch_taken_0x14f8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f8a8) {
            ctx->pc = 0x14F9A0u;
            return;
        }
    }
    ctx->pc = 0x14F8B0u;
label_14f8b0:
    // 0x14f8b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14f8b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_14f8b4:
    // 0x14f8b4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x14f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_14f8b8:
    // 0x14f8b8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x14f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_14f8bc:
    // 0x14f8bc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_14f8c0:
    if (ctx->pc == 0x14F8C0u) {
        ctx->pc = 0x14F8C4u;
        goto label_14f8c4;
    }
    ctx->pc = 0x14F8BCu;
    {
        const bool branch_taken_0x14f8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8bc) {
            ctx->pc = 0x14F92Cu;
            return;
        }
    }
    ctx->pc = 0x14F8C4u;
label_14f8c4:
    // 0x14f8c4: 0x926213a7  lbu         $v0, 0x13A7($s3)
    ctx->pc = 0x14f8c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 5031)));
label_14f8c8:
    // 0x14f8c8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x14f8c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14f8cc:
    // 0x14f8cc: 0x2c810007  sltiu       $at, $a0, 0x7
    ctx->pc = 0x14f8ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_14f8d0:
    // 0x14f8d0: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
label_14f8d4:
    if (ctx->pc == 0x14F8D4u) {
        ctx->pc = 0x14F8D8u;
        goto label_14f8d8;
    }
    ctx->pc = 0x14F8D0u;
    {
        const bool branch_taken_0x14f8d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f8d0) {
            ctx->pc = 0x14F92Cu;
            return;
        }
    }
    ctx->pc = 0x14F8D8u;
label_14f8d8:
    // 0x14f8d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_14f8dc:
    // 0x14f8dc: 0x2443e940  addiu       $v1, $v0, -0x16C0
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961472));
label_14f8e0:
    // 0x14f8e0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x14f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_14f8e4:
    // 0x14f8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14f8e8:
    // 0x14f8e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14f8ec:
    // 0x14f8ec: 0x400008  jr          $v0
label_14f8f0:
    if (ctx->pc == 0x14F8F0u) {
        ctx->pc = 0x14F8F4u;
        goto label_fallthrough_0x14f8ec;
    }
    ctx->pc = 0x14F8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F8ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x14f8ec:
    ctx->pc = 0x14F8F4u;
}
