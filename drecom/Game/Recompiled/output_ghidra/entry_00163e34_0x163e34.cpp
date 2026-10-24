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

// Function: entry_00163e34
// Address: 0x163e34 - 0x163e6c
void entry_00163e34_0x163e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163e34_0x163e34");
#endif

    switch (ctx->pc) {
        case 0x163e64u: goto label_163e64;
        default: break;
    }

    ctx->pc = 0x163e34u;

    // 0x163e34: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e38: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e3c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x163e3cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x163e40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x163e40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163e44: 0x0  nop
    ctx->pc = 0x163e44u;
    // NOP
    // 0x163e48: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x163E48u;
    {
        const bool branch_taken_0x163e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x163e48) {
            ctx->pc = 0x163E6Cu;
            return;
        }
    }
    ctx->pc = 0x163E50u;
    // 0x163e50: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x163e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e54: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e58: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x163e58u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x163e5c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x163E5Cu;
    SET_GPR_U32(ctx, 31, 0x163E64u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x163E5Cu, 0x163E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E64u;
label_163e64:
    // 0x163e64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163E64u;
    {
        const bool branch_taken_0x163e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e64) {
            ctx->pc = 0x163E74u;
            return;
        }
    }
    ctx->pc = 0x163E6Cu;
}
