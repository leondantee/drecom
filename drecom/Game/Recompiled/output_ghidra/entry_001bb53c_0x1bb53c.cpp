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

// Function: entry_001bb53c
// Address: 0x1bb53c - 0x1bb5c0
void entry_001bb53c_0x1bb53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb53c_0x1bb53c");
#endif

    switch (ctx->pc) {
        case 0x1bb548u: goto label_1bb548;
        default: break;
    }

    ctx->pc = 0x1bb53cu;

    // 0x1bb53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bb53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb540: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BB540u;
    SET_GPR_U32(ctx, 31, 0x1BB548u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BB540u, 0x1BB548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB548u;
label_1bb548:
    // 0x1bb548: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BB548u;
    {
        const bool branch_taken_0x1bb548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb548) {
            ctx->pc = 0x1BB5D4u;
            return;
        }
    }
    ctx->pc = 0x1BB550u;
    // 0x1bb550: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1bb550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb554: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bb554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1bb558: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1bb558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1bb55c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1bb55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1bb560: 0x1060016b  beqz        $v1, . + 4 + (0x16B << 2)
    ctx->pc = 0x1BB560u;
    {
        const bool branch_taken_0x1bb560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb560) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB568u;
    // 0x1bb568: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x1bb568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb56c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bb56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bb570: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bb570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bb574: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bb574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bb578: 0xa41824  and         $v1, $a1, $a0
    ctx->pc = 0x1bb578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bb57c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bb57cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x1bb580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1bb580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1bb584: 0x906313a6  lbu         $v1, 0x13A6($v1)
    ctx->pc = 0x1bb584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5030)));
    // 0x1bb588: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bb588u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bb58c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bb58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bb590: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB590u;
    {
        const bool branch_taken_0x1bb590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb590) {
            ctx->pc = 0x1BB5C0u;
            return;
        }
    }
    ctx->pc = 0x1BB598u;
    // 0x1bb598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bb598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bb59c: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB59Cu;
    {
        const bool branch_taken_0x1bb59c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb59c) {
            ctx->pc = 0x1BB5C0u;
            return;
        }
    }
    ctx->pc = 0x1BB5A4u;
    // 0x1bb5a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bb5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bb5a8: 0x10830159  beq         $a0, $v1, . + 4 + (0x159 << 2)
    ctx->pc = 0x1BB5A8u;
    {
        const bool branch_taken_0x1bb5a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bb5a8) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB5B0u;
    // 0x1bb5b0: 0x10800157  beqz        $a0, . + 4 + (0x157 << 2)
    ctx->pc = 0x1BB5B0u;
    {
        const bool branch_taken_0x1bb5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5b0) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB5B8u;
    // 0x1bb5b8: 0x10000155  b           . + 4 + (0x155 << 2)
    ctx->pc = 0x1BB5B8u;
    {
        const bool branch_taken_0x1bb5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bb5b8) {
            ctx->pc = 0x1BBB10u;
            return;
        }
    }
    ctx->pc = 0x1BB5C0u;
}
