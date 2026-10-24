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

// Function: entry_0019c10c
// Address: 0x19c10c - 0x19c150
void entry_0019c10c_0x19c10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019c10c_0x19c10c");
#endif

    switch (ctx->pc) {
        case 0x19c124u: goto label_19c124;
        default: break;
    }

    ctx->pc = 0x19c10cu;

    // 0x19c10c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x19c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c110: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x19c114: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19c118: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x19c118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19c11c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x19C11Cu;
    SET_GPR_U32(ctx, 31, 0x19C124u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x19C11Cu, 0x19C124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C124u;
label_19c124:
    // 0x19c124: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x19c124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x19c128: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x19c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19c12c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c12cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c130: 0x0  nop
    ctx->pc = 0x19c130u;
    // NOP
    // 0x19c134: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19c134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c138: 0x0  nop
    ctx->pc = 0x19c138u;
    // NOP
    // 0x19c13c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x19C13Cu;
    {
        const bool branch_taken_0x19c13c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c13c) {
            ctx->pc = 0x19C150u;
            return;
        }
    }
    ctx->pc = 0x19C144u;
    // 0x19c144: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x19c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c148: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x19c148u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x19c14c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x19c14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x19c150u;
}
