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

// Function: e2d_id63_type03
// Address: 0x2b9e80 - 0x2b9f44
void e2d_id63_type03_0x2b9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id63_type03_0x2b9e80");
#endif

    ctx->pc = 0x2b9e80u;

    // 0x2b9e80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b9e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b9e84: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b9e88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9e8c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9e90: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2b9e90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b9e94: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b9e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b9e98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9e9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ea0: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b9ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b9ea4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9ea8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ea8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9eac: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9eb0: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b9eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b9eb4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9eb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9eb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ebc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ec0: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b9ec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b9ec4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9ec8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9ecc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ed0: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b9ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b9ed4: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b9ed8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ed8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9edc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ee0: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b9ee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b9ee4: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b9ee8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9eec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9ef0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2b9ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2b9ef4: 0x3c0342c0  lui         $v1, 0x42C0
    ctx->pc = 0x2b9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17088 << 16));
    // 0x2b9ef8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9ef8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9efc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f00: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2b9f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2b9f04: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x2b9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
    // 0x2b9f08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f10: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2b9f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2b9f14: 0x3c0342a8  lui         $v1, 0x42A8
    ctx->pc = 0x2b9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17064 << 16));
    // 0x2b9f18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f20: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2b9f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2b9f24: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b9f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b9f28: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b9f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b9f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b9f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b9f30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b9f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9f34: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2b9f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2b9f38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b9f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9F44u;
}
