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

// Function: entry_002a8e34
// Address: 0x2a8e34 - 0x2a8ea8
void entry_002a8e34_0x2a8e34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a8e34_0x2a8e34");
#endif

    switch (ctx->pc) {
        case 0x2a8e40u: goto label_2a8e40;
        default: break;
    }

    ctx->pc = 0x2a8e34u;

    // 0x2a8e34: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a8e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a8e38: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A8E38u;
    SET_GPR_U32(ctx, 31, 0x2A8E40u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A8E38u, 0x2A8E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A8E40u;
label_2a8e40:
    // 0x2a8e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e48: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e4c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A8E4Cu;
    {
        const bool branch_taken_0x2a8e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a8e4c) {
            ctx->pc = 0x2A8EA8u;
            return;
        }
    }
    ctx->pc = 0x2A8E54u;
    // 0x2a8e54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e58: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e5c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e60: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2a8e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e64: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e68: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8e68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8e6c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a8e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a8e70: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e74: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e78: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e7c: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2a8e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e80: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8e84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8e88: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a8e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a8e8c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2a8e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a8e90: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2a8e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2a8e94: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a8e98: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x2a8e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a8e9c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a8ea0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a8ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8ea4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a8ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->pc = 0x2a8ea8u;
}
