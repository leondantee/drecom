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

// Function: entry_00212268
// Address: 0x212268 - 0x212290
void entry_00212268_0x212268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00212268_0x212268");
#endif

    switch (ctx->pc) {
        case 0x212274u: goto label_212274;
        case 0x212288u: goto label_212288;
        default: break;
    }

    ctx->pc = 0x212268u;

    // 0x212268: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x212268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21226c: 0xc084a08  jal         func_212820
    ctx->pc = 0x21226Cu;
    SET_GPR_U32(ctx, 31, 0x212274u);
    ctx->pc = 0x212820u;
    {
        ctx->pc = 0x212274u;
        ps2_syscalls::CreateThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x212274u) { return; }
    ctx->pc = 0x212274u;
label_212274:
    // 0x212274: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x212274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x212278: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x212278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21227c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21227cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x212280: 0xc084a10  jal         func_212840
    ctx->pc = 0x212280u;
    SET_GPR_U32(ctx, 31, 0x212288u);
    ctx->pc = 0x212840u;
    {
        ctx->pc = 0x212288u;
        ps2_syscalls::StartThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x212288u) { return; }
    ctx->pc = 0x212288u;
label_212288:
    // 0x212288: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x212288u;
    {
        const bool branch_taken_0x212288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x212288) {
            ctx->pc = 0x2122B8u;
            return;
        }
    }
    ctx->pc = 0x212290u;
}
