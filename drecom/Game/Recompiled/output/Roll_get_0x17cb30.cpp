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

// Function: Roll_get
// Address: 0x17cb30 - 0x17cb98
void Roll_get_0x17cb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Roll_get_0x17cb30");
#endif

    ctx->pc = 0x17cb30u;

    // 0x17cb30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17cb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17cb34: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x17cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x17cb38: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17cb3c: 0xe7ac0028  swc1        $f12, 0x28($sp)
    ctx->pc = 0x17cb3cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17cb40: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17cb44: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x17cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cb48: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17cb48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17cb4c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17cb50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17cb54: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x17cb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x17cb58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17cb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17cb5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17cb60: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x17cb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cb64: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17cb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17cb68: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x17cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17cb6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17cb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cb70: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x17cb70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x17cb74: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17cb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cb78: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x17cb78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17cb7c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x17cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cb80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17cb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17cb84: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17cb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17cb88: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x17cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17cb8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17cb8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17cb90: 0x3e00008  jr          $ra
    ctx->pc = 0x17CB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CB98u;
}
