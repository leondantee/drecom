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

// Function: entry_0015173c
// Address: 0x15173c - 0x151808
void entry_0015173c_0x15173c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015173c_0x15173c");
#endif

    switch (ctx->pc) {
        case 0x1517d0u: goto label_1517d0;
        default: break;
    }

    ctx->pc = 0x15173cu;

    // 0x15173c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15173cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x151740: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x151740u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151744: 0x90e313f9  lbu         $v1, 0x13F9($a3)
    ctx->pc = 0x151744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5113)));
    // 0x151748: 0x14600170  bnez        $v1, . + 4 + (0x170 << 2)
    ctx->pc = 0x151748u;
    {
        const bool branch_taken_0x151748 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151748) {
            ctx->pc = 0x151D0Cu;
            return;
        }
    }
    ctx->pc = 0x151750u;
    // 0x151750: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151754: 0x8c26b708  lw          $a2, -0x48F8($at)
    ctx->pc = 0x151754u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3EB708u));
    // 0x151758: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x151758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15175c: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x15175cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x151760: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x151764: 0xac22b708  sw          $v0, -0x48F8($at)
    ctx->pc = 0x151764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EB708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EB708u, _value); } while (0);
    // 0x151768: 0x3c024307  lui         $v0, 0x4307
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17159 << 16));
    // 0x15176c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15176cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151770: 0x0  nop
    ctx->pc = 0x151770u;
    // NOP
    // 0x151774: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x151774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x151778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x151778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15177c: 0x0  nop
    ctx->pc = 0x15177cu;
    // NOP
    // 0x151780: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x151780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x151784: 0x3c044220  lui         $a0, 0x4220
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16928 << 16));
    // 0x151788: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151788u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15178c: 0x0  nop
    ctx->pc = 0x15178cu;
    // NOP
    // 0x151790: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x151790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x151794: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x151798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15179c: 0x0  nop
    ctx->pc = 0x15179cu;
    // NOP
    // 0x1517a0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1517a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1517a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517a8: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1517a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1517ac: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1517ACu;
    {
        const bool branch_taken_0x1517ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1517ac) {
            ctx->pc = 0x151808u;
            return;
        }
    }
    ctx->pc = 0x1517B4u;
    // 0x1517b4: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x1517b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x1517b8: 0x24e3b700  addiu       $v1, $a3, -0x4900
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948608));
    // 0x1517bc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x1517bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1517c0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1517c0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1517c4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1517c8: 0xc0bd0c8  jal         func_2F4320
    ctx->pc = 0x1517C8u;
    SET_GPR_U32(ctx, 31, 0x1517D0u);
    ctx->pc = 0x2F4320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4320u, 0x1517C8u, 0x1517D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517D0u;
label_1517d0:
    // 0x1517d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517d4: 0x844315ec  lh          $v1, 0x15EC($v0)
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1517d8: 0x2464ffa6  addiu       $a0, $v1, -0x5A
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967206));
    // 0x1517dc: 0xa44415ec  sh          $a0, 0x15EC($v0)
    ctx->pc = 0x1517dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1517e0: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517e4: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1517e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1517e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1517ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1517ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1517f0: 0x441051f  bgez        $v0, . + 4 + (0x51F << 2)
    ctx->pc = 0x1517F0u;
    {
        const bool branch_taken_0x1517f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1517f0) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x1517F8u;
    // 0x1517f8: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x1517f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1517fc: 0xa4e015ec  sh          $zero, 0x15EC($a3)
    ctx->pc = 0x1517fcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 5612), (uint16_t)GPR_U32(ctx, 0));
    // 0x151800: 0x1000051b  b           . + 4 + (0x51B << 2)
    ctx->pc = 0x151800u;
    {
        const bool branch_taken_0x151800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151800) {
            ctx->pc = 0x152C70u;
            return;
        }
    }
    ctx->pc = 0x151808u;
}
