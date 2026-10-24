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

// Function: entry_00369ba4
// Address: 0x369ba4 - 0x369c20
void entry_00369ba4_0x369ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369ba4_0x369ba4");
#endif

    switch (ctx->pc) {
        case 0x369be0u: goto label_369be0;
        default: break;
    }

    ctx->pc = 0x369ba4u;

    // 0x369ba4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369ba8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369bac: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369bb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369bb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369bb4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369bb8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369bbc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x369bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369bc0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x369bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x369bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369bc8: 0x0  nop
    ctx->pc = 0x369bc8u;
    // NOP
    // 0x369bcc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369bccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369bd0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x369bd4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369bd8: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369BD8u;
    SET_GPR_U32(ctx, 31, 0x369BE0u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369BD8u, 0x369BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369BE0u;
label_369be0:
    // 0x369be0: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369be4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369be4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369be8: 0x0  nop
    ctx->pc = 0x369be8u;
    // NOP
    // 0x369bec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369becu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369bf0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369bf4: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369bf8: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369bfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369c00: 0x0  nop
    ctx->pc = 0x369c00u;
    // NOP
    // 0x369c04: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369C04u;
    {
        const bool branch_taken_0x369c04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369c04) {
            ctx->pc = 0x369C20u;
            return;
        }
    }
    ctx->pc = 0x369C0Cu;
    // 0x369c0c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369c10: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369c14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369c14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369c18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369c1c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x369c20u;
}
