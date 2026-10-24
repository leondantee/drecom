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

// Function: entry_003471e8
// Address: 0x3471e8 - 0x347318
void entry_003471e8_0x3471e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003471e8_0x3471e8");
#endif

    ctx->pc = 0x3471e8u;

    // 0x3471e8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x3471e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471ec: 0x24a41330  addiu       $a0, $a1, 0x1330
    ctx->pc = 0x3471ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x3471f0: 0xa080008e  sb          $zero, 0x8E($a0)
    ctx->pc = 0x3471f0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x3471f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3471f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3471f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3471f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3471fc: 0xa4600090  sh          $zero, 0x90($v1)
    ctx->pc = 0x3471fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x347200: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x347200u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x347204: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x347204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x347208: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347208u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34720c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34720cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347210: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347214: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x347214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
    // 0x347218: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x347218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x34721c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34721cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347220: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347224: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x347224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347228: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x347228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x34722c: 0xe4600098  swc1        $f0, 0x98($v1)
    ctx->pc = 0x34722cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 152), bits); }
    // 0x347230: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x347230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x347234: 0x3483d70a  ori         $v1, $a0, 0xD70A
    ctx->pc = 0x347234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x347238: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34723c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34723cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347240: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347244: 0xe460009c  swc1        $f0, 0x9C($v1)
    ctx->pc = 0x347244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 156), bits); }
    // 0x347248: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x347248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x34724c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34724cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347250: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347250u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347254: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x347254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347258: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x347258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x34725c: 0xe46000a0  swc1        $f0, 0xA0($v1)
    ctx->pc = 0x34725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 160), bits); }
    // 0x347260: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x347260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x347264: 0x3464d70a  ori         $a0, $v1, 0xD70A
    ctx->pc = 0x347264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347268: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x347268u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34726c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34726cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347270: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347274: 0xe46000a4  swc1        $f0, 0xA4($v1)
    ctx->pc = 0x347274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x347278: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x347278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x34727c: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x34727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x347280: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347284: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347288: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34728c: 0xe46000a8  swc1        $f0, 0xA8($v1)
    ctx->pc = 0x34728cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x347290: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x347290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x347294: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347294u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x347298: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x347298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34729c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34729cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472a0: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x3472a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
    // 0x3472a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3472a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3472a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3472a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3472ac: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472b0: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3472b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472b4: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x3472b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x3472b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3472b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3472bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3472bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3472c0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472c4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x3472c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472c8: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x3472c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x3472cc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472d0: 0x247310b0  addiu       $s3, $v1, 0x10B0
    ctx->pc = 0x3472d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4272));
    // 0x3472d4: 0x8e6400f0  lw          $a0, 0xF0($s3)
    ctx->pc = 0x3472d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3472d8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x3472d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x3472dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3472dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3472e0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3472e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3472e4: 0xae6300f0  sw          $v1, 0xF0($s3)
    ctx->pc = 0x3472e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 240), GPR_U32(ctx, 3));
    // 0x3472e8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472ec: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3472ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472f0: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x3472f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3472f4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x3472f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3472f8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3472f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3472fc: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x3472fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x347300: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x347300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x347304: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x347304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x347308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x347308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34730c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x34730cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x347310: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x347310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x347314: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x347314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x347318u;
}
