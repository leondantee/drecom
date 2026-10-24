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

// Function: entry_001f63f8
// Address: 0x1f63f8 - 0x1f643c
void entry_001f63f8_0x1f63f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f63f8_0x1f63f8");
#endif

    ctx->pc = 0x1f63f8u;

    // 0x1f63f8: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1f63f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f63fc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1f63fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6400: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f6400u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f6404: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6408: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1f6408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1f640c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1f640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6410: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1f6410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6414: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f6414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f6418: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1f6418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1f641c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6420: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1f6420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f6424: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f6424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f6428: 0x24060a09  addiu       $a2, $zero, 0xA09
    ctx->pc = 0x1f6428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2569));
    // 0x1f642c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f642cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6430: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f6430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f6434: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F6434u;
    SET_GPR_U32(ctx, 31, 0x1F643Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F6434u, 0x1F643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F643Cu;
}
