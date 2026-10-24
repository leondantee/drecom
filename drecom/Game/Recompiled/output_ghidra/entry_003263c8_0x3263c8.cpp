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

// Function: entry_003263c8
// Address: 0x3263c8 - 0x3263f8
void entry_003263c8_0x3263c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003263c8_0x3263c8");
#endif

    switch (ctx->pc) {
        case 0x3263e8u: goto label_3263e8;
        default: break;
    }

    ctx->pc = 0x3263c8u;

    // 0x3263c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3263c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3263ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3263d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263d4: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x3263d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x3263d8: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x3263d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x3263dc: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x3263dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x3263e0: 0xc0675ec  jal         func_19D7B0
    ctx->pc = 0x3263E0u;
    SET_GPR_U32(ctx, 31, 0x3263E8u);
    ctx->pc = 0x19D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7B0u, 0x3263E0u, 0x3263E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263E8u;
label_3263e8:
    // 0x3263e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3263e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3263ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3263ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3263f0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3263f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263f4: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x3263f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    ctx->pc = 0x3263f8u;
}
