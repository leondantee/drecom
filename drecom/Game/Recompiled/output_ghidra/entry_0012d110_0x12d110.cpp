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

// Function: entry_0012d110
// Address: 0x12d110 - 0x12d184
void entry_0012d110_0x12d110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d110_0x12d110");
#endif

    switch (ctx->pc) {
        case 0x12d120u: goto label_12d120;
        case 0x12d134u: goto label_12d134;
        default: break;
    }

    ctx->pc = 0x12d110u;

    // 0x12d110: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d114: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12d114u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d118: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12D118u;
    SET_GPR_U32(ctx, 31, 0x12D120u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12D118u, 0x12D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D120u;
label_12d120:
    // 0x12d120: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d120u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d124: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d128: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d128u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d12c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12D12Cu;
    SET_GPR_U32(ctx, 31, 0x12D134u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12D12Cu, 0x12D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D134u;
label_12d134:
    // 0x12d134: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12d134u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d138: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d13c: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x12d13cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12d140: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x12D140u;
    {
        const bool branch_taken_0x12d140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d140) {
            ctx->pc = 0x12D184u;
            return;
        }
    }
    ctx->pc = 0x12D148u;
    // 0x12d148: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12d148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d14c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d150: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12d150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12d154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x12d154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12d158: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d15c: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x12d15cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x12d160: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12d160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d164: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x12d164u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d168: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12d168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d16c: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x12d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d170: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x12d170u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d174: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x12d174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x12d178: 0xa620007c  sh          $zero, 0x7C($s1)
    ctx->pc = 0x12d178u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x12d17c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x12D17Cu;
    {
        const bool branch_taken_0x12d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d17c) {
            ctx->pc = 0x12D2CCu;
            return;
        }
    }
    ctx->pc = 0x12D184u;
}
