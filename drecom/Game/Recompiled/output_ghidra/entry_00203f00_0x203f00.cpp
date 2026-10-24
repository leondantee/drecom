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

// Function: entry_00203f00
// Address: 0x203f00 - 0x203f40
void entry_00203f00_0x203f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f00_0x203f00");
#endif

    switch (ctx->pc) {
        case 0x203f2cu: goto label_203f2c;
        default: break;
    }

    ctx->pc = 0x203f00u;

    // 0x203f00: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x203f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x203f04: 0x34a4cccd  ori         $a0, $a1, 0xCCCD
    ctx->pc = 0x203f04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x203f08: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x203f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x203f0c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x203f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x203f10: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x203f10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x203f14: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x203f18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x203f18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x203f1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x203f20: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x203f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x203f24: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x203F24u;
    SET_GPR_U32(ctx, 31, 0x203F2Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x203F24u, 0x203F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F2Cu;
label_203f2c:
    // 0x203f2c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f30: 0x84259270  lh          $a1, -0x6D90($at)
    ctx->pc = 0x203f30u;
    SET_GPR_S32(ctx, 5, (int16_t)FAST_READ16(0x619270u));
    // 0x203f34: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x203f38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x203f3c: 0xa4279270  sh          $a3, -0x6D90($at)
    ctx->pc = 0x203f3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x619270u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x619270u, _value); } while (0);
    ctx->pc = 0x203f40u;
}
