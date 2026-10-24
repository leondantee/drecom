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

// Function: e2d_id04_type0b
// Address: 0x2ad9a0 - 0x2adab0
void e2d_id04_type0b_0x2ad9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type0b_0x2ad9a0");
#endif

    ctx->pc = 0x2ad9a0u;

    // 0x2ad9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad9a4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ad9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ad9a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad9ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad9acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad9b4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ad9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ad9b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad9bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad9bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad9c4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ad9c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ad9c8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad9cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad9ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad9d4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ad9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ad9d8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2ad9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2ad9dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad9dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad9e4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ad9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ad9e8: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x2ad9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
    // 0x2ad9ec: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x2ad9ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
    // 0x2ad9f0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad9f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad9f8: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2ad9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2ad9fc: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x2ad9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x2ada00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada04: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada08: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2ada08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2ada0c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2ada0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2ada10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada14: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada18: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2ada18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2ada1c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x2ada1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x2ada20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada24: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada28: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2ada28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2ada2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ada2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ada30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada34: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada38: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x2ada38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x2ada3c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x2ada3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x2ada40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada48: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2ada48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2ada4c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x2ada4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x2ada50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada54: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada58: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2ada58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2ada5c: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x2ada5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x2ada60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada64: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada68: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2ada68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2ada6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada70: 0xa0600138  sb          $zero, 0x138($v1)
    ctx->pc = 0x2ada70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada74: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x2ada74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ada78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada7c: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2ada7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ada80: 0x3c034316  lui         $v1, 0x4316
    ctx->pc = 0x2ada80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17174 << 16));
    // 0x2ada84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada88: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ada8c: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ada8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ada90: 0x3c033d23  lui         $v1, 0x3D23
    ctx->pc = 0x2ada90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15651 << 16));
    // 0x2ada94: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2ada94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2ada98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ada98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ada9c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ada9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2adaa0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2adaa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2adaa4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2adaa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2adaa8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADAA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADAA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADAB0u;
}
