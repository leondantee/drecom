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

// Function: entry_001bcf80
// Address: 0x1bcf80 - 0x1bcfd8
void entry_001bcf80_0x1bcf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bcf80_0x1bcf80");
#endif

    switch (ctx->pc) {
        case 0x1bcf94u: goto label_1bcf94;
        case 0x1bcfc0u: goto label_1bcfc0;
        default: break;
    }

    ctx->pc = 0x1bcf80u;

    // 0x1bcf80: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcf84: 0x24a212c0  addiu       $v0, $a1, 0x12C0
    ctx->pc = 0x1bcf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
    // 0x1bcf88: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bcf88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcf8c: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1BCF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BCF94u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1BCF8Cu, 0x1BCF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCF94u;
label_1bcf94:
    // 0x1bcf94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1bcf94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1bcf98: 0x14800064  bnez        $a0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1BCF98u;
    {
        const bool branch_taken_0x1bcf98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf98) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCFA0u;
    // 0x1bcfa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcfa4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1bcfa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1bcfa8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bcfa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bcfac: 0x30640010  andi        $a0, $v1, 0x10
    ctx->pc = 0x1bcfacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1bcfb0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BCFB0u;
    {
        const bool branch_taken_0x1bcfb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfb0) {
            ctx->pc = 0x1BCFD8u;
            return;
        }
    }
    ctx->pc = 0x1BCFB8u;
    // 0x1bcfb8: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1BCFB8u;
    SET_GPR_U32(ctx, 31, 0x1BCFC0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1BCFB8u, 0x1BCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFC0u;
label_1bcfc0:
    // 0x1bcfc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BCFC0u;
    {
        const bool branch_taken_0x1bcfc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfc0) {
            ctx->pc = 0x1BCFD8u;
            return;
        }
    }
    ctx->pc = 0x1BCFC8u;
    // 0x1bcfc8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bcfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bcfcc: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x1bcfccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bcfd0: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1BCFD0u;
    {
        const bool branch_taken_0x1bcfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfd0) {
            ctx->pc = 0x1BD12Cu;
            return;
        }
    }
    ctx->pc = 0x1BCFD8u;
}
