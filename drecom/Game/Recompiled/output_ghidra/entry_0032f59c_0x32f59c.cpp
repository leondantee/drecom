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

// Function: entry_0032f59c
// Address: 0x32f59c - 0x32f820
void entry_0032f59c_0x32f59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032f59c_0x32f59c");
#endif

    switch (ctx->pc) {
        case 0x32f610u: goto label_32f610;
        case 0x32f63cu: goto label_32f63c;
        case 0x32f774u: goto label_32f774;
        case 0x32f7f8u: goto label_32f7f8;
        default: break;
    }

    ctx->pc = 0x32f59cu;

    // 0x32f59c: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x32f59cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32f5a0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x32f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32f5a4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x32f5a4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f5a8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x32f5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f5ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f5b0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f5b4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x32f5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x32f5b8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x32f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f5bc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f5c0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x32f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32f5c4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x32f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x32f5c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x32f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x32f5cc: 0x24540050  addiu       $s4, $v0, 0x50
    ctx->pc = 0x32f5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x32f5d0: 0x8e760004  lw          $s6, 0x4($s3)
    ctx->pc = 0x32f5d0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32f5d4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x32f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x32f5d8: 0x282f021  addu        $fp, $s4, $v0
    ctx->pc = 0x32f5d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x32f5dc: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x32f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x32f5e0: 0x2c21821  addu        $v1, $s6, $v0
    ctx->pc = 0x32f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x32f5e4: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x32f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x32f5e8: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x32f5e8u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f5ec: 0x0  nop
    ctx->pc = 0x32f5ecu;
    // NOP
    // 0x32f5f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f5f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f5f4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32f5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32f5f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x32f5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32f5fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x32f5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f600: 0x0  nop
    ctx->pc = 0x32f600u;
    // NOP
    // 0x32f604: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f604u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f608: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F608u;
    SET_GPR_U32(ctx, 31, 0x32F610u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F608u, 0x32F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F610u;
label_32f610:
    // 0x32f610: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x32f610u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f614: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x32f614u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f618: 0x0  nop
    ctx->pc = 0x32f618u;
    // NOP
    // 0x32f61c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x32f61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32f620: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x32f620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x32f624: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x32f624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x32f628: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x32f628u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f62c: 0x0  nop
    ctx->pc = 0x32f62cu;
    // NOP
    // 0x32f630: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x32f630u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32f634: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x32F634u;
    SET_GPR_U32(ctx, 31, 0x32F63Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x32F634u, 0x32F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F63Cu;
label_32f63c:
    // 0x32f63c: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f63cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f640: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32f640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32f644: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x32f644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x32f648: 0x3c046400  lui         $a0, 0x6400
    ctx->pc = 0x32f648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25600 << 16));
    // 0x32f64c: 0x34822b16  ori         $v0, $a0, 0x2B16
    ctx->pc = 0x32f64cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11030);
    // 0x32f650: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f650u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f654: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x32f654u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x32f658: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x32f658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x32f65c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x32f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32f660: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x32f660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x32f664: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f668: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x32f668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f66c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f670: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32f670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f674: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f67c: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x32f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x32f680: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f684: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f688: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x32f688u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f68c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f690: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32f690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32f694: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x32f694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f698: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x32f698u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x32f69c: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x32f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x32f6a0: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32f6a4: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x32f6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x32f6a8: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x32f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x32f6ac: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x32f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x32f6b0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x32f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x32f6b4: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x32f6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x32f6b8: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x32f6b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x32f6bc: 0x663825  or          $a3, $v1, $a2
    ctx->pc = 0x32f6bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x32f6c0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x32f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x32f6c4: 0x33600  sll         $a2, $v1, 24
    ctx->pc = 0x32f6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x32f6c8: 0xc71825  or          $v1, $a2, $a3
    ctx->pc = 0x32f6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x32f6cc: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x32f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32f6d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f6d4: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x32f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x32f6d8: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32f6dc: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x32f6dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f6e0: 0x1610c0  sll         $v0, $s6, 3
    ctx->pc = 0x32f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 3));
    // 0x32f6e4: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x32f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f6e8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x32f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f6ec: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x32f6ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32f6f0: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x32f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x32f6f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f6f8: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f6fc: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x32f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x32f700: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f704: 0x1e1100  sll         $v0, $fp, 4
    ctx->pc = 0x32f704u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x32f708: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x32f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x32f70c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x32f70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f710: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x32f710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x32f714: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x32f714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f718: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x32f718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x32f71c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32f720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x32f724: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x32f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x32f728: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x32f728u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x32f72c: 0x3402fffa  ori         $v0, $zero, 0xFFFA
    ctx->pc = 0x32f72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65530);
    // 0x32f730: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x32f730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x32f734: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x32f734u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x32f738: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x32f738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32f73c: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x32f73cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x32f740: 0x269600a3  addiu       $s6, $s4, 0xA3
    ctx->pc = 0x32f740u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 163));
    // 0x32f744: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x32f744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x32f748: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x32f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x32f74c: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x32f74cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x32f750: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x32f750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x32f754: 0x2462cca0  addiu       $v0, $v1, -0x3360
    ctx->pc = 0x32f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954144));
    // 0x32f758: 0x46f021  addu        $fp, $v0, $a2
    ctx->pc = 0x32f758u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32f75c: 0xae1e0008  sw          $fp, 0x8($s0)
    ctx->pc = 0x32f75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 30));
    // 0x32f760: 0x26e3001c  addiu       $v1, $s7, 0x1C
    ctx->pc = 0x32f760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f764: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x32f764u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x32f768: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x32f768u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x32f76c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F76Cu;
    SET_GPR_U32(ctx, 31, 0x32F774u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F76Cu, 0x32F774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F774u;
label_32f774:
    // 0x32f774: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32f774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32f778: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x32f778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x32f77c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x32f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x32f780: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x32f780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x32f784: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x32f784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x32f788: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32f788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32f78c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x32f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f790: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x32f790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x32f794: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f794u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f798: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x32f798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x32f79c: 0x34c6000a  ori         $a2, $a2, 0xA
    ctx->pc = 0x32f79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x32f7a0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x32f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32f7a4: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x32f7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x32f7a8: 0x14183c  dsll32      $v1, $s4, 0
    ctx->pc = 0x32f7a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 0));
    // 0x32f7ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x32f7acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x32f7b0: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x32f7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x32f7b4: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x32f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x32f7b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x32f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x32f7bc: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x32f7bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f7c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x32f7c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x32f7c4: 0x6b638  dsll        $s6, $a2, 24
    ctx->pc = 0x32f7c4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) << 24);
    // 0x32f7c8: 0x2c31825  or          $v1, $s6, $v1
    ctx->pc = 0x32f7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x32f7cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x32f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x32f7d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x32f7d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x32f7d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x32f7d8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x32f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x32f7dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x32f7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x32f7e0: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x32f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x32f7e4: 0x26e2001c  addiu       $v0, $s7, 0x1C
    ctx->pc = 0x32f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x32f7e8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x32f7e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f7ec: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x32f7ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x32f7f0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x32F7F0u;
    SET_GPR_U32(ctx, 31, 0x32F7F8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x32F7F0u, 0x32F7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F7F8u;
label_32f7f8:
    // 0x32f7f8: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x32f7f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f7fc: 0x2602002c  addiu       $v0, $s0, 0x2C
    ctx->pc = 0x32f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x32f800: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x32f800u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f804: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x32f804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x32f808: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x32f808u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f80c: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x32f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x32f810: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x32f810u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f814: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x32f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x32f818: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x32f818u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x32f81c: 0x0  nop
    ctx->pc = 0x32f81cu;
    // NOP
    ctx->pc = 0x32f820u;
}
