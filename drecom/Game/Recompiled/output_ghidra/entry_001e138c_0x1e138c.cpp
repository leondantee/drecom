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

// Function: entry_001e138c
// Address: 0x1e138c - 0x1e15d8
void entry_001e138c_0x1e138c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e138c_0x1e138c");
#endif

    switch (ctx->pc) {
        case 0x1e15d4u: goto label_1e15d4;
        default: break;
    }

    ctx->pc = 0x1e138cu;

    // 0x1e138c: 0x96060100  lhu         $a2, 0x100($s0)
    ctx->pc = 0x1e138cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x1e1390: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x1e1390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1e1394: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1398: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1e1398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e139c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e139cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e13a0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e13a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e13a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e13a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13a8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1e13a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1e13ac: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x1e13acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e13b0: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1e13b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1e13b4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e13b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e13b8: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e13b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e13bc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e13bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13c0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1e13c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1e13c4: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x1e13c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e13c8: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x1e13c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1e13cc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1e13ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1e13d0: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1e13d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1e13d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1e13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e13d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1e13d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1e13dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e13dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e13e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e13e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e13e4: 0x0  nop
    ctx->pc = 0x1e13e4u;
    // NOP
    // 0x1e13e8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1e13e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1e13ec: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e13ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e13f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e13f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e13f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e13f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e13f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e13f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e13fc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1e13fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1400: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1e1400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1e1404: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1408: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e140c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e140cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1410: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e1414: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e1414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1418: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1e1418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1e141c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e141cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1420: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1428: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e142c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1e142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1430: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1e1430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1e1434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1438: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e143c: 0x0  nop
    ctx->pc = 0x1e143cu;
    // NOP
    // 0x1e1440: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1e1440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1e1444: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1448: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e144c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e144cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1450: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e1454: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1e1454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1458: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1e1458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1e145c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e145cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1460: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1464: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1468: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e146c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1e146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1470: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1e1470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1e1474: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1478: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e147c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e147cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1480: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1e1480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1e1484: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e1484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1488: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1e1488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1e148c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e1490: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e1490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1494: 0x0  nop
    ctx->pc = 0x1e1494u;
    // NOP
    // 0x1e1498: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x1e1498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x1e149c: 0x86020102  lh          $v0, 0x102($s0)
    ctx->pc = 0x1e149cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 258)));
    // 0x1e14a0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1E14A0u;
    {
        const bool branch_taken_0x1e14a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e14a0) {
            ctx->pc = 0x1E167Cu;
            return;
        }
    }
    ctx->pc = 0x1E14A8u;
    // 0x1e14a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1e14a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e14ac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1e14acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1e14b0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1e14b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1e14b4: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x1e14b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1e14b8: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e14b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e14bc: 0x8c430134  lw          $v1, 0x134($v0)
    ctx->pc = 0x1e14bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
    // 0x1e14c0: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e14c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e14c4: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e14c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e14c8: 0x62b821  addu        $s7, $v1, $v0
    ctx->pc = 0x1e14c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e14cc: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e14ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e14d0: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x1e14d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1e14d4: 0x151082  srl         $v0, $s5, 2
    ctx->pc = 0x1e14d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 2));
    // 0x1e14d8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1e14d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e14dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e14dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e14e0: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x1e14e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
    // 0x1e14e4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x1e14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x1e14e8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1e14e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1e14ec: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x1E14ECu;
    {
        const bool branch_taken_0x1e14ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14ec) {
            ctx->pc = 0x1E1650u;
            return;
        }
    }
    ctx->pc = 0x1E14F4u;
    // 0x1e14f4: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x1e14f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
    // 0x1e14f8: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1E14F8u;
    {
        const bool branch_taken_0x1e14f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e14f8) {
            ctx->pc = 0x1E15D8u;
            return;
        }
    }
    ctx->pc = 0x1E1500u;
    // 0x1e1500: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1504: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e150c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1e150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e1510: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e1510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1514: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1e1514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1e1518: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e151c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1520: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e1524: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1e1524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e1528: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e1528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e152c: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x1e152cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1e1530: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1e1530u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e1534: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1e1534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1e1538: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e1538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e153c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x1e153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1e1540: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e1540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e1544: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x1e1544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x1e1548: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e1548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e154c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e154cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1550: 0x0  nop
    ctx->pc = 0x1e1550u;
    // NOP
    // 0x1e1554: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1e1554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1e1558: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x1e1558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e155c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1e155cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1e1560: 0x8fa201a0  lw          $v0, 0x1A0($sp)
    ctx->pc = 0x1e1560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e1564: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e1568: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1e1568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1e156c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1e156cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1e1570: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1574: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1574u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e1578: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e1578u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e157c: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e1580: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e1580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e1584: 0x644021  addu        $t0, $v1, $a0
    ctx->pc = 0x1e1584u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e1588: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1e1588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e158c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1e158cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1e1590: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1e1590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1e1594: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1e1594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1e1598: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e1598u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e159c: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x1e159cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1e15a0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x1e15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1e15a4: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1e15a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    // 0x1e15a8: 0x644821  addu        $t1, $v1, $a0
    ctx->pc = 0x1e15a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e15ac: 0x112040  sll         $a0, $s1, 1
    ctx->pc = 0x1e15acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1e15b0: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x1e15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x1e15b4: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1e15b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e15b8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x1e15b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e15bc: 0x8fa501b8  lw          $a1, 0x1B8($sp)
    ctx->pc = 0x1e15bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
    // 0x1e15c0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1e15c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1e15c4: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x1e15c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e15c8: 0x27ab0160  addiu       $t3, $sp, 0x160
    ctx->pc = 0x1e15c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e15cc: 0xc05d3ac  jal         func_174EB0
    ctx->pc = 0x1E15CCu;
    SET_GPR_U32(ctx, 31, 0x1E15D4u);
    ctx->pc = 0x174EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EB0u, 0x1E15CCu, 0x1E15D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E15D4u;
label_1e15d4:
    // 0x1e15d4: 0x0  nop
    ctx->pc = 0x1e15d4u;
    // NOP
    ctx->pc = 0x1e15d8u;
}
