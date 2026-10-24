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

// Function: e2d_id00_type0a
// Address: 0x2a9af0 - 0x2a9b80
void e2d_id00_type0a_0x2a9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id00_type0a_0x2a9af0");
#endif

    ctx->pc = 0x2a9af0u;

    // 0x2a9af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a9af4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2a9af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2a9af8: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2a9af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2a9afc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b04: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2a9b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2a9b08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b14: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2a9b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2a9b18: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9b1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b20: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b24: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2a9b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2a9b28: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9b2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b30: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b34: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2a9b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2a9b38: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2a9b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2a9b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b40: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b44: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2a9b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2a9b48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9b4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b50: 0xa064013b  sb          $a0, 0x13B($v1)
    ctx->pc = 0x2a9b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 315), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a9b54: 0x3c03bc23  lui         $v1, 0xBC23
    ctx->pc = 0x2a9b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48163 << 16));
    // 0x2a9b58: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2a9b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a9b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a9b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b64: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2a9b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2a9b68: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x2a9b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2a9b6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2a9b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b70: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2a9b70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2a9b74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2a9b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a9b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9B80u;
}
