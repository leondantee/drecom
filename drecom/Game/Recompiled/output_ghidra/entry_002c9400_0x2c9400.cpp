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

// Function: entry_002c9400
// Address: 0x2c9400 - 0x2c9588
void entry_002c9400_0x2c9400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c9400_0x2c9400");
#endif

    switch (ctx->pc) {
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c955cu: goto label_2c955c;
        default: break;
    }

    ctx->pc = 0x2c9400u;

    // 0x2c9400: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9404: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9408: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x2c9408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x2c940c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2c940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2c9410: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9414: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9418: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c9418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x2c941c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2c941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c9420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9424: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9428: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c9428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c942c: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2c942cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x2c9430: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9430u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9434: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9438: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c943c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c943cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c9440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9444: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2c9444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9448: 0x24e41330  addiu       $a0, $a3, 0x1330
    ctx->pc = 0x2c9448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4912));
    // 0x2c944c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x2c944cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x2c9450: 0x3c064248  lui         $a2, 0x4248
    ctx->pc = 0x2c9450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16968 << 16));
    // 0x2c9454: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2c9454u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c9458: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c945c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2c945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2c9460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c9460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9464: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9468: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x2c9468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c946c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c946cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9470: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2c9470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9474: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9478: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2c9478u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c947c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9480: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2c9480u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9484: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9488: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2c948c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c948cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9490: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c9490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c9494: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x2c9494u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x2c9498: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c949c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c949cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c94a0: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x2c94a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c94a4: 0x30a60001  andi        $a2, $a1, 0x1
    ctx->pc = 0x2c94a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2c94a8: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x2c94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x2c94ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c94acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c94b0: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x2c94b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94b4: 0x25221330  addiu       $v0, $t1, 0x1330
    ctx->pc = 0x2c94b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4912));
    // 0x2c94b8: 0xa447000e  sh          $a3, 0xE($v0)
    ctx->pc = 0x2c94b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 7));
    // 0x2c94bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c94c0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c94c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94c4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2c94c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c94c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2c94c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c94cc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c94ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94d0: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x2c94d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c94d4: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2c94d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94d8: 0xa0c00002  sb          $zero, 0x2($a2)
    ctx->pc = 0x2c94d8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c94dc: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x2c94dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94e0: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x2c94e0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c94e4: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x2c94e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c94e8: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2c94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2c94ec: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C94ECu;
    SET_GPR_U32(ctx, 31, 0x2C94F4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C94ECu, 0x2C94F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C94F4u;
label_2c94f4:
    // 0x2c94f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c94f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c94f8: 0x3043007f  andi        $v1, $v0, 0x7F
    ctx->pc = 0x2c94f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c94fc: 0x24620258  addiu       $v0, $v1, 0x258
    ctx->pc = 0x2c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 600));
    // 0x2c9500: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x2c9500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c9504: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x2c9504u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x2c9508: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c950c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c9510: 0xa4440058  sh          $a0, 0x58($v0)
    ctx->pc = 0x2c9510u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 88), (uint16_t)GPR_U32(ctx, 4));
    // 0x2c9514: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9518: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2c9518u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2c951c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2c951cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9520: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2c9520u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2c9524: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x2c9524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x2c9528: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x2c9528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c952c: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2C952Cu;
    SET_GPR_U32(ctx, 31, 0x2C9534u);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2C952Cu, 0x2C9534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9534u;
label_2c9534:
    // 0x2c9534: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c9534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9538: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2c953c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2c953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c9540: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2c9540u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2c9544: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x2c9544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2c9548: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2c9548u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2c954c: 0x240700b4  addiu       $a3, $zero, 0xB4
    ctx->pc = 0x2c954cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2c9550: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x2c9550u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2c9554: 0xc0c4bc8  jal         func_312F20
    ctx->pc = 0x2C9554u;
    SET_GPR_U32(ctx, 31, 0x2C955Cu);
    ctx->pc = 0x312F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312F20u, 0x2C9554u, 0x2C955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C955Cu;
label_2c955c:
    // 0x2c955c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c9560: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c9564: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x2c9564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x2c9568: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x2c956c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c956cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c9570: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x2c9570u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
    // 0x2c9574: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2c9574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2c9578: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x2c9578u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x2c957c: 0x3c03fffe  lui         $v1, 0xFFFE
    ctx->pc = 0x2c957cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65534 << 16));
    // 0x2c9580: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c9580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c9584: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2c9584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x2c9588u;
}
