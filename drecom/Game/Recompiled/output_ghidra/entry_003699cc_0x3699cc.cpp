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

// Function: entry_003699cc
// Address: 0x3699cc - 0x369a48
void entry_003699cc_0x3699cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003699cc_0x3699cc");
#endif

    switch (ctx->pc) {
        case 0x369a08u: goto label_369a08;
        default: break;
    }

    ctx->pc = 0x3699ccu;

    // 0x3699cc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x3699ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3699d0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x3699d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3699d4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x3699d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3699d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3699d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3699dc: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3699dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3699e0: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3699e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3699e4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3699e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3699e8: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3699e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x3699ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3699ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3699f0: 0x0  nop
    ctx->pc = 0x3699f0u;
    // NOP
    // 0x3699f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3699f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3699f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x3699f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x3699fc: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3699fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x369a00: 0xc05cfdc  jal         func_173F70
    ctx->pc = 0x369A00u;
    SET_GPR_U32(ctx, 31, 0x369A08u);
    ctx->pc = 0x173F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173F70u, 0x369A00u, 0x369A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A08u;
label_369a08:
    // 0x369a08: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x369a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x369a0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x369a0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x369a10: 0x0  nop
    ctx->pc = 0x369a10u;
    // NOP
    // 0x369a14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x369a14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x369a18: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x369a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x369a1c: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x369a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x369a20: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369a24: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x369a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x369a28: 0x0  nop
    ctx->pc = 0x369a28u;
    // NOP
    // 0x369a2c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x369A2Cu;
    {
        const bool branch_taken_0x369a2c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x369a2c) {
            ctx->pc = 0x369A48u;
            return;
        }
    }
    ctx->pc = 0x369A34u;
    // 0x369a34: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x369a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x369a38: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x369a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x369a3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x369a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x369a40: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x369a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x369a44: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x369a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->pc = 0x369a48u;
}
