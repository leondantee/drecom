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

// Function: entry_002d4284
// Address: 0x2d4284 - 0x2d42f8
void entry_002d4284_0x2d4284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d4284_0x2d4284");
#endif

    switch (ctx->pc) {
        case 0x2d42e4u: goto label_2d42e4;
        default: break;
    }

    ctx->pc = 0x2d4284u;

    // 0x2d4284: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2d4284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2d4288: 0x8c22dcf0  lw          $v0, -0x2310($at)
    ctx->pc = 0x2d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2d428c: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x2d428cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d4290: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d4290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d4294: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2d4294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d4298: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2d4298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2d429c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42a0: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x2d42a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d42a4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2d42a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2d42a8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2d42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2d42ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d42acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d42b0: 0x0  nop
    ctx->pc = 0x2d42b0u;
    // NOP
    // 0x2d42b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2d42b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d42b8: 0x0  nop
    ctx->pc = 0x2d42b8u;
    // NOP
    // 0x2d42bc: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2D42BCu;
    {
        const bool branch_taken_0x2d42bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d42bc) {
            ctx->pc = 0x2D42F8u;
            return;
        }
    }
    ctx->pc = 0x2D42C4u;
    // 0x2d42c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d42c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d42c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42cc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d42ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d42d0: 0x24065a0f  addiu       $a2, $zero, 0x5A0F
    ctx->pc = 0x2d42d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23055));
    // 0x2d42d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d42d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d42d8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d42d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d42dc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D42DCu;
    SET_GPR_U32(ctx, 31, 0x2D42E4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D42DCu, 0x2D42E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D42E4u;
label_2d42e4:
    // 0x2d42e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d42e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d42e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d42e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d42ec: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d42ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d42f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2D42F0u;
    {
        const bool branch_taken_0x2d42f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d42f0) {
            ctx->pc = 0x2D4320u;
            return;
        }
    }
    ctx->pc = 0x2D42F8u;
}
