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

// Function: entry_00310454
// Address: 0x310454 - 0x3104d4
void entry_00310454_0x310454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00310454_0x310454");
#endif

    switch (ctx->pc) {
        case 0x310460u: goto label_310460;
        default: break;
    }

    ctx->pc = 0x310454u;

    // 0x310454: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310458: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x310458u;
    SET_GPR_U32(ctx, 31, 0x310460u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x310458u, 0x310460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310460u;
label_310460:
    // 0x310460: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x310460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310464: 0xc48101a4  lwc1        $f1, 0x1A4($a0)
    ctx->pc = 0x310464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310468: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x310468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x31046c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x31046cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x310470: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x310470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310474: 0x0  nop
    ctx->pc = 0x310474u;
    // NOP
    // 0x310478: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x310478u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x31047c: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x31047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x310480: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x310480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x310484: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x310484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x310488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31048c: 0x0  nop
    ctx->pc = 0x31048cu;
    // NOP
    // 0x310490: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310494: 0x0  nop
    ctx->pc = 0x310494u;
    // NOP
    // 0x310498: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x310498u;
    {
        const bool branch_taken_0x310498 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310498) {
            ctx->pc = 0x3104D4u;
            return;
        }
    }
    ctx->pc = 0x3104A0u;
    // 0x3104a0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3104a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104a4: 0x8ca41368  lw          $a0, 0x1368($a1)
    ctx->pc = 0x3104a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4968)));
    // 0x3104a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3104ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x3104acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3104b0: 0xaca31368  sw          $v1, 0x1368($a1)
    ctx->pc = 0x3104b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4968), GPR_U32(ctx, 3));
    // 0x3104b4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3104b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104b8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3104b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3104bc: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x3104bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3104c0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3104c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3104c4: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x3104c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x3104c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3104c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3104cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3104ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3104d0: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x3104d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    ctx->pc = 0x3104d4u;
}
