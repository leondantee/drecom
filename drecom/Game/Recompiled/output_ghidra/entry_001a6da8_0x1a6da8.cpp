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

// Function: entry_001a6da8
// Address: 0x1a6da8 - 0x1a6e00
void entry_001a6da8_0x1a6da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6da8_0x1a6da8");
#endif

    switch (ctx->pc) {
        case 0x1a6dd4u: goto label_1a6dd4;
        case 0x1a6df8u: goto label_1a6df8;
        default: break;
    }

    ctx->pc = 0x1a6da8u;

    // 0x1a6da8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1a6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1a6dac: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x1a6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6db0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a6db4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a6db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a6db8: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x1a6db8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a6dbc: 0x2461821  addu        $v1, $s2, $a2
    ctx->pc = 0x1a6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
    // 0x1a6dc0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6dc4: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a6dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6dc8: 0x24650474  addiu       $a1, $v1, 0x474
    ctx->pc = 0x1a6dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1140));
    // 0x1a6dcc: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6DCCu;
    SET_GPR_U32(ctx, 31, 0x1A6DD4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6DCCu, 0x1A6DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DD4u;
label_1a6dd4:
    // 0x1a6dd4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1a6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1a6dd8: 0x703023  subu        $a2, $v1, $s0
    ctx->pc = 0x1a6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a6ddc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1a6ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6de0: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x1a6de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1a6de4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1a6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1a6de8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1a6de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1a6dec: 0x24650510  addiu       $a1, $v1, 0x510
    ctx->pc = 0x1a6decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1296));
    // 0x1a6df0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1A6DF0u;
    SET_GPR_U32(ctx, 31, 0x1A6DF8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1A6DF0u, 0x1A6DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6DF8u;
label_1a6df8:
    // 0x1a6df8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1a6df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a6dfc: 0x70808628  paddub      $s0, $a0, $zero
    ctx->pc = 0x1a6dfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1a6e00u;
}
