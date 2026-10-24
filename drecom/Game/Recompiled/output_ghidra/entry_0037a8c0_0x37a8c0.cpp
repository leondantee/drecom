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

// Function: entry_0037a8c0
// Address: 0x37a8c0 - 0x37aa6c
void entry_0037a8c0_0x37a8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a8c0_0x37a8c0");
#endif

    switch (ctx->pc) {
        case 0x37a98cu: goto label_37a98c;
        case 0x37a9b8u: goto label_37a9b8;
        default: break;
    }

    ctx->pc = 0x37a8c0u;

    // 0x37a8c0: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x37a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x37a8c4: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x37a8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37a8c8: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x37a8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37a8cc: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x37a8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x37a8d0: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x37a8d0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37a8d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a8d8: 0x2446b8b0  addiu       $a2, $v0, -0x4750
    ctx->pc = 0x37a8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949040));
    // 0x37a8dc: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x37a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x37a8e0: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x37a8e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a8e4: 0x26630003  addiu       $v1, $s3, 0x3
    ctx->pc = 0x37a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x37a8e8: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x37a8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37a8ec: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x37a8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x37a8f0: 0x24c3b9e0  addiu       $v1, $a2, -0x4620
    ctx->pc = 0x37a8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949344));
    // 0x37a8f4: 0x67b021  addu        $s6, $v1, $a3
    ctx->pc = 0x37a8f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x37a8f8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x37a8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37a8fc: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x37a8fcu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a900: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x37a900u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37a904: 0x70c0ae28  paddub      $s5, $a2, $zero
    ctx->pc = 0x37a904u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a908: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a90c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a910: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x37a910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a914: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x37a914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x37a918: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a91c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a920: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37a920u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37a924: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x37a924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x37a928: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x37a928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37a92c: 0x2873021  addu        $a2, $s4, $a3
    ctx->pc = 0x37a92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x37a930: 0x70c0be28  paddub      $s7, $a2, $zero
    ctx->pc = 0x37a930u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a934: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37a938: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a93c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x37a93cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37a940: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x37a940u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a944: 0x2a23821  addu        $a3, $s5, $v0
    ctx->pc = 0x37a944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37a948: 0xafa700c8  sw          $a3, 0xC8($sp)
    ctx->pc = 0x37a948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 7));
    // 0x37a94c: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x37a94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37a950: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a954: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x37a954u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
    // 0x37a958: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x37a958u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a95c: 0x2a61823  subu        $v1, $s5, $a2
    ctx->pc = 0x37a95cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x37a960: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x37a960u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a964: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37a964u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a968: 0x0  nop
    ctx->pc = 0x37a968u;
    // NOP
    // 0x37a96c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37a96cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a970: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x37a970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x37a974: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x37a974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x37a978: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37a978u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a97c: 0x0  nop
    ctx->pc = 0x37a97cu;
    // NOP
    // 0x37a980: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37a980u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37a984: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37A984u;
    SET_GPR_U32(ctx, 31, 0x37A98Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37A984u, 0x37A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A98Cu;
label_37a98c:
    // 0x37a98c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x37a98cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a990: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37a990u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a994: 0x0  nop
    ctx->pc = 0x37a994u;
    // NOP
    // 0x37a998: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37a998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a99c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x37a99cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x37a9a0: 0x34c6cccd  ori         $a2, $a2, 0xCCCD
    ctx->pc = 0x37a9a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x37a9a4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37a9a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a9a8: 0x0  nop
    ctx->pc = 0x37a9a8u;
    // NOP
    // 0x37a9ac: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37a9acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37a9b0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37A9B0u;
    SET_GPR_U32(ctx, 31, 0x37A9B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37A9B0u, 0x37A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A9B8u;
label_37a9b8:
    // 0x37a9b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37a9b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a9bc: 0x7080be28  paddub      $s7, $a0, $zero
    ctx->pc = 0x37a9bcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x37a9c0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37a9c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37a9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37a9c8: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37a9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37a9cc: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x37a9ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37a9d0: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x37a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x37a9d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37a9d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37a9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37a9dc: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x37a9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37a9e0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x37a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x37a9e4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a9e8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x37a9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37a9ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37a9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a9f0: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37a9f4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a9f8: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x37a9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37a9fc: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x37a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37aa00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37aa04: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37aa08: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37aa08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37aa0c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37aa10: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x37aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37aa14: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37aa18: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37aa18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37aa1c: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37aa20: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37aa24: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37aa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37aa28: 0x8c220588  lw          $v0, 0x588($at)
    ctx->pc = 0x37aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0588u));
    // 0x37aa2c: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x37AA2Cu;
    {
        const bool branch_taken_0x37aa2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x37aa2c) {
            ctx->pc = 0x37AA6Cu;
            return;
        }
    }
    ctx->pc = 0x37AA34u;
    // 0x37aa34: 0x8fa400a8  lw          $a0, 0xA8($sp)
    ctx->pc = 0x37aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37aa38: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37aa3c: 0x8fa300a4  lw          $v1, 0xA4($sp)
    ctx->pc = 0x37aa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37aa40: 0x33200  sll         $a2, $v1, 8
    ctx->pc = 0x37aa40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x37aa44: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x37aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37aa48: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x37aa48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x37aa4c: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x37aa4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37aa50: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37aa54: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x37aa54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x37aa58: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x37aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x37aa5c: 0x26160010  addiu       $s6, $s0, 0x10
    ctx->pc = 0x37aa5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37aa60: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x37aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x37aa64: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x37AA64u;
    {
        const bool branch_taken_0x37aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37aa64) {
            ctx->pc = 0x37AB00u;
            return;
        }
    }
    ctx->pc = 0x37AA6Cu;
}
