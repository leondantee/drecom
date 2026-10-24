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

// Function: entry_001bde38
// Address: 0x1bde38 - 0x1bdec0
void entry_001bde38_0x1bde38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bde38_0x1bde38");
#endif

    switch (ctx->pc) {
        case 0x1bde44u: goto label_1bde44;
        default: break;
    }

    ctx->pc = 0x1bde38u;

    // 0x1bde38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bde38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde3c: 0xc0587a8  jal         func_161EA0
    ctx->pc = 0x1BDE3Cu;
    SET_GPR_U32(ctx, 31, 0x1BDE44u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x1BDE3Cu, 0x1BDE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDE44u;
label_1bde44:
    // 0x1bde44: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1bde44u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bde48: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1BDE48u;
    {
        const bool branch_taken_0x1bde48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde48) {
            ctx->pc = 0x1BDED4u;
            return;
        }
    }
    ctx->pc = 0x1BDE50u;
    // 0x1bde50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bde50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bde54: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bde54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bde58: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1bde58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1bde5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bde5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bde60: 0x1060022a  beqz        $v1, . + 4 + (0x22A << 2)
    ctx->pc = 0x1BDE60u;
    {
        const bool branch_taken_0x1bde60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bde60) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDE68u;
    // 0x1bde68: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bde68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bde6c: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x1bde6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1bde70: 0x3c03feff  lui         $v1, 0xFEFF
    ctx->pc = 0x1bde70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65279 << 16));
    // 0x1bde74: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x1bde74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1bde78: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x1bde78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x1bde7c: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x1bde7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
    // 0x1bde80: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1bde80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bde84: 0x90c713a6  lbu         $a3, 0x13A6($a2)
    ctx->pc = 0x1bde84u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5030)));
    // 0x1bde88: 0x30e800ff  andi        $t0, $a3, 0xFF
    ctx->pc = 0x1bde88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1bde8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bde8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bde90: 0x1103000b  beq         $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BDE90u;
    {
        const bool branch_taken_0x1bde90 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bde90) {
            ctx->pc = 0x1BDEC0u;
            return;
        }
    }
    ctx->pc = 0x1BDE98u;
    // 0x1bde98: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bde98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bde9c: 0x11040008  beq         $t0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BDE9Cu;
    {
        const bool branch_taken_0x1bde9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 4));
        if (branch_taken_0x1bde9c) {
            ctx->pc = 0x1BDEC0u;
            return;
        }
    }
    ctx->pc = 0x1BDEA4u;
    // 0x1bdea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bdea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bdea8: 0x11030218  beq         $t0, $v1, . + 4 + (0x218 << 2)
    ctx->pc = 0x1BDEA8u;
    {
        const bool branch_taken_0x1bdea8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x1bdea8) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDEB0u;
    // 0x1bdeb0: 0x11000216  beqz        $t0, . + 4 + (0x216 << 2)
    ctx->pc = 0x1BDEB0u;
    {
        const bool branch_taken_0x1bdeb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdeb0) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDEB8u;
    // 0x1bdeb8: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x1BDEB8u;
    {
        const bool branch_taken_0x1bdeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bdeb8) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BDEC0u;
}
