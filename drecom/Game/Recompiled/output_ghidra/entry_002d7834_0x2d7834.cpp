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

// Function: entry_002d7834
// Address: 0x2d7834 - 0x2d79e8
void entry_002d7834_0x2d7834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7834_0x2d7834");
#endif

    ctx->pc = 0x2d7834u;

    // 0x2d7834: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7838: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d783c: 0x24500960  addiu       $s0, $v0, 0x960
    ctx->pc = 0x2d783cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x2d7840: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7844: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7848: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d784c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d784cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7850: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7854: 0x0  nop
    ctx->pc = 0x2d7854u;
    // NOP
    // 0x2d7858: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d7858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d785c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d785cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7860: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d7860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7864: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7864u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7868: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d786c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d786cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d7870: 0x24500c80  addiu       $s0, $v0, 0xC80
    ctx->pc = 0x2d7870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
    // 0x2d7874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7878: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d787c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d787cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7880: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d7880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7888: 0x0  nop
    ctx->pc = 0x2d7888u;
    // NOP
    // 0x2d788c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d788cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d7890: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d7890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7894: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d7894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7898: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7898u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d789c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d789cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78a0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d78a4: 0x24500fa0  addiu       $s0, $v0, 0xFA0
    ctx->pc = 0x2d78a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x2d78a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78ac: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d78acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d78b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d78b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d78b4: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d78b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d78b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d78b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78bc: 0x0  nop
    ctx->pc = 0x2d78bcu;
    // NOP
    // 0x2d78c0: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d78c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d78c4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d78c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d78c8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d78c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d78cc: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d78ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d78d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d78d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78d4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d78d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d78d8: 0x245012c0  addiu       $s0, $v0, 0x12C0
    ctx->pc = 0x2d78d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x2d78dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d78dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d78e0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d78e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d78e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d78e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d78e8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d78e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d78ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d78ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d78f0: 0x0  nop
    ctx->pc = 0x2d78f0u;
    // NOP
    // 0x2d78f4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d78f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d78f8: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d78f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d78fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d78fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7900: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7900u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7904: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7908: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d790c: 0x245015e0  addiu       $s0, $v0, 0x15E0
    ctx->pc = 0x2d790cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5600));
    // 0x2d7910: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7914: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d7918: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d7918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d791c: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d7920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d7924: 0x0  nop
    ctx->pc = 0x2d7924u;
    // NOP
    // 0x2d7928: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d7928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d792c: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d792cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7930: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d7930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d7934: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d7934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d7938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d793c: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x2d793cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x2d7940: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d7940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d7944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d7944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d7948: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2D7948u;
    {
        const bool branch_taken_0x2d7948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7948) {
            ctx->pc = 0x2D79F4u;
            return;
        }
    }
    ctx->pc = 0x2D7950u;
    // 0x2d7950: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7954: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x2d7954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x2d7958: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D7958u;
    {
        const bool branch_taken_0x2d7958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d7958) {
            ctx->pc = 0x2D79E8u;
            return;
        }
    }
    ctx->pc = 0x2D7960u;
    // 0x2d7960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d7960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d7964: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7968: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d7968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d796c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7970: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d7970u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7974: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x2d7974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2d7978: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d797c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d7980: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7984: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d7984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d7988: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d798c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d7990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d7990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d7994: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d7994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d7998: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d7998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d799c: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d799cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d79a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d79a4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d79a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d79a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79ac: 0x2442134c  addiu       $v0, $v0, 0x134C
    ctx->pc = 0x2d79acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4940));
    // 0x2d79b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2d79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d79b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d79b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2d79b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d79b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d79bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79c0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2d79c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d79c4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2d79c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2d79c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79cc: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2d79ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d79d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79d4: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2d79d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d79d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79dc: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2d79dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d79e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d79e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d79e4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2d79e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x2d79e8u;
}
