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

// Function: Morph
// Address: 0x1b0890 - 0x1b0a8c
void Morph_0x1b0890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Morph_0x1b0890");
#endif

    switch (ctx->pc) {
        case 0x1b0948u: goto label_1b0948;
        case 0x1b09c8u: goto label_1b09c8;
        case 0x1b0a18u: goto label_1b0a18;
        default: break;
    }

    ctx->pc = 0x1b0890u;

    // 0x1b0890: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b0890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1b0894: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x1b0894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x1b0898: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b0898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b089c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b089cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b08a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b08a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b08a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b08a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b08a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b08a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b08ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b08acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b08b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b08b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b08b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b08b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b08b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b08b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b08bc: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x1b08bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x1b08c0: 0xa3a500b8  sb          $a1, 0xB8($sp)
    ctx->pc = 0x1b08c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 184), (uint8_t)GPR_U32(ctx, 5));
    // 0x1b08c4: 0xe7ac00c0  swc1        $f12, 0xC0($sp)
    ctx->pc = 0x1b08c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b08c8: 0xa3a600c8  sb          $a2, 0xC8($sp)
    ctx->pc = 0x1b08c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 6));
    // 0x1b08cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1b08ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b08d0: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b08d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b08d4: 0xafa300a8  sw          $v1, 0xA8($sp)
    ctx->pc = 0x1b08d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 3));
    // 0x1b08d8: 0x93a300b8  lbu         $v1, 0xB8($sp)
    ctx->pc = 0x1b08d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b08dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b08dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b08e0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b08e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b08e4: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1b08e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b08e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b08e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b08ec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b08ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b08f0: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x1b08f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b08f4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b08f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b08f8: 0xafa300a4  sw          $v1, 0xA4($sp)
    ctx->pc = 0x1b08f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 3));
    // 0x1b08fc: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x1b08fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1b0900: 0xafa300ac  sw          $v1, 0xAC($sp)
    ctx->pc = 0x1b0900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 3));
    // 0x1b0904: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1b0904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1b0908: 0x24760004  addiu       $s6, $v1, 0x4
    ctx->pc = 0x1b0908u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b090c: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x1b090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b0910: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1b0910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1b0914: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1b0914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1b0918: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1b0918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1b091c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b091cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b0920: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b0920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b0924: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b0924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b0928: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b0928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b092c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b092cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b0930: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1b0930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0934: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b0934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b0938: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x1b0938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
    // 0x1b093c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1b093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0940: 0x8c770034  lw          $s7, 0x34($v1)
    ctx->pc = 0x1b0940u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1b0944: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b0944u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1b0948:
    // 0x1b0948: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b0948u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b094c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b094cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0950: 0x17c30039  bne         $fp, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B0950u;
    {
        const bool branch_taken_0x1b0950 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0950) {
            ctx->pc = 0x1B0A38u;
            goto label_1b0a38;
        }
    }
    ctx->pc = 0x1B0958u;
    // 0x1b0958: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x1b0958u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1b095c: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x1b095cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b0960: 0x93a300c8  lbu         $v1, 0xC8($sp)
    ctx->pc = 0x1b0960u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b0964: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0968: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0968u;
    {
        const bool branch_taken_0x1b0968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0968) {
            ctx->pc = 0x1B097Cu;
            goto label_1b097c;
        }
    }
    ctx->pc = 0x1B0970u;
    // 0x1b0970: 0x8ed30008  lw          $s3, 0x8($s6)
    ctx->pc = 0x1b0970u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1b0974: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0974u;
    {
        const bool branch_taken_0x1b0974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0974) {
            ctx->pc = 0x1B0998u;
            goto label_1b0998;
        }
    }
    ctx->pc = 0x1B097Cu;
label_1b097c:
    // 0x1b097c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b097cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b0980: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1b0980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b0984: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b0984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b0988: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1b0988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1b098c: 0x8c730028  lw          $s3, 0x28($v1)
    ctx->pc = 0x1b098cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b0990: 0x0  nop
    ctx->pc = 0x1b0990u;
    // NOP
    // 0x1b0994: 0x0  nop
    ctx->pc = 0x1b0994u;
    // NOP
label_1b0998:
    // 0x1b0998: 0x96c30002  lhu         $v1, 0x2($s6)
    ctx->pc = 0x1b0998u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
    // 0x1b099c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b099cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b09a0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1b09a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b09a4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1b09a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1b09a8: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x1b09a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b09ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b09acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b09b0: 0x8c230140  lw          $v1, 0x140($at)
    ctx->pc = 0x1b09b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1b09b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b09b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b09b8: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1b09b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1b09bc: 0x8c750028  lw          $s5, 0x28($v1)
    ctx->pc = 0x1b09bcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1b09c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B09C0u;
    {
        const bool branch_taken_0x1b09c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b09c0) {
            ctx->pc = 0x1B0A20u;
            goto label_1b0a20;
        }
    }
    ctx->pc = 0x1B09C8u;
label_1b09c8:
    // 0x1b09c8: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1b09c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1b09cc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b09ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b09d0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b09d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b09d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b09d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b09d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b09d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b09dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b09e0: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1b09e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1b09e4: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x1b09e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1b09e8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x1b09e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1b09ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1b09ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1b09f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1b09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1b09f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b09f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b09f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b09fc: 0x2a29021  addu        $s2, $s5, $v0
    ctx->pc = 0x1b09fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1b0a00: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1b0a00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1b0a04: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1b0a04u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1b0a08: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x1b0a08u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b0a0c: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x1b0a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b0a10: 0xc06c540  jal         func_1B1500
    ctx->pc = 0x1B0A10u;
    SET_GPR_U32(ctx, 31, 0x1B0A18u);
    ctx->pc = 0x1B1500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1500u, 0x1B0A10u, 0x1B0A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0A18u;
label_1b0a18:
    // 0x1b0a18: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x1b0a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1b0a1c: 0x0  nop
    ctx->pc = 0x1b0a1cu;
    // NOP
label_1b0a20:
    // 0x1b0a20: 0x72801e28  paddub      $v1, $s4, $zero
    ctx->pc = 0x1b0a20u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x1b0a24: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x1b0a24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b0a28: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B0A28u;
    {
        const bool branch_taken_0x1b0a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a28) {
            ctx->pc = 0x1B09C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b09c8;
        }
    }
    ctx->pc = 0x1B0A30u;
    // 0x1b0a30: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b0a30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x1b0a34: 0x0  nop
    ctx->pc = 0x1b0a34u;
    // NOP
label_1b0a38:
    // 0x1b0a38: 0x26f700c0  addiu       $s7, $s7, 0xC0
    ctx->pc = 0x1b0a38u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 192));
    // 0x1b0a3c: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b0a3cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b0a40: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1b0a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0a44: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b0a44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b0a48: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b0a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b0a4c: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b0a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b0a50: 0x1460ffbd  bnez        $v1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x1B0A50u;
    {
        const bool branch_taken_0x1b0a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0a50) {
            ctx->pc = 0x1B0948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b0948;
        }
    }
    ctx->pc = 0x1B0A58u;
    // 0x1b0a58: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1b0a58u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b0a5c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b0a5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b0a60: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b0a60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b0a64: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b0a64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0a68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b0a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0a6c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b0a6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0a70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0a70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0a74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b0a74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b0a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0a7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b0a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0a80: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1b0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1b0a84: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0A8Cu;
}
