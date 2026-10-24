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

// Function: entry_0019986c
// Address: 0x19986c - 0x1998ec
void entry_0019986c_0x19986c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019986c_0x19986c");
#endif

    switch (ctx->pc) {
        case 0x199878u: goto label_199878;
        default: break;
    }

    ctx->pc = 0x19986cu;

    // 0x19986c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x19986cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199870: 0xc05cd10  jal         func_173440
    ctx->pc = 0x199870u;
    SET_GPR_U32(ctx, 31, 0x199878u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x199870u, 0x199878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199878u;
label_199878:
    // 0x199878: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19987c: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x19987cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199880: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199884: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x199884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x199888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x199888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x19988c: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19988cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x199890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199894: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x199894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x199898: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19989c: 0xc4400184  lwc1        $f0, 0x184($v0)
    ctx->pc = 0x19989cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1998a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1998a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1998a4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1998a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1998a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1998a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1998ac: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1998acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1998b0: 0x3c02c120  lui         $v0, 0xC120
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49440 << 16));
    // 0x1998b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1998b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1998b8: 0x0  nop
    ctx->pc = 0x1998b8u;
    // NOP
    // 0x1998bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1998bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1998c0: 0x0  nop
    ctx->pc = 0x1998c0u;
    // NOP
    // 0x1998c4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1998C4u;
    {
        const bool branch_taken_0x1998c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1998c4) {
            ctx->pc = 0x1998ECu;
            return;
        }
    }
    ctx->pc = 0x1998CCu;
    // 0x1998cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1998ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1998d0: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x1998d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1998d4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1998d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1998d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1998dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1998dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1998e0: 0x0  nop
    ctx->pc = 0x1998e0u;
    // NOP
    // 0x1998e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1998e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1998e8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x1998e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x1998ecu;
}
