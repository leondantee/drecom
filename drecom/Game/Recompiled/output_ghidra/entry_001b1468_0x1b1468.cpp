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

// Function: entry_001b1468
// Address: 0x1b1468 - 0x1b1490
void entry_001b1468_0x1b1468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1468_0x1b1468");
#endif

    switch (ctx->pc) {
        case 0x1b1480u: goto label_1b1480;
        default: break;
    }

    ctx->pc = 0x1b1468u;

    // 0x1b1468: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1b1468u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b146c: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b146cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b1470: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x1b1470u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b1474: 0xc7ac00d8  lwc1        $f12, 0xD8($sp)
    ctx->pc = 0x1b1474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b1478: 0xc06c560  jal         func_1B1580
    ctx->pc = 0x1B1478u;
    SET_GPR_U32(ctx, 31, 0x1B1480u);
    ctx->pc = 0x1B1580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1580u, 0x1B1478u, 0x1B1480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1480u;
label_1b1480:
    // 0x1b1480: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b1480u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b1484: 0x26310006  addiu       $s1, $s1, 0x6
    ctx->pc = 0x1b1484u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x1b1488: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x1b1488u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x1b148c: 0x0  nop
    ctx->pc = 0x1b148cu;
    // NOP
    ctx->pc = 0x1b1490u;
}
