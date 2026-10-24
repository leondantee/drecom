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

// Function: Em1e_R0_init
// Address: 0x3721f0 - 0x372414
void Em1e_R0_init_0x3721f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1e_R0_init_0x3721f0");
#endif

    switch (ctx->pc) {
        case 0x372280u: goto label_372280;
        case 0x372340u: goto label_372340;
        case 0x372350u: goto label_372350;
        case 0x37235cu: goto label_37235c;
        case 0x37237cu: goto label_37237c;
        case 0x372390u: goto label_372390;
        case 0x3723a4u: goto label_3723a4;
        case 0x3723b8u: goto label_3723b8;
        default: break;
    }

    ctx->pc = 0x3721f0u;

    // 0x3721f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3721f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3721f4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x3721f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x3721f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3721f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3721fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3721fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x372200: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x372200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x372204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x372204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372208: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37220c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x37220cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x372210: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372214: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x372214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x372218: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37221c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x37221cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x372220: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372224: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x372224u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x372228: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37222c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x37222cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x372230: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x372230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x372234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372238: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37223c: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x37223cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    // 0x372240: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x372240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x372244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372248: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37224c: 0xe44011e4  swc1        $f0, 0x11E4($v0)
    ctx->pc = 0x37224cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4580), bits); }
    // 0x372250: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x372250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x372254: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372258: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x372258u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x37225c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37225cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372260: 0x9462000e  lhu         $v0, 0xE($v1)
    ctx->pc = 0x372260u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x372264: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x372264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x372268: 0xa462000e  sh          $v0, 0xE($v1)
    ctx->pc = 0x372268u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x37226c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372270: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x372270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x372274: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x372274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x372278: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x372278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x37227c: 0x2410002a  addiu       $s0, $zero, 0x2A
    ctx->pc = 0x37227cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_372280:
    // 0x372280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x372280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372284: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x372284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x372288: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x372288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x37228c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x37228cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x372290: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x372290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x372294: 0x24420170  addiu       $v0, $v0, 0x170
    ctx->pc = 0x372294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x372298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x372298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37229c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x37229cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3722a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3722a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3722a4: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3722A4u;
    {
        const bool branch_taken_0x3722a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3722a4) {
            ctx->pc = 0x372280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372280;
        }
    }
    ctx->pc = 0x3722ACu;
    // 0x3722ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722b0: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x3722b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x3722b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722b8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x3722b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x3722bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722c0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x3722c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x3722c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722c8: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x3722c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    // 0x3722cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3722ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3722d0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722d4: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x3722d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x3722d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3722d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3722dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722e0: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x3722e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x3722e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3722e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3722e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722ec: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x3722ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x3722f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3722f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3722f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3722f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3722f8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3722f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3722fc: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x3722fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x372300: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x372300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372304: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372304u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372308: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37230c: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x37230cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x372310: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x372310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x372314: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x372314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x372318: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37231c: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x37231cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x372320: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x372320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372324: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x372328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x37232c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x37232cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x372330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x372334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x372338: 0xc0965d0  jal         func_259740
    ctx->pc = 0x372338u;
    SET_GPR_U32(ctx, 31, 0x372340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x372338u, 0x372340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372340u;
label_372340:
    // 0x372340: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372344: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x372344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x372348: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x372348u;
    SET_GPR_U32(ctx, 31, 0x372350u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x372348u, 0x372350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372350u;
label_372350:
    // 0x372350: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x372350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372354: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x372354u;
    SET_GPR_U32(ctx, 31, 0x37235Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x372354u, 0x37235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37235Cu;
label_37235c:
    // 0x37235c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x372360: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x372360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x372364: 0x24510120  addiu       $s1, $v0, 0x120
    ctx->pc = 0x372364u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x372368: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x372368u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x37236c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x37236cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x372370: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372370u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x372374: 0xc0961d0  jal         func_258740
    ctx->pc = 0x372374u;
    SET_GPR_U32(ctx, 31, 0x37237Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x372374u, 0x37237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37237Cu;
label_37237c:
    // 0x37237c: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x37237cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x372380: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x372380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x372384: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x372384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x372388: 0xc0961d0  jal         func_258740
    ctx->pc = 0x372388u;
    SET_GPR_U32(ctx, 31, 0x372390u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x372388u, 0x372390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372390u;
label_372390:
    // 0x372390: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x372390u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x372394: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x372394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x372398: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x372398u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37239c: 0xc096254  jal         func_258950
    ctx->pc = 0x37239Cu;
    SET_GPR_U32(ctx, 31, 0x3723A4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x37239Cu, 0x3723A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723A4u;
label_3723a4:
    // 0x3723a4: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x3723a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x3723a8: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3723a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3723ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3723acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3723b0: 0xc096254  jal         func_258950
    ctx->pc = 0x3723B0u;
    SET_GPR_U32(ctx, 31, 0x3723B8u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x3723B0u, 0x3723B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3723B8u;
label_3723b8:
    // 0x3723b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3723b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3723bc: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x3723bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x3723c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3723c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3723c4: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x3723c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3723c8: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3723C8u;
    {
        const bool branch_taken_0x3723c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3723c8) {
            ctx->pc = 0x3723FCu;
            goto label_3723fc;
        }
    }
    ctx->pc = 0x3723D0u;
    // 0x3723d0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3723d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3723d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3723d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3723d8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3723d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3723dc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3723dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3723e0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3723e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3723e4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3723e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3723e8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3723e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3723ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3723ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3723f0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3723f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3723f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3723f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3723f8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3723f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3723fc:
    // 0x3723fc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x3723fcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x372400: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x372400u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372404: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x372404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372408: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x372408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x37240c: 0x3e00008  jr          $ra
    ctx->pc = 0x37240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372414u;
}
