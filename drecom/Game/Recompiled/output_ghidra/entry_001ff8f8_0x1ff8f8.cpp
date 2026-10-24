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

// Function: entry_001ff8f8
// Address: 0x1ff8f8 - 0x1ff9a0
void entry_001ff8f8_0x1ff8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ff8f8_0x1ff8f8");
#endif

    ctx->pc = 0x1ff8f8u;

    // 0x1ff8f8: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x1ff8f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff8fc: 0xc4c0033c  lwc1        $f0, 0x33C($a2)
    ctx->pc = 0x1ff8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff900: 0xe620033c  swc1        $f0, 0x33C($s1)
    ctx->pc = 0x1ff900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 828), bits); }
    // 0x1ff904: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff908: 0xc4800270  lwc1        $f0, 0x270($a0)
    ctx->pc = 0x1ff908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff90c: 0xe6200270  swc1        $f0, 0x270($s1)
    ctx->pc = 0x1ff90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x1ff910: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff914: 0xc4600270  lwc1        $f0, 0x270($v1)
    ctx->pc = 0x1ff914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff918: 0xe6200274  swc1        $f0, 0x274($s1)
    ctx->pc = 0x1ff918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x1ff91c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff920: 0xc4600270  lwc1        $f0, 0x270($v1)
    ctx->pc = 0x1ff920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff924: 0xe6200278  swc1        $f0, 0x278($s1)
    ctx->pc = 0x1ff924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
    // 0x1ff928: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff92c: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1ff92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff930: 0xe6200280  swc1        $f0, 0x280($s1)
    ctx->pc = 0x1ff930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
    // 0x1ff934: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff938: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1ff938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff93c: 0xe6200284  swc1        $f0, 0x284($s1)
    ctx->pc = 0x1ff93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 644), bits); }
    // 0x1ff940: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff944: 0xc4600280  lwc1        $f0, 0x280($v1)
    ctx->pc = 0x1ff944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff948: 0xe6200288  swc1        $f0, 0x288($s1)
    ctx->pc = 0x1ff948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 648), bits); }
    // 0x1ff94c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x1ff94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff950: 0xc48002a4  lwc1        $f0, 0x2A4($a0)
    ctx->pc = 0x1ff950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ff954: 0xe62002a4  swc1        $f0, 0x2A4($s1)
    ctx->pc = 0x1ff954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 676), bits); }
    // 0x1ff958: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff95c: 0x9064034f  lbu         $a0, 0x34F($v1)
    ctx->pc = 0x1ff95cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 847)));
    // 0x1ff960: 0xa224034f  sb          $a0, 0x34F($s1)
    ctx->pc = 0x1ff960u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 847), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ff964: 0x8fa500d8  lw          $a1, 0xD8($sp)
    ctx->pc = 0x1ff964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff968: 0x90a30344  lbu         $v1, 0x344($a1)
    ctx->pc = 0x1ff968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 836)));
    // 0x1ff96c: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1ff96cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ff970: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x1ff970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ff974: 0x152843  sra         $a1, $s5, 1
    ctx->pc = 0x1ff974u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 21), 1));
    // 0x1ff978: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1ff978u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ff97c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff980: 0x8c630364  lw          $v1, 0x364($v1)
    ctx->pc = 0x1ff980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 868)));
    // 0x1ff984: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff988: 0xae230364  sw          $v1, 0x364($s1)
    ctx->pc = 0x1ff988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 3));
    // 0x1ff98c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1ff98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ff990: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x1ff990u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x1ff994: 0xa6230340  sh          $v1, 0x340($s1)
    ctx->pc = 0x1ff994u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 832), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ff998: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x1FF998u;
    {
        const bool branch_taken_0x1ff998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ff998) {
            ctx->pc = 0x1FFF80u;
            return;
        }
    }
    ctx->pc = 0x1FF9A0u;
}
