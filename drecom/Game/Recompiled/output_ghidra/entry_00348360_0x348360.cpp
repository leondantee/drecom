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

// Function: entry_00348360
// Address: 0x348360 - 0x3484c8
void entry_00348360_0x348360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348360_0x348360");
#endif

    switch (ctx->pc) {
        case 0x348408u: goto label_348408;
        default: break;
    }

    ctx->pc = 0x348360u;

    // 0x348360: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x348360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348364: 0x84901278  lh          $s0, 0x1278($a0)
    ctx->pc = 0x348364u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x348368: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x348368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x34836c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x34836cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x348370: 0x1600005f  bnez        $s0, . + 4 + (0x5F << 2)
    ctx->pc = 0x348370u;
    {
        const bool branch_taken_0x348370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x348370) {
            ctx->pc = 0x3484F0u;
            return;
        }
    }
    ctx->pc = 0x348378u;
    // 0x348378: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x348378u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34837c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34837cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348380: 0xa0710000  sb          $s1, 0x0($v1)
    ctx->pc = 0x348380u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x348384: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348388: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34838c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34838cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x348390: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348394: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x348394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x348398: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34839c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34839cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3483a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3483a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3483a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3483a8: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x3483a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x3483ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3483acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483b0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3483b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3483b4: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x3483b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x3483b8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3483b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483bc: 0x8c6202d0  lw          $v0, 0x2D0($v1)
    ctx->pc = 0x3483bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x3483c0: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x3483c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x3483c4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x3483c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3483c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3483c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3483cc: 0x34a60001  ori         $a2, $a1, 0x1
    ctx->pc = 0x3483ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x3483d0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x3483d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x3483d4: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x3483d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x3483d8: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x3483d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3483dc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3483dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3483e0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3483e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3483e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3483e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x3483e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x3483e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3483ec: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x3483ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x3483f0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x3483f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3483f4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3483f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3483f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3483f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3483fc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3483fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x348400: 0xc067694  jal         func_19DA50
    ctx->pc = 0x348400u;
    SET_GPR_U32(ctx, 31, 0x348408u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x348400u, 0x348408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348408u;
label_348408:
    // 0x348408: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x348408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34840c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x34840cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x348410: 0x24650078  addiu       $a1, $v1, 0x78
    ctx->pc = 0x348410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x348414: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x348414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x348418: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x348418u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x34841c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34841cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348420: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348424: 0xa4640034  sh          $a0, 0x34($v1)
    ctx->pc = 0x348424u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 4));
    // 0x348428: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x348428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34842c: 0x8c8302d0  lw          $v1, 0x2D0($a0)
    ctx->pc = 0x34842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x348430: 0x247036b0  addiu       $s0, $v1, 0x36B0
    ctx->pc = 0x348430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 14000));
    // 0x348434: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348438: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348438u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34843c: 0x0  nop
    ctx->pc = 0x34843cu;
    // NOP
    // 0x348440: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x348440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x348444: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34844c: 0x0  nop
    ctx->pc = 0x34844cu;
    // NOP
    // 0x348450: 0xe600012c  swc1        $f0, 0x12C($s0)
    ctx->pc = 0x348450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x348454: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x348454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x348458: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x348458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34845c: 0x0  nop
    ctx->pc = 0x34845cu;
    // NOP
    // 0x348460: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x348460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x348464: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x348464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348468: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x348468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34846c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x34846cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x348470: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x348470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x348474: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x348474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x348478: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x348478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x34847c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x34847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348480: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x348480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x348484: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x348484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x348488: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x348488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34848c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34848Cu;
    {
        const bool branch_taken_0x34848c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34848c) {
            ctx->pc = 0x3484C8u;
            return;
        }
    }
    ctx->pc = 0x348494u;
    // 0x348494: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x348494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x348498: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x348498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34849c: 0xa080006e  sb          $zero, 0x6E($a0)
    ctx->pc = 0x34849cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x3484a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3484a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3484a4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484a8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3484a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484ac: 0xa065006f  sb          $a1, 0x6F($v1)
    ctx->pc = 0x3484acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 5));
    // 0x3484b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3484b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3484b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3484b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3484b8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x3484b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3484bc: 0xa0a40072  sb          $a0, 0x72($a1)
    ctx->pc = 0x3484bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x3484c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3484C0u;
    {
        const bool branch_taken_0x3484c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3484c0) {
            ctx->pc = 0x3484F0u;
            return;
        }
    }
    ctx->pc = 0x3484C8u;
}
