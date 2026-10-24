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

// Function: e2d_id61_type03
// Address: 0x2b8ef0 - 0x2b8f80
void e2d_id61_type03_0x2b8ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type03_0x2b8ef0");
#endif

    ctx->pc = 0x2b8ef0u;

    // 0x2b8ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8ef4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8ef8: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2b8ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2b8efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f04: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8f08: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b8f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b8f0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f14: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8f18: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2b8f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2b8f1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8f1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f24: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8f28: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b8f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f34: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8f38: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2b8f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2b8f3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8f3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f44: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8f48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8f4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f50: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b8f50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8f54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8f58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f5c: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b8f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8f60: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2b8f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2b8f64: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b8f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b8f68: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8f68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8f6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8f70: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b8f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b8f74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8f74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8f78: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8F78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8F80u;
}
