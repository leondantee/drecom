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

// Function: entry_0012500c
// Address: 0x12500c - 0x12504c
void entry_0012500c_0x12500c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012500c_0x12500c");
#endif

    switch (ctx->pc) {
        case 0x125044u: goto label_125044;
        default: break;
    }

    ctx->pc = 0x12500cu;

    // 0x12500c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12500cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125010: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x125010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x125014: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x125014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x125018: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x125018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12501c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12501Cu;
    {
        const bool branch_taken_0x12501c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12501c) {
            ctx->pc = 0x12504Cu;
            return;
        }
    }
    ctx->pc = 0x125024u;
    // 0x125024: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x125024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125028: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x125028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12502c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12502cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x125030: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x125030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x125034: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x125034u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x125038: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x125038u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12503c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12503Cu;
    SET_GPR_U32(ctx, 31, 0x125044u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12503Cu, 0x125044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125044u;
label_125044:
    // 0x125044: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x125044u;
    {
        const bool branch_taken_0x125044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125044) {
            ctx->pc = 0x12506Cu;
            return;
        }
    }
    ctx->pc = 0x12504Cu;
}
