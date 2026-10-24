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

// Function: entry_00145ce4
// Address: 0x145ce4 - 0x145d30
void entry_00145ce4_0x145ce4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145ce4_0x145ce4");
#endif

    switch (ctx->pc) {
        case 0x145cfcu: goto label_145cfc;
        default: break;
    }

    ctx->pc = 0x145ce4u;

    // 0x145ce4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x145ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145ce8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x145ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x145cec: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x145cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x145cf0: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x145cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x145cf4: 0xc058f20  jal         func_163C80
    ctx->pc = 0x145CF4u;
    SET_GPR_U32(ctx, 31, 0x145CFCu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x145CF4u, 0x145CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145CFCu;
label_145cfc:
    // 0x145cfc: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x145d00: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x145d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145d04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x145d04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145d08: 0x0  nop
    ctx->pc = 0x145d08u;
    // NOP
    // 0x145d0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145d0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145d10: 0x0  nop
    ctx->pc = 0x145d10u;
    // NOP
    // 0x145d14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x145D14u;
    {
        const bool branch_taken_0x145d14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x145d14) {
            ctx->pc = 0x145D30u;
            return;
        }
    }
    ctx->pc = 0x145D1Cu;
    // 0x145d1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x145d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x145d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145d24: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x145d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145d28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145d2c: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x145d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x145d30u;
}
