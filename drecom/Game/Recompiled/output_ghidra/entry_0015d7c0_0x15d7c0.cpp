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

// Function: entry_0015d7c0
// Address: 0x15d7c0 - 0x15d7e0
void entry_0015d7c0_0x15d7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015d7c0_0x15d7c0");
#endif

    ctx->pc = 0x15d7c0u;

    // 0x15d7c0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x15d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x15d7c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15d7c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15d7c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x15d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x15d7cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15d7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15d7d0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x15d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15d7d4: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x15d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x15d7d8: 0xc058bd0  jal         func_162F40
    ctx->pc = 0x15D7D8u;
    SET_GPR_U32(ctx, 31, 0x15D7E0u);
    ctx->pc = 0x162F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x162F40u, 0x15D7D8u, 0x15D7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D7E0u;
}
