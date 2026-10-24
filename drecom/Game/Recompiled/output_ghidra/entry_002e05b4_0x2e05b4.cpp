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

// Function: entry_002e05b4
// Address: 0x2e05b4 - 0x2e0600
void entry_002e05b4_0x2e05b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e05b4_0x2e05b4");
#endif

    switch (ctx->pc) {
        case 0x2e05d4u: goto label_2e05d4;
        case 0x2e05f8u: goto label_2e05f8;
        default: break;
    }

    ctx->pc = 0x2e05b4u;

    // 0x2e05b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05b8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e05b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2e05bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2e05c0: 0x24060507  addiu       $a2, $zero, 0x507
    ctx->pc = 0x2e05c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1287));
    // 0x2e05c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e05c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e05c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e05c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e05cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2E05CCu;
    SET_GPR_U32(ctx, 31, 0x2E05D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2E05CCu, 0x2E05D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05D4u;
label_2e05d4:
    // 0x2e05d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05d8: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x2e05d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e05dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x2e05e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2e05e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2e05e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e05e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e05e8: 0x0  nop
    ctx->pc = 0x2e05e8u;
    // NOP
    // 0x2e05ec: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2e05ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2e05f0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2E05F0u;
    SET_GPR_U32(ctx, 31, 0x2E05F8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2E05F0u, 0x2E05F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E05F8u;
label_2e05f8:
    // 0x2e05f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e05f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e05fc: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x2e05fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    ctx->pc = 0x2e0600u;
}
