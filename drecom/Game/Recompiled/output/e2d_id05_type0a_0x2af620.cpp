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

// Function: e2d_id05_type0a
// Address: 0x2af620 - 0x2af680
void e2d_id05_type0a_0x2af620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type0a_0x2af620");
#endif

    ctx->pc = 0x2af620u;

    // 0x2af620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af624: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af628: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2af628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2af62c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af62cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af630: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af634: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af638: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af63c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af640: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af640u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af644: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af648: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af64c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af650: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2af650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2af654: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2af654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2af658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af65c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af660: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af664: 0x3c03c28c  lui         $v1, 0xC28C
    ctx->pc = 0x2af664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49804 << 16));
    // 0x2af668: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af66c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af670: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2af670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2af674: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af678: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF680u;
}
