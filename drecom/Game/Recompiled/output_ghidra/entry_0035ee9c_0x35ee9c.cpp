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

// Function: entry_0035ee9c
// Address: 0x35ee9c - 0x35ef48
void entry_0035ee9c_0x35ee9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035ee9c_0x35ee9c");
#endif

    switch (ctx->pc) {
        case 0x35ef18u: goto label_35ef18;
        default: break;
    }

    ctx->pc = 0x35ee9cu;

    // 0x35ee9c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ee9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eea0: 0xc48101a0  lwc1        $f1, 0x1A0($a0)
    ctx->pc = 0x35eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eea4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x35eea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x35eea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eeac: 0x0  nop
    ctx->pc = 0x35eeacu;
    // NOP
    // 0x35eeb0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35eeb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35eeb4: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x35eeb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x35eeb8: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x35eeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x35eebc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x35eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x35eec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eec4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35eec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eec8: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35eec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x35eecc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eed0: 0xc48101a8  lwc1        $f1, 0x1A8($a0)
    ctx->pc = 0x35eed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eed4: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x35eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x35eed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eedc: 0x0  nop
    ctx->pc = 0x35eedcu;
    // NOP
    // 0x35eee0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x35eee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35eee4: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x35eee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    // 0x35eee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x35eee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35eeec: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x35eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eef0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x35eef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x35eef4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35eef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35eef8: 0x0  nop
    ctx->pc = 0x35eef8u;
    // NOP
    // 0x35eefc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x35eefcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35ef00: 0x0  nop
    ctx->pc = 0x35ef00u;
    // NOP
    // 0x35ef04: 0x45010088  bc1t        . + 4 + (0x88 << 2)
    ctx->pc = 0x35EF04u;
    {
        const bool branch_taken_0x35ef04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35ef04) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35EF0Cu;
    // 0x35ef0c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ef0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef10: 0xc087258  jal         func_21C960
    ctx->pc = 0x35EF10u;
    SET_GPR_U32(ctx, 31, 0x35EF18u);
    ctx->pc = 0x21C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C960u, 0x35EF10u, 0x35EF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EF18u;
label_35ef18:
    // 0x35ef18: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35ef18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35ef1c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x35ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x35ef20: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x35ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x35ef24: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x35ef24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x35ef28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35ef28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35ef2c: 0xac231a48  sw          $v1, 0x1A48($at)
    ctx->pc = 0x35ef2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x35ef30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x35ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ef34: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x35ef34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x35ef38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35ef38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35ef3c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x35ef3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x35ef40: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x35EF40u;
    {
        const bool branch_taken_0x35ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ef40) {
            ctx->pc = 0x35F128u;
            return;
        }
    }
    ctx->pc = 0x35EF48u;
}
