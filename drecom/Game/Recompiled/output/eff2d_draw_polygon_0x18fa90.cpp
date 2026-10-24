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

// Function: eff2d_draw_polygon
// Address: 0x18fa90 - 0x19065c
void eff2d_draw_polygon_0x18fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eff2d_draw_polygon_0x18fa90");
#endif

    switch (ctx->pc) {
        case 0x18fbc0u: goto label_18fbc0;
        case 0x18fc10u: goto label_18fc10;
        case 0x18fc48u: goto label_18fc48;
        case 0x18fed4u: goto label_18fed4;
        case 0x190134u: goto label_190134;
        case 0x190160u: goto label_190160;
        case 0x19016cu: goto label_19016c;
        case 0x190188u: goto label_190188;
        case 0x190398u: goto label_190398;
        case 0x1903b4u: goto label_1903b4;
        case 0x1903e0u: goto label_1903e0;
        case 0x1903f4u: goto label_1903f4;
        case 0x190428u: goto label_190428;
        case 0x190440u: goto label_190440;
        case 0x190468u: goto label_190468;
        case 0x19047cu: goto label_19047c;
        case 0x1904f4u: goto label_1904f4;
        case 0x1905e0u: goto label_1905e0;
        case 0x190610u: goto label_190610;
        default: break;
    }

    ctx->pc = 0x18fa90u;

    // 0x18fa90: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x18fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x18fa94: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x18fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x18fa98: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x18fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18fa9c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x18faa0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18faa4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18faa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18faa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18faac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18faacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18fab0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18fab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18fab4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18fab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18fab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18fab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18fabc: 0xafa40190  sw          $a0, 0x190($sp)
    ctx->pc = 0x18fabcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 4));
    // 0x18fac0: 0xafa50198  sw          $a1, 0x198($sp)
    ctx->pc = 0x18fac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 5));
    // 0x18fac4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fac8: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x18fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x18facc: 0x24460160  addiu       $a2, $v0, 0x160
    ctx->pc = 0x18faccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x18fad0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18fad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18fad4: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x18fad4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x18fad8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x18fad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x18fadc: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x18fadcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x18fae0: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x18fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x18fae4: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x18fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x18fae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18faec: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x18faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x18faf0: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x18faf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x18faf4: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x18faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x18faf8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x18faf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18fafc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FAFCu;
    {
        const bool branch_taken_0x18fafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fafc) {
            ctx->pc = 0x18FB10u;
            goto label_18fb10;
        }
    }
    ctx->pc = 0x18FB04u;
    // 0x18fb04: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18fb04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18fb08: 0x100002c7  b           . + 4 + (0x2C7 << 2)
    ctx->pc = 0x18FB08u;
    {
        const bool branch_taken_0x18fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb08) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x18FB10u;
label_18fb10:
    // 0x18fb10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18fb14: 0x8c370af0  lw          $s7, 0xAF0($at)
    ctx->pc = 0x18fb14u;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x18fb18: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x18fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x18fb1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FB1Cu;
    {
        const bool branch_taken_0x18fb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb1c) {
            ctx->pc = 0x18FB34u;
            goto label_18fb34;
        }
    }
    ctx->pc = 0x18FB24u;
    // 0x18fb24: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18fb28: 0x2456df50  addiu       $s6, $v0, -0x20B0
    ctx->pc = 0x18fb28u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x18fb2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18FB2Cu;
    {
        const bool branch_taken_0x18fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb2c) {
            ctx->pc = 0x18FB3Cu;
            goto label_18fb3c;
        }
    }
    ctx->pc = 0x18FB34u;
label_18fb34:
    // 0x18fb34: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x18fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x18fb38: 0x2456e550  addiu       $s6, $v0, -0x1AB0
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
label_18fb3c:
    // 0x18fb3c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb40: 0x8c5e01fc  lw          $fp, 0x1FC($v0)
    ctx->pc = 0x18fb40u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 508)));
    // 0x18fb44: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb48: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x18fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x18fb4c: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x18fb4cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x18fb50: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb54: 0x90500210  lbu         $s0, 0x210($v0)
    ctx->pc = 0x18fb54u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x18fb58: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x18fb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x18fb5c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x18fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x18fb60: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x18fb60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x18fb64: 0x8fb00190  lw          $s0, 0x190($sp)
    ctx->pc = 0x18fb64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb68: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18fb6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fb70: 0x27b000b0  addiu       $s0, $sp, 0xB0
    ctx->pc = 0x18fb70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18fb74: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18fb74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18fb78: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fb7c: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fb7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fb80: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18fb80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fb84: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x18fb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x18fb88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FB88u;
    {
        const bool branch_taken_0x18fb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fb88) {
            ctx->pc = 0x18FBA8u;
            goto label_18fba8;
        }
    }
    ctx->pc = 0x18FB90u;
    // 0x18fb90: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x18fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18fb94: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x18fb94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18fb98: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x18fb98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fb9c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x18fb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x18fba0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18FBA0u;
    {
        const bool branch_taken_0x18fba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fba0) {
            ctx->pc = 0x18FBC0u;
            goto label_18fbc0;
        }
    }
    ctx->pc = 0x18FBA8u;
label_18fba8:
    // 0x18fba8: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18fba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fbac: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x18fbacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x18fbb0: 0x72c02e28  paddub      $a1, $s6, $zero
    ctx->pc = 0x18fbb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x18fbb4: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x18fbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18fbb8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x18FBB8u;
    SET_GPR_U32(ctx, 31, 0x18FBC0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x18FBC0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18FBC0u) { return; }
    ctx->pc = 0x18FBC0u;
label_18fbc0:
    // 0x18fbc0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x18fbc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fbc4: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x18fbc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x18fbc8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fbcc: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fbd0: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18fbd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fbd4: 0x32020010  andi        $v0, $s0, 0x10
    ctx->pc = 0x18fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16);
    // 0x18fbd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18FBD8u;
    {
        const bool branch_taken_0x18fbd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbd8) {
            ctx->pc = 0x18FBECu;
            goto label_18fbec;
        }
    }
    ctx->pc = 0x18FBE0u;
    // 0x18fbe0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x18fbe0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18fbe4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x18FBE4u;
    {
        const bool branch_taken_0x18fbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbe4) {
            ctx->pc = 0x18FC6Cu;
            goto label_18fc6c;
        }
    }
    ctx->pc = 0x18FBECu;
label_18fbec:
    // 0x18fbec: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fbf0: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fbf4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x18fbf4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fbf8: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x18fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x18fbfc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x18FBFCu;
    {
        const bool branch_taken_0x18fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fbfc) {
            ctx->pc = 0x18FC3Cu;
            goto label_18fc3c;
        }
    }
    ctx->pc = 0x18FC04u;
    // 0x18fc04: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x18fc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fc08: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18FC08u;
    SET_GPR_U32(ctx, 31, 0x18FC10u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18FC08u, 0x18FC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC10u;
label_18fc10:
    // 0x18fc10: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18fc10u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18fc14: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x18fc14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc18: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x18fc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18fc1c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC1Cu;
    {
        const bool branch_taken_0x18fc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc1c) {
            ctx->pc = 0x18FC2Cu;
            goto label_18fc2c;
        }
    }
    ctx->pc = 0x18FC24u;
    // 0x18fc24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18fc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc28: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18fc28u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_18fc2c:
    // 0x18fc2c: 0x128202  srl         $s0, $s2, 8
    ctx->pc = 0x18fc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 18), 8));
    // 0x18fc30: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x18fc30u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fc34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x18FC34u;
    {
        const bool branch_taken_0x18fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fc34) {
            ctx->pc = 0x18FC6Cu;
            goto label_18fc6c;
        }
    }
    ctx->pc = 0x18FC3Cu;
label_18fc3c:
    // 0x18fc3c: 0xc7ac00ac  lwc1        $f12, 0xAC($sp)
    ctx->pc = 0x18fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fc40: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x18FC40u;
    SET_GPR_U32(ctx, 31, 0x18FC48u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x18FC40u, 0x18FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18FC48u;
label_18fc48:
    // 0x18fc48: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x18fc48u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18fc4c: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x18fc4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc50: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x18fc50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x18fc54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18FC54u;
    {
        const bool branch_taken_0x18fc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc54) {
            ctx->pc = 0x18FC64u;
            goto label_18fc64;
        }
    }
    ctx->pc = 0x18FC5Cu;
    // 0x18fc5c: 0x3410ffff  ori         $s0, $zero, 0xFFFF
    ctx->pc = 0x18fc5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18fc60: 0x72009628  paddub      $s2, $s0, $zero
    ctx->pc = 0x18fc60u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18fc64:
    // 0x18fc64: 0x122982  srl         $a1, $s2, 6
    ctx->pc = 0x18fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 18), 6));
    // 0x18fc68: 0x70a09628  paddub      $s2, $a1, $zero
    ctx->pc = 0x18fc68u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
label_18fc6c:
    // 0x18fc6c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fc70: 0x94500118  lhu         $s0, 0x118($v0)
    ctx->pc = 0x18fc70u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fc74: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x18fc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x18fc78: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18fc78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fc7c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18FC7Cu;
    {
        const bool branch_taken_0x18fc7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fc7c) {
            ctx->pc = 0x18FCC8u;
            goto label_18fcc8;
        }
    }
    ctx->pc = 0x18FC84u;
    // 0x18fc84: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x18fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x18fc88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18fc88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18fc8c: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x18fc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fc90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18fc90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fc94: 0x0  nop
    ctx->pc = 0x18fc94u;
    // NOP
    // 0x18fc98: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18FC98u;
    {
        const bool branch_taken_0x18fc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fc98) {
            ctx->pc = 0x18FCBCu;
            goto label_18fcbc;
        }
    }
    ctx->pc = 0x18FCA0u;
    // 0x18fca0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x18fca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x18fca4: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x18fca4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18fca8: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x18fca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fcac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18fcacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fcb0: 0x0  nop
    ctx->pc = 0x18fcb0u;
    // NOP
    // 0x18fcb4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FCB4u;
    {
        const bool branch_taken_0x18fcb4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18fcb4) {
            ctx->pc = 0x18FCC8u;
            goto label_18fcc8;
        }
    }
    ctx->pc = 0x18FCBCu;
label_18fcbc:
    // 0x18fcbc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18fcbcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18fcc0: 0x10000259  b           . + 4 + (0x259 << 2)
    ctx->pc = 0x18FCC0u;
    {
        const bool branch_taken_0x18fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcc0) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x18FCC8u;
label_18fcc8:
    // 0x18fcc8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fccc: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fcccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fcd0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x18fcd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fcd4: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x18fcd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
    // 0x18fcd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18FCD8u;
    {
        const bool branch_taken_0x18fcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fcd8) {
            ctx->pc = 0x18FCF0u;
            goto label_18fcf0;
        }
    }
    ctx->pc = 0x18FCE0u;
    // 0x18fce0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x18fce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x18fce4: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x18fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x18fce8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FCE8u;
    {
        const bool branch_taken_0x18fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fce8) {
            ctx->pc = 0x18FCFCu;
            goto label_18fcfc;
        }
    }
    ctx->pc = 0x18FCF0u;
label_18fcf0:
    // 0x18fcf0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fcf4: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x18fcf8: 0x0  nop
    ctx->pc = 0x18fcf8u;
    // NOP
label_18fcfc:
    // 0x18fcfc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x18fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x18fd00: 0x34630015  ori         $v1, $v1, 0x15
    ctx->pc = 0x18fd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21);
    // 0x18fd04: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd08: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd0c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd10: 0x7200ae28  paddub      $s5, $s0, $zero
    ctx->pc = 0x18fd10u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd14: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd14u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd18: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd1c: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x18fd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x18fd20: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x18fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x18fd24: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fd28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fd2c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18fd2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fd30: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x18fd30u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd34: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x18fd34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18fd38: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18fd38u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18fd3c: 0x3c020eee  lui         $v0, 0xEEE
    ctx->pc = 0x18fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3822 << 16));
    // 0x18fd40: 0x3443eeee  ori         $v1, $v0, 0xEEEE
    ctx->pc = 0x18fd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61166);
    // 0x18fd44: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd44u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd48: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd4c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd50: 0x8fa40190  lw          $a0, 0x190($sp)
    ctx->pc = 0x18fd50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fd54: 0xdc8301d0  ld          $v1, 0x1D0($a0)
    ctx->pc = 0x18fd54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 464)));
    // 0x18fd58: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd58u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd5c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd60: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd64: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x18fd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18fd68: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd6c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x18fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18fd78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fd7c: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x18fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x18fd80: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x18fd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x18fd84: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18fd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fd88: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd8c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fd90: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fd90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fd94: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x18fd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x18fd98: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fd98u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fd9c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fd9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fda0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fda4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x18fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x18fda8: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fda8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdac: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fdacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fdb0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fdb0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fdb4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x18fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18fdb8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x18fdb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdbc: 0x24d00008  addiu       $s0, $a2, 0x8
    ctx->pc = 0x18fdbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x18fdc0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x18fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x18fdc4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fdc8: 0xdc4301e8  ld          $v1, 0x1E8($v0)
    ctx->pc = 0x18fdc8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 488)));
    // 0x18fdcc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fdccu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdd0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fdd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fdd4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fdd8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x18fdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18fddc: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fddcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fde0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fde4: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x18fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x18fde8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fdec: 0xdc4201e0  ld          $v0, 0x1E0($v0)
    ctx->pc = 0x18fdecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x18fdf0: 0x72001e28  paddub      $v1, $s0, $zero
    ctx->pc = 0x18fdf0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fdf4: 0x24700008  addiu       $s0, $v1, 0x8
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x18fdf8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x18fdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x18fdfc: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18fe00: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe00u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe04: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe08: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe0c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fe10: 0xdc4301d8  ld          $v1, 0x1D8($v0)
    ctx->pc = 0x18fe10u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 472)));
    // 0x18fe14: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe14u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe18: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe1c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe20: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x18fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18fe24: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe24u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe28: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe2c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe30: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fe34: 0xdc4301f0  ld          $v1, 0x1F0($v0)
    ctx->pc = 0x18fe34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x18fe38: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe38u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe3c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe40: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe44: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x18fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x18fe48: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe48u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe4c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe50: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe54: 0x3c02c02a  lui         $v0, 0xC02A
    ctx->pc = 0x18fe54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49194 << 16));
    // 0x18fe58: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x18fe58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x18fe5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fe5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fe60: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x18fe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x18fe64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18fe64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fe68: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe68u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe6c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe70: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe70u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe74: 0x24024124  addiu       $v0, $zero, 0x4124
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16676));
    // 0x18fe78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x18fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x18fe7c: 0x3c021241  lui         $v0, 0x1241
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4673 << 16));
    // 0x18fe80: 0x34422412  ori         $v0, $v0, 0x2412
    ctx->pc = 0x18fe80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9234);
    // 0x18fe84: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x18fe84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x18fe88: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x18fe88u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x18fe8c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x18fe8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x18fe90: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x18fe90u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18fe94: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fe98: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x18fe98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x18fe9c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x18fe9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18fea0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x18fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x18fea4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18FEA4u;
    {
        const bool branch_taken_0x18fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18fea4) {
            ctx->pc = 0x18FEDCu;
            goto label_18fedc;
        }
    }
    ctx->pc = 0x18FEACu;
    // 0x18feac: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18feb0: 0xc4410104  lwc1        $f1, 0x104($v0)
    ctx->pc = 0x18feb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18feb4: 0xc6e001b4  lwc1        $f0, 0x1B4($s7)
    ctx->pc = 0x18feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18feb8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18feb8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18febc: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18febcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x18fec0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x18fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fec4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x18fec8: 0xc7ac0184  lwc1        $f12, 0x184($sp)
    ctx->pc = 0x18fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18fecc: 0xc040c60  jal         func_103180
    ctx->pc = 0x18FECCu;
    SET_GPR_U32(ctx, 31, 0x18FED4u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x18FED4u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18FED4u) { return; }
    ctx->pc = 0x18FED4u;
label_18fed4:
    // 0x18fed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18FED4u;
    {
        const bool branch_taken_0x18fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18fed4) {
            ctx->pc = 0x18FEE8u;
            goto label_18fee8;
        }
    }
    ctx->pc = 0x18FEDCu;
label_18fedc:
    // 0x18fedc: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18fee0: 0xc4400104  lwc1        $f0, 0x104($v0)
    ctx->pc = 0x18fee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fee4: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x18fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_18fee8:
    // 0x18fee8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x18fee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18feec: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x18feecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x18fef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18fef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18fef4: 0x0  nop
    ctx->pc = 0x18fef4u;
    // NOP
    // 0x18fef8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18fef8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18fefc: 0x0  nop
    ctx->pc = 0x18fefcu;
    // NOP
    // 0x18ff00: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18FF00u;
    {
        const bool branch_taken_0x18ff00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff00) {
            ctx->pc = 0x18FF2Cu;
            goto label_18ff2c;
        }
    }
    ctx->pc = 0x18FF08u;
    // 0x18ff08: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x18ff08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff0c: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x18ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x18ff10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18ff10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18ff14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff18: 0x0  nop
    ctx->pc = 0x18ff18u;
    // NOP
    // 0x18ff1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ff1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ff20: 0x0  nop
    ctx->pc = 0x18ff20u;
    // NOP
    // 0x18ff24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FF24u;
    {
        const bool branch_taken_0x18ff24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff24) {
            ctx->pc = 0x18FF38u;
            goto label_18ff38;
        }
    }
    ctx->pc = 0x18FF2Cu;
label_18ff2c:
    // 0x18ff2c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18ff2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18ff30: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x18FF30u;
    {
        const bool branch_taken_0x18ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff30) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x18FF38u;
label_18ff38:
    // 0x18ff38: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff3c: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x18ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x18ff40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff44: 0x0  nop
    ctx->pc = 0x18ff44u;
    // NOP
    // 0x18ff48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x18ff48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ff4c: 0x0  nop
    ctx->pc = 0x18ff4cu;
    // NOP
    // 0x18ff50: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x18FF50u;
    {
        const bool branch_taken_0x18ff50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff50) {
            ctx->pc = 0x18FF7Cu;
            goto label_18ff7c;
        }
    }
    ctx->pc = 0x18FF58u;
    // 0x18ff58: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x18ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ff5c: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x18ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x18ff60: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x18ff60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x18ff64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff68: 0x0  nop
    ctx->pc = 0x18ff68u;
    // NOP
    // 0x18ff6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18ff6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ff70: 0x0  nop
    ctx->pc = 0x18ff70u;
    // NOP
    // 0x18ff74: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x18FF74u;
    {
        const bool branch_taken_0x18ff74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ff74) {
            ctx->pc = 0x18FF88u;
            goto label_18ff88;
        }
    }
    ctx->pc = 0x18FF7Cu;
label_18ff7c:
    // 0x18ff7c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18ff7cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18ff80: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x18FF80u;
    {
        const bool branch_taken_0x18ff80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff80) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x18FF88u;
label_18ff88:
    // 0x18ff88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ff8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ff90: 0x0  nop
    ctx->pc = 0x18ff90u;
    // NOP
    // 0x18ff94: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x18ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x18ff98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18ff9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18ff9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18ffa0: 0x0  nop
    ctx->pc = 0x18ffa0u;
    // NOP
    // 0x18ffa4: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x18ffa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x18ffa8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffac: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x18ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffb0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x18ffb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x18ffb4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffb8: 0xc44000f0  lwc1        $f0, 0xF0($v0)
    ctx->pc = 0x18ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffbc: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x18ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x18ffc0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffc4: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x18ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ffc8: 0xc4400108  lwc1        $f0, 0x108($v0)
    ctx->pc = 0x18ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffcc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18ffccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18ffd0: 0xc6800014  lwc1        $f0, 0x14($s4)
    ctx->pc = 0x18ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18ffd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ffd8: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x18ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ffdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x18ffdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18ffe0: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x18ffe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x18ffe4: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x18ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x18ffe8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x18ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18ffec: 0xc440010c  lwc1        $f0, 0x10C($v0)
    ctx->pc = 0x18ffecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fff0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x18fff0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x18fff4: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x18fff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18fff8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x18fff8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18fffc: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x18fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x190000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x190004: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x190004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x190008: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19000c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19000cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190010: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x190010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x190014: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x190014u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x190018: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x190018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x19001c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19001cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190020: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x190020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190024: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x190024u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x190028: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19002c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x19002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x190030: 0xc7a10188  lwc1        $f1, 0x188($sp)
    ctx->pc = 0x190030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190034: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x190034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190038: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19003c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x19003cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190040: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190040u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190044: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x190044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x190048: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19004c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x19004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x190050: 0xc7a1018c  lwc1        $f1, 0x18C($sp)
    ctx->pc = 0x190050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190054: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x190054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190058: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x190058u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19005c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x19005cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190060: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x190060u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190064: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x190064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x190068: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19006c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19006cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190070: 0x0  nop
    ctx->pc = 0x190070u;
    // NOP
    // 0x190074: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x190074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x190078: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19007c: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x19007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x190080: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x190080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190084: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x190084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x190088: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19008c: 0x0  nop
    ctx->pc = 0x19008cu;
    // NOP
    // 0x190090: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x190090u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x190094: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x190094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190098: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x190098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19009c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x19009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1900a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1900a4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1900a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1900a8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1900a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1900ac: 0x8c420204  lw          $v0, 0x204($v0)
    ctx->pc = 0x1900acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x1900b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1900b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1900b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1900b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1900b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1900b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1900bc: 0x0  nop
    ctx->pc = 0x1900bcu;
    // NOP
    // 0x1900c0: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1900c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1900c4: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x1900c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900c8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1900c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1900cc: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1900ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1900d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1900d4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1900d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x1900d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1900d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1900dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1900dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1900e0: 0x0  nop
    ctx->pc = 0x1900e0u;
    // NOP
    // 0x1900e4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1900e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x1900e8: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1900e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900ec: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1900ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1900f0: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1900f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900f4: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1900f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1900f8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1900f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1900fc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x1900fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x190100: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x190100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190104: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x190104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x190108: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x190108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19010c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x19010cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x190110: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x190110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190114: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x190114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x190118: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x190118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19011c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x19011cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x190120: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x190120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190124: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x190124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x190128: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x19012c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x19012Cu;
    SET_GPR_U32(ctx, 31, 0x190134u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x19012Cu, 0x190134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190134u;
label_190134:
    // 0x190134: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19013c: 0x0  nop
    ctx->pc = 0x19013cu;
    // NOP
    // 0x190140: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x190140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x190144: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190148: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x190148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x19014c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x19014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x190150: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x190150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x190154: 0xc44c0030  lwc1        $f12, 0x30($v0)
    ctx->pc = 0x190154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190158: 0xc056858  jal         func_15A160
    ctx->pc = 0x190158u;
    SET_GPR_U32(ctx, 31, 0x190160u);
    ctx->pc = 0x15A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A160u, 0x190158u, 0x190160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190160u;
label_190160:
    // 0x190160: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x190160u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190164: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x190164u;
    {
        const bool branch_taken_0x190164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190164) {
            ctx->pc = 0x190218u;
            goto label_190218;
        }
    }
    ctx->pc = 0x19016Cu;
label_19016c:
    // 0x19016c: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x19016cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x190170: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190174: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x190174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x190178: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x190178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x19017c: 0x244600b0  addiu       $a2, $v0, 0xB0
    ctx->pc = 0x19017cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x190180: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x190180u;
    SET_GPR_U32(ctx, 31, 0x190188u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x190188u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190188u) { return; }
    ctx->pc = 0x190188u;
label_190188:
    // 0x190188: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x190188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19018c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x19018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190190: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x190190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x190194: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x190194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x190198: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x190198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19019c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19019cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1901a0: 0x0  nop
    ctx->pc = 0x1901a0u;
    // NOP
    // 0x1901a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1901a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1901a8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1901a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1901acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1901b0: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1901b4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1901b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1901b8: 0xe44000b0  swc1        $f0, 0xB0($v0)
    ctx->pc = 0x1901b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 176), bits); }
    // 0x1901bc: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1901bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1901c0: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1901c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1901c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1901c8: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x1901c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x1901cc: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x1901ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x1901d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1901d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1901d4: 0x0  nop
    ctx->pc = 0x1901d4u;
    // NOP
    // 0x1901d8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1901d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1901dc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1901dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1901e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1901e4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1901e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1901e8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1901e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1901ec: 0xe44000b4  swc1        $f0, 0xB4($v0)
    ctx->pc = 0x1901ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 180), bits); }
    // 0x1901f0: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1901f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1901f4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x1901f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1901f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1901f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1901fc: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1901fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
    // 0x190200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x190200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x190204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190208: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x190208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x19020c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x19020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190210: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x190210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x190214: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x190214u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_190218:
    // 0x190218: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x190218u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19021c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x19021Cu;
    {
        const bool branch_taken_0x19021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19021c) {
            ctx->pc = 0x19016Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19016c;
        }
    }
    ctx->pc = 0x190224u;
    // 0x190224: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190228: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x190228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x19022c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x190230: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x190230u;
    {
        const bool branch_taken_0x190230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x190230) {
            ctx->pc = 0x190270u;
            goto label_190270;
        }
    }
    ctx->pc = 0x190238u;
    // 0x190238: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19023c: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x19023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190240: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190244: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190248: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x190248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19024c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x19024cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x190250: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190254: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x190254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190258: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x190258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x19025c: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x19025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190260: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x190260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190264: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x190264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x190268: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x190268u;
    {
        const bool branch_taken_0x190268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190268) {
            ctx->pc = 0x190340u;
            goto label_190340;
        }
    }
    ctx->pc = 0x190270u;
label_190270:
    // 0x190270: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190274: 0x9046011a  lbu         $a2, 0x11A($v0)
    ctx->pc = 0x190274u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x190278: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x190278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x19027c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x19027cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x190280: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x190280u;
    {
        const bool branch_taken_0x190280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x190280) {
            ctx->pc = 0x1902C0u;
            goto label_1902c0;
        }
    }
    ctx->pc = 0x190288u;
    // 0x190288: 0x8fa30190  lw          $v1, 0x190($sp)
    ctx->pc = 0x190288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19028c: 0xc46001c8  lwc1        $f0, 0x1C8($v1)
    ctx->pc = 0x19028cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190290: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x190294: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190298: 0xc44001cc  lwc1        $f0, 0x1CC($v0)
    ctx->pc = 0x190298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19029c: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x19029cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1902a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902a4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x1902a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902a8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1902a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1902ac: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902b0: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x1902b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902b4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1902b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1902b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1902B8u;
    {
        const bool branch_taken_0x1902b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902b8) {
            ctx->pc = 0x190340u;
            goto label_190340;
        }
    }
    ctx->pc = 0x1902C0u;
label_1902c0:
    // 0x1902c0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902c4: 0x9042011a  lbu         $v0, 0x11A($v0)
    ctx->pc = 0x1902c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x1902c8: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x1902c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1902cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1902ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1902d0: 0x16e2000f  bne         $s7, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1902D0u;
    {
        const bool branch_taken_0x1902d0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x1902d0) {
            ctx->pc = 0x190310u;
            goto label_190310;
        }
    }
    ctx->pc = 0x1902D8u;
    // 0x1902d8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902dc: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x1902dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902e0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x1902e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1902e4: 0x8fb60190  lw          $s6, 0x190($sp)
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902e8: 0xc6c001c4  lwc1        $f0, 0x1C4($s6)
    ctx->pc = 0x1902e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902ec: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x1902ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1902f0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1902f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1902f4: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x1902f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1902f8: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1902f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1902fc: 0x8fb60190  lw          $s6, 0x190($sp)
    ctx->pc = 0x1902fcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190300: 0xc6c001cc  lwc1        $f0, 0x1CC($s6)
    ctx->pc = 0x190300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190304: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x190304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x190308: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x190308u;
    {
        const bool branch_taken_0x190308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190308) {
            ctx->pc = 0x190340u;
            goto label_190340;
        }
    }
    ctx->pc = 0x190310u;
label_190310:
    // 0x190310: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190314: 0xc44001c0  lwc1        $f0, 0x1C0($v0)
    ctx->pc = 0x190314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190318: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x190318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x19031c: 0x8fbe0190  lw          $fp, 0x190($sp)
    ctx->pc = 0x19031cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190320: 0xc7c001cc  lwc1        $f0, 0x1CC($fp)
    ctx->pc = 0x190320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190324: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x190324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x190328: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x19032c: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x19032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190330: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x190330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x190334: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190338: 0xc44001c4  lwc1        $f0, 0x1C4($v0)
    ctx->pc = 0x190338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19033c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x19033cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_190340:
    // 0x190340: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x190340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190344: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x190344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x190348: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x190348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19034c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x19034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x190350: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x190350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190354: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x190354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x190358: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x190358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19035c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x19035cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x190360: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x190360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190364: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x190364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x190368: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x190368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19036c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x19036cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x190370: 0x27b400f0  addiu       $s4, $sp, 0xF0
    ctx->pc = 0x190370u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x190374: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x190374u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x190378: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x190378u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x19037c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19037cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190380: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190384: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x190384u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190388: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x190388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x19038c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19038cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190390: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x190390u;
    SET_GPR_U32(ctx, 31, 0x190398u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x190398u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190398u) { return; }
    ctx->pc = 0x190398u;
label_190398:
    // 0x190398: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x190398u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19039c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19039cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903a0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1903a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1903a4: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1903a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1903a8: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1903a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1903ac: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1903ACu;
    SET_GPR_U32(ctx, 31, 0x1903B4u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1903B4u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1903B4u) { return; }
    ctx->pc = 0x1903B4u;
label_1903b4:
    // 0x1903b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1903b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903b8: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1903b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1903bc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1903bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1903c0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1903c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1903c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1903c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903c8: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1903c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1903cc: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1903ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1903d0: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x1903d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x1903d4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1903d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1903d8: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x1903D8u;
    SET_GPR_U32(ctx, 31, 0x1903E0u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x1903E0u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1903E0u) { return; }
    ctx->pc = 0x1903E0u;
label_1903e0:
    // 0x1903e0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1903e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1903e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1903e8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1903e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1903ec: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x1903ECu;
    SET_GPR_U32(ctx, 31, 0x1903F4u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x1903F4u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1903F4u) { return; }
    ctx->pc = 0x1903F4u;
label_1903f4:
    // 0x1903f4: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1903f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1903f8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1903f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1903fc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1903fcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190400: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x190400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x190404: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x190408: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x190408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x19040c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19040cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190410: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190414: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x190414u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190418: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x190418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x19041c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x19041cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190420: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x190420u;
    SET_GPR_U32(ctx, 31, 0x190428u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x190428u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190428u) { return; }
    ctx->pc = 0x190428u;
label_190428:
    // 0x190428: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190428u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19042c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19042cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190430: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x190430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x190434: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x190434u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190438: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x190438u;
    SET_GPR_U32(ctx, 31, 0x190440u);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x190440u;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190440u) { return; }
    ctx->pc = 0x190440u;
label_190440:
    // 0x190440: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190444: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x190444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x190448: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x190448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19044c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x19044cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x190450: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190454: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190458: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x190458u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19045c: 0x24450090  addiu       $a1, $v0, 0x90
    ctx->pc = 0x19045cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x190460: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x190460u;
    SET_GPR_U32(ctx, 31, 0x190468u);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x190468u;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190468u) { return; }
    ctx->pc = 0x190468u;
label_190468:
    // 0x190468: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x190468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19046c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x19046cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190470: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x190470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x190474: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x190474u;
    SET_GPR_U32(ctx, 31, 0x19047Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x19047Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19047Cu) { return; }
    ctx->pc = 0x19047Cu;
label_19047c:
    // 0x19047c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x19047cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x190480: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x190480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x190484: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x190484u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x190488: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x190488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19048c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19048cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x190490: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x190490u;
    {
        const bool branch_taken_0x190490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x190490) {
            ctx->pc = 0x190514u;
            goto label_190514;
        }
    }
    ctx->pc = 0x190498u;
    // 0x190498: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x19049c: 0x8c22a600  lw          $v0, -0x5A00($at)
    ctx->pc = 0x19049cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904a0: 0x2029823  subu        $s3, $s0, $v0
    ctx->pc = 0x1904a0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1904a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1904a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1904a8: 0x138082  srl         $s0, $s3, 2
    ctx->pc = 0x1904a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 19), 2));
    // 0x1904ac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x1904acu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1904b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1904b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1904b4: 0x8c23a600  lw          $v1, -0x5A00($at)
    ctx->pc = 0x1904b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1904b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1904bc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1904bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1904c0: 0x245025fc  addiu       $s0, $v0, 0x25FC
    ctx->pc = 0x1904c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9724));
    // 0x1904c4: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1904c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1904c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1904C8u;
    {
        const bool branch_taken_0x1904c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1904c8) {
            ctx->pc = 0x1904DCu;
            goto label_1904dc;
        }
    }
    ctx->pc = 0x1904D0u;
    // 0x1904d0: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1904d0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1904d4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1904D4u;
    {
        const bool branch_taken_0x1904d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1904d4) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x1904DCu;
label_1904dc:
    // 0x1904dc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1904dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1904e0: 0x8c30a600  lw          $s0, -0x5A00($at)
    ctx->pc = 0x1904e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904e4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1904e4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1904e8: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1904e8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1904ec: 0xc06b018  jal         func_1AC060
    ctx->pc = 0x1904ECu;
    SET_GPR_U32(ctx, 31, 0x1904F4u);
    ctx->pc = 0x1AC060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC060u, 0x1904ECu, 0x1904F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1904F4u;
label_1904f4:
    // 0x1904f4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x1904f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x1904f8: 0x8c23a600  lw          $v1, -0x5A00($at)
    ctx->pc = 0x1904f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A600u));
    // 0x1904fc: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x1904fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x190500: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x190500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x190504: 0xac22a600  sw          $v0, -0x5A00($at)
    ctx->pc = 0x190504u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A600u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A600u, _value); } while (0);
    // 0x190508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19050c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x19050Cu;
    {
        const bool branch_taken_0x19050c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19050c) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x190514u;
label_190514:
    // 0x190514: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190518: 0x8c232580  lw          $v1, 0x2580($at)
    ctx->pc = 0x190518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532580u));
    // 0x19051c: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x19051cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x190520: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x190520u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190524: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x190524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x190528: 0x131082  srl         $v0, $s3, 2
    ctx->pc = 0x190528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 2));
    // 0x19052c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19052cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x190530: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190534: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x190534u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x190538: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x190538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19053c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x190540: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x190540u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x190544: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x190544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x190548: 0x28480  sll         $s0, $v0, 18
    ctx->pc = 0x190548u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x19054c: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x19054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x190550: 0x24622580  addiu       $v0, $v1, 0x2580
    ctx->pc = 0x190550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 9600));
    // 0x190554: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x190554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x190558: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x190558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x19055c: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x19055cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x190560: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x190560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x190564: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x190564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x190568: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x190568u;
    {
        const bool branch_taken_0x190568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x190568) {
            ctx->pc = 0x19057Cu;
            goto label_19057c;
        }
    }
    ctx->pc = 0x190570u;
    // 0x190570: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x190570u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x190574: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x190574u;
    {
        const bool branch_taken_0x190574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x190574) {
            ctx->pc = 0x190628u;
            goto label_190628;
        }
    }
    ctx->pc = 0x19057Cu;
label_19057c:
    // 0x19057c: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x19057cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x190580: 0x26a20004  addiu       $v0, $s5, 0x4
    ctx->pc = 0x190580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x190584: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x190584u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x190588: 0x2662fff0  addiu       $v0, $s3, -0x10
    ctx->pc = 0x190588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967280));
    // 0x19058c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19058cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x190590: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x190590u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x190594: 0x3c105000  lui         $s0, 0x5000
    ctx->pc = 0x190594u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20480 << 16));
    // 0x190598: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x190598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x19059c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x19059cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1905a0: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1905a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1905a4: 0x94500118  lhu         $s0, 0x118($v0)
    ctx->pc = 0x1905a4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x1905a8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x1905a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x1905ac: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1905acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1905b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1905B0u;
    {
        const bool branch_taken_0x1905b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905b0) {
            ctx->pc = 0x1905E8u;
            goto label_1905e8;
        }
    }
    ctx->pc = 0x1905B8u;
    // 0x1905b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1905b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1905bc: 0x8c30013c  lw          $s0, 0x13C($at)
    ctx->pc = 0x1905bcu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1905c0: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x1905c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1905c4: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1905c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1905c8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1905c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1905cc: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x1905ccu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x1905d0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x1905d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1905d4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1905d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1905d8: 0xc06af4c  jal         func_1ABD30
    ctx->pc = 0x1905D8u;
    SET_GPR_U32(ctx, 31, 0x1905E0u);
    ctx->pc = 0x1ABD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD30u, 0x1905D8u, 0x1905E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1905E0u;
label_1905e0:
    // 0x1905e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1905E0u;
    {
        const bool branch_taken_0x1905e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1905e0) {
            ctx->pc = 0x190610u;
            goto label_190610;
        }
    }
    ctx->pc = 0x1905E8u;
label_1905e8:
    // 0x1905e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1905e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1905ec: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x1905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1905f0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1905f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1905f4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1905f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1905f8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1905f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1905fc: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x1905fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x190600: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x190600u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x190604: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x190604u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x190608: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x190608u;
    SET_GPR_U32(ctx, 31, 0x190610u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x190608u, 0x190610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190610u;
label_190610:
    // 0x190610: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x190610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190614: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x190614u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x190618: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x190618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x19061c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19061cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x190620: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x190620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x190624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x190624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_190628:
    // 0x190628: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x190628u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19062c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x19062cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x190630: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x190630u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x190634: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x190634u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x190638: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x190638u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19063c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19063cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x190640: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x190640u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190644: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x190644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x190648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19064c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19064cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190650: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x190650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x190654: 0x3e00008  jr          $ra
    ctx->pc = 0x190654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19065Cu;
}
