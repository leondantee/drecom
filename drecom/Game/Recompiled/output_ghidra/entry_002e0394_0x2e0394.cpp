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

// Function: entry_002e0394
// Address: 0x2e0394 - 0x2e03e0
void entry_002e0394_0x2e0394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e0394_0x2e0394");
#endif

    switch (ctx->pc) {
        case 0x2e03b4u: goto label_2e03b4;
        case 0x2e03d8u: goto label_2e03d8;
        default: break;
    }

    ctx->pc = 0x2e0394u;

    // 0x2e0394: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e0394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e0398: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e0398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e039c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e039cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e03a0: 0x24060505  addiu       $a2, $zero, 0x505
    ctx->pc = 0x2e03a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1285));
    // 0x2e03a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e03a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e03a8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e03a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e03ac: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E03ACu;
    SET_GPR_U32(ctx, 31, 0x2E03B4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E03ACu, 0x2E03B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03B4u;
label_2e03b4:
    // 0x2e03b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03b8: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e03b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e03bc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e03bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e03c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e03c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e03c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e03c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e03c8: 0x0  nop
    ctx->pc = 0x2e03c8u;
    // NOP
    // 0x2e03cc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e03ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e03d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E03D0u;
    SET_GPR_U32(ctx, 31, 0x2E03D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E03D0u, 0x2E03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E03D8u;
label_2e03d8:
    // 0x2e03d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e03dc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e03dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x2e03e0u;
}
