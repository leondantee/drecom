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

// Function: e2d_id4a_type00
// Address: 0x2b6350 - 0x2b64b8
void e2d_id4a_type00_0x2b6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id4a_type00_0x2b6350");
#endif

    switch (ctx->pc) {
        case 0x2b63fcu: goto label_2b63fc;
        case 0x2b6408u: goto label_2b6408;
        case 0x2b642cu: goto label_2b642c;
        case 0x2b6438u: goto label_2b6438;
        case 0x2b6448u: goto label_2b6448;
        case 0x2b6498u: goto label_2b6498;
        default: break;
    }

    ctx->pc = 0x2b6350u;

    // 0x2b6350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6354: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b6354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b6358: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b6358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b635c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b635cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6360: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6364: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b6364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6368: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2b6368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2b636c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b636cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6370: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6374: 0xe4400104  swc1        $f0, 0x104($v0)
    ctx->pc = 0x2b6374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2b6378: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x2b6378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x2b637c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b637cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6380: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6384: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b6384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b6388: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b6388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b638c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b638cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6390: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6394: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b6394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b6398: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b6398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b639c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b63a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b63a4: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b63a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b63a8: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2b63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2b63ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b63acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b63b4: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x2b63b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x2b63b8: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b63bc: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b63bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b63c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b63c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b63c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b63c8: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x2b63c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
    // 0x2b63cc: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b63ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b63d0: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b63d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b63d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b63d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b63d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b63dc: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x2b63dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
    // 0x2b63e0: 0x3c023f7d  lui         $v0, 0x3F7D
    ctx->pc = 0x2b63e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16253 << 16));
    // 0x2b63e4: 0x344270a4  ori         $v0, $v0, 0x70A4
    ctx->pc = 0x2b63e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28836);
    // 0x2b63e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b63e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b63ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b63ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b63f0: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x2b63f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x2b63f4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2B63F4u;
    SET_GPR_U32(ctx, 31, 0x2B63FCu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2B63F4u, 0x2B63FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63FCu;
label_2b63fc:
    // 0x2b63fc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b63fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b6400: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x2B6400u;
    SET_GPR_U32(ctx, 31, 0x2B6408u);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x2B6400u, 0x2B6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6408u;
label_2b6408:
    // 0x2b6408: 0x3c034009  lui         $v1, 0x4009
    ctx->pc = 0x2b6408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16393 << 16));
    // 0x2b640c: 0x34631eb8  ori         $v1, $v1, 0x1EB8
    ctx->pc = 0x2b640cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)7864);
    // 0x2b6410: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2b6410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2b6414: 0x3c0351eb  lui         $v1, 0x51EB
    ctx->pc = 0x2b6414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20971 << 16));
    // 0x2b6418: 0x3463851f  ori         $v1, $v1, 0x851F
    ctx->pc = 0x2b6418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34079);
    // 0x2b641c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x2b641cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b6420: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2b6420u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b6424: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x2B6424u;
    SET_GPR_U32(ctx, 31, 0x2B642Cu);
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x2B6424u, 0x2B642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B642Cu;
label_2b642c:
    // 0x2b642c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2b642cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2b6430: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x2B6430u;
    SET_GPR_U32(ctx, 31, 0x2B6438u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x2B6430u, 0x2B6438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6438u;
label_2b6438:
    // 0x2b6438: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b643c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2b643cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2b6440: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2B6440u;
    SET_GPR_U32(ctx, 31, 0x2B6448u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2B6440u, 0x2B6448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6448u;
label_2b6448:
    // 0x2b6448: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b6448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b644c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b6450: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2b6450u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b6454: 0x0  nop
    ctx->pc = 0x2b6454u;
    // NOP
    // 0x2b6458: 0x0  nop
    ctx->pc = 0x2b6458u;
    // NOP
    // 0x2b645c: 0x1010  mfhi        $v0
    ctx->pc = 0x2b645cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b6460: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x2b6460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x2b6464: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b6464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b6468: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b646c: 0xa043013a  sb          $v1, 0x13A($v0)
    ctx->pc = 0x2b646cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6470: 0x3c02bb44  lui         $v0, 0xBB44
    ctx->pc = 0x2b6470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47940 << 16));
    // 0x2b6474: 0x34429ba6  ori         $v0, $v0, 0x9BA6
    ctx->pc = 0x2b6474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39846);
    // 0x2b6478: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b6478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b647c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b6480: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x2b6480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
    // 0x2b6484: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b6484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b6488: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b648c: 0xa043011e  sb          $v1, 0x11E($v0)
    ctx->pc = 0x2b648cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b6490: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2B6490u;
    SET_GPR_U32(ctx, 31, 0x2B6498u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2B6490u, 0x2B6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6498u;
label_2b6498:
    // 0x2b6498: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2b6498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2b649c: 0x24640064  addiu       $a0, $v1, 0x64
    ctx->pc = 0x2b649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x2b64a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b64a4: 0xac640100  sw          $a0, 0x100($v1)
    ctx->pc = 0x2b64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 4));
    // 0x2b64a8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b64a8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b64ac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b64acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b64b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B64B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B64B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B64B8u;
}
