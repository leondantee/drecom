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

// Function: entry_001b083c
// Address: 0x1b083c - 0x1b0874
void entry_001b083c_0x1b083c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b083c_0x1b083c");
#endif

    ctx->pc = 0x1b083cu;

    // 0x1b083c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1b083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0840: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x1b0840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1b0844: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0848: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b084c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b084cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0850: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x1b0850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x1b0854: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b0854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1b0858: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b0858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b085c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b085cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0860: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x1b0860u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0864: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x1b0864u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0868: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x1b0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b086c: 0xc06c2a4  jal         func_1B0A90
    ctx->pc = 0x1B086Cu;
    SET_GPR_U32(ctx, 31, 0x1B0874u);
    ctx->pc = 0x1B0A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0A90u, 0x1B086Cu, 0x1B0874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0874u;
}
