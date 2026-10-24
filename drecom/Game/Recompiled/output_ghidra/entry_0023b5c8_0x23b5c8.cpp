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

// Function: entry_0023b5c8
// Address: 0x23b5c8 - 0x23b718
void entry_0023b5c8_0x23b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023b5c8_0x23b5c8");
#endif

    switch (ctx->pc) {
        case 0x23b5ecu: goto label_23b5ec;
        case 0x23b670u: goto label_23b670;
        case 0x23b6f4u: goto label_23b6f4;
        case 0x23b6fcu: goto label_23b6fc;
        default: break;
    }

    ctx->pc = 0x23b5c8u;

    // 0x23b5c8: 0x8fa700e8  lw          $a3, 0xE8($sp)
    ctx->pc = 0x23b5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b5cc: 0x90e809db  lbu         $t0, 0x9DB($a3)
    ctx->pc = 0x23b5ccu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2523)));
    // 0x23b5d0: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x23b5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x23b5d4: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x23b5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x23b5d8: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x23B5D8u;
    {
        const bool branch_taken_0x23b5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b5d8) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B5E0u;
    // 0x23b5e0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b5e4: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x23B5E4u;
    SET_GPR_U32(ctx, 31, 0x23B5ECu);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x23B5E4u, 0x23B5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B5ECu;
label_23b5ec:
    // 0x23b5ec: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x23b5ecu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x23b5f0: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x23b5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x23b5f4: 0x14600074  bnez        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x23B5F4u;
    {
        const bool branch_taken_0x23b5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b5f4) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B5FCu;
    // 0x23b5fc: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b600: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b604: 0x24420880  addiu       $v0, $v0, 0x880
    ctx->pc = 0x23b604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b608: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x23b608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x23b60c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b610: 0x0  nop
    ctx->pc = 0x23b610u;
    // NOP
    // 0x23b614: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x23b614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23b618: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x23b618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x23b61c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b61cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b620: 0x0  nop
    ctx->pc = 0x23b620u;
    // NOP
    // 0x23b624: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x23b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x23b628: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b62c: 0x0  nop
    ctx->pc = 0x23b62cu;
    // NOP
    // 0x23b630: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x23b630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x23b634: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b638: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b638u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b63c: 0x0  nop
    ctx->pc = 0x23b63cu;
    // NOP
    // 0x23b640: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x23b640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x23b644: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x23b644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23b648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b64c: 0x0  nop
    ctx->pc = 0x23b64cu;
    // NOP
    // 0x23b650: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x23b650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x23b654: 0xa7a000b4  sh          $zero, 0xB4($sp)
    ctx->pc = 0x23b654u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 0));
    // 0x23b658: 0xa3a000b6  sb          $zero, 0xB6($sp)
    ctx->pc = 0x23b658u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 182), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b65c: 0xa3a000b7  sb          $zero, 0xB7($sp)
    ctx->pc = 0x23b65cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 183), (uint8_t)GPR_U32(ctx, 0));
    // 0x23b660: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b664: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x23b664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23b668: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x23B668u;
    SET_GPR_U32(ctx, 31, 0x23B670u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x23B668u, 0x23B670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B670u;
label_23b670:
    // 0x23b670: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x23B670u;
    {
        const bool branch_taken_0x23b670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b670) {
            ctx->pc = 0x23B7C8u;
            return;
        }
    }
    ctx->pc = 0x23B678u;
    // 0x23b678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b67c: 0x0  nop
    ctx->pc = 0x23b67cu;
    // NOP
    // 0x23b680: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x23b680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x23b684: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x23b684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x23b688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b68c: 0x0  nop
    ctx->pc = 0x23b68cu;
    // NOP
    // 0x23b690: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x23b690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x23b694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23b694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b698: 0x0  nop
    ctx->pc = 0x23b698u;
    // NOP
    // 0x23b69c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x23b69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x23b6a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23b6a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b6a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b6a8: 0x0  nop
    ctx->pc = 0x23b6a8u;
    // NOP
    // 0x23b6ac: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x23b6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x23b6b0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b6b4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x23b6b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b6b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x23b6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x23b6bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23b6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23b6c0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23b6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23b6c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23b6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23b6c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x23b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23b6cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23b6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23b6d0: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x23b6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x23b6d4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x23b6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x23b6d8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x23b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x23b6dc: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x23b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x23b6e0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23b6e0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b6e4: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x23b6e8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x23b6e8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23b6ec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x23B6ECu;
    SET_GPR_U32(ctx, 31, 0x23B6F4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x23B6ECu, 0x23B6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6F4u;
label_23b6f4:
    // 0x23b6f4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23B6F4u;
    SET_GPR_U32(ctx, 31, 0x23B6FCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23B6F4u, 0x23B6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B6FCu;
label_23b6fc:
    // 0x23b6fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23B6FCu;
    {
        const bool branch_taken_0x23b6fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x23b6fc) {
            ctx->pc = 0x23B718u;
            return;
        }
    }
    ctx->pc = 0x23B704u;
    // 0x23b704: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23b704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23b708: 0x0  nop
    ctx->pc = 0x23b708u;
    // NOP
    // 0x23b70c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x23b70cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23b710: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x23B710u;
    {
        const bool branch_taken_0x23b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b710) {
            ctx->pc = 0x23B734u;
            return;
        }
    }
    ctx->pc = 0x23B718u;
}
