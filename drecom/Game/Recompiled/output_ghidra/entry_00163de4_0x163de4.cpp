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

// Function: entry_00163de4
// Address: 0x163de4 - 0x163e34
void entry_00163de4_0x163de4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163de4_0x163de4");
#endif

    switch (ctx->pc) {
        case 0x163e2cu: goto label_163e2c;
        default: break;
    }

    ctx->pc = 0x163de4u;

    // 0x163de4: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163de8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x163de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x163dec: 0x0  nop
    ctx->pc = 0x163decu;
    // NOP
    // 0x163df0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163df0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163df4: 0x0  nop
    ctx->pc = 0x163df4u;
    // NOP
    // 0x163df8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x163DF8u;
    {
        const bool branch_taken_0x163df8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163df8) {
            ctx->pc = 0x163E34u;
            return;
        }
    }
    ctx->pc = 0x163E00u;
    // 0x163e00: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x163e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e04: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x163e08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163e0c: 0x0  nop
    ctx->pc = 0x163e0cu;
    // NOP
    // 0x163e10: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x163E10u;
    {
        const bool branch_taken_0x163e10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x163e10) {
            ctx->pc = 0x163E6Cu;
            return;
        }
    }
    ctx->pc = 0x163E18u;
    // 0x163e18: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x163e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x163e1c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x163e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163e20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x163e20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x163e24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x163E24u;
    SET_GPR_U32(ctx, 31, 0x163E2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x163E24u, 0x163E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163E2Cu;
label_163e2c:
    // 0x163e2c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x163E2Cu;
    {
        const bool branch_taken_0x163e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x163e2c) {
            ctx->pc = 0x163E74u;
            return;
        }
    }
    ctx->pc = 0x163E34u;
}
