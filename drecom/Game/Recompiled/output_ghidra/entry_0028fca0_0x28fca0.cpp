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

// Function: entry_0028fca0
// Address: 0x28fca0 - 0x28fcd8
void entry_0028fca0_0x28fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028fca0_0x28fca0");
#endif

    switch (ctx->pc) {
        case 0x28fcbcu: goto label_28fcbc;
        default: break;
    }

    ctx->pc = 0x28fca0u;

    // 0x28fca0: 0xc6015e00  lwc1        $f1, 0x5E00($s0)
    ctx->pc = 0x28fca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28fca4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28fca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28fca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28fcac: 0x0  nop
    ctx->pc = 0x28fcacu;
    // NOP
    // 0x28fcb0: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x28fcb0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x28fcb4: 0xc045630  jal         func_1158C0
    ctx->pc = 0x28FCB4u;
    SET_GPR_U32(ctx, 31, 0x28FCBCu);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x28FCB4u, 0x28FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCBCu;
label_28fcbc:
    // 0x28fcbc: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28FCBCu;
    {
        const bool branch_taken_0x28fcbc = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x28fcbc) {
            ctx->pc = 0x28FCD8u;
            return;
        }
    }
    ctx->pc = 0x28FCC4u;
    // 0x28fcc4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28fcc4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28fcc8: 0x0  nop
    ctx->pc = 0x28fcc8u;
    // NOP
    // 0x28fccc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28fcccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x28fcd0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28FCD0u;
    {
        const bool branch_taken_0x28fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fcd0) {
            ctx->pc = 0x28FCF4u;
            return;
        }
    }
    ctx->pc = 0x28FCD8u;
}
