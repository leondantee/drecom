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

// Function: e2d_id2f_type02
// Address: 0x2b4d10 - 0x2b4d98
void e2d_id2f_type02_0x2b4d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id2f_type02_0x2b4d10");
#endif

    ctx->pc = 0x2b4d10u;

    // 0x2b4d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4d14: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b4d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b4d18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4d20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d24: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b4d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b4d28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4d30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d34: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b4d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b4d38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4d40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d44: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b4d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b4d48: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b4d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b4d4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4d4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4d50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d54: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b4d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b4d58: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b4d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b4d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b4d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4d60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d64: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b4d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b4d68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4d6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d70: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2b4d70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4d78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d7c: 0xa0640140  sb          $a0, 0x140($v1)
    ctx->pc = 0x2b4d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b4d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4d84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b4d88: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b4d88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b4d8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b4d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b4d90: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D98u;
}
