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

// Function: e2d_id05_type09
// Address: 0x2af5c0 - 0x2af620
void e2d_id05_type09_0x2af5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id05_type09_0x2af5c0");
#endif

    ctx->pc = 0x2af5c0u;

    // 0x2af5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2af5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2af5c4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2af5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2af5c8: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2af5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2af5cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af5ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af5d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af5d4: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2af5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2af5d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af5dc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af5e0: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2af5e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af5e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2af5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2af5e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af5ec: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2af5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2af5f0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2af5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2af5f4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2af5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2af5f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af5f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af5fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af600: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2af600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2af604: 0x3c03428c  lui         $v1, 0x428C
    ctx->pc = 0x2af604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17036 << 16));
    // 0x2af608: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2af608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2af60c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2af60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2af610: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2af610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2af614: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2af614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2af618: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF620u;
}
