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

// Function: entry_002d4344
// Address: 0x2d4344 - 0x2d43c8
void entry_002d4344_0x2d4344(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4344_0x2d4344");
#endif

    switch (ctx->pc) {
        case 0x2d4398u: goto label_2d4398;
        default: break;
    }

    ctx->pc = 0x2d4344u;

    // 0x2d4344: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4348: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d4348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d434c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d434cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d4350: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2d4350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2d4354: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2D4354u;
    {
        const bool branch_taken_0x2d4354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d4354) {
            ctx->pc = 0x2D43ECu;
            return;
        }
    }
    ctx->pc = 0x2D435Cu;
    // 0x2d435c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4360: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x2d4360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2d4364: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2d4364u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4368: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2d4368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d436c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2d436cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2d4370: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4374: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x2d4374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4378: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d4378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d437c: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2d437cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2d4380: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2d4380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4384: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2d4384u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d4388: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d438c: 0xc44d128c  lwc1        $f13, 0x128C($v0)
    ctx->pc = 0x2d438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2d4390: 0xc0455e6  jal         func_115798
    ctx->pc = 0x2D4390u;
    SET_GPR_U32(ctx, 31, 0x2D4398u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x2D4390u, 0x2D4398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4398u;
label_2d4398:
    // 0x2d4398: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d4398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d439c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2d439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d43a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d43a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d43a4: 0x0  nop
    ctx->pc = 0x2d43a4u;
    // NOP
    // 0x2d43a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d43a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d43ac: 0x0  nop
    ctx->pc = 0x2d43acu;
    // NOP
    // 0x2d43b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2D43B0u;
    {
        const bool branch_taken_0x2d43b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d43b0) {
            ctx->pc = 0x2D43C8u;
            return;
        }
    }
    ctx->pc = 0x2D43B8u;
    // 0x2d43b8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2d43b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d43bc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2d43bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2d43c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D43C0u;
    {
        const bool branch_taken_0x2d43c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d43c0) {
            ctx->pc = 0x2D43D4u;
            return;
        }
    }
    ctx->pc = 0x2D43C8u;
}
