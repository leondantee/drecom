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

// Function: Em1d_R0_init
// Address: 0x36f430 - 0x36fbac
void Em1d_R0_init_0x36f430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R0_init_0x36f430");
#endif

    switch (ctx->pc) {
        case 0x36f4e4u: goto label_36f4e4;
        case 0x36f654u: goto label_36f654;
        case 0x36f66cu: goto label_36f66c;
        case 0x36f678u: goto label_36f678;
        case 0x36f68cu: goto label_36f68c;
        case 0x36f720u: goto label_36f720;
        case 0x36f73cu: goto label_36f73c;
        case 0x36f924u: goto label_36f924;
        case 0x36f948u: goto label_36f948;
        case 0x36f968u: goto label_36f968;
        case 0x36fb48u: goto label_36fb48;
        case 0x36fb6cu: goto label_36fb6c;
        case 0x36fb90u: goto label_36fb90;
        default: break;
    }

    ctx->pc = 0x36f430u;

    // 0x36f430: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x36f430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x36f434: 0x7fbf0030  sq          $ra, 0x30($sp)
    ctx->pc = 0x36f434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x36f438: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36f438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36f43c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36f43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36f440: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36f440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36f444: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x36f444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
    // 0x36f448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36f448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f44c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f450: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x36f450u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f454: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f458: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x36f458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f45c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f460: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36f460u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f464: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f468: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36f468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f46c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f470: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36f470u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36f474: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f47c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f480: 0xe46011e0  swc1        $f0, 0x11E0($v1)
    ctx->pc = 0x36f480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4576), bits); }
    // 0x36f484: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x36f484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x36f488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f48c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f490: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x36f490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x36f494: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x36f494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x36f498: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f49c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x36f49cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x36f4a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f4a4: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x36f4a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x36f4a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f4ac: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x36f4acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x36f4b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f4b4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36f4b8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x36f4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x36f4bc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36f4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36f4c0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f4c4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x36f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36f4c8: 0xa4400014  sh          $zero, 0x14($v0)
    ctx->pc = 0x36f4c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x36f4cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f4d0: 0x245010b0  addiu       $s0, $v0, 0x10B0
    ctx->pc = 0x36f4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
    // 0x36f4d4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x36f4d4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x36f4d8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36f4d8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36f4dc: 0xc06246c  jal         func_1891B0
    ctx->pc = 0x36F4DCu;
    SET_GPR_U32(ctx, 31, 0x36F4E4u);
    ctx->pc = 0x1891B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1891B0u, 0x36F4DCu, 0x36F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F4E4u;
label_36f4e4:
    // 0x36f4e4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f4ec: 0x0  nop
    ctx->pc = 0x36f4ecu;
    // NOP
    // 0x36f4f0: 0xe60000d0  swc1        $f0, 0xD0($s0)
    ctx->pc = 0x36f4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 208), bits); }
    // 0x36f4f4: 0xe60000d4  swc1        $f0, 0xD4($s0)
    ctx->pc = 0x36f4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x36f4f8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f500: 0x0  nop
    ctx->pc = 0x36f500u;
    // NOP
    // 0x36f504: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x36f504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    // 0x36f508: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f50c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x36f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36f510: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36f510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36f514: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x36f514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x36f518: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f51c: 0x246200d0  addiu       $v0, $v1, 0xD0
    ctx->pc = 0x36f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x36f520: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x36f520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x36f524: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x36f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x36f528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f52c: 0x0  nop
    ctx->pc = 0x36f52cu;
    // NOP
    // 0x36f530: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x36f530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x36f534: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f538: 0x0  nop
    ctx->pc = 0x36f538u;
    // NOP
    // 0x36f53c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x36f53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x36f540: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f540u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f544: 0x0  nop
    ctx->pc = 0x36f544u;
    // NOP
    // 0x36f548: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x36f548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x36f54c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f54cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f550: 0x0  nop
    ctx->pc = 0x36f550u;
    // NOP
    // 0x36f554: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x36f554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x36f558: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36f558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36f55c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36f55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f560: 0x0  nop
    ctx->pc = 0x36f560u;
    // NOP
    // 0x36f564: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x36f564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x36f568: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f56c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x36f570: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36f570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36f574: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36f574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36f578: 0x2443b3e0  addiu       $v1, $v0, -0x4C20
    ctx->pc = 0x36f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947808));
    // 0x36f57c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f580: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x36f580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x36f584: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x36f584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x36f588: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f58c: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x36f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x36f590: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x36f590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36f594: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f598: 0xa0621219  sb          $v0, 0x1219($v1)
    ctx->pc = 0x36f598u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 2));
    // 0x36f59c: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x36f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x36f5a0: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x36f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x36f5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f5a8: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5ac: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x36f5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x36f5b0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5b4: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x36f5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x36f5b8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5bc: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x36f5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x36f5c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5c4: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x36f5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x36f5c8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5cc: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x36f5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x36f5d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f5d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f5d4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5d8: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x36f5d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x36f5dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f5dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f5e0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5e4: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x36f5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x36f5e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f5e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f5ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f5f0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x36f5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x36f5f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f5f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f5f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f5fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36f5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f600: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x36f600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x36f604: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f608: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f608u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f60c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f610: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x36f610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x36f614: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x36f614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x36f618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36f618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f61c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f620: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x36f620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x36f624: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f628: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x36f628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x36f62c: 0x24520090  addiu       $s2, $v0, 0x90
    ctx->pc = 0x36f62cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x36f630: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36f630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f634: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f638: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x36f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f63c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36f63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36f640: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x36f640u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36f644: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36f644u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36f648: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36f648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36f64c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x36F64Cu;
    SET_GPR_U32(ctx, 31, 0x36F654u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x36F64Cu, 0x36F654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F654u;
label_36f654:
    // 0x36f654: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x36f654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f658: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x36f658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x36f65c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x36f65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36f660: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x36f660u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x36f664: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x36F664u;
    SET_GPR_U32(ctx, 31, 0x36F66Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x36F664u, 0x36F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F66Cu;
label_36f66c:
    // 0x36f66c: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x36f66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f670: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x36F670u;
    SET_GPR_U32(ctx, 31, 0x36F678u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x36F670u, 0x36F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F678u;
label_36f678:
    // 0x36f678: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x36f678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f67c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36f680: 0x2445b4a0  addiu       $a1, $v0, -0x4B60
    ctx->pc = 0x36f680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948000));
    // 0x36f684: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x36F684u;
    SET_GPR_U32(ctx, 31, 0x36F68Cu);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x36F684u, 0x36F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F68Cu;
label_36f68c:
    // 0x36f68c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f690: 0x8c5101ac  lw          $s1, 0x1AC($v0)
    ctx->pc = 0x36f690u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x36f694: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f698: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x36f698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36f69c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x36f69cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36f6a0: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x36f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x36f6a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36f6a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36f6a8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f6ac: 0x244200d0  addiu       $v0, $v0, 0xD0
    ctx->pc = 0x36f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x36f6b0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x36f6b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36f6b4: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x36f6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x36f6b8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36f6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36f6bc: 0x3c02c743  lui         $v0, 0xC743
    ctx->pc = 0x36f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51011 << 16));
    // 0x36f6c0: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x36f6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
    // 0x36f6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f6c8: 0x0  nop
    ctx->pc = 0x36f6c8u;
    // NOP
    // 0x36f6cc: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x36f6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x36f6d0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f6d4: 0x90421308  lbu         $v0, 0x1308($v0)
    ctx->pc = 0x36f6d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4872)));
    // 0x36f6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36f6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f6dc: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x36f6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x36f6e0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x36F6E0u;
    {
        const bool branch_taken_0x36f6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36f6e0) {
            ctx->pc = 0x36F714u;
            goto label_36f714;
        }
    }
    ctx->pc = 0x36F6E8u;
    // 0x36f6e8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x36f6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36f6ec: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f6f0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x36f6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f6f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f6f8: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x36f6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f6fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f700: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x36f700u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f704: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f708: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x36f708u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36f70c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f710: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36f710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_36f714:
    // 0x36f714: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x36f714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x36f718: 0xc05da88  jal         func_176A20
    ctx->pc = 0x36F718u;
    SET_GPR_U32(ctx, 31, 0x36F720u);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x36F718u, 0x36F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F720u;
label_36f720:
    // 0x36f720: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f724: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f728: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f72c: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x36f72cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f730: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x36f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x36f734: 0xc05da88  jal         func_176A20
    ctx->pc = 0x36F734u;
    SET_GPR_U32(ctx, 31, 0x36F73Cu);
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x36F734u, 0x36F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F73Cu;
label_36f73c:
    // 0x36f73c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f740: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f744: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f748: 0xa043000d  sb          $v1, 0xD($v0)
    ctx->pc = 0x36f748u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 3));
    // 0x36f74c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f750: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f754: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f758: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f75c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f764: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f764u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f768: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f76c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f770: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x36f770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f774: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x36f774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x36f778: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x36f778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x36f77c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f780: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x36f780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x36f784: 0x3c02435c  lui         $v0, 0x435C
    ctx->pc = 0x36f784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17244 << 16));
    // 0x36f788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f78c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f790: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f794: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f798: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f79c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f7a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f7a8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f7ac: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f7b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7b4: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x36f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x36f7b8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x36f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x36f7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f7c0: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f7c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f7c8: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f7cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f7d0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f7d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f7dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f7e0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f7e8: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x36f7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x36f7ec: 0x3c024324  lui         $v0, 0x4324
    ctx->pc = 0x36f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17188 << 16));
    // 0x36f7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f7f4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f7f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f7fc: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f7fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f800: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f804: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f804u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f80c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f810: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f814: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f818: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f81c: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x36f81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x36f820: 0x3c023f5c  lui         $v0, 0x3F5C
    ctx->pc = 0x36f820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16220 << 16));
    // 0x36f824: 0x3442dcdd  ori         $v0, $v0, 0xDCDD
    ctx->pc = 0x36f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56541);
    // 0x36f828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f82c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f830: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f834: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f834u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f838: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f83c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f840: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f844: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f848: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f84c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f850: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f854: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x36f854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x36f858: 0x3c023f70  lui         $v0, 0x3F70
    ctx->pc = 0x36f858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16240 << 16));
    // 0x36f85c: 0x3442f0f1  ori         $v0, $v0, 0xF0F1
    ctx->pc = 0x36f85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61681);
    // 0x36f860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f864: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f868: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f86c: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f86cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f870: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f874: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f878: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f87c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f880: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f884: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f88c: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x36f88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x36f890: 0x3c023f24  lui         $v0, 0x3F24
    ctx->pc = 0x36f890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16164 << 16));
    // 0x36f894: 0x3442a4a5  ori         $v0, $v0, 0xA4A5
    ctx->pc = 0x36f894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42149);
    // 0x36f898: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f89c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f8a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f8a4: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f8a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f8a8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f8a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f8ac: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f8b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f8b4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f8b8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f8bc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f8c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f8c4: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x36f8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x36f8c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f8c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8cc: 0x0  nop
    ctx->pc = 0x36f8ccu;
    // NOP
    // 0x36f8d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36f8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36f8d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36f8d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8d8: 0x0  nop
    ctx->pc = 0x36f8d8u;
    // NOP
    // 0x36f8dc: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x36f8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36f8e0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x36f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x36f8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8e8: 0x0  nop
    ctx->pc = 0x36f8e8u;
    // NOP
    // 0x36f8ec: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x36f8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36f8f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x36f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x36f8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f8f8: 0x0  nop
    ctx->pc = 0x36f8f8u;
    // NOP
    // 0x36f8fc: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36f8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36f900: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f904: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f908: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f908u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f90c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f90cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f910: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36f910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36f914: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36f914u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x36f918: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36f918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36f91c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x36F91Cu;
    SET_GPR_U32(ctx, 31, 0x36F924u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36F91Cu, 0x36F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F924u;
label_36f924:
    // 0x36f924: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f928: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f92c: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f930: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f934: 0x3c0244a2  lui         $v0, 0x44A2
    ctx->pc = 0x36f934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17570 << 16));
    // 0x36f938: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36f938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36f93c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36f93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36f940: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x36F940u;
    SET_GPR_U32(ctx, 31, 0x36F948u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x36F940u, 0x36F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F948u;
label_36f948:
    // 0x36f948: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f94c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f950: 0x9042000c  lbu         $v0, 0xC($v0)
    ctx->pc = 0x36f950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36f954: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36f954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f958: 0x3c02457a  lui         $v0, 0x457A
    ctx->pc = 0x36f958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17786 << 16));
    // 0x36f95c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x36f95cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36f960: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x36F960u;
    SET_GPR_U32(ctx, 31, 0x36F968u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x36F960u, 0x36F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F968u;
label_36f968:
    // 0x36f968: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f96c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f970: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f970u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f974: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f978: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f97c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f980: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f984: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f988: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f98c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x36f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f990: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x36f990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x36f994: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x36f994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x36f998: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36f998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36f99c: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x36f99cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
    // 0x36f9a0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x36f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x36f9a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36f9a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f9a8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f9ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f9b0: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f9b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f9b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f9b8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f9bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f9c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f9c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f9c8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36f9cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f9d0: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x36f9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x36f9d4: 0x3c03435c  lui         $v1, 0x435C
    ctx->pc = 0x36f9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17244 << 16));
    // 0x36f9d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36f9d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36f9dc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36f9e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36f9e4: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36f9e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36f9e8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36f9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36f9ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36f9f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36f9f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36f9f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36f9fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fa00: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x36fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa04: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x36fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x36fa08: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x36fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x36fa0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fa0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fa10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fa14: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x36fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36fa18: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fa18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fa1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fa1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa20: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36fa24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fa2c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36fa30: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fa34: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x36fa34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa38: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x36fa38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x36fa3c: 0x3c023f48  lui         $v0, 0x3F48
    ctx->pc = 0x36fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16200 << 16));
    // 0x36fa40: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x36fa40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x36fa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fa48: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fa4c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36fa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fa50: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fa50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fa54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa58: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36fa5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa60: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fa64: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36fa68: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36fa68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fa6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa70: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x36fa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x36fa74: 0x3c023f5c  lui         $v0, 0x3F5C
    ctx->pc = 0x36fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16220 << 16));
    // 0x36fa78: 0x3443dcdd  ori         $v1, $v0, 0xDCDD
    ctx->pc = 0x36fa78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56541);
    // 0x36fa7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36fa7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fa80: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x36fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fa84: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x36fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x36fa88: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fa88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fa8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fa8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fa90: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fa90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36fa94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fa98: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fa98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fa9c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36faa0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36faa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36faa8: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x36faa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x36faac: 0x3c023f10  lui         $v0, 0x3F10
    ctx->pc = 0x36faacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16144 << 16));
    // 0x36fab0: 0x34429091  ori         $v0, $v0, 0x9091
    ctx->pc = 0x36fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37009);
    // 0x36fab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36fab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fab8: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fabc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x36fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fac0: 0x9042000d  lbu         $v0, 0xD($v0)
    ctx->pc = 0x36fac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    // 0x36fac4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x36fac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fac8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x36fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x36facc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36faccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fad0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x36fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x36fad4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x36fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x36fad8: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x36fad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x36fadc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36fae0: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x36fae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x36fae4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36fae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fae8: 0x0  nop
    ctx->pc = 0x36fae8u;
    // NOP
    // 0x36faec: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x36faecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36faf0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36faf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36faf4: 0x0  nop
    ctx->pc = 0x36faf4u;
    // NOP
    // 0x36faf8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x36faf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x36fafc: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x36fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x36fb00: 0x34528000  ori         $s2, $v0, 0x8000
    ctx->pc = 0x36fb00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36fb04: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x36fb04u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fb08: 0x0  nop
    ctx->pc = 0x36fb08u;
    // NOP
    // 0x36fb0c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x36fb0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36fb10: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x36fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x36fb14: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x36fb14u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fb18: 0x0  nop
    ctx->pc = 0x36fb18u;
    // NOP
    // 0x36fb1c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x36fb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x36fb20: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x36fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fb24: 0x24a71330  addiu       $a3, $a1, 0x1330
    ctx->pc = 0x36fb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x36fb28: 0x90e8000d  lbu         $t0, 0xD($a3)
    ctx->pc = 0x36fb28u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 13)));
    // 0x36fb2c: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x36fb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x36fb30: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x36fb30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x36fb34: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36fb34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36fb38: 0x8c25dcf0  lw          $a1, -0x2310($at)
    ctx->pc = 0x36fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x36fb3c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x36fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36fb40: 0xc05db20  jal         func_176C80
    ctx->pc = 0x36FB40u;
    SET_GPR_U32(ctx, 31, 0x36FB48u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x36FB40u, 0x36FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB48u;
label_36fb48:
    // 0x36fb48: 0x3c0444fa  lui         $a0, 0x44FA
    ctx->pc = 0x36fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17658 << 16));
    // 0x36fb4c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x36fb4cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36fb50: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fb54: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x36fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fb58: 0x9082000d  lbu         $v0, 0xD($a0)
    ctx->pc = 0x36fb58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 13)));
    // 0x36fb5c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x36fb5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fb60: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x36fb60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x36fb64: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x36FB64u;
    SET_GPR_U32(ctx, 31, 0x36FB6Cu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x36FB64u, 0x36FB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB6Cu;
label_36fb6c:
    // 0x36fb6c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x36fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x36fb70: 0x24511330  addiu       $s1, $v0, 0x1330
    ctx->pc = 0x36fb70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x36fb74: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x36fb74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x36fb78: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x36fb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36fb7c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x36fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x36fb80: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x36fb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36fb84: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x36fb84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x36fb88: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x36FB88u;
    SET_GPR_U32(ctx, 31, 0x36FB90u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x36FB88u, 0x36FB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FB90u;
label_36fb90:
    // 0x36fb90: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x36fb90u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36fb94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36fb94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36fb98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36fb98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36fb9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36fb9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fba0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x36fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36fba4: 0x3e00008  jr          $ra
    ctx->pc = 0x36FBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FBACu;
}
