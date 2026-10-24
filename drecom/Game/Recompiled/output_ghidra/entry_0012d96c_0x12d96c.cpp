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

// Function: entry_0012d96c
// Address: 0x12d96c - 0x12d9a0
void entry_0012d96c_0x12d96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d96c_0x12d96c");
#endif

    switch (ctx->pc) {
        case 0x12d998u: goto label_12d998;
        default: break;
    }

    ctx->pc = 0x12d96cu;

    // 0x12d96c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12d970: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x12d970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12d974: 0x3c04469c  lui         $a0, 0x469C
    ctx->pc = 0x12d974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)18076 << 16));
    // 0x12d978: 0x34824000  ori         $v0, $a0, 0x4000
    ctx->pc = 0x12d978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x12d97c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12d97cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12d980: 0x24020504  addiu       $v0, $zero, 0x504
    ctx->pc = 0x12d980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x12d984: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d984u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d988: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x12d988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x12d98c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12d98cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12d990: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12D990u;
    SET_GPR_U32(ctx, 31, 0x12D998u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12D990u, 0x12D998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D998u;
label_12d998:
    // 0x12d998: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x12D998u;
    {
        const bool branch_taken_0x12d998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12d998) {
            ctx->pc = 0x12D9FCu;
            return;
        }
    }
    ctx->pc = 0x12D9A0u;
}
