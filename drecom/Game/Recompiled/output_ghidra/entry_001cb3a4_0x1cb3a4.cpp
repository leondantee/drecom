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

// Function: entry_001cb3a4
// Address: 0x1cb3a4 - 0x1cb404
void entry_001cb3a4_0x1cb3a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb3a4_0x1cb3a4");
#endif

    switch (ctx->pc) {
        case 0x1cb3b4u: goto label_1cb3b4;
        default: break;
    }

    ctx->pc = 0x1cb3a4u;

    // 0x1cb3a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb3a8: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1cb3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1cb3ac: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1CB3ACu;
    SET_GPR_U32(ctx, 31, 0x1CB3B4u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1CB3ACu, 0x1CB3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3B4u;
label_1cb3b4:
    // 0x1cb3b4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb3b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1cb3b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb3bc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1cb3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb3c0: 0x3c024467  lui         $v0, 0x4467
    ctx->pc = 0x1cb3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17511 << 16));
    // 0x1cb3c4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1cb3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1cb3c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb3cc: 0x0  nop
    ctx->pc = 0x1cb3ccu;
    // NOP
    // 0x1cb3d0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cb3d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb3d4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x1cb3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x1cb3d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb3dc: 0x0  nop
    ctx->pc = 0x1cb3dcu;
    // NOP
    // 0x1cb3e0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1cb3e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1cb3e4: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1cb3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb3e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cb3e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb3ec: 0x0  nop
    ctx->pc = 0x1cb3ecu;
    // NOP
    // 0x1cb3f0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB3F0u;
    {
        const bool branch_taken_0x1cb3f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb3f0) {
            ctx->pc = 0x1CB404u;
            return;
        }
    }
    ctx->pc = 0x1CB3F8u;
    // 0x1cb3f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cb3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb3fc: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb400: 0xac431b60  sw          $v1, 0x1B60($v0)
    ctx->pc = 0x1cb400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7008), GPR_U32(ctx, 3));
    ctx->pc = 0x1cb404u;
}
