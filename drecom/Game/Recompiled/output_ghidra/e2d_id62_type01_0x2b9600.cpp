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

// Function: e2d_id62_type01
// Address: 0x2b9600 - 0x2b9694
void e2d_id62_type01_0x2b9600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id62_type01_0x2b9600");
#endif

    ctx->pc = 0x2b9600u;

    // 0x2b9600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9604: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9608: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b9608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b960c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b960cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9610: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9614: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9618: 0x3c033f87  lui         $v1, 0x3F87
    ctx->pc = 0x2b9618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16263 << 16));
    // 0x2b961c: 0x3463ae14  ori         $v1, $v1, 0xAE14
    ctx->pc = 0x2b961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)44564);
    // 0x2b9620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9624: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9628: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b9628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b962c: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x2b962cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x2b9630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9634: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9638: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b963c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x2b963cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b9640: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9644: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b9644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b9648: 0x3c03bc93  lui         $v1, 0xBC93
    ctx->pc = 0x2b9648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48275 << 16));
    // 0x2b964c: 0x346374bc  ori         $v1, $v1, 0x74BC
    ctx->pc = 0x2b964cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)29884);
    // 0x2b9650: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9650u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9654: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9658: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b9658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b965c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b965cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9660: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9664: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b9664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9668: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b966c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b966cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9670: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b9670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9674: 0x3c033c75  lui         $v1, 0x3C75
    ctx->pc = 0x2b9674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15477 << 16));
    // 0x2b9678: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b9678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b967c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b967cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9680: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9684: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b9684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b9688: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b968c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B968Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B968Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9694u;
}
