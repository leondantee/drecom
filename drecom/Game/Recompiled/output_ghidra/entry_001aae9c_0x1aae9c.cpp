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

// Function: entry_001aae9c
// Address: 0x1aae9c - 0x1aaf24
void entry_001aae9c_0x1aae9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aae9c_0x1aae9c");
#endif

    switch (ctx->pc) {
        case 0x1aaec0u: goto label_1aaec0;
        default: break;
    }

    ctx->pc = 0x1aae9cu;

    // 0x1aae9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaea0: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x1aaea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1aaea4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1aaea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1aaea8: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1AAEA8u;
    {
        const bool branch_taken_0x1aaea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaea8) {
            ctx->pc = 0x1AB190u;
            return;
        }
    }
    ctx->pc = 0x1AAEB0u;
    // 0x1aaeb0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1aaeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1aaeb4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1aaeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aaeb8: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1AAEB8u;
    SET_GPR_U32(ctx, 31, 0x1AAEC0u);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1AAEB8u, 0x1AAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAEC0u;
label_1aaec0:
    // 0x1aaec0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x1aaec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x1aaec4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaec8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1aaec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1aaecc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaed0: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1aaed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaed4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaed8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1aaed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaedc: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1aaedcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1aaee0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1aaee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaee4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aaee4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaee8: 0x0  nop
    ctx->pc = 0x1aaee8u;
    // NOP
    // 0x1aaeec: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1AAEECu;
    {
        const bool branch_taken_0x1aaeec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aaeec) {
            ctx->pc = 0x1AAF24u;
            return;
        }
    }
    ctx->pc = 0x1AAEF4u;
    // 0x1aaef4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaef8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1aaef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaefc: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x1aaefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaf00: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aaf00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aaf04: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf08: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1aaf08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1aaf0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaf0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaf10: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf14: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x1aaf14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x1aaf18: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1aaf18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aaf1c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1aaf20: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x1aaf20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->pc = 0x1aaf24u;
}
