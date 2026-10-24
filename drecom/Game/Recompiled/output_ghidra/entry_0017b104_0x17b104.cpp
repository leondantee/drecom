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

// Function: entry_0017b104
// Address: 0x17b104 - 0x17b15c
void entry_0017b104_0x17b104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b104_0x17b104");
#endif

    switch (ctx->pc) {
        case 0x17b124u: goto label_17b124;
        case 0x17b13cu: goto label_17b13c;
        case 0x17b158u: goto label_17b158;
        default: break;
    }

    ctx->pc = 0x17b104u;

    // 0x17b104: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x17B104u;
    {
        const bool branch_taken_0x17b104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b104) {
            ctx->pc = 0x17B15Cu;
            return;
        }
    }
    ctx->pc = 0x17B10Cu;
    // 0x17b10c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x17b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x17b110: 0x244258e0  addiu       $v0, $v0, 0x58E0
    ctx->pc = 0x17b110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22752));
    // 0x17b114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b118: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b118u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x3858E0u));
    // 0x17b11c: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B11Cu;
    SET_GPR_U32(ctx, 31, 0x17B124u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B11Cu, 0x17B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B124u;
label_17b124:
    // 0x17b124: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x17b124u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b128: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x17b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x17b12c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x17b12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b130: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x17b130u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17b134: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B134u;
    SET_GPR_U32(ctx, 31, 0x17B13Cu);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B134u, 0x17B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B13Cu;
label_17b13c:
    // 0x17b13c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b13cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b140: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17b144: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17b148: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x17b148u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17b14c: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x17b14cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17b150: 0xc040bee  jal         func_102FB8
    ctx->pc = 0x17B150u;
    SET_GPR_U32(ctx, 31, 0x17B158u);
    ctx->pc = 0x102FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102FB8u, 0x17B150u, 0x17B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B158u;
label_17b158:
    // 0x17b158: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x17b158u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x17b15cu;
}
