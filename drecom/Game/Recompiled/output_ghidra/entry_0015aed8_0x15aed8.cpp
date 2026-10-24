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

// Function: entry_0015aed8
// Address: 0x15aed8 - 0x15af00
void entry_0015aed8_0x15aed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aed8_0x15aed8");
#endif

    switch (ctx->pc) {
        case 0x15aefcu: goto label_15aefc;
        default: break;
    }

    ctx->pc = 0x15aed8u;

    // 0x15aed8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x15aed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x15aedc: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x15aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x15aee0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15aee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x15aee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15aee8: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x15aee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x15aeec: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x15aeecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x15aef0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x15aef0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15aef4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x15AEF4u;
    SET_GPR_U32(ctx, 31, 0x15AEFCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x15AEF4u, 0x15AEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AEFCu;
label_15aefc:
    // 0x15aefc: 0x0  nop
    ctx->pc = 0x15aefcu;
    // NOP
    ctx->pc = 0x15af00u;
}
