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

// Function: entry_0019d128
// Address: 0x19d128 - 0x19d150
void entry_0019d128_0x19d128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d128_0x19d128");
#endif

    switch (ctx->pc) {
        case 0x19d134u: goto label_19d134;
        case 0x19d148u: goto label_19d148;
        default: break;
    }

    ctx->pc = 0x19d128u;

    // 0x19d128: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x19d128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19d12c: 0xc084a08  jal         func_212820
    ctx->pc = 0x19D12Cu;
    SET_GPR_U32(ctx, 31, 0x19D134u);
    ctx->pc = 0x212820u;
    {
        ctx->pc = 0x19D134u;
        ps2_syscalls::CreateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D134u) { return; }
    ctx->pc = 0x19D134u;
label_19d134:
    // 0x19d134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19d134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19d138: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19d138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d13c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19d13cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19d140: 0xc084a10  jal         func_212840
    ctx->pc = 0x19D140u;
    SET_GPR_U32(ctx, 31, 0x19D148u);
    ctx->pc = 0x212840u;
    {
        ctx->pc = 0x19D148u;
        ps2_syscalls::StartThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D148u) { return; }
    ctx->pc = 0x19D148u;
label_19d148:
    // 0x19d148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19D148u;
    {
        const bool branch_taken_0x19d148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d148) {
            ctx->pc = 0x19D178u;
            return;
        }
    }
    ctx->pc = 0x19D150u;
}
