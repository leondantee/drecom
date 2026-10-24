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

// Function: entry_001f5d8c
// Address: 0x1f5d8c - 0x1f5de4
void entry_001f5d8c_0x1f5d8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5d8c_0x1f5d8c");
#endif

    switch (ctx->pc) {
        case 0x1f5da4u: goto label_1f5da4;
        default: break;
    }

    ctx->pc = 0x1f5d8cu;

    // 0x1f5d8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5d90: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1f5d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f5d94: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1f5d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f5d98: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1f5d98u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f5d9c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1F5D9Cu;
    SET_GPR_U32(ctx, 31, 0x1F5DA4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1F5D9Cu, 0x1F5DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5DA4u;
label_1f5da4:
    // 0x1f5da4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5da8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1f5da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1f5dac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5db0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1f5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1f5db4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1f5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f5db8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1f5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x1f5dbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f5dc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F5DC0u;
    {
        const bool branch_taken_0x1f5dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5dc0) {
            ctx->pc = 0x1F5DE4u;
            return;
        }
    }
    ctx->pc = 0x1F5DC8u;
    // 0x1f5dc8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f5dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f5dcc: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1f5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1f5dd0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f5dd4: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1f5dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1f5dd8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1f5dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f5ddc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1f5ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1f5de0: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1f5de0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    ctx->pc = 0x1f5de4u;
}
