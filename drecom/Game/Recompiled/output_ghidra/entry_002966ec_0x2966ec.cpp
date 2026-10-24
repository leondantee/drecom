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

// Function: entry_002966ec
// Address: 0x2966ec - 0x296730
void entry_002966ec_0x2966ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002966ec_0x2966ec");
#endif

    ctx->pc = 0x2966ecu;

label_2966ec:
    // 0x2966ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2966ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_2966f0:
    // 0x2966f0: 0x8c8369b4  lw          $v1, 0x69B4($a0)
    ctx->pc = 0x2966f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 27060)));
label_2966f4:
    // 0x2966f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2966f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2966f8:
    // 0x2966f8: 0xac8369b4  sw          $v1, 0x69B4($a0)
    ctx->pc = 0x2966f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 27060), GPR_U32(ctx, 3));
label_2966fc:
    // 0x2966fc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2966fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_296700:
    // 0x296700: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x296700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_296704:
    // 0x296704: 0x2065fffb  addi        $a1, $v1, -0x5
    ctx->pc = 0x296704u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967291, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_296708:
    // 0x296708: 0x2ca1000c  sltiu       $at, $a1, 0xC
    ctx->pc = 0x296708u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_29670c:
    // 0x29670c: 0x1020009a  beqz        $at, . + 4 + (0x9A << 2)
label_296710:
    if (ctx->pc == 0x296710u) {
        ctx->pc = 0x296714u;
        goto label_296714;
    }
    ctx->pc = 0x29670Cu;
    {
        const bool branch_taken_0x29670c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x29670c) {
            ctx->pc = 0x296978u;
            return;
        }
    }
    ctx->pc = 0x296714u;
label_296714:
    // 0x296714: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x296714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_296718:
    // 0x296718: 0x24641850  addiu       $a0, $v1, 0x1850
    ctx->pc = 0x296718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6224));
label_29671c:
    // 0x29671c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x29671cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_296720:
    // 0x296720: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x296720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_296724:
    // 0x296724: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x296724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_296728:
    // 0x296728: 0x600008  jr          $v1
label_29672c:
    if (ctx->pc == 0x29672Cu) {
        ctx->pc = 0x296730u;
        goto label_fallthrough_0x296728;
    }
    ctx->pc = 0x296728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296728u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x296728:
    ctx->pc = 0x296730u;
}
