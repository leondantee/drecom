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

// Function: entry_00196960
// Address: 0x196960 - 0x1969c8
void entry_00196960_0x196960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196960_0x196960");
#endif

    switch (ctx->pc) {
        case 0x196974u: goto label_196974;
        case 0x1969acu: goto label_1969ac;
        default: break;
    }

    ctx->pc = 0x196960u;

    // 0x196960: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196960u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196964: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x196964u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196968: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x196968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19696c: 0xc06c168  jal         func_1B05A0
    ctx->pc = 0x19696Cu;
    SET_GPR_U32(ctx, 31, 0x196974u);
    ctx->pc = 0x1B05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B05A0u, 0x19696Cu, 0x196974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196974u;
label_196974:
    // 0x196974: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x196974u;
    {
        const bool branch_taken_0x196974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x196974) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x19697Cu;
    // 0x19697c: 0x3c063dcc  lui         $a2, 0x3DCC
    ctx->pc = 0x19697cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15820 << 16));
    // 0x196980: 0x34c5cccd  ori         $a1, $a2, 0xCCCD
    ctx->pc = 0x196980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x196984: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x196984u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x196988: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x196988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19698c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x19698cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196990: 0x2407001c  addiu       $a3, $zero, 0x1C
    ctx->pc = 0x196990u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x196994: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x196994u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x196998: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x196998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19699c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19699cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1969a0: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1969a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1969a4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x1969A4u;
    SET_GPR_U32(ctx, 31, 0x1969ACu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x1969A4u, 0x1969ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1969ACu;
label_1969ac:
    // 0x1969ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1969acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1969b0: 0x8426d340  lh          $a2, -0x2CC0($at)
    ctx->pc = 0x1969b0u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x5CD340u));
    // 0x1969b4: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x1969b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1969b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1969b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1969bc: 0xa427d340  sh          $a3, -0x2CC0($at)
    ctx->pc = 0x1969bcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5CD340u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CD340u, _value); } while (0);
    // 0x1969c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1969C0u;
    {
        const bool branch_taken_0x1969c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1969c0) {
            ctx->pc = 0x196A80u;
            return;
        }
    }
    ctx->pc = 0x1969C8u;
}
