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

// Function: entry_002e16c4
// Address: 0x2e16c4 - 0x2e16f8
void entry_002e16c4_0x2e16c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e16c4_0x2e16c4");
#endif

    ctx->pc = 0x2e16c4u;

    // 0x2e16c4: 0x3c023df5  lui         $v0, 0x3DF5
    ctx->pc = 0x2e16c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15861 << 16));
    // 0x2e16c8: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2e16c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2e16cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e16ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e16d0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2e16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2e16d4: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x2e16d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x2e16d8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2e16d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2e16dc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2e16dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e16e0: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x2e16e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2e16e4: 0x27a900b0  addiu       $t1, $sp, 0xB0
    ctx->pc = 0x2e16e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e16e8: 0x27aa00c0  addiu       $t2, $sp, 0xC0
    ctx->pc = 0x2e16e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2e16ec: 0xc7ac00dc  lwc1        $f12, 0xDC($sp)
    ctx->pc = 0x2e16ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e16f0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2E16F0u;
    SET_GPR_U32(ctx, 31, 0x2E16F8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E16F0u, 0x2E16F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E16F8u;
}
