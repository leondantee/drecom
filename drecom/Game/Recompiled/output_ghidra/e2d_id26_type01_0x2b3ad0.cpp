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

// Function: e2d_id26_type01
// Address: 0x2b3ad0 - 0x2b3b40
void e2d_id26_type01_0x2b3ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id26_type01_0x2b3ad0");
#endif

    ctx->pc = 0x2b3ad0u;

    // 0x2b3ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b3ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b3ad4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b3ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b3ad8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3ae0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3ae4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b3ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b3ae8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3aec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3aecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3af0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3af4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b3af4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b3af8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b04: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b3b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b3b08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b3b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b14: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b3b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b3b18: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x2b3b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x2b3b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b3b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b3b20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b24: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b3b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b3b28: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b3b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b3b2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3b30: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b3b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b3b34: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3b34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b3b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3B40u;
}
