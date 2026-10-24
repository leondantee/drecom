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

// Function: entry_0037a5c4
// Address: 0x37a5c4 - 0x37a874
void entry_0037a5c4_0x37a5c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a5c4_0x37a5c4");
#endif

    switch (ctx->pc) {
        case 0x37a694u: goto label_37a694;
        case 0x37a6c0u: goto label_37a6c0;
        case 0x37a7dcu: goto label_37a7dc;
        case 0x37a854u: goto label_37a854;
        default: break;
    }

    ctx->pc = 0x37a5c4u;

    // 0x37a5c4: 0x8fc25dc8  lw          $v0, 0x5DC8($fp)
    ctx->pc = 0x37a5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24008)));
    // 0x37a5c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a5cc: 0x144301a4  bne         $v0, $v1, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x37A5CCu;
    {
        const bool branch_taken_0x37a5cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37a5cc) {
            ctx->pc = 0x37AC60u;
            return;
        }
    }
    ctx->pc = 0x37A5D4u;
    // 0x37a5d4: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a5d8: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a5dc: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x37a5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37a5e0: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x37a5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x37a5e4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x37a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37a5e8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a5ec: 0x2442b870  addiu       $v0, $v0, -0x4790
    ctx->pc = 0x37a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
    // 0x37a5f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x37a5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37a5f4: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x37a5f4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a5f8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a5fc: 0x2456b9e0  addiu       $s6, $v0, -0x4620
    ctx->pc = 0x37a5fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
    // 0x37a600: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x37a600u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3AB9E0u));
    // 0x37a604: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x37a604u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a608: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37a608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37a60c: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37a60cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a610: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37a610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a614: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37a614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a618: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x37a618u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37a61c: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x37a61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
    // 0x37a620: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x37a620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a624: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37a624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a628: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x37a628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37a62c: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x37a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x37a630: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x37a630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37a634: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x37a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x37a638: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37a638u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a63c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37a63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37a640: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a644: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x37a644u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37a648: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x37a648u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a64c: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x37a64cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a650: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37a650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37a654: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x37a654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x37a658: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x37a658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37a65c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a660: 0x61043  sra         $v0, $a2, 1
    ctx->pc = 0x37a660u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 1));
    // 0x37a664: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37a664u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a668: 0x2a3a823  subu        $s5, $s5, $v1
    ctx->pc = 0x37a668u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x37a66c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37a66cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a670: 0x0  nop
    ctx->pc = 0x37a670u;
    // NOP
    // 0x37a674: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37a674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a678: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37a67c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x37a67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37a680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37a680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a684: 0x0  nop
    ctx->pc = 0x37a684u;
    // NOP
    // 0x37a688: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37a688u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37a68c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37A68Cu;
    SET_GPR_U32(ctx, 31, 0x37A694u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37A68Cu, 0x37A694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A694u;
label_37a694:
    // 0x37a694: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x37a694u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a698: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37a698u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a69c: 0x0  nop
    ctx->pc = 0x37a69cu;
    // NOP
    // 0x37a6a0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37a6a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a6a4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37a6a8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x37a6a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37a6ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37a6acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a6b0: 0x0  nop
    ctx->pc = 0x37a6b0u;
    // NOP
    // 0x37a6b4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37a6b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37a6b8: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37A6B8u;
    SET_GPR_U32(ctx, 31, 0x37A6C0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37A6B8u, 0x37A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A6C0u;
label_37a6c0:
    // 0x37a6c0: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37a6c0u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a6c4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37a6c8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37a6cc: 0x3c066400  lui         $a2, 0x6400
    ctx->pc = 0x37a6ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25600 << 16));
    // 0x37a6d0: 0x34c22b16  ori         $v0, $a2, 0x2B16
    ctx->pc = 0x37a6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11030);
    // 0x37a6d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37a6d8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37a6dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37a6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37a6e0: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x37a6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37a6e4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x37a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x37a6e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37a6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a6ec: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x37a6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37a6f0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a6f4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37a6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37a6f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a6fc: 0xc23825  or          $a3, $a2, $v0
    ctx->pc = 0x37a6fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37a700: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x37a700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37a704: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x37a704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x37a708: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37a708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a70c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37a710: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37a710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a714: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x37a714u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37a718: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x37a718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37a71c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37a71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37a720: 0x26160020  addiu       $s6, $s0, 0x20
    ctx->pc = 0x37a720u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37a724: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x37a724u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x37a728: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x37a728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37a72c: 0x34400  sll         $t0, $v1, 16
    ctx->pc = 0x37a72cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37a730: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37a730u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37a734: 0x61a00  sll         $v1, $a2, 8
    ctx->pc = 0x37a734u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37a738: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x37a738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37a73c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x37a73cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a740: 0x1073025  or          $a2, $t0, $a3
    ctx->pc = 0x37a740u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x37a744: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37a744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37a748: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x37a748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x37a74c: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x37a74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x37a750: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x37a750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a754: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37a754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37a758: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x37a758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37a75c: 0x24437000  addiu       $v1, $v0, 0x7000
    ctx->pc = 0x37a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37a760: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37a760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37a764: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x37a764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37a768: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37a768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37a76c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a770: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37a770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37a774: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x37a774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37a778: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a77c: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37a77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37a780: 0x2616001c  addiu       $s6, $s0, 0x1C
    ctx->pc = 0x37a780u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37a784: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x37a784u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x37a788: 0x17a900  sll         $s5, $s7, 4
    ctx->pc = 0x37a788u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37a78c: 0x26a27000  addiu       $v0, $s5, 0x7000
    ctx->pc = 0x37a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 28672));
    // 0x37a790: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x37a790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37a794: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37a794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37a798: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37a798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37a79c: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x37a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37a7a0: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37a7a4: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x37a7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37a7a8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x37a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37a7ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a7b0: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37a7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37a7b4: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x37a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37a7b8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37a7bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37a7c0: 0x2446e640  addiu       $a2, $v0, -0x19C0
    ctx->pc = 0x37a7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
    // 0x37a7c4: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x37a7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x37a7c8: 0x27c6001c  addiu       $a2, $fp, 0x1C
    ctx->pc = 0x37a7c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37a7cc: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x37a7ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a7d0: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37a7d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37a7d4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37A7D4u;
    SET_GPR_U32(ctx, 31, 0x37A7DCu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37A7D4u, 0x37A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A7DCu;
label_37a7dc:
    // 0x37a7dc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37a7e0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37a7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37a7e4: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37a7e8: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x37a7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37a7ec: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x37a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x37a7f0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a7f4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x37a7f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37a7f8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x37a7f8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x37a7fc: 0x63138  dsll        $a2, $a2, 4
    ctx->pc = 0x37a7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 4);
    // 0x37a800: 0x34c3000a  ori         $v1, $a2, 0xA
    ctx->pc = 0x37a800u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x37a804: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a808: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37a808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a80c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37a80cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37a810: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x37a810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x37a814: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37a814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37a818: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a81c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37a81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a820: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37a820u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37a824: 0x22e38  dsll        $a1, $v0, 24
    ctx->pc = 0x37a824u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 24);
    // 0x37a828: 0xa32025  or          $a0, $a1, $v1
    ctx->pc = 0x37a828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x37a82c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a830: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37a830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37a834: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37a834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37a838: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x37a838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37a83c: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x37a83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37a840: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x37a840u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x37a844: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37a844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37a848: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37a848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37a84c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37A84Cu;
    SET_GPR_U32(ctx, 31, 0x37A854u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37A84Cu, 0x37A854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A854u;
label_37a854:
    // 0x37a854: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37a854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37a858: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37a858u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a85c: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37a860: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x37a860u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a864: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x37a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
    // 0x37a868: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37a868u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a86c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x37A86Cu;
    {
        const bool branch_taken_0x37a86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a86c) {
            ctx->pc = 0x37A8A0u;
            return;
        }
    }
    ctx->pc = 0x37A874u;
}
