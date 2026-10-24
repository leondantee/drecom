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

// Function: entry_00296408
// Address: 0x296408 - 0x296440
void entry_00296408_0x296408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00296408_0x296408");
#endif

    ctx->pc = 0x296408u;

label_296408:
    // 0x296408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x296408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_29640c:
    // 0x29640c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x29640cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_296410:
    // 0x296410: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296414:
    // 0x296414: 0x2065fffb  addi        $a1, $v1, -0x5
    ctx->pc = 0x296414u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967291, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_296418:
    // 0x296418: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x296418u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_29641c:
    // 0x29641c: 0x10200044  beqz        $at, . + 4 + (0x44 << 2)
label_296420:
    if (ctx->pc == 0x296420u) {
        ctx->pc = 0x296424u;
        goto label_296424;
    }
    ctx->pc = 0x29641Cu;
    {
        const bool branch_taken_0x29641c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29641c) {
            ctx->pc = 0x296530u;
            return;
        }
    }
    ctx->pc = 0x296424u;
label_296424:
    // 0x296424: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x296424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_296428:
    // 0x296428: 0x24641820  addiu       $a0, $v1, 0x1820
    ctx->pc = 0x296428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6176));
label_29642c:
    // 0x29642c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29642cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_296430:
    // 0x296430: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_296434:
    // 0x296434: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x296434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_296438:
    // 0x296438: 0x600008  jr          $v1
label_29643c:
    if (ctx->pc == 0x29643Cu) {
        ctx->pc = 0x296440u;
        goto label_fallthrough_0x296438;
    }
    ctx->pc = 0x296438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296438u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x296438:
    ctx->pc = 0x296440u;
}
