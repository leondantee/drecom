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

// Function: e2d_id04_type0a
// Address: 0x2ad890 - 0x2ad994
void e2d_id04_type0a_0x2ad890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id04_type0a_0x2ad890");
#endif

    ctx->pc = 0x2ad890u;

    // 0x2ad890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad894: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2ad894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2ad898: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad89c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad89cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8a4: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2ad8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2ad8a8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad8ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad8acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8b4: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2ad8b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2ad8b8: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2ad8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2ad8bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad8bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8c4: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2ad8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2ad8c8: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x2ad8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x2ad8cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad8ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8d4: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2ad8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2ad8d8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2ad8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2ad8dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad8dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8e4: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2ad8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2ad8e8: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2ad8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2ad8ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad8ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad8f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad8f4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x2ad8f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x2ad8f8: 0x3c034029  lui         $v1, 0x4029
    ctx->pc = 0x2ad8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16425 << 16));
    // 0x2ad8fc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2ad8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2ad900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad904: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad908: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2ad908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2ad90c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ad90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad914: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad918: 0xe460005c  swc1        $f0, 0x5C($v1)
    ctx->pc = 0x2ad918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
    // 0x2ad91c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ad91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad924: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad928: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2ad928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2ad92c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ad92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad930: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad930u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad934: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad938: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2ad938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2ad93c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2ad93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad940: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad940u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad944: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad948: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2ad948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2ad94c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2ad94cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ad950: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad954: 0xa0640138  sb          $a0, 0x138($v1)
    ctx->pc = 0x2ad954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 312), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad958: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2ad958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ad95c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad960: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2ad960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad964: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2ad964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2ad968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad96c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad96cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad970: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2ad970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2ad974: 0x3c033cf5  lui         $v1, 0x3CF5
    ctx->pc = 0x2ad974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15605 << 16));
    // 0x2ad978: 0x3463c28f  ori         $v1, $v1, 0xC28F
    ctx->pc = 0x2ad978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
    // 0x2ad97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2ad97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad980: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2ad980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ad984: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2ad984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2ad988: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ad988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad98c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD98Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD98Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD994u;
}
