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

// Function: entry_001b8188
// Address: 0x1b8188 - 0x1b81e4
void entry_001b8188_0x1b8188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8188_0x1b8188");
#endif

    switch (ctx->pc) {
        case 0x1b819cu: goto label_1b819c;
        case 0x1b81c8u: goto label_1b81c8;
        default: break;
    }

    ctx->pc = 0x1b8188u;

    // 0x1b8188: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b818c: 0x246212c0  addiu       $v0, $v1, 0x12C0
    ctx->pc = 0x1b818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4800));
    // 0x1b8190: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b8190u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b8194: 0xc057b54  jal         func_15ED50
    ctx->pc = 0x1B8194u;
    SET_GPR_U32(ctx, 31, 0x1B819Cu);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x1B8194u, 0x1B819Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B819Cu;
label_1b819c:
    // 0x1b819c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b819cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b81a0: 0x14800065  bnez        $a0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1B81A0u;
    {
        const bool branch_taken_0x1b81a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b81a0) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B81A8u;
    // 0x1b81a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b81a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b81ac: 0x90a509db  lbu         $a1, 0x9DB($a1)
    ctx->pc = 0x1b81acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2523)));
    // 0x1b81b0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x1b81b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1b81b4: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1b81b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1b81b8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1B81B8u;
    {
        const bool branch_taken_0x1b81b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81b8) {
            ctx->pc = 0x1B81E4u;
            return;
        }
    }
    ctx->pc = 0x1B81C0u;
    // 0x1b81c0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1B81C0u;
    SET_GPR_U32(ctx, 31, 0x1B81C8u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1B81C0u, 0x1B81C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B81C8u;
label_1b81c8:
    // 0x1b81c8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b81c8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b81cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B81CCu;
    {
        const bool branch_taken_0x1b81cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81cc) {
            ctx->pc = 0x1B81E4u;
            return;
        }
    }
    ctx->pc = 0x1B81D4u;
    // 0x1b81d4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b81d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b81d8: 0xa0a010a8  sb          $zero, 0x10A8($a1)
    ctx->pc = 0x1b81d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b81dc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1B81DCu;
    {
        const bool branch_taken_0x1b81dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81dc) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B81E4u;
}
