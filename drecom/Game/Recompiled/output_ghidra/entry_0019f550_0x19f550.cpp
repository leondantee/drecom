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

// Function: entry_0019f550
// Address: 0x19f550 - 0x19f598
void entry_0019f550_0x19f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f550_0x19f550");
#endif

    ctx->pc = 0x19f550u;

    // 0x19f550: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19f550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19f554: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19f554u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19f558: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19f558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19f55c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19f55cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f564: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19F564u;
    {
        const bool branch_taken_0x19f564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f564) {
            ctx->pc = 0x19F598u;
            return;
        }
    }
    ctx->pc = 0x19F56Cu;
    // 0x19f56c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f570: 0x521006  srlv        $v0, $s2, $v0
    ctx->pc = 0x19f570u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f574: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19f574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f578: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x19f578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x19f57c: 0x531006  srlv        $v0, $s3, $v0
    ctx->pc = 0x19f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 2) & 0x1F));
    // 0x19f580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19f580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19f584: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F584u;
    {
        const bool branch_taken_0x19f584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f584) {
            ctx->pc = 0x19F598u;
            return;
        }
    }
    ctx->pc = 0x19F58Cu;
    // 0x19f58c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19f58cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19f590: 0xc067c9c  jal         func_19F270
    ctx->pc = 0x19F590u;
    SET_GPR_U32(ctx, 31, 0x19F598u);
    ctx->pc = 0x19F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F270u, 0x19F590u, 0x19F598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F598u;
}
