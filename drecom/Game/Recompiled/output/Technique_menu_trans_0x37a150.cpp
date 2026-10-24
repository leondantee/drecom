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

// Function: Technique_menu_trans
// Address: 0x37a150 - 0x37b2d4
void Technique_menu_trans_0x37a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Technique_menu_trans_0x37a150");
#endif

    switch (ctx->pc) {
        case 0x37a1d0u: goto label_37a1d0;
        case 0x37a28cu: goto label_37a28c;
        case 0x37a2b8u: goto label_37a2b8;
        case 0x37a51cu: goto label_37a51c;
        case 0x37a594u: goto label_37a594;
        case 0x37a694u: goto label_37a694;
        case 0x37a6c0u: goto label_37a6c0;
        case 0x37a7dcu: goto label_37a7dc;
        case 0x37a854u: goto label_37a854;
        case 0x37a874u: goto label_37a874;
        case 0x37a8c0u: goto label_37a8c0;
        case 0x37a98cu: goto label_37a98c;
        case 0x37a9b8u: goto label_37a9b8;
        case 0x37aba0u: goto label_37aba0;
        case 0x37ac20u: goto label_37ac20;
        case 0x37aca4u: goto label_37aca4;
        case 0x37ad54u: goto label_37ad54;
        case 0x37ad80u: goto label_37ad80;
        case 0x37aeb4u: goto label_37aeb4;
        case 0x37af2cu: goto label_37af2c;
        case 0x37afdcu: goto label_37afdc;
        case 0x37b008u: goto label_37b008;
        case 0x37b038u: goto label_37b038;
        case 0x37b170u: goto label_37b170;
        case 0x37b1ecu: goto label_37b1ec;
        case 0x37b22cu: goto label_37b22c;
        case 0x37b264u: goto label_37b264;
        case 0x37b298u: goto label_37b298;
        default: break;
    }

    ctx->pc = 0x37a150u;

    // 0x37a150: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x37a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x37a154: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x37a154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x37a158: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x37a158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x37a15c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x37a160: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x37a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x37a164: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x37a164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x37a168: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x37a16c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x37a170: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37a170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37a174: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37a17c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x37a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x37a180: 0x24626150  addiu       $v0, $v1, 0x6150
    ctx->pc = 0x37a180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 24912));
    // 0x37a184: 0x7040f628  paddub      $fp, $v0, $zero
    ctx->pc = 0x37a184u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a188: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x37a188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x37a18c: 0x244205b0  addiu       $v0, $v0, 0x5B0
    ctx->pc = 0x37a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1456));
    // 0x37a190: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x37a190u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a194: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x37a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x37a198: 0x24460870  addiu       $a2, $v0, 0x870
    ctx->pc = 0x37a198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x37a19c: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37a19cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a1a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a1a4: 0x2443ba40  addiu       $v1, $v0, -0x45C0
    ctx->pc = 0x37a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949440));
    // 0x37a1a8: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x37a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x37a1ac: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x37a1acu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x3ABA40u));
    // 0x37a1b0: 0x7c460000  sq          $a2, 0x0($v0)
    ctx->pc = 0x37a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 6));
    // 0x37a1b4: 0x8fc35dc8  lw          $v1, 0x5DC8($fp)
    ctx->pc = 0x37a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24008)));
    // 0x37a1b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a1bc: 0x14620101  bne         $v1, $v0, . + 4 + (0x101 << 2)
    ctx->pc = 0x37A1BCu;
    {
        const bool branch_taken_0x37a1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37a1bc) {
            ctx->pc = 0x37A5C4u;
            goto label_37a5c4;
        }
    }
    ctx->pc = 0x37A1C4u;
    // 0x37a1c4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37a1c4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a1c8: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x37A1C8u;
    {
        const bool branch_taken_0x37a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a1c8) {
            ctx->pc = 0x37A5B0u;
            goto label_37a5b0;
        }
    }
    ctx->pc = 0x37A1D0u;
label_37a1d0:
    // 0x37a1d0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x37a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37a1d4: 0x533821  addu        $a3, $v0, $s3
    ctx->pc = 0x37a1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x37a1d8: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x37a1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x37a1dc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a1e0: 0x2443b870  addiu       $v1, $v0, -0x4790
    ctx->pc = 0x37a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948976));
    // 0x37a1e4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x37a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37a1e8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x37a1e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a1ec: 0x1330c0  sll         $a2, $s3, 3
    ctx->pc = 0x37a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x37a1f0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a1f4: 0x2443b9e0  addiu       $v1, $v0, -0x4620
    ctx->pc = 0x37a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
    // 0x37a1f8: 0x66b021  addu        $s6, $v1, $a2
    ctx->pc = 0x37a1f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37a1fc: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x37a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37a200: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x37a200u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a204: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x37a204u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37a208: 0x7100ae28  paddub      $s5, $t0, $zero
    ctx->pc = 0x37a208u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x37a20c: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x37a20cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a210: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a214: 0xc31023  subu        $v0, $a2, $v1
    ctx->pc = 0x37a214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37a218: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x37a218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x37a21c: 0x8e270010  lw          $a3, 0x10($s1)
    ctx->pc = 0x37a21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a220: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x37a220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a224: 0xe61023  subu        $v0, $a3, $a2
    ctx->pc = 0x37a224u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x37a228: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x37a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x37a22c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x37a22cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37a230: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x37a230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x37a234: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37a234u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a238: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37a238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37a23c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a240: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x37a240u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37a244: 0x70601628  paddub      $v0, $v1, $zero
    ctx->pc = 0x37a244u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a248: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37a248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37a24c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x37a24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x37a250: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x37a250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37a254: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37a254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a258: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x37a258u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x37a25c: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x37a25cu;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a260: 0x2b6a823  subu        $s5, $s5, $s6
    ctx->pc = 0x37a260u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 22)));
    // 0x37a264: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37a264u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a268: 0x0  nop
    ctx->pc = 0x37a268u;
    // NOP
    // 0x37a26c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37a26cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a270: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x37a270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x37a274: 0x34c2cccd  ori         $v0, $a2, 0xCCCD
    ctx->pc = 0x37a274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x37a278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37a278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a27c: 0x0  nop
    ctx->pc = 0x37a27cu;
    // NOP
    // 0x37a280: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37a280u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37a284: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37A284u;
    SET_GPR_U32(ctx, 31, 0x37A28Cu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37A284u, 0x37A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A28Cu;
label_37a28c:
    // 0x37a28c: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x37a28cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a290: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37a290u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a294: 0x0  nop
    ctx->pc = 0x37a294u;
    // NOP
    // 0x37a298: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37a298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a29c: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x37a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x37a2a0: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x37a2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x37a2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37a2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a2a8: 0x0  nop
    ctx->pc = 0x37a2a8u;
    // NOP
    // 0x37a2ac: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37a2acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37a2b0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37A2B0u;
    SET_GPR_U32(ctx, 31, 0x37A2B8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37A2B0u, 0x37A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A2B8u;
label_37a2b8:
    // 0x37a2b8: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37a2b8u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a2bc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a2c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37a2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x37a2c4: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37a2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37a2c8: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x37a2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37a2cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37a2d0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37a2d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x37a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37a2d8: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x37a2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x37a2dc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37a2e0: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x37a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a2e4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x37a2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x37a2e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37a2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a2ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37a2f0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x37a2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a2f4: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x37a2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x37a2f8: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x37a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37a2fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x37a2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x37a300: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x37a300u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a304: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x37a304u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x37a308: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a30c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37a310: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a314: 0xc21025  or          $v0, $a2, $v0
    ctx->pc = 0x37a314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37a318: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x37a318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37a31c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37a31cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37a320: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a324: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a328: 0x1662000f  bne         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x37A328u;
    {
        const bool branch_taken_0x37a328 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x37a328) {
            ctx->pc = 0x37A368u;
            goto label_37a368;
        }
    }
    ctx->pc = 0x37A330u;
    // 0x37a330: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37a330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37a334: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x37a334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a338: 0x8fa400a4  lw          $a0, 0xA4($sp)
    ctx->pc = 0x37a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37a33c: 0x41a00  sll         $v1, $a0, 8
    ctx->pc = 0x37a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x37a340: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x37a340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37a344: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37a344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a348: 0xa21825  or          $v1, $a1, $v0
    ctx->pc = 0x37a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x37a34c: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x37a34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37a350: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x37a350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x37a354: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a358: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a35c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a35cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a360: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x37A360u;
    {
        const bool branch_taken_0x37a360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a360) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A368u;
label_37a368:
    // 0x37a368: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x37a368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37a36c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37a36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a370: 0x3c065555  lui         $a2, 0x5555
    ctx->pc = 0x37a370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21845 << 16));
    // 0x37a374: 0x34c25556  ori         $v0, $a2, 0x5556
    ctx->pc = 0x37a374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21846);
    // 0x37a378: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x37a378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a37c: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x37a37cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x37a380: 0x0  nop
    ctx->pc = 0x37a380u;
    // NOP
    // 0x37a384: 0x1010  mfhi        $v0
    ctx->pc = 0x37a384u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37a388: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x37a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37a38c: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37a38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37a390: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a394: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37a394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37a398: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37a39c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x37a39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a3a0: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37a3a4: 0x0  nop
    ctx->pc = 0x37a3a4u;
    // NOP
    // 0x37a3a8: 0x3810  mfhi        $a3
    ctx->pc = 0x37a3a8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x37a3ac: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x37a3acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x37a3b0: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x37a3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37a3b4: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x37a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x37a3b8: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x37a3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37a3bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37a3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a3c0: 0x3c075555  lui         $a3, 0x5555
    ctx->pc = 0x37a3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)21845 << 16));
    // 0x37a3c4: 0x34e35556  ori         $v1, $a3, 0x5556
    ctx->pc = 0x37a3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)21846);
    // 0x37a3c8: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x37a3c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a3cc: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x37a3ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37a3d0: 0x0  nop
    ctx->pc = 0x37a3d0u;
    // NOP
    // 0x37a3d4: 0x1810  mfhi        $v1
    ctx->pc = 0x37a3d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x37a3d8: 0x66b021  addu        $s6, $v1, $a2
    ctx->pc = 0x37a3d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37a3dc: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37a3e0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x37a3e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37a3e4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x37a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37a3e8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x37a3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x37a3ec: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x37a3ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37a3f0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a3f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_37a3f8:
    // 0x37a3f8: 0x8fc35dc0  lw          $v1, 0x5DC0($fp)
    ctx->pc = 0x37a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24000)));
    // 0x37a3fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a400: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x37A400u;
    {
        const bool branch_taken_0x37a400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37a400) {
            ctx->pc = 0x37A498u;
            goto label_37a498;
        }
    }
    ctx->pc = 0x37A408u;
    // 0x37a408: 0x8fa700a0  lw          $a3, 0xA0($sp)
    ctx->pc = 0x37a408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37a40c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a410: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37a410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37a414: 0x34435556  ori         $v1, $v0, 0x5556
    ctx->pc = 0x37a414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37a418: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x37a418u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a41c: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x37a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x37a420: 0x0  nop
    ctx->pc = 0x37a420u;
    // NOP
    // 0x37a424: 0x1810  mfhi        $v1
    ctx->pc = 0x37a424u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x37a428: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x37a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a42c: 0x8fa700a4  lw          $a3, 0xA4($sp)
    ctx->pc = 0x37a42cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37a430: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37a430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a434: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x37a434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x37a438: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x37a438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x37a43c: 0x670018  mult        $zero, $v1, $a3
    ctx->pc = 0x37a43cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a440: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x37a440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x37a444: 0x0  nop
    ctx->pc = 0x37a444u;
    // NOP
    // 0x37a448: 0x3010  mfhi        $a2
    ctx->pc = 0x37a448u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x37a44c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37a44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37a450: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x37a450u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x37a454: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37a454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a458: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37a45c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37a45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37a460: 0x3c045555  lui         $a0, 0x5555
    ctx->pc = 0x37a460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21845 << 16));
    // 0x37a464: 0x34865556  ori         $a2, $a0, 0x5556
    ctx->pc = 0x37a464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21846);
    // 0x37a468: 0xc20018  mult        $zero, $a2, $v0
    ctx->pc = 0x37a468u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37a46c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x37a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x37a470: 0x0  nop
    ctx->pc = 0x37a470u;
    // NOP
    // 0x37a474: 0x2010  mfhi        $a0
    ctx->pc = 0x37a474u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x37a478: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x37a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x37a47c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37a47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37a480: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37a480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a484: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x37a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37a488: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x37a488u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x37a48c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x37a48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x37a490: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37a490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37a494: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_37a498:
    // 0x37a498: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x37a498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37a49c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x37a49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37a4a0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x37a4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37a4a4: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x37a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37a4a8: 0x24437900  addiu       $v1, $v0, 0x7900
    ctx->pc = 0x37a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37a4ac: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37a4b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x37a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37a4b4: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x37a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37a4b8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x37a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x37a4bc: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37a4bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37a4c0: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x37a4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37a4c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a4c8: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x37a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37a4cc: 0x24447000  addiu       $a0, $v0, 0x7000
    ctx->pc = 0x37a4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37a4d0: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x37a4d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x37a4d4: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x37a4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37a4d8: 0x330c0  sll         $a2, $v1, 3
    ctx->pc = 0x37a4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37a4dc: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x37a4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x37a4e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x37a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37a4e4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x37a4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37a4e8: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x37a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37a4ec: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x37a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x37a4f0: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37a4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37a4f4: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x37a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37a4f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37a4fc: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x37a4fcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x37a500: 0x26c6e640  addiu       $a2, $s6, -0x19C0
    ctx->pc = 0x37a500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4294960704));
    // 0x37a504: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x37a504u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x37a508: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37a50c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37a50cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a510: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37a510u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37a514: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37A514u;
    SET_GPR_U32(ctx, 31, 0x37A51Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37A514u, 0x37A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A51Cu;
label_37a51c:
    // 0x37a51c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37a51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37a520: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37a520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x37a524: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37a524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37a528: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x37a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37a52c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x37a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x37a530: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37a534: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x37a534u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37a538: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x37a538u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x37a53c: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x37a53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x37a540: 0x3447000a  ori         $a3, $v0, 0xA
    ctx->pc = 0x37a540u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x37a544: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37a544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37a548: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x37a548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a54c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x37a54cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x37a550: 0x613b8  dsll        $v0, $a2, 14
    ctx->pc = 0x37a550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 14);
    // 0x37a554: 0xe23025  or          $a2, $a3, $v0
    ctx->pc = 0x37a554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x37a558: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37a55c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37a55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a560: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37a560u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37a564: 0x33e38  dsll        $a3, $v1, 24
    ctx->pc = 0x37a564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 24);
    // 0x37a568: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x37a568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x37a56c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37a570: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37a570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37a574: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37a574u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37a578: 0x220bc  dsll32      $a0, $v0, 2
    ctx->pc = 0x37a578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37a57c: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x37a57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x37a580: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37a580u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37a584: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37a584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37a588: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37a588u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37a58c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37A58Cu;
    SET_GPR_U32(ctx, 31, 0x37A594u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37A58Cu, 0x37A594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A594u;
label_37a594:
    // 0x37a594: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37a594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37a598: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37a598u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37a59c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37a5a0: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37a5a0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a5a4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x37a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37a5a8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x37a5a8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37a5ac: 0x0  nop
    ctx->pc = 0x37a5acu;
    // NOP
label_37a5b0:
    // 0x37a5b0: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x37a5b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x37a5b4: 0x1460ff06  bnez        $v1, . + 4 + (-0xFA << 2)
    ctx->pc = 0x37A5B4u;
    {
        const bool branch_taken_0x37a5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a5b4) {
            ctx->pc = 0x37A1D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a1d0;
        }
    }
    ctx->pc = 0x37A5BCu;
    // 0x37a5bc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x37A5BCu;
    {
        const bool branch_taken_0x37a5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a5bc) {
            ctx->pc = 0x37AC60u;
            goto label_37ac60;
        }
    }
    ctx->pc = 0x37A5C4u;
label_37a5c4:
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
            goto label_37ac60;
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
            goto label_37a8a0;
        }
    }
    ctx->pc = 0x37A874u;
label_37a874:
    // 0x37a874: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x37a874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x37a878: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37a878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37a87c: 0x2442b858  addiu       $v0, $v0, -0x47A8
    ctx->pc = 0x37a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948952));
    // 0x37a880: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x37a880u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37a884: 0x8fa300bc  lw          $v1, 0xBC($sp)
    ctx->pc = 0x37a884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x37a888: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x37a888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37a88c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37a890: 0xafa300bc  sw          $v1, 0xBC($sp)
    ctx->pc = 0x37a890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
    // 0x37a894: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x37a894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37a898: 0x70c09e28  paddub      $s3, $a2, $zero
    ctx->pc = 0x37a898u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37a89c: 0x0  nop
    ctx->pc = 0x37a89cu;
    // NOP
label_37a8a0:
    // 0x37a8a0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37a8a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37a8a4: 0x8c220580  lw          $v0, 0x580($at)
    ctx->pc = 0x37a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37a8a8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x37a8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x37a8ac: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x37A8ACu;
    {
        const bool branch_taken_0x37a8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a8ac) {
            ctx->pc = 0x37A874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a874;
        }
    }
    ctx->pc = 0x37A8B4u;
    // 0x37a8b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37a8b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37a8b8: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x37A8B8u;
    {
        const bool branch_taken_0x37a8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37a8b8) {
            ctx->pc = 0x37AC38u;
            goto label_37ac38;
        }
    }
    ctx->pc = 0x37A8C0u;
label_37a8c0:
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
            goto label_37aa6c;
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
            goto label_37ab00;
        }
    }
    ctx->pc = 0x37AA6Cu;
label_37aa6c:
    // 0x37aa6c: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x37aa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37aa70: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37aa70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aa74: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x37aa74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x37aa78: 0x34625556  ori         $v0, $v1, 0x5556
    ctx->pc = 0x37aa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x37aa7c: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x37aa7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37aa80: 0x61fc2  srl         $v1, $a2, 31
    ctx->pc = 0x37aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37aa84: 0x0  nop
    ctx->pc = 0x37aa84u;
    // NOP
    // 0x37aa88: 0x1010  mfhi        $v0
    ctx->pc = 0x37aa88u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37aa8c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x37aa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37aa90: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37aa90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37aa94: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x37aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aa98: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37aa9c: 0x34475556  ori         $a3, $v0, 0x5556
    ctx->pc = 0x37aa9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37aaa0: 0xe60018  mult        $zero, $a3, $a2
    ctx->pc = 0x37aaa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37aaa4: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x37aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x37aaa8: 0x0  nop
    ctx->pc = 0x37aaa8u;
    // NOP
    // 0x37aaac: 0x1010  mfhi        $v0
    ctx->pc = 0x37aaacu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37aab0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x37aab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37aab4: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x37aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37aab8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37aab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37aabc: 0x8fa700a8  lw          $a3, 0xA8($sp)
    ctx->pc = 0x37aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37aac0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x37aac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37aac4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x37aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x37aac8: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x37aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x37aacc: 0x470018  mult        $zero, $v0, $a3
    ctx->pc = 0x37aaccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37aad0: 0x727c2  srl         $a0, $a3, 31
    ctx->pc = 0x37aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x37aad4: 0x0  nop
    ctx->pc = 0x37aad4u;
    // NOP
    // 0x37aad8: 0x1010  mfhi        $v0
    ctx->pc = 0x37aad8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x37aadc: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x37aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37aae0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x37aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x37aae4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37aae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37aae8: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x37aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37aaec: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x37aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x37aaf0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x37aaf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37aaf4: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37aaf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37aafc: 0x0  nop
    ctx->pc = 0x37aafcu;
    // NOP
label_37ab00:
    // 0x37ab00: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x37ab00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37ab04: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x37ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37ab08: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x37ab08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ab0c: 0x1530c0  sll         $a2, $s5, 3
    ctx->pc = 0x37ab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37ab10: 0x24c37900  addiu       $v1, $a2, 0x7900
    ctx->pc = 0x37ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x37ab14: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37ab18: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x37ab18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x37ab1c: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x37ab1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37ab20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ab24: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ab28: 0x2616001c  addiu       $s6, $s0, 0x1C
    ctx->pc = 0x37ab28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37ab2c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x37ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x37ab30: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x37ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37ab34: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x37ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37ab38: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37ab38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ab3c: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x37ab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ab40: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x37ab40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x37ab44: 0x24c67900  addiu       $a2, $a2, 0x7900
    ctx->pc = 0x37ab44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30976));
    // 0x37ab48: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x37ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37ab4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37ab4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37ab50: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x37ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37ab54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ab58: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37ab58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ab5c: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x37ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37ab60: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ab60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ab64: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37ab64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37ab68: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x37ab68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37ab6c: 0x24c300a5  addiu       $v1, $a2, 0xA5
    ctx->pc = 0x37ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 165));
    // 0x37ab70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x37ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37ab74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37ab78: 0x230c0  sll         $a2, $v0, 3
    ctx->pc = 0x37ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37ab7c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37ab80: 0x2443cca0  addiu       $v1, $v0, -0x3360
    ctx->pc = 0x37ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x37ab84: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x37ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37ab88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x37ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x37ab8c: 0x27c3001c  addiu       $v1, $fp, 0x1C
    ctx->pc = 0x37ab8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37ab90: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x37ab90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37ab94: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37ab94u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37ab98: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AB98u;
    SET_GPR_U32(ctx, 31, 0x37ABA0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AB98u, 0x37ABA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37ABA0u;
label_37aba0:
    // 0x37aba0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37aba0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37aba4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37aba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37aba8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37aba8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x37abac: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37abacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37abb0: 0x34431009  ori         $v1, $v0, 0x1009
    ctx->pc = 0x37abb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37abb4: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x37abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x37abb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37abbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37abc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37abc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37abc4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x37abc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x37abc8: 0x3446000a  ori         $a2, $v0, 0xA
    ctx->pc = 0x37abc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x37abcc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37abd0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37abd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37abd4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37abd4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37abd8: 0x313b8  dsll        $v0, $v1, 14
    ctx->pc = 0x37abd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 14);
    // 0x37abdc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37abdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37abe0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37abe4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37abe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37abe8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37abe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37abec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x37abecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x37abf0: 0x463825  or          $a3, $v0, $a2
    ctx->pc = 0x37abf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37abf4: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x37abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37abf8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x37abf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37abfc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37abfcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37ac00: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x37ac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37ac04: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x37ac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x37ac08: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37ac08u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37ac0c: 0x27c6001c  addiu       $a2, $fp, 0x1C
    ctx->pc = 0x37ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37ac10: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x37ac10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37ac14: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37ac14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37ac18: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AC18u;
    SET_GPR_U32(ctx, 31, 0x37AC20u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AC18u, 0x37AC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AC20u;
label_37ac20:
    // 0x37ac20: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37ac24: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37ac24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37ac28: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x37ac28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37ac2c: 0x72c09628  paddub      $s2, $s6, $zero
    ctx->pc = 0x37ac2cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x37ac30: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x37ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37ac34: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x37ac34u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
label_37ac38:
    // 0x37ac38: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x37ac38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37ac3c: 0x8c280580  lw          $t0, 0x580($at)
    ctx->pc = 0x37ac3cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x9A0580u));
    // 0x37ac40: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x37ac40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x37ac44: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x37ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x37ac48: 0x2462b858  addiu       $v0, $v1, -0x47A8
    ctx->pc = 0x37ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948952));
    // 0x37ac4c: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x37ac4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x37ac50: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x37ac50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37ac54: 0x266102a  slt         $v0, $s3, $a2
    ctx->pc = 0x37ac54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x37ac58: 0x1440ff19  bnez        $v0, . + 4 + (-0xE7 << 2)
    ctx->pc = 0x37AC58u;
    {
        const bool branch_taken_0x37ac58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37ac58) {
            ctx->pc = 0x37A8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a8c0;
        }
    }
    ctx->pc = 0x37AC60u;
label_37ac60:
    // 0x37ac60: 0x8fc35dc8  lw          $v1, 0x5DC8($fp)
    ctx->pc = 0x37ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24008)));
    // 0x37ac64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ac68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37AC68u;
    {
        const bool branch_taken_0x37ac68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37ac68) {
            ctx->pc = 0x37AC80u;
            goto label_37ac80;
        }
    }
    ctx->pc = 0x37AC70u;
    // 0x37ac70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37ac74: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x37ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x37ac78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37AC78u;
    {
        const bool branch_taken_0x37ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac78) {
            ctx->pc = 0x37AC98u;
            goto label_37ac98;
        }
    }
    ctx->pc = 0x37AC80u;
label_37ac80:
    // 0x37ac80: 0x8fc25dc8  lw          $v0, 0x5DC8($fp)
    ctx->pc = 0x37ac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24008)));
    // 0x37ac84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37ac84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ac88: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37AC88u;
    {
        const bool branch_taken_0x37ac88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x37ac88) {
            ctx->pc = 0x37AC98u;
            goto label_37ac98;
        }
    }
    ctx->pc = 0x37AC90u;
    // 0x37ac90: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37ac90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ac94: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x37ac94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_37ac98:
    // 0x37ac98: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x37ac98u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37ac9c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x37AC9Cu;
    {
        const bool branch_taken_0x37ac9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac9c) {
            ctx->pc = 0x37AF48u;
            goto label_37af48;
        }
    }
    ctx->pc = 0x37ACA4u;
label_37aca4:
    // 0x37aca4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x37aca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x37aca8: 0x24426760  addiu       $v0, $v0, 0x6760
    ctx->pc = 0x37aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x37acac: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x37acacu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37acb0: 0x26620007  addiu       $v0, $s3, 0x7
    ctx->pc = 0x37acb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x37acb4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x37acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37acb8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37acbc: 0x2442b9e0  addiu       $v0, $v0, -0x4620
    ctx->pc = 0x37acbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949344));
    // 0x37acc0: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x37acc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37acc4: 0x8ed50000  lw          $s5, 0x0($s6)
    ctx->pc = 0x37acc4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x37acc8: 0x72a0a628  paddub      $s4, $s5, $zero
    ctx->pc = 0x37acc8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x37accc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37acccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37acd0: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37acd0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37acd4: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x37acd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37acd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x37acd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37acdc: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x37acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37ace0: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x37ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x37ace4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37ace8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37acec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x37acecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37acf0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x37acf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x37acf4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37acf8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x37acf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37acfc: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37acfcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37ad00: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37ad04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ad04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ad08: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x37ad08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37ad0c: 0x70c01628  paddub      $v0, $a2, $zero
    ctx->pc = 0x37ad0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37ad10: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x37ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x37ad14: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x37ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x37ad18: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x37ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37ad1c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37ad20: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x37ad20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x37ad24: 0x2a61823  subu        $v1, $s5, $a2
    ctx->pc = 0x37ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x37ad28: 0x7060ae28  paddub      $s5, $v1, $zero
    ctx->pc = 0x37ad28u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37ad2c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37ad2cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad30: 0x0  nop
    ctx->pc = 0x37ad30u;
    // NOP
    // 0x37ad34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37ad34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37ad38: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37ad3c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x37ad3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37ad40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37ad40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad44: 0x0  nop
    ctx->pc = 0x37ad44u;
    // NOP
    // 0x37ad48: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37ad48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37ad4c: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37AD4Cu;
    SET_GPR_U32(ctx, 31, 0x37AD54u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37AD4Cu, 0x37AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD54u;
label_37ad54:
    // 0x37ad54: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x37ad54u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37ad58: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37ad58u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad5c: 0x0  nop
    ctx->pc = 0x37ad5cu;
    // NOP
    // 0x37ad60: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37ad60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37ad64: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37ad64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37ad68: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x37ad68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37ad6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37ad6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37ad70: 0x0  nop
    ctx->pc = 0x37ad70u;
    // NOP
    // 0x37ad74: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37ad74u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37ad78: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37AD78u;
    SET_GPR_U32(ctx, 31, 0x37AD80u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37AD78u, 0x37AD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AD80u;
label_37ad80:
    // 0x37ad80: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37ad80u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37ad84: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x37ad84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x37ad88: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x37ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x37ad8c: 0x3c036400  lui         $v1, 0x6400
    ctx->pc = 0x37ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25600 << 16));
    // 0x37ad90: 0x34642b16  ori         $a0, $v1, 0x2B16
    ctx->pc = 0x37ad90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11030);
    // 0x37ad94: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x37ad94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x37ad98: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37ad9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37ad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37ada0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x37ada0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x37ada4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37ada8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37adac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x37adacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37adb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37adb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37adb4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37adb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37adb8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37adb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37adbc: 0x821825  or          $v1, $a0, $v0
    ctx->pc = 0x37adbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x37adc0: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x37adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37adc4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37adc8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37adc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37adcc: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x37adccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37add0: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37add0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37add4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37add4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37add8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x37add8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37addc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x37addcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x37ade0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37ade4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x37ade4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x37ade8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x37ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37adec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37adecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37adf0: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x37adf0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37adf4: 0x63a00  sll         $a3, $a2, 8
    ctx->pc = 0x37adf4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x37adf8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x37adf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37adfc: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x37adfcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x37ae00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x37ae00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x37ae04: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x37ae04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37ae08: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x37ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x37ae0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37ae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37ae10: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x37ae10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37ae14: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x37ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x37ae18: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x37ae18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37ae1c: 0x24c37000  addiu       $v1, $a2, 0x7000
    ctx->pc = 0x37ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28672));
    // 0x37ae20: 0x3076ffff  andi        $s6, $v1, 0xFFFF
    ctx->pc = 0x37ae20u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37ae24: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x37ae24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37ae28: 0x24667900  addiu       $a2, $v1, 0x7900
    ctx->pc = 0x37ae28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x37ae2c: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x37ae2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x37ae30: 0x2c31025  or          $v0, $s6, $v1
    ctx->pc = 0x37ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x37ae34: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x37ae34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37ae38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ae3c: 0x3402fff9  ori         $v0, $zero, 0xFFF9
    ctx->pc = 0x37ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ae40: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x37ae40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37ae44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x37ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x37ae48: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x37ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37ae4c: 0x24477000  addiu       $a3, $v0, 0x7000
    ctx->pc = 0x37ae4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x37ae50: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x37ae50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x37ae54: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x37ae54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37ae58: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x37ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37ae5c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37ae60: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x37ae60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37ae64: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x37ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x37ae68: 0x26070024  addiu       $a3, $s0, 0x24
    ctx->pc = 0x37ae68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37ae6c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x37ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x37ae70: 0x3406fff9  ori         $a2, $zero, 0xFFF9
    ctx->pc = 0x37ae70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37ae74: 0x26030028  addiu       $v1, $s0, 0x28
    ctx->pc = 0x37ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37ae78: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x37ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x37ae7c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x37ae7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37ae80: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x37ae80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x37ae84: 0x246600a3  addiu       $a2, $v1, 0xA3
    ctx->pc = 0x37ae84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 163));
    // 0x37ae88: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x37ae88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37ae8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x37ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x37ae90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x37ae90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x37ae94: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37ae94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37ae98: 0x2446cca0  addiu       $a2, $v0, -0x3360
    ctx->pc = 0x37ae98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x37ae9c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x37ae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37aea0: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x37aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x37aea4: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37aea8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37aea8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37aeac: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AEACu;
    SET_GPR_U32(ctx, 31, 0x37AEB4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AEACu, 0x37AEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AEB4u;
label_37aeb4:
    // 0x37aeb4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37aeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x37aeb8: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x37aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x37aebc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37aebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37aec0: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x37aec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37aec4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37aec8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37aec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37aecc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37aeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37aed0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37aed0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37aed4: 0x22138  dsll        $a0, $v0, 4
    ctx->pc = 0x37aed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 4);
    // 0x37aed8: 0x3483000a  ori         $v1, $a0, 0xA
    ctx->pc = 0x37aed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10);
    // 0x37aedc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37aee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x37aee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37aee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37aee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37aee8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x37aee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x37aeec: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x37aeecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37aef0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37aef4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37aef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37aef8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37aef8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37aefc: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x37aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x37af00: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x37af00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37af04: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37af04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37af08: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x37af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x37af0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37af0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37af10: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x37af10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
    // 0x37af14: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x37af14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x37af18: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37af18u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37af1c: 0x27c4001c  addiu       $a0, $fp, 0x1C
    ctx->pc = 0x37af1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37af20: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37af20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37af24: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37AF24u;
    SET_GPR_U32(ctx, 31, 0x37AF2Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37AF24u, 0x37AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AF2Cu;
label_37af2c:
    // 0x37af2c: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37af2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37af30: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37af30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37af34: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37af34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37af38: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37af38u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37af3c: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x37af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37af40: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x37af40u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37af44: 0x0  nop
    ctx->pc = 0x37af44u;
    // NOP
label_37af48:
    // 0x37af48: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x37af48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x37af4c: 0x263302b  sltu        $a2, $s3, $v1
    ctx->pc = 0x37af4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x37af50: 0x14c0ff54  bnez        $a2, . + 4 + (-0xAC << 2)
    ctx->pc = 0x37AF50u;
    {
        const bool branch_taken_0x37af50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x37af50) {
            ctx->pc = 0x37ACA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37aca4;
        }
    }
    ctx->pc = 0x37AF58u;
    // 0x37af58: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x37af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x37af5c: 0x2443674c  addiu       $v1, $v0, 0x674C
    ctx->pc = 0x37af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26444));
    // 0x37af60: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x37af60u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37af64: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x37af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x37af68: 0x2456ba30  addiu       $s6, $v0, -0x45D0
    ctx->pc = 0x37af68u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949424));
    // 0x37af6c: 0x8ec60000  lw          $a2, 0x0($s6)
    ctx->pc = 0x37af6cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3ABA30u));
    // 0x37af70: 0x70c0a628  paddub      $s4, $a2, $zero
    ctx->pc = 0x37af70u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37af74: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x37af74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x37af78: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x37af78u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37af7c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x37af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37af80: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37af80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37af84: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x37af84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37af88: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x37af88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x37af8c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x37af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37af90: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x37af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37af94: 0x433023  subu        $a2, $v0, $v1
    ctx->pc = 0x37af94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37af98: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x37af98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
    // 0x37af9c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x37af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x37afa0: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x37afa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x37afa4: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x37afa4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x37afa8: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x37afa8u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37afac: 0x0  nop
    ctx->pc = 0x37afacu;
    // NOP
    // 0x37afb0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x37afb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37afb4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x37afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x37afb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x37afb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37afbc: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x37afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x37afc0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37afc0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37afc4: 0x0  nop
    ctx->pc = 0x37afc4u;
    // NOP
    // 0x37afc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37afc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37afcc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x37afccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37afd0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x37afd0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x37afd4: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37AFD4u;
    SET_GPR_U32(ctx, 31, 0x37AFDCu);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37AFD4u, 0x37AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37AFDCu;
label_37afdc:
    // 0x37afdc: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x37afdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    // 0x37afe0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x37afe0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37afe4: 0x0  nop
    ctx->pc = 0x37afe4u;
    // NOP
    // 0x37afe8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37afe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37afec: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x37afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x37aff0: 0x3446cccd  ori         $a2, $v0, 0xCCCD
    ctx->pc = 0x37aff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x37aff4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x37aff4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37aff8: 0x0  nop
    ctx->pc = 0x37aff8u;
    // NOP
    // 0x37affc: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37affcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37b000: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37B000u;
    SET_GPR_U32(ctx, 31, 0x37B008u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37B000u, 0x37B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B008u;
label_37b008:
    // 0x37b008: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37b008u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b00c: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x37b00cu;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b010: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x37b010u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b014: 0x0  nop
    ctx->pc = 0x37b014u;
    // NOP
    // 0x37b018: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37b018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37b01c: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x37b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x37b020: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x37b020u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x37b024: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37b024u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37b028: 0x0  nop
    ctx->pc = 0x37b028u;
    // NOP
    // 0x37b02c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x37b02cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x37b030: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x37B030u;
    SET_GPR_U32(ctx, 31, 0x37B038u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x37B030u, 0x37B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B038u;
label_37b038:
    // 0x37b038: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x37b038u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b03c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b040: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37b040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37b044: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x37b044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x37b048: 0x34442b16  ori         $a0, $v0, 0x2B16
    ctx->pc = 0x37b048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x37b04c: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x37b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x37b050: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x37b050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x37b054: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x37b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37b058: 0x34820040  ori         $v0, $a0, 0x40
    ctx->pc = 0x37b058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x37b05c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37b060: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37b060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37b064: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x37b064u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37b068: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x37b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37b06c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x37b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x37b070: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37b070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x37b074: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x37b074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b078: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x37b078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x37b07c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b07cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b080: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x37b080u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37b084: 0x73100  sll         $a2, $a3, 4
    ctx->pc = 0x37b084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x37b088: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x37b088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37b08c: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x37b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x37b090: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b094: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x37b094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b098: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x37b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x37b09c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b09cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b0a0: 0x8fb600a8  lw          $s6, 0xA8($sp)
    ctx->pc = 0x37b0a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x37b0a4: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x37b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x37b0a8: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x37b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x37b0ac: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x37b0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x37b0b0: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x37b0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x37b0b4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37b0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b0b8: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x37b0b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x37b0bc: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x37b0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x37b0c0: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x37b0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x37b0c4: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x37b0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37b0c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x37b0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x37b0cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b0d0: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x37b0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x37b0d4: 0x24627000  addiu       $v0, $v1, 0x7000
    ctx->pc = 0x37b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37b0d8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x37b0d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b0dc: 0x1518c0  sll         $v1, $s5, 3
    ctx->pc = 0x37b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x37b0e0: 0x24627900  addiu       $v0, $v1, 0x7900
    ctx->pc = 0x37b0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x37b0e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b0e8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x37b0e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x37b0ec: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x37b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x37b0f0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x37b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x37b0f4: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37b0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37b0f8: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x37b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x37b0fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b100: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x37b100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x37b104: 0x24757000  addiu       $s5, $v1, 0x7000
    ctx->pc = 0x37b104u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 28672));
    // 0x37b108: 0x32a3ffff  andi        $v1, $s5, 0xFFFF
    ctx->pc = 0x37b108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)65535);
    // 0x37b10c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x37b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x37b110: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x37b110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b114: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x37b114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x37b118: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37b118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37b11c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37b11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x37b120: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x37b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x37b124: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b128: 0x3403fff9  ori         $v1, $zero, 0xFFF9
    ctx->pc = 0x37b128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65529);
    // 0x37b12c: 0x26020028  addiu       $v0, $s0, 0x28
    ctx->pc = 0x37b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x37b130: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x37b130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x37b134: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37b134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x37b138: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37b13c: 0x244200a3  addiu       $v0, $v0, 0xA3
    ctx->pc = 0x37b13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 163));
    // 0x37b140: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x37b140u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b144: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x37b144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x37b148: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x37b148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37b14c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x37b14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37b150: 0x2446cca0  addiu       $a2, $v0, -0x3360
    ctx->pc = 0x37b150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x37b154: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x37b154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x37b158: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x37b158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x37b15c: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b160: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37b160u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b164: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x37b164u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x37b168: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B168u;
    SET_GPR_U32(ctx, 31, 0x37B170u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B168u, 0x37B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B170u;
label_37b170:
    // 0x37b170: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x37b170u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x37b174: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x37b174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x37b178: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b17c: 0x34461009  ori         $a2, $v0, 0x1009
    ctx->pc = 0x37b17cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x37b180: 0xae460004  sw          $a2, 0x4($s2)
    ctx->pc = 0x37b180u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 6));
    // 0x37b184: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x37b184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x37b188: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x37b188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37b18c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37b18cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37b190: 0x23138  dsll        $a2, $v0, 4
    ctx->pc = 0x37b190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 4);
    // 0x37b194: 0x34c2000a  ori         $v0, $a2, 0xA
    ctx->pc = 0x37b194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)10);
    // 0x37b198: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x37b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37b19c: 0x3b03c  dsll32      $s6, $v1, 0
    ctx->pc = 0x37b19cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << (32 + 0));
    // 0x37b1a0: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x37b1a0u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x37b1a4: 0x161bb8  dsll        $v1, $s6, 14
    ctx->pc = 0x37b1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << 14);
    // 0x37b1a8: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x37b1a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x37b1ac: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x37b1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37b1b0: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x37b1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37b1b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x37b1b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x37b1b8: 0x31638  dsll        $v0, $v1, 24
    ctx->pc = 0x37b1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 24);
    // 0x37b1bc: 0x483825  or          $a3, $v0, $t0
    ctx->pc = 0x37b1bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x37b1c0: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x37b1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x37b1c4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x37b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x37b1c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x37b1c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x37b1cc: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x37b1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x37b1d0: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x37b1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x37b1d4: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37b1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37b1d8: 0x27c3001c  addiu       $v1, $fp, 0x1C
    ctx->pc = 0x37b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b1dc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x37b1dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b1e0: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b1e0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b1e4: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B1E4u;
    SET_GPR_U32(ctx, 31, 0x37B1ECu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B1E4u, 0x37B1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B1ECu;
label_37b1ec:
    // 0x37b1ec: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x37b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x37b1f0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x37b1f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b1f4: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x37b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b1f8: 0x70609628  paddub      $s2, $v1, $zero
    ctx->pc = 0x37b1f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b1fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x37b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x37b200: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x37b200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x37b204: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b208: 0x34421043  ori         $v0, $v0, 0x1043
    ctx->pc = 0x37b208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4163);
    // 0x37b20c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b20cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b210: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x37b210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x37b214: 0xfe430008  sd          $v1, 0x8($s2)
    ctx->pc = 0x37b214u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 3));
    // 0x37b218: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b21c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37b21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b220: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b220u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b224: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B224u;
    SET_GPR_U32(ctx, 31, 0x37B22Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B224u, 0x37B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B22Cu;
label_37b22c:
    // 0x37b22c: 0x26560010  addiu       $s6, $s2, 0x10
    ctx->pc = 0x37b22cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b230: 0x72c09628  paddub      $s2, $s6, $zero
    ctx->pc = 0x37b230u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x37b234: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x37b234u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x37b238: 0xae550000  sw          $s5, 0x0($s2)
    ctx->pc = 0x37b238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 21));
    // 0x37b23c: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x37b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x37b240: 0x34c21015  ori         $v0, $a2, 0x1015
    ctx->pc = 0x37b240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4117);
    // 0x37b244: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b244u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b248: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x37b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37b24c: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x37b24cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x37b250: 0x27c2001c  addiu       $v0, $fp, 0x1C
    ctx->pc = 0x37b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b254: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x37b254u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b258: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b258u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b25c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B25Cu;
    SET_GPR_U32(ctx, 31, 0x37B264u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B25Cu, 0x37B264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B264u;
label_37b264:
    // 0x37b264: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37b264u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b268: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x37b268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b26c: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x37b26cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x37b270: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x37b270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x37b274: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x37b274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x37b278: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x37b278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x37b27c: 0x3442103f  ori         $v0, $v0, 0x103F
    ctx->pc = 0x37b27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4159);
    // 0x37b280: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x37b280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x37b284: 0x27c3001c  addiu       $v1, $fp, 0x1C
    ctx->pc = 0x37b284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x37b288: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x37b288u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x37b28c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x37b28cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x37b290: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x37B290u;
    SET_GPR_U32(ctx, 31, 0x37B298u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x37B290u, 0x37B298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B298u;
label_37b298:
    // 0x37b298: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x37b298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x37b29c: 0x70c09628  paddub      $s2, $a2, $zero
    ctx->pc = 0x37b29cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x37b2a0: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x37b2a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37b2a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x37b2a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37b2a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x37b2a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37b2ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x37b2acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37b2b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37b2b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37b2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37b2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37b2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37b2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37b2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37b2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37b2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37b2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37b2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37b2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b2c8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x37b2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x37b2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x37B2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B2D4u;
}
