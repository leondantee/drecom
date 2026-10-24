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

// Function: entry_00369d48
// Address: 0x369d48 - 0x369dc4
void entry_00369d48_0x369d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00369d48_0x369d48");
#endif

    switch (ctx->pc) {
        case 0x369d84u: goto label_369d84;
        default: break;
    }

    ctx->pc = 0x369d48u;

    // 0x369d48: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x369d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369d4c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x369d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369d50: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x369d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369d54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x369d54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x369d58: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369d5c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369d60: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x369d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369d64: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x369d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x369d68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x369d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369d6c: 0x0  nop
    ctx->pc = 0x369d6cu;
    // NOP
    // 0x369d70: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x369d70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x369d74: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x369d78: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x369d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369d7c: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369D7Cu;
    SET_GPR_U32(ctx, 31, 0x369D84u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369D7Cu, 0x369D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D84u;
label_369d84:
    // 0x369d84: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369d88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369d88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369d8c: 0x0  nop
    ctx->pc = 0x369d8cu;
    // NOP
    // 0x369d90: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369d90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369d94: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369d98: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369d9c: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369da0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369da0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369da4: 0x0  nop
    ctx->pc = 0x369da4u;
    // NOP
    // 0x369da8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369DA8u;
    {
        const bool branch_taken_0x369da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369da8) {
            ctx->pc = 0x369DC4u;
            return;
        }
    }
    ctx->pc = 0x369DB0u;
    // 0x369db0: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369db4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369db4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369db8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369db8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369dbc: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369dc0: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x369dc4u;
}
