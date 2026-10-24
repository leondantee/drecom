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

// Function: entry_0015d0e4
// Address: 0x15d0e4 - 0x15d108
void entry_0015d0e4_0x15d0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d0e4_0x15d0e4");
#endif

    ctx->pc = 0x15d0e4u;

    // 0x15d0e4: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d0e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d0e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d0ec: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x15d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x15d0f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15d0f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d0f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d0f8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15d0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15d0fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x15d0fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15d100: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D100u;
    SET_GPR_U32(ctx, 31, 0x15D108u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D100u, 0x15D108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D108u;
}
