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

// Function: eff2d_0b_move30
// Address: 0x1aa690 - 0x1aa6fc
void eff2d_0b_move30_0x1aa690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_0b_move30_0x1aa690");
#endif

    ctx->pc = 0x1aa690u;

    // 0x1aa690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa694: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1aa694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x1aa698: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa69c: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1aa69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa6a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa6a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1aa6a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa6a8: 0x0  nop
    ctx->pc = 0x1aa6a8u;
    // NOP
    // 0x1aa6ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1aa6acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1aa6b0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1aa6b4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa6b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa6bc: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x1aa6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x1aa6c0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa6c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa6c8: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x1aa6c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x1aa6cc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa6d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa6d4: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x1aa6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x1aa6d8: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aa6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa6dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa6e0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x1aa6e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x1aa6e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1aa6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1aa6e8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1aa6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa6ec: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x1aa6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x1aa6f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA6FCu;
}
