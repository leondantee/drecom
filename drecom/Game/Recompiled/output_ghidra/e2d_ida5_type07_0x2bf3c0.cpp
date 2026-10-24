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

// Function: e2d_ida5_type07
// Address: 0x2bf3c0 - 0x2bf510
void e2d_ida5_type07_0x2bf3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_ida5_type07_0x2bf3c0");
#endif

    switch (ctx->pc) {
        case 0x2bf46cu: goto label_2bf46c;
        default: break;
    }

    ctx->pc = 0x2bf3c0u;

    // 0x2bf3c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bf3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bf3c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2bf3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2bf3c8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2bf3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2bf3cc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf3d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf3d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf3d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf3d8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2bf3d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2bf3dc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf3e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf3e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf3e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf3e8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2bf3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2bf3ec: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf3f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf3f8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2bf3f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2bf3fc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2bf3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2bf400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2bf400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf404: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf408: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2bf408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2bf40c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf410: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bf410u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bf414: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf418: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bf418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf41c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf420: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bf420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf424: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2bf424u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2bf428: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf42c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2bf42cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2bf430: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2bf430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2bf434: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2bf434u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bf438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bf438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bf43c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2bf43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2bf440: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2bf440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2bf444: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2bf444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2bf448: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2bf448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2bf44c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2bf44cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2bf450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2bf450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf454: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2bf454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2bf458: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2bf458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bf45c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2bf45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf460: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2bf460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2bf464: 0xc067648  jal         func_19D920
    ctx->pc = 0x2BF464u;
    SET_GPR_U32(ctx, 31, 0x2BF46Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2BF464u, 0x2BF46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF46Cu;
label_2bf46c:
    // 0x2bf46c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x2bf46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x2bf470: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2bf470u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2bf474: 0x0  nop
    ctx->pc = 0x2bf474u;
    // NOP
    // 0x2bf478: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2bf478u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2bf47c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x2bf47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x2bf480: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf480u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf484: 0x0  nop
    ctx->pc = 0x2bf484u;
    // NOP
    // 0x2bf488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2bf488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2bf48c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf490: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2bf490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2bf494: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x2bf494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x2bf498: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2bf498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2bf49c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf49cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf4a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf4a4: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2bf4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2bf4a8: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x2bf4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x2bf4ac: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x2bf4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x2bf4b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf4b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf4b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf4b8: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x2bf4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x2bf4bc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bf4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bf4c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf4c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf4c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf4c8: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x2bf4c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x2bf4cc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bf4d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf4d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf4d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf4d8: 0xe4600064  swc1        $f0, 0x64($v1)
    ctx->pc = 0x2bf4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
    // 0x2bf4dc: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2bf4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2bf4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf4e4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf4e8: 0xe4600068  swc1        $f0, 0x68($v1)
    ctx->pc = 0x2bf4e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
    // 0x2bf4ec: 0x3c033f78  lui         $v1, 0x3F78
    ctx->pc = 0x2bf4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16248 << 16));
    // 0x2bf4f0: 0x346351ec  ori         $v1, $v1, 0x51EC
    ctx->pc = 0x2bf4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20972);
    // 0x2bf4f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2bf4f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bf4f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2bf4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bf4fc: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x2bf4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x2bf500: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2bf500u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf504: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2bf504u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bf508: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF510u;
}
