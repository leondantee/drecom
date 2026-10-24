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

// Function: entry_00369e9c
// Address: 0x369e9c - 0x369f18
void entry_00369e9c_0x369e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369e9c_0x369e9c");
#endif

    switch (ctx->pc) {
        case 0x369ed8u: goto label_369ed8;
        default: break;
    }

    ctx->pc = 0x369e9cu;

    // 0x369e9c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369ea0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369ea4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ea8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369ea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369eac: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369eb0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369eb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x369eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369eb8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x369eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x369ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369ec0: 0x0  nop
    ctx->pc = 0x369ec0u;
    // NOP
    // 0x369ec4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369ec4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369ec8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x369ecc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369ed0: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369ED0u;
    SET_GPR_U32(ctx, 31, 0x369ED8u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369ED0u, 0x369ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369ED8u;
label_369ed8:
    // 0x369ed8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369edc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369edcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369ee0: 0x0  nop
    ctx->pc = 0x369ee0u;
    // NOP
    // 0x369ee4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369ee4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369ee8: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369eec: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369ef0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369ef4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369ef8: 0x0  nop
    ctx->pc = 0x369ef8u;
    // NOP
    // 0x369efc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369EFCu;
    {
        const bool branch_taken_0x369efc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369efc) {
            ctx->pc = 0x369F18u;
            return;
        }
    }
    ctx->pc = 0x369F04u;
    // 0x369f04: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369f08: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369f0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369f10: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369f14: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x369f18u;
}
