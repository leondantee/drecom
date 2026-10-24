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

// Function: e2d_id55_com_smoke00
// Address: 0x2b6840 - 0x2b6998
void e2d_id55_com_smoke00_0x2b6840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id55_com_smoke00_0x2b6840");
#endif

    ctx->pc = 0x2b6840u;

    // 0x2b6840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b6840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b6844: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2b6844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2b6848: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b684c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b684cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6850: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6854: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x2b6854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x2b6858: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b685c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b685cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6860: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6864: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x2b6864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x2b6868: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b686c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b686cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6870: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6874: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x2b6874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x2b6878: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2b6878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2b687c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b687cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6880: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6884: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x2b6884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x2b6888: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b6888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b688c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b688cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b6890: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b6890u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b6894: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b6894u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b6898: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b6898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b689c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b68a0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2b68a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2b68a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b68a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b68a8: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2b68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2b68ac: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2b68acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2b68b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b68b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b68b8: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2b68b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x2b68bc: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2b68c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2b68c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2b68c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2b68c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2b68c8: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2b68c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2b68cc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2b68ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b68d0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2b68d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2b68d4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2b68d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2b68d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b68dc: 0xa064011a  sb          $a0, 0x11A($v1)
    ctx->pc = 0x2b68dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 282), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b68e0: 0x3c033ca3  lui         $v1, 0x3CA3
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15523 << 16));
    // 0x2b68e4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x2b68e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2b68e8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b68e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b68ec: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b68ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b68f0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b68f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b68f4: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x2b68f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x2b68f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b68f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b68fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b68fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6900: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x2b6900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x2b6904: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x2b6904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x2b6908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b690c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6910: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x2b6910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x2b6914: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b6914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b6918: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6918u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b691c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6920: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2b6920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2b6924: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2b6924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2b6928: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6928u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b692c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b692cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6930: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2b6930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2b6934: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x2b6934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6938: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6938u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b693c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b693cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6940: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2b6940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2b6944: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x2b6944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x2b6948: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b6948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b694c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b694cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6950: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6954: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x2b6954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x2b6958: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2b6958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2b695c: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2b695cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2b6960: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6960u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6964: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6968: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2b6968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2b696c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b6970: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6974: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b6974u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b6978: 0x3c03bf4c  lui         $v1, 0xBF4C
    ctx->pc = 0x2b6978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48972 << 16));
    // 0x2b697c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b697cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b6980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b6980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6984: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2b6984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6988: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2b6988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2b698c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b698cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b6990: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6998u;
}
