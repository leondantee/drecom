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

// Function: e2d_id61_type00
// Address: 0x2b8cb0 - 0x2b8d74
void e2d_id61_type00_0x2b8cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id61_type00_0x2b8cb0");
#endif

    ctx->pc = 0x2b8cb0u;

    // 0x2b8cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8cb4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8cb8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8cc0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8cc4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8cc8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8ccc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8cccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8cd0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8cd4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8cd8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ce0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8ce4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8ce8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8cf0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8cf4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8cf8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x2b8cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
    // 0x2b8cfc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8cfcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8d08: 0x24040023  addiu       $a0, $zero, 0x23
    ctx->pc = 0x2b8d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b8d0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d10: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b8d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b8d14: 0x3c033e19  lui         $v1, 0x3E19
    ctx->pc = 0x2b8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15897 << 16));
    // 0x2b8d18: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b8d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b8d1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d24: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b8d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b8d28: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d2c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d30: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2b8d30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8d34: 0x3c033f59  lui         $v1, 0x3F59
    ctx->pc = 0x2b8d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16217 << 16));
    // 0x2b8d38: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2b8d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2b8d3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d44: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b8d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b8d48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8d4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d50: 0xa064011e  sb          $a0, 0x11E($v1)
    ctx->pc = 0x2b8d50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 286), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8d54: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2b8d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2b8d58: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2b8d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2b8d5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8d5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8d60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8d64: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2b8d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2b8d68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8D74u;
}
