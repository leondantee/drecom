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

// Function: camera_devil_jump_init
// Address: 0x183d80 - 0x183e14
void camera_devil_jump_init_0x183d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_devil_jump_init_0x183d80");
#endif

    switch (ctx->pc) {
        case 0x183de8u: goto label_183de8;
        case 0x183df4u: goto label_183df4;
        default: break;
    }

    ctx->pc = 0x183d80u;

    // 0x183d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183d84: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x183d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x183d88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183d8c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x183d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x183d90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x183d94: 0x8c300af0  lw          $s0, 0xAF0($at)
    ctx->pc = 0x183d94u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x183d98: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183d9c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183d9cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183da0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183da4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x183da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x183da8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183da8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183dac: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x183dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
    // 0x183db0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183db0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183db4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183db8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x183db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x183dbc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183dc0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x183dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x183dc4: 0xac200270  sw          $zero, 0x270($at)
    ctx->pc = 0x183dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x480270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480270u, _value); } while (0);
    // 0x183dc8: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x183dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x183dcc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183dd0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183dd4: 0x24420240  addiu       $v0, $v0, 0x240
    ctx->pc = 0x183dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x183dd8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183dd8u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480240u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480240u, _value); } while (0);
    // 0x183ddc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183de0: 0xc05fc1c  jal         func_17F070
    ctx->pc = 0x183DE0u;
    SET_GPR_U32(ctx, 31, 0x183DE8u);
    ctx->pc = 0x17F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F070u, 0x183DE0u, 0x183DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DE8u;
label_183de8:
    // 0x183de8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183dec: 0xc060f88  jal         func_183E20
    ctx->pc = 0x183DECu;
    SET_GPR_U32(ctx, 31, 0x183DF4u);
    ctx->pc = 0x183E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183E20u, 0x183DECu, 0x183DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183DF4u;
label_183df4:
    // 0x183df4: 0x24040025  addiu       $a0, $zero, 0x25
    ctx->pc = 0x183df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x183df8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x183df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183dfc: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x183dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x183e00: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x183e00u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x183e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183e08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x183e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x183E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183E14u;
}
