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

// Function: entry_00312758
// Address: 0x312758 - 0x312788
void entry_00312758_0x312758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00312758_0x312758");
#endif

    switch (ctx->pc) {
        case 0x312784u: goto label_312784;
        default: break;
    }

    ctx->pc = 0x312758u;

    // 0x312758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31275c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x31275cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x312760: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x312760u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x312764: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x312764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x312768: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x312768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x31276c: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x31276cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312770: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x312770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x312774: 0x24481bf0  addiu       $t0, $v0, 0x1BF0
    ctx->pc = 0x312774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 7152));
    // 0x312778: 0x8fa90080  lw          $t1, 0x80($sp)
    ctx->pc = 0x312778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x31277c: 0xc0c47d0  jal         func_311F40
    ctx->pc = 0x31277Cu;
    SET_GPR_U32(ctx, 31, 0x312784u);
    ctx->pc = 0x311F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311F40u, 0x31277Cu, 0x312784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312784u;
label_312784:
    // 0x312784: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x312784u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x312788u;
}
