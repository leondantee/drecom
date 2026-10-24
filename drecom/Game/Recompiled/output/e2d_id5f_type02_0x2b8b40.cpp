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

// Function: e2d_id5f_type02
// Address: 0x2b8b40 - 0x2b8c28
void e2d_id5f_type02_0x2b8b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id5f_type02_0x2b8b40");
#endif

    ctx->pc = 0x2b8b40u;

    // 0x2b8b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8b44: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b8b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b8b48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b4c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b50: 0xa064013f  sb          $a0, 0x13F($v1)
    ctx->pc = 0x2b8b50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 319), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8b54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8b58: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b5c: 0xa0640140  sb          $a0, 0x140($v1)
    ctx->pc = 0x2b8b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 320), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8b60: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x2b8b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x2b8b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8b68: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b6c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b8b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b8b70: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b8b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8b74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8b78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b7c: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b8b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b8b80: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x2b8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x2b8b84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8b88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b8c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b8b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b8b90: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b8b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b8b94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8b94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8b98: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8b9c: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b8b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b8ba0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x2b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x2b8ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8ba8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8bac: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b8bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b8bb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2b8bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2b8bb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8bb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8bb8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8bbc: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b8bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b8bc0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x2b8bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x2b8bc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8bc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8bc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8bcc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x2b8bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x2b8bd0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2b8bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2b8bd4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b8bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b8bd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8bd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8bdc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8be0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b8be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b8be4: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b8be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b8be8: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b8be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b8bec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b8becu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b8bf0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8bf4: 0xe46000f8  swc1        $f0, 0xF8($v1)
    ctx->pc = 0x2b8bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 248), bits); }
    // 0x2b8bf8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8bfc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c00: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b8c00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8c04: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c08: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c0c: 0xa064013a  sb          $a0, 0x13A($v1)
    ctx->pc = 0x2b8c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 314), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8c10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b8c14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b8c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8c18: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b8c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b8c1c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b8c1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b8c20: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8C20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8C28u;
}
