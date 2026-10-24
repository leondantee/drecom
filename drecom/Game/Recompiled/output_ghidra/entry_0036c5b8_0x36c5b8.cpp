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

// Function: entry_0036c5b8
// Address: 0x36c5b8 - 0x36c5e8
void entry_0036c5b8_0x36c5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036c5b8_0x36c5b8");
#endif

    switch (ctx->pc) {
        case 0x36c5ccu: goto label_36c5cc;
        case 0x36c5e0u: goto label_36c5e0;
        default: break;
    }

    ctx->pc = 0x36c5b8u;

    // 0x36c5b8: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c5bc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x36c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36c5c0: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x36c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x36c5c4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x36C5C4u;
    SET_GPR_U32(ctx, 31, 0x36C5CCu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x36C5CCu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x36C5CCu) { return; }
    ctx->pc = 0x36C5CCu;
label_36c5cc:
    // 0x36c5cc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x36c5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c5d0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x36c5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x36c5d4: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x36c5d4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36c5d8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x36C5D8u;
    SET_GPR_U32(ctx, 31, 0x36C5E0u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x36C5D8u, 0x36C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C5E0u;
label_36c5e0:
    // 0x36c5e0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x36c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x36c5e4: 0x0  nop
    ctx->pc = 0x36c5e4u;
    // NOP
    ctx->pc = 0x36c5e8u;
}
