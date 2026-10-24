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

// Function: caseD_9
// Address: 0x1b91ec - 0x1b925c
void caseD_9_0x1b91ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1b91ec");
#endif

    switch (ctx->pc) {
        case 0x1b9210u: goto label_1b9210;
        case 0x1b9228u: goto label_1b9228;
        default: break;
    }

    ctx->pc = 0x1b91ecu;

    // 0x1b91ec: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b91ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b91f0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b91f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b91f4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b91f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b91f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b91f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b91fc: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1b91fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x1b9200: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b9200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9204: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b9204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b9208: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B9208u;
    SET_GPR_U32(ctx, 31, 0x1B9210u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B9208u, 0x1B9210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9210u;
label_1b9210:
    // 0x1b9210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9214: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9218: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b9218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b921c: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1b921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b9220: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1B9220u;
    SET_GPR_U32(ctx, 31, 0x1B9228u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1B9220u, 0x1B9228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9228u;
label_1b9228:
    // 0x1b9228: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1b922c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1b922cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b9230: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b9230u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9234: 0x0  nop
    ctx->pc = 0x1b9234u;
    // NOP
    // 0x1b9238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b9238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b923c: 0x0  nop
    ctx->pc = 0x1b923cu;
    // NOP
    // 0x1b9240: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B9240u;
    {
        const bool branch_taken_0x1b9240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b9240) {
            ctx->pc = 0x1B925Cu;
            return;
        }
    }
    ctx->pc = 0x1B9248u;
    // 0x1b9248: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1b9248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x1b924c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1b924cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b9250: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b9254: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1b9254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b9258: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1b9258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1b925cu;
}
