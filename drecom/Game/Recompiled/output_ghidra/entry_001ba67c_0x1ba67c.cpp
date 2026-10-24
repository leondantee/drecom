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

// Function: entry_001ba67c
// Address: 0x1ba67c - 0x1ba6ec
void entry_001ba67c_0x1ba67c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba67c_0x1ba67c");
#endif

    switch (ctx->pc) {
        case 0x1ba6a0u: goto label_1ba6a0;
        case 0x1ba6b8u: goto label_1ba6b8;
        default: break;
    }

    ctx->pc = 0x1ba67cu;

    // 0x1ba67c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba680: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1ba680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ba684: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1ba684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1ba688: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1ba688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ba68c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1ba68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1ba690: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ba690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba694: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ba694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ba698: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1BA698u;
    SET_GPR_U32(ctx, 31, 0x1BA6A0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1BA698u, 0x1BA6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6A0u;
label_1ba6a0:
    // 0x1ba6a0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba6a4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ba6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ba6a8: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1ba6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ba6ac: 0xc44d1380  lwc1        $f13, 0x1380($v0)
    ctx->pc = 0x1ba6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ba6b0: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1BA6B0u;
    SET_GPR_U32(ctx, 31, 0x1BA6B8u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1BA6B0u, 0x1BA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA6B8u;
label_1ba6b8:
    // 0x1ba6b8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1ba6bc: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x1ba6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ba6c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ba6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba6c4: 0x0  nop
    ctx->pc = 0x1ba6c4u;
    // NOP
    // 0x1ba6c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ba6c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ba6cc: 0x0  nop
    ctx->pc = 0x1ba6ccu;
    // NOP
    // 0x1ba6d0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA6D0u;
    {
        const bool branch_taken_0x1ba6d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ba6d0) {
            ctx->pc = 0x1BA6ECu;
            return;
        }
    }
    ctx->pc = 0x1BA6D8u;
    // 0x1ba6d8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ba6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ba6dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ba6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ba6e0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ba6e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ba6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ba6e8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1ba6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->pc = 0x1ba6ecu;
}
