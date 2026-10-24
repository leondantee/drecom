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

// Function: caseD_5
// Address: 0x27c380 - 0x27c39c
void caseD_5_0x27c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x27c380");
#endif

    ctx->pc = 0x27c380u;

    // 0x27c380: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c384: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27c384u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27c388: 0x0  nop
    ctx->pc = 0x27c388u;
    // NOP
    // 0x27c38c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x27c38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x27c390: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27c390u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c394: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27C394u;
    {
        const bool branch_taken_0x27c394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c394) {
            ctx->pc = 0x27C400u;
            return;
        }
    }
    ctx->pc = 0x27C39Cu;
}
