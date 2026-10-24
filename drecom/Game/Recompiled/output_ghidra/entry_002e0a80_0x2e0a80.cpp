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

// Function: entry_002e0a80
// Address: 0x2e0a80 - 0x2e0ab4
void entry_002e0a80_0x2e0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0a80_0x2e0a80");
#endif

    ctx->pc = 0x2e0a80u;

    // 0x2e0a80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2e0a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2e0a84: 0x3c023e19  lui         $v0, 0x3E19
    ctx->pc = 0x2e0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15897 << 16));
    // 0x2e0a88: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x2e0a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x2e0a8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e0a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e0a90: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2e0a90u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2e0a94: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2e0a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0a98: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x2e0a98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e0a9c: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x2e0a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e0aa0: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2e0aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e0aa4: 0x27aa0050  addiu       $t2, $sp, 0x50
    ctx->pc = 0x2e0aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e0aa8: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x2e0aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e0aac: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2E0AACu;
    SET_GPR_U32(ctx, 31, 0x2E0AB4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2E0AACu, 0x2E0AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0AB4u;
}
