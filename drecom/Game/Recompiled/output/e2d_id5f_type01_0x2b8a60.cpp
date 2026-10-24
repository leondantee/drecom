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

// Function: e2d_id5f_type01
// Address: 0x2b8a60 - 0x2b8b3c
void e2d_id5f_type01_0x2b8a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5f_type01_0x2b8a60");
#endif

    ctx->pc = 0x2b8a60u;

    // 0x2b8a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8a64: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8a68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8a6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a70: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2b8a70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8a74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8a78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a7c: 0xa0640140  sb          $a0, 0x140($v1)
    ctx->pc = 0x2b8a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8a80: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b8a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b8a84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8a84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8a88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a8c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8a90: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b8a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8a98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8a9c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8aa0: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8aa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8aa8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8aac: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8ab0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8ab4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8ab4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ab8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8abc: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8ac0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b8ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b8ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ac8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8acc: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8ad0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b8ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8ad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ad8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8adc: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b8adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b8ae0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2b8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8ae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8ae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ae8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8aec: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2b8aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2b8af0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b8af4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b8af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b8af8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8af8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8afc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b00: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b8b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b8b04: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b8b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b8b08: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b8b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b8b0c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8b10: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b14: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x2b8b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2b8b18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b1c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b20: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b8b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8b24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b2c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b8b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8b30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8b34: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8B3Cu;
}
