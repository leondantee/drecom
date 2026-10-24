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

// Function: entry_001cd6e0
// Address: 0x1cd6e0 - 0x1cd734
void entry_001cd6e0_0x1cd6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd6e0_0x1cd6e0");
#endif

    switch (ctx->pc) {
        case 0x1cd714u: goto label_1cd714;
        default: break;
    }

    ctx->pc = 0x1cd6e0u;

    // 0x1cd6e0: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1cd6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1cd6e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd6e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd6e8: 0x0  nop
    ctx->pc = 0x1cd6e8u;
    // NOP
    // 0x1cd6ec: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cd6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cd6f0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd6f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd6f8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cd6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cd6fc: 0x24650200  addiu       $a1, $v1, 0x200
    ctx->pc = 0x1cd6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x1cd700: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd704: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd708: 0x24479208  addiu       $a3, $v0, -0x6DF8
    ctx->pc = 0x1cd708u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x1cd70c: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD70Cu;
    SET_GPR_U32(ctx, 31, 0x1CD714u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD70Cu, 0x1CD714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD714u;
label_1cd714:
    // 0x1cd714: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD714u;
    {
        const bool branch_taken_0x1cd714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd714) {
            ctx->pc = 0x1CD734u;
            return;
        }
    }
    ctx->pc = 0x1CD71Cu;
    // 0x1cd71c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cd71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd720: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd724: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd724u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd728: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cd728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd72c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd730: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1cd730u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cd734u;
}
