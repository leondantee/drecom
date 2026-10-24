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

// Function: entry_001cc16c
// Address: 0x1cc16c - 0x1cc1dc
void entry_001cc16c_0x1cc16c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc16c_0x1cc16c");
#endif

    switch (ctx->pc) {
        case 0x1cc184u: goto label_1cc184;
        default: break;
    }

    ctx->pc = 0x1cc16cu;

    // 0x1cc16c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc170: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1cc170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc174: 0xc46c1b54  lwc1        $f12, 0x1B54($v1)
    ctx->pc = 0x1cc174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cc178: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1cc178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cc17c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CC17Cu;
    SET_GPR_U32(ctx, 31, 0x1CC184u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CC17Cu, 0x1CC184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC184u;
label_1cc184:
    // 0x1cc184: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1cc184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1cc188: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1cc188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc18c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc18cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc190: 0x0  nop
    ctx->pc = 0x1cc190u;
    // NOP
    // 0x1cc194: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc194u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc198: 0x0  nop
    ctx->pc = 0x1cc198u;
    // NOP
    // 0x1cc19c: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1CC19Cu;
    {
        const bool branch_taken_0x1cc19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc19c) {
            ctx->pc = 0x1CC1DCu;
            return;
        }
    }
    ctx->pc = 0x1CC1A4u;
    // 0x1cc1a4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1cc1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cc1a8: 0x3c10bbc9  lui         $s0, 0xBBC9
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48073 << 16));
    // 0x1cc1ac: 0x36030fdb  ori         $v1, $s0, 0xFDB
    ctx->pc = 0x1cc1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)4059);
    // 0x1cc1b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cc1b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cc1b4: 0x0  nop
    ctx->pc = 0x1cc1b4u;
    // NOP
    // 0x1cc1b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cc1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cc1bc: 0x0  nop
    ctx->pc = 0x1cc1bcu;
    // NOP
    // 0x1cc1c0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1CC1C0u;
    {
        const bool branch_taken_0x1cc1c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc1c0) {
            ctx->pc = 0x1CC20Cu;
            return;
        }
    }
    ctx->pc = 0x1CC1C8u;
    // 0x1cc1c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cc1cc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc1d0: 0xac641b60  sw          $a0, 0x1B60($v1)
    ctx->pc = 0x1cc1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 4));
    // 0x1cc1d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CC1D4u;
    {
        const bool branch_taken_0x1cc1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc1d4) {
            ctx->pc = 0x1CC20Cu;
            return;
        }
    }
    ctx->pc = 0x1CC1DCu;
}
