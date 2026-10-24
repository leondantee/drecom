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

// Function: entry_00325f28
// Address: 0x325f28 - 0x325fa8
void entry_00325f28_0x325f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00325f28_0x325f28");
#endif

    switch (ctx->pc) {
        case 0x325f60u: goto label_325f60;
        case 0x325f70u: goto label_325f70;
        case 0x325f88u: goto label_325f88;
        case 0x325fa0u: goto label_325fa0;
        default: break;
    }

    ctx->pc = 0x325f28u;

    // 0x325f28: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f2c: 0x9042011e  lbu         $v0, 0x11E($v0)
    ctx->pc = 0x325f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 286)));
    // 0x325f30: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x325f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x325f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x325f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x325f38: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x325F38u;
    {
        const bool branch_taken_0x325f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x325f38) {
            ctx->pc = 0x325FA8u;
            return;
        }
    }
    ctx->pc = 0x325F40u;
    // 0x325f40: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x325f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x325f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f48: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f4c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x325f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x325f50: 0x24650040  addiu       $a1, $v1, 0x40
    ctx->pc = 0x325f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x325f54: 0x24460030  addiu       $a2, $v0, 0x30
    ctx->pc = 0x325f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x325f58: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x325F58u;
    SET_GPR_U32(ctx, 31, 0x325F60u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x325F58u, 0x325F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F60u;
label_325f60:
    // 0x325f60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f64: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x325f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f68: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x325F68u;
    SET_GPR_U32(ctx, 31, 0x325F70u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x325F68u, 0x325F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F70u;
label_325f70:
    // 0x325f70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f74: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x325f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x325f78: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f7c: 0xc44c0044  lwc1        $f12, 0x44($v0)
    ctx->pc = 0x325f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x325F80u;
    SET_GPR_U32(ctx, 31, 0x325F88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x325F80u, 0x325F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325F88u;
label_325f88:
    // 0x325f88: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f8c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x325f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x325f90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325f94: 0xc44c0048  lwc1        $f12, 0x48($v0)
    ctx->pc = 0x325f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x325f98: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x325F98u;
    SET_GPR_U32(ctx, 31, 0x325FA0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x325F98u, 0x325FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325FA0u;
label_325fa0:
    // 0x325fa0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x325fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x325fa4: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x325fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    ctx->pc = 0x325fa8u;
}
