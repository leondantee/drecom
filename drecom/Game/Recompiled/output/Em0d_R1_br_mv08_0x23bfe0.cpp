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

// Function: Em0d_R1_br_mv08
// Address: 0x23bfe0 - 0x23c034
void Em0d_R1_br_mv08_0x23bfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0d_R1_br_mv08_0x23bfe0");
#endif

    ctx->pc = 0x23bfe0u;

    // 0x23bfe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23bfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23bfe4: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x23bfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x23bfe8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23bfec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23bff0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x23bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23bff4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x23bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x23bff8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23bffc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23bffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c000: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x23c000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c004: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x23c004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x23c008: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x23c008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23c00c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c010: 0xc4600048  lwc1        $f0, 0x48($v1)
    ctx->pc = 0x23c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23c014: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x23c014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x23c018: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x23c018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x23c01c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c01cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c020: 0x0  nop
    ctx->pc = 0x23c020u;
    // NOP
    // 0x23c024: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x23c024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x23c028: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23c028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23c02c: 0x3e00008  jr          $ra
    ctx->pc = 0x23C02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C02Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C034u;
}
