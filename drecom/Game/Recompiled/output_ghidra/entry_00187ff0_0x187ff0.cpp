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

// Function: entry_00187ff0
// Address: 0x187ff0 - 0x188014
void entry_00187ff0_0x187ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187ff0_0x187ff0");
#endif

    switch (ctx->pc) {
        case 0x188000u: goto label_188000;
        default: break;
    }

    ctx->pc = 0x187ff0u;

    // 0x187ff0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x187ff0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x187ff4: 0x8e050168  lw          $a1, 0x168($s0)
    ctx->pc = 0x187ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
    // 0x187ff8: 0xc062080  jal         func_188200
    ctx->pc = 0x187FF8u;
    SET_GPR_U32(ctx, 31, 0x188000u);
    ctx->pc = 0x188200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188200u, 0x187FF8u, 0x188000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188000u;
label_188000:
    // 0x188000: 0x111c3c  dsll32      $v1, $s1, 16
    ctx->pc = 0x188000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 16));
    // 0x188004: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x188004u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x188008: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18800c: 0xa423f138  sh          $v1, -0xEC8($at)
    ctx->pc = 0x18800cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x47F138u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x47F138u, _value); } while (0);
    // 0x188010: 0xae110168  sw          $s1, 0x168($s0)
    ctx->pc = 0x188010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 17));
    ctx->pc = 0x188014u;
}
