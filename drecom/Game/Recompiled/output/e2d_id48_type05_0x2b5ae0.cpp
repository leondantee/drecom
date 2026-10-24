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

// Function: e2d_id48_type05
// Address: 0x2b5ae0 - 0x2b5b50
void e2d_id48_type05_0x2b5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id48_type05_0x2b5ae0");
#endif

    ctx->pc = 0x2b5ae0u;

    // 0x2b5ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b5ae4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b5ae8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b5ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b5aec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5af0: 0xa064011d  sb          $a0, 0x11D($v1)
    ctx->pc = 0x2b5af0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 285), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b5af4: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b5af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b5af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5afc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5b00: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b5b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b5b04: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x2b5b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
    // 0x2b5b08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5b08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5b10: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b5b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b5b14: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x2b5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
    // 0x2b5b18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5b18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5b20: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b5b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b5b24: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b5b28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5b28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5b30: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b5b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b5b34: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b5b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b5b38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b5b38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5b3c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b5b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5b40: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b5b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b5b44: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b5b44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b5b48: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5B50u;
}
