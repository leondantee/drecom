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

// Function: entry_001b70b4
// Address: 0x1b70b4 - 0x1b7100
void entry_001b70b4_0x1b70b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b70b4_0x1b70b4");
#endif

    switch (ctx->pc) {
        case 0x1b70d8u: goto label_1b70d8;
        default: break;
    }

    ctx->pc = 0x1b70b4u;

    // 0x1b70b4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b70b8: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1b70b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b70bc: 0x3c033ffb  lui         $v1, 0x3FFB
    ctx->pc = 0x1b70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16379 << 16));
    // 0x1b70c0: 0x346553d2  ori         $a1, $v1, 0x53D2
    ctx->pc = 0x1b70c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21458);
    // 0x1b70c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1b70c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b70c8: 0x0  nop
    ctx->pc = 0x1b70c8u;
    // NOP
    // 0x1b70cc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1b70ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b70d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1B70D0u;
    SET_GPR_U32(ctx, 31, 0x1B70D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1B70D0u, 0x1B70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B70D8u;
label_1b70d8:
    // 0x1b70d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b70d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b70dc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b70dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1b70e0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b70e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b70e4: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b70e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1b70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1b70ec: 0x2406009b  addiu       $a2, $zero, 0x9B
    ctx->pc = 0x1b70ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 155));
    // 0x1b70f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b70f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b70f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1b70f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1b70f8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1B70F8u;
    SET_GPR_U32(ctx, 31, 0x1B7100u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1B70F8u, 0x1B7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7100u;
}
