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

// Function: entry_0037a1d0
// Address: 0x37a1d0 - 0x37a368
void entry_0037a1d0_0x37a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037a1d0_0x37a1d0");
#endif

    switch (ctx->pc) {
        case 0x37a28cu: goto label_37a28c;
        case 0x37a2b8u: goto label_37a2b8;
        default: break;
    }

    ctx->pc = 0x37a1d0u;

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
            return;
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
            return;
        }
    }
    ctx->pc = 0x37A368u;
}
