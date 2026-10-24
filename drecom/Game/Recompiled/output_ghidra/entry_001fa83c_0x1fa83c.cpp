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

// Function: entry_001fa83c
// Address: 0x1fa83c - 0x1faa08
void entry_001fa83c_0x1fa83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fa83c_0x1fa83c");
#endif

    switch (ctx->pc) {
        case 0x1fa8b4u: goto label_1fa8b4;
        case 0x1fa8dcu: goto label_1fa8dc;
        default: break;
    }

    ctx->pc = 0x1fa83cu;

    // 0x1fa83c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa840: 0x0  nop
    ctx->pc = 0x1fa840u;
    // NOP
    // 0x1fa844: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1fa844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1fa848: 0x3c02c3c8  lui         $v0, 0xC3C8
    ctx->pc = 0x1fa848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50120 << 16));
    // 0x1fa84c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa850: 0x0  nop
    ctx->pc = 0x1fa850u;
    // NOP
    // 0x1fa854: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1fa854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1fa858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fa858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa85c: 0x0  nop
    ctx->pc = 0x1fa85cu;
    // NOP
    // 0x1fa860: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x1fa860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1fa864: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fa864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fa868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fa868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa86c: 0x0  nop
    ctx->pc = 0x1fa86cu;
    // NOP
    // 0x1fa870: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1fa870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x1fa874: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa878: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1fa878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fa87c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1fa87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1fa880: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fa880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fa884: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1fa884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1fa888: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1fa888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1fa88c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1fa88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1fa890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1fa890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1fa894: 0x34440412  ori         $a0, $v0, 0x412
    ctx->pc = 0x1fa894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1042);
    // 0x1fa898: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa89c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1fa89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fa8a0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1fa8a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa8a4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x1fa8a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa8a8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x1fa8a8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa8ac: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x1FA8ACu;
    SET_GPR_U32(ctx, 31, 0x1FA8B4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x1FA8ACu, 0x1FA8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8B4u;
label_1fa8b4:
    // 0x1fa8b4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1fa8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1fa8b8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1fa8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1fa8bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1fa8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1fa8c0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa8c4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x1fa8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x1fa8c8: 0x24040308  addiu       $a0, $zero, 0x308
    ctx->pc = 0x1fa8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 776));
    // 0x1fa8cc: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x1fa8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1fa8d0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1fa8d0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fa8d4: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1FA8D4u;
    SET_GPR_U32(ctx, 31, 0x1FA8DCu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1FA8D4u, 0x1FA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA8DCu;
label_1fa8dc:
    // 0x1fa8dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa8e0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa8e4: 0x24500120  addiu       $s0, $v0, 0x120
    ctx->pc = 0x1fa8e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1fa8e8: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1fa8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1fa8ec: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fa8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1fa8f0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fa8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa8f4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1fa8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1fa8f8: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fa8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fa8fc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1fa8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1fa900: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa904: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa908: 0x24500240  addiu       $s0, $v0, 0x240
    ctx->pc = 0x1fa908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 576));
    // 0x1fa90c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1fa90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fa910: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fa910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1fa914: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fa914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa918: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1fa918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1fa91c: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fa91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fa920: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1fa920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1fa924: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa928: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa92c: 0x24500090  addiu       $s0, $v0, 0x90
    ctx->pc = 0x1fa92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1fa930: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1fa930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1fa934: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x1fa934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x1fa938: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1fa938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1fa93c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x1fa93cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x1fa940: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x1fa940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x1fa944: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x1fa944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x1fa948: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa94c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa950: 0x245001b0  addiu       $s0, $v0, 0x1B0
    ctx->pc = 0x1fa950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    // 0x1fa954: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa958: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa95c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa960: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa964: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa968: 0x245002d0  addiu       $s0, $v0, 0x2D0
    ctx->pc = 0x1fa968u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 720));
    // 0x1fa96c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa970: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa974: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa978: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa97c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa980: 0x24500360  addiu       $s0, $v0, 0x360
    ctx->pc = 0x1fa980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x1fa984: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa988: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa988u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa98c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa990: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa994: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1fa994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1fa998: 0x245003f0  addiu       $s0, $v0, 0x3F0
    ctx->pc = 0x1fa998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x1fa99c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fa99cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fa9a0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fa9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fa9a4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fa9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fa9a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa9ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9b0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1fa9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1fa9b4: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x1fa9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa9b8: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1fa9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1fa9bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9c0: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x1fa9c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9c4: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x1fa9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1fa9c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9cc: 0xa443122e  sh          $v1, 0x122E($v0)
    ctx->pc = 0x1fa9ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4654), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9d0: 0x24030320  addiu       $v1, $zero, 0x320
    ctx->pc = 0x1fa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 800));
    // 0x1fa9d4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9d8: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1fa9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9dc: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x1fa9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x1fa9e0: 0x8c22af60  lw          $v0, -0x50A0($at)
    ctx->pc = 0x1fa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85AF60u));
    // 0x1fa9e4: 0x2c4202bc  sltiu       $v0, $v0, 0x2BC
    ctx->pc = 0x1fa9e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)700) ? 1 : 0);
    // 0x1fa9e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA9E8u;
    {
        const bool branch_taken_0x1fa9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa9e8) {
            ctx->pc = 0x1FAA08u;
            return;
        }
    }
    ctx->pc = 0x1FA9F0u;
    // 0x1fa9f0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1fa9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1fa9f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1fa9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa9f8: 0xa443122c  sh          $v1, 0x122C($v0)
    ctx->pc = 0x1fa9f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4652), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fa9fc: 0x24030640  addiu       $v1, $zero, 0x640
    ctx->pc = 0x1fa9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
    // 0x1faa00: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1faa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1faa04: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x1faa04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1faa08u;
}
