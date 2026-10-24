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

// Function: entry_0019ea80
// Address: 0x19ea80 - 0x19eac8
void entry_0019ea80_0x19ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ea80_0x19ea80");
#endif

    ctx->pc = 0x19ea80u;

    // 0x19ea80: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19ea80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19ea84: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ea84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ea88: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19ea8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ea90: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x19ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19ea94: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19ea94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ea98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ea9c: 0xa38280b8  sb          $v0, -0x7F48($gp)
    ctx->pc = 0x19ea9cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934712), (uint8_t)GPR_U32(ctx, 2));
    // 0x19eaa0: 0x938280b8  lbu         $v0, -0x7F48($gp)
    ctx->pc = 0x19eaa0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x19eaa4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19eaa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eaa8: 0x938280bc  lbu         $v0, -0x7F44($gp)
    ctx->pc = 0x19eaa8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934716)));
    // 0x19eaac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19eaacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19eab0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19EAB0u;
    {
        const bool branch_taken_0x19eab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19eab0) {
            ctx->pc = 0x19EAC8u;
            return;
        }
    }
    ctx->pc = 0x19EAB8u;
    // 0x19eab8: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x19eab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x19eabc: 0x938580b8  lbu         $a1, -0x7F48($gp)
    ctx->pc = 0x19eabcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934712)));
    // 0x19eac0: 0xc067cf0  jal         func_19F3C0
    ctx->pc = 0x19EAC0u;
    SET_GPR_U32(ctx, 31, 0x19EAC8u);
    ctx->pc = 0x19F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F3C0u, 0x19EAC0u, 0x19EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EAC8u;
}
