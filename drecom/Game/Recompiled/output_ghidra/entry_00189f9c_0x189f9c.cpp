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

// Function: entry_00189f9c
// Address: 0x189f9c - 0x189fd0
void entry_00189f9c_0x189f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189f9c_0x189f9c");
#endif

    ctx->pc = 0x189f9cu;

    // 0x189f9c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x189f9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x189fa0: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fa4: 0xe44100cc  swc1        $f1, 0xCC($v0)
    ctx->pc = 0x189fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x189fa8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fac: 0xe44100c4  swc1        $f1, 0xC4($v0)
    ctx->pc = 0x189facu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x189fb0: 0x8fa400f8  lw          $a0, 0xF8($sp)
    ctx->pc = 0x189fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fb4: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x189fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x189fb8: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x189fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x189fbc: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x189fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x189fc0: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x189fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x189fc4: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x189fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x189fc8: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x189FC8u;
    SET_GPR_U32(ctx, 31, 0x189FD0u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x189FC8u, 0x189FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189FD0u;
}
