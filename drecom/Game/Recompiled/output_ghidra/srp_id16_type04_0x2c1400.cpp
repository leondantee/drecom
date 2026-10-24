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

// Function: srp_id16_type04
// Address: 0x2c1400 - 0x2c1564
void srp_id16_type04_0x2c1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_id16_type04_0x2c1400");
#endif

    ctx->pc = 0x2c1400u;

    // 0x2c1400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c1400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c1404: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c1404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c1408: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x2c1408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x2c140c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c140cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1410: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1414: 0xe46002d0  swc1        $f0, 0x2D0($v1)
    ctx->pc = 0x2c1414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 720), bits); }
    // 0x2c1418: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c1418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c141c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c141cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1420: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1424: 0xe46002d4  swc1        $f0, 0x2D4($v1)
    ctx->pc = 0x2c1424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 724), bits); }
    // 0x2c1428: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c1428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c142c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c142cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1430: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1434: 0xe46002d8  swc1        $f0, 0x2D8($v1)
    ctx->pc = 0x2c1434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 728), bits); }
    // 0x2c1438: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2c1438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2c143c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c143cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1440: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1444: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x2c1444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
    // 0x2c1448: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c1448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c144c: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c1450: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1450u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1454: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1458: 0xe46002e0  swc1        $f0, 0x2E0($v1)
    ctx->pc = 0x2c1458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 736), bits); }
    // 0x2c145c: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c145cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c1460: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c1460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c1464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1468: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c146c: 0xe46002e4  swc1        $f0, 0x2E4($v1)
    ctx->pc = 0x2c146cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 740), bits); }
    // 0x2c1470: 0x3c033f7d  lui         $v1, 0x3F7D
    ctx->pc = 0x2c1470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16253 << 16));
    // 0x2c1474: 0x346370a4  ori         $v1, $v1, 0x70A4
    ctx->pc = 0x2c1474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28836);
    // 0x2c1478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c147c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1480: 0xe46002e8  swc1        $f0, 0x2E8($v1)
    ctx->pc = 0x2c1480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 744), bits); }
    // 0x2c1484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c1484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1488: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c148c: 0xe46002f0  swc1        $f0, 0x2F0($v1)
    ctx->pc = 0x2c148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 752), bits); }
    // 0x2c1490: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x2c1490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x2c1494: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c1494u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1498: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c149c: 0xe46002f4  swc1        $f0, 0x2F4($v1)
    ctx->pc = 0x2c149cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 756), bits); }
    // 0x2c14a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c14a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c14a4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14a8: 0xe46002f8  swc1        $f0, 0x2F8($v1)
    ctx->pc = 0x2c14a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 760), bits); }
    // 0x2c14ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c14acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c14b0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14b4: 0xe4600300  swc1        $f0, 0x300($v1)
    ctx->pc = 0x2c14b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 768), bits); }
    // 0x2c14b8: 0x3c03bf00  lui         $v1, 0xBF00
    ctx->pc = 0x2c14b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48896 << 16));
    // 0x2c14bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c14bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c14c0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14c4: 0xe4600304  swc1        $f0, 0x304($v1)
    ctx->pc = 0x2c14c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 772), bits); }
    // 0x2c14c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c14c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c14cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14d0: 0xe4600308  swc1        $f0, 0x308($v1)
    ctx->pc = 0x2c14d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 776), bits); }
    // 0x2c14d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c14d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c14d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14dc: 0xa0640342  sb          $a0, 0x342($v1)
    ctx->pc = 0x2c14dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 834), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c14e0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c14e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c14e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14e8: 0xa0640347  sb          $a0, 0x347($v1)
    ctx->pc = 0x2c14e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 839), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c14ec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2c14ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c14f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c14f4: 0xa0640344  sb          $a0, 0x344($v1)
    ctx->pc = 0x2c14f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 836), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c14f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c14f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c14fc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1500: 0xa064036d  sb          $a0, 0x36D($v1)
    ctx->pc = 0x2c1500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 877), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1504: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c1504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1508: 0x8c830270  lw          $v1, 0x270($a0)
    ctx->pc = 0x2c1508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 624)));
    // 0x2c150c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c150cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c1510: 0xac830270  sw          $v1, 0x270($a0)
    ctx->pc = 0x2c1510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 624), GPR_U32(ctx, 3));
    // 0x2c1514: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1518: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c151c: 0xa064036c  sb          $a0, 0x36C($v1)
    ctx->pc = 0x2c151cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 876), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c1520: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c1520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c1524: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1528: 0xa064036a  sb          $a0, 0x36A($v1)
    ctx->pc = 0x2c1528u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 874), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c152c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x2c152cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2c1530: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1534: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x2c1534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x2c1538: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c1538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c153c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c153cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1540: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1544: 0xe4600338  swc1        $f0, 0x338($v1)
    ctx->pc = 0x2c1544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 824), bits); }
    // 0x2c1548: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c1548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2c154c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c154cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c1550: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c1550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c1554: 0xe460033c  swc1        $f0, 0x33C($v1)
    ctx->pc = 0x2c1554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 828), bits); }
    // 0x2c1558: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c1558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c155c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C155Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C155Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1564u;
}
