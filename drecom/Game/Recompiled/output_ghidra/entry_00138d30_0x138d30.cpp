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

// Function: entry_00138d30
// Address: 0x138d30 - 0x138d54
void entry_00138d30_0x138d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d30_0x138d30");
#endif

    ctx->pc = 0x138d30u;

    // 0x138d30: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x138d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138d34: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x138d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x138d38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138d38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138d3c: 0x0  nop
    ctx->pc = 0x138d3cu;
    // NOP
    // 0x138d40: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x138d40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x138d44: 0xe6600044  swc1        $f0, 0x44($s3)
    ctx->pc = 0x138d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
    // 0x138d48: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x138d48u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x138d4c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x138D4Cu;
    {
        const bool branch_taken_0x138d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x138d4c) {
            ctx->pc = 0x138E60u;
            return;
        }
    }
    ctx->pc = 0x138D54u;
}
