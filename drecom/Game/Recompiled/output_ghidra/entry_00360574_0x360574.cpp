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

// Function: entry_00360574
// Address: 0x360574 - 0x3605c0
void entry_00360574_0x360574(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00360574_0x360574");
#endif

    switch (ctx->pc) {
        case 0x360594u: goto label_360594;
        case 0x3605b8u: goto label_3605b8;
        default: break;
    }

    ctx->pc = 0x360574u;

    // 0x360574: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360578: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x360578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36057c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36057cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x360580: 0x24060504  addiu       $a2, $zero, 0x504
    ctx->pc = 0x360580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x360584: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x360584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360588: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x360588u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36058c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36058Cu;
    SET_GPR_U32(ctx, 31, 0x360594u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36058Cu, 0x360594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360594u;
label_360594:
    // 0x360594: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x360594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360598: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x360598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36059c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x36059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x3605a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3605a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3605a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3605a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3605a8: 0x0  nop
    ctx->pc = 0x3605a8u;
    // NOP
    // 0x3605ac: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x3605acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3605b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3605B0u;
    SET_GPR_U32(ctx, 31, 0x3605B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3605B0u, 0x3605B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3605B8u;
label_3605b8:
    // 0x3605b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3605b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3605bc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x3605bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x3605c0u;
}
