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

// Function: Message_trans
// Address: 0x297110 - 0x297908
void Message_trans_0x297110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Message_trans_0x297110");
#endif

    switch (ctx->pc) {
        case 0x297204u: goto label_297204;
        case 0x297328u: goto label_297328;
        case 0x297618u: goto label_297618;
        case 0x2976acu: goto label_2976ac;
        case 0x297788u: goto label_297788;
        case 0x2977a0u: goto label_2977a0;
        case 0x2977b8u: goto label_2977b8;
        case 0x297838u: goto label_297838;
        case 0x297870u: goto label_297870;
        case 0x2978a4u: goto label_2978a4;
        case 0x2978d0u: goto label_2978d0;
        default: break;
    }

    ctx->pc = 0x297110u;

    // 0x297110: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x297110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x297114: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x297114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x297118: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x297118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x29711c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x29711cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x297120: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x297120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x297124: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x297124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x297128: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x297128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x29712c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29712cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x297130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x297130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x297134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x297138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29713c: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x29713cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
    // 0x297140: 0x2463cb10  addiu       $v1, $v1, -0x34F0
    ctx->pc = 0x297140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953744));
    // 0x297144: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x297144u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297148: 0x26030148  addiu       $v1, $s0, 0x148
    ctx->pc = 0x297148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x29714c: 0x70609e28  paddub      $s3, $v1, $zero
    ctx->pc = 0x29714cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297150: 0x26032d48  addiu       $v1, $s0, 0x2D48
    ctx->pc = 0x297150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 11592));
    // 0x297154: 0x7060a628  paddub      $s4, $v1, $zero
    ctx->pc = 0x297154u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297158: 0x26033d48  addiu       $v1, $s0, 0x3D48
    ctx->pc = 0x297158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 15688));
    // 0x29715c: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x29715cu;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297160: 0x8e0369bc  lw          $v1, 0x69BC($s0)
    ctx->pc = 0x297160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27068)));
    // 0x297164: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x297164u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297168: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x297168u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x29716c: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x29716cu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x297170: 0x920369c9  lbu         $v1, 0x69C9($s0)
    ctx->pc = 0x297170u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27081)));
    // 0x297174: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x297174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x297178: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x297178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29717c: 0x10c301d5  beq         $a2, $v1, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x29717Cu;
    {
        const bool branch_taken_0x29717c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x29717c) {
            ctx->pc = 0x2978D4u;
            goto label_2978d4;
        }
    }
    ctx->pc = 0x297184u;
    // 0x297184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x297184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x297188: 0x8c231a3c  lw          $v1, 0x1A3C($at)
    ctx->pc = 0x297188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A3Cu));
    // 0x29718c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x29718cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x297190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x297190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x297194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297194u;
    {
        const bool branch_taken_0x297194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x297194) {
            ctx->pc = 0x2971B0u;
            goto label_2971b0;
        }
    }
    ctx->pc = 0x29719Cu;
    // 0x29719c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x29719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2971a0: 0x24426164  addiu       $v0, $v0, 0x6164
    ctx->pc = 0x2971a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24932));
    // 0x2971a4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2971a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2971a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2971A8u;
    {
        const bool branch_taken_0x2971a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2971a8) {
            ctx->pc = 0x2971BCu;
            goto label_2971bc;
        }
    }
    ctx->pc = 0x2971B0u;
label_2971b0:
    // 0x2971b0: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x2971b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x2971b4: 0x26561a14  addiu       $s6, $s2, 0x1A14
    ctx->pc = 0x2971b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 6676));
    // 0x2971b8: 0xafb600ac  sw          $s6, 0xAC($sp)
    ctx->pc = 0x2971b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 22));
label_2971bc:
    // 0x2971bc: 0x860269ac  lh          $v0, 0x69AC($s0)
    ctx->pc = 0x2971bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x2971c0: 0x2943c  dsll32      $s2, $v0, 16
    ctx->pc = 0x2971c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971c4: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x2971c4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x2971c8: 0x860269a8  lh          $v0, 0x69A8($s0)
    ctx->pc = 0x2971c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27048)));
    // 0x2971cc: 0xa60269a4  sh          $v0, 0x69A4($s0)
    ctx->pc = 0x2971ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27044), (uint16_t)GPR_U32(ctx, 2));
    // 0x2971d0: 0x860269aa  lh          $v0, 0x69AA($s0)
    ctx->pc = 0x2971d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27050)));
    // 0x2971d4: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2971d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971d8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2971d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2971dc: 0x860269ae  lh          $v0, 0x69AE($s0)
    ctx->pc = 0x2971dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27054)));
    // 0x2971e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2971e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2971e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2971e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2971e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2971ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2971ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2971f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2971f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2971f4: 0xa60269a6  sh          $v0, 0x69A6($s0)
    ctx->pc = 0x2971f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27046), (uint16_t)GPR_U32(ctx, 2));
    // 0x2971f8: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x2971f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2971fc: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x2971FCu;
    {
        const bool branch_taken_0x2971fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2971fc) {
            ctx->pc = 0x2977F0u;
            goto label_2977f0;
        }
    }
    ctx->pc = 0x297204u;
label_297204:
    // 0x297204: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x297204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297208: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297208u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29720c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29720cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297210: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x297210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x297214: 0x1062003e  beq         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x297214u;
    {
        const bool branch_taken_0x297214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297214) {
            ctx->pc = 0x297310u;
            goto label_297310;
        }
    }
    ctx->pc = 0x29721Cu;
    // 0x29721c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x29721cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x297220: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x297220u;
    {
        const bool branch_taken_0x297220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297220) {
            ctx->pc = 0x2972FCu;
            goto label_2972fc;
        }
    }
    ctx->pc = 0x297228u;
    // 0x297228: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x297228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29722c: 0x1062002c  beq         $v1, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29722Cu;
    {
        const bool branch_taken_0x29722c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29722c) {
            ctx->pc = 0x2972E0u;
            goto label_2972e0;
        }
    }
    ctx->pc = 0x297234u;
    // 0x297234: 0x2417000e  addiu       $s7, $zero, 0xE
    ctx->pc = 0x297234u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x297238: 0x1077003b  beq         $v1, $s7, . + 4 + (0x3B << 2)
    ctx->pc = 0x297238u;
    {
        const bool branch_taken_0x297238 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        if (branch_taken_0x297238) {
            ctx->pc = 0x297328u;
            goto label_297328;
        }
    }
    ctx->pc = 0x297240u;
    // 0x297240: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x297240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x297244: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x297244u;
    {
        const bool branch_taken_0x297244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297244) {
            ctx->pc = 0x297294u;
            goto label_297294;
        }
    }
    ctx->pc = 0x29724Cu;
    // 0x29724c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29724cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x297250: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297250u;
    {
        const bool branch_taken_0x297250 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297250) {
            ctx->pc = 0x297260u;
            goto label_297260;
        }
    }
    ctx->pc = 0x297258u;
    // 0x297258: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x297258u;
    {
        const bool branch_taken_0x297258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297258) {
            ctx->pc = 0x297328u;
            goto label_297328;
        }
    }
    ctx->pc = 0x297260u;
label_297260:
    // 0x297260: 0x8e0269d8  lw          $v0, 0x69D8($s0)
    ctx->pc = 0x297260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x297264: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x297264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x297268: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x297268u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x29726c: 0x860269a6  lh          $v0, 0x69A6($s0)
    ctx->pc = 0x29726cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27046)));
    // 0x297270: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x297270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297274: 0xa60269a6  sh          $v0, 0x69A6($s0)
    ctx->pc = 0x297274u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27046), (uint16_t)GPR_U32(ctx, 2));
    // 0x297278: 0x861769ac  lh          $s7, 0x69AC($s0)
    ctx->pc = 0x297278u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x29727c: 0x171c3c  dsll32      $v1, $s7, 16
    ctx->pc = 0x29727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) << (32 + 16));
    // 0x297280: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x297280u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x297284: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x297284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297288: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x297288u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29728c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x29728Cu;
    {
        const bool branch_taken_0x29728c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29728c) {
            ctx->pc = 0x297328u;
            goto label_297328;
        }
    }
    ctx->pc = 0x297294u;
label_297294:
    // 0x297294: 0x860269a8  lh          $v0, 0x69A8($s0)
    ctx->pc = 0x297294u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27048)));
    // 0x297298: 0xa60269a4  sh          $v0, 0x69A4($s0)
    ctx->pc = 0x297298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27044), (uint16_t)GPR_U32(ctx, 2));
    // 0x29729c: 0x860269aa  lh          $v0, 0x69AA($s0)
    ctx->pc = 0x29729cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27050)));
    // 0x2972a0: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x2972a0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972a4: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x2972a4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x2972a8: 0x860269ae  lh          $v0, 0x69AE($s0)
    ctx->pc = 0x2972a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27054)));
    // 0x2972ac: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2972acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2972b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2972b4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2972b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2972b8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2972b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2972bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2972c0: 0xa60269a6  sh          $v0, 0x69A6($s0)
    ctx->pc = 0x2972c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 27046), (uint16_t)GPR_U32(ctx, 2));
    // 0x2972c4: 0x860269ac  lh          $v0, 0x69AC($s0)
    ctx->pc = 0x2972c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x2972c8: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2972c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2972cc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2972ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2972d0: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x2972d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x2972d4: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x2972d4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2972d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2972D8u;
    {
        const bool branch_taken_0x2972d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972d8) {
            ctx->pc = 0x297328u;
            goto label_297328;
        }
    }
    ctx->pc = 0x2972E0u;
label_2972e0:
    // 0x2972e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2972e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2972e4: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x2972e4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2972e8: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x2972e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2972ec: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x2972ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2972f0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x2972f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2972f4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2972F4u;
    {
        const bool branch_taken_0x2972f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2972f4) {
            ctx->pc = 0x297328u;
            goto label_297328;
        }
    }
    ctx->pc = 0x2972FCu;
label_2972fc:
    // 0x2972fc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2972fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297300: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x297300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297304: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x297304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x297308: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x297308u;
    {
        const bool branch_taken_0x297308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297308) {
            ctx->pc = 0x297328u;
            goto label_297328;
        }
    }
    ctx->pc = 0x297310u;
label_297310:
    // 0x297310: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x297310u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x297314: 0x8e0369d4  lw          $v1, 0x69D4($s0)
    ctx->pc = 0x297314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297318: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x297318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29731c: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x29731cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x297320: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x297320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x297324: 0x0  nop
    ctx->pc = 0x297324u;
    // NOP
label_297328:
    // 0x297328: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29732c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29732cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297330: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x297330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x297334: 0x1062ffb3  beq         $v1, $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x297334u;
    {
        const bool branch_taken_0x297334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297334) {
            ctx->pc = 0x297204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297204;
        }
    }
    ctx->pc = 0x29733Cu;
    // 0x29733c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x29733cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297344: 0x28410062  slti        $at, $v0, 0x62
    ctx->pc = 0x297344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x297348: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x297348u;
    {
        const bool branch_taken_0x297348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x297348) {
            ctx->pc = 0x2973D8u;
            goto label_2973d8;
        }
    }
    ctx->pc = 0x297350u;
    // 0x297350: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297354: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297358: 0x2842005e  slti        $v0, $v0, 0x5E
    ctx->pc = 0x297358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)94) ? 1 : 0);
    // 0x29735c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x29735Cu;
    {
        const bool branch_taken_0x29735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29735c) {
            ctx->pc = 0x2973D8u;
            goto label_2973d8;
        }
    }
    ctx->pc = 0x297364u;
    // 0x297364: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297368: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29736c: 0x24020061  addiu       $v0, $zero, 0x61
    ctx->pc = 0x29736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x297370: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x297370u;
    {
        const bool branch_taken_0x297370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297370) {
            ctx->pc = 0x2973C8u;
            goto label_2973c8;
        }
    }
    ctx->pc = 0x297378u;
    // 0x297378: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x297378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29737c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29737Cu;
    {
        const bool branch_taken_0x29737c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x29737c) {
            ctx->pc = 0x2973BCu;
            goto label_2973bc;
        }
    }
    ctx->pc = 0x297384u;
    // 0x297384: 0x2402005f  addiu       $v0, $zero, 0x5F
    ctx->pc = 0x297384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x297388: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x297388u;
    {
        const bool branch_taken_0x297388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297388) {
            ctx->pc = 0x2973B0u;
            goto label_2973b0;
        }
    }
    ctx->pc = 0x297390u;
    // 0x297390: 0x2402005e  addiu       $v0, $zero, 0x5E
    ctx->pc = 0x297390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x297394: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297394u;
    {
        const bool branch_taken_0x297394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x297394) {
            ctx->pc = 0x2973A4u;
            goto label_2973a4;
        }
    }
    ctx->pc = 0x29739Cu;
    // 0x29739c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29739Cu;
    {
        const bool branch_taken_0x29739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29739c) {
            ctx->pc = 0x2973D0u;
            goto label_2973d0;
        }
    }
    ctx->pc = 0x2973A4u;
label_2973a4:
    // 0x2973a4: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x2973a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2973a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2973A8u;
    {
        const bool branch_taken_0x2973a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973a8) {
            ctx->pc = 0x2973D0u;
            goto label_2973d0;
        }
    }
    ctx->pc = 0x2973B0u;
label_2973b0:
    // 0x2973b0: 0x26160030  addiu       $s6, $s0, 0x30
    ctx->pc = 0x2973b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2973b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2973B4u;
    {
        const bool branch_taken_0x2973b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973b4) {
            ctx->pc = 0x2973D0u;
            goto label_2973d0;
        }
    }
    ctx->pc = 0x2973BCu;
label_2973bc:
    // 0x2973bc: 0x26160058  addiu       $s6, $s0, 0x58
    ctx->pc = 0x2973bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2973c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2973C0u;
    {
        const bool branch_taken_0x2973c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2973c0) {
            ctx->pc = 0x2973D0u;
            goto label_2973d0;
        }
    }
    ctx->pc = 0x2973C8u;
label_2973c8:
    // 0x2973c8: 0x26160080  addiu       $s6, $s0, 0x80
    ctx->pc = 0x2973c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x2973cc: 0x0  nop
    ctx->pc = 0x2973ccu;
    // NOP
label_2973d0:
    // 0x2973d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2973d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2973d4: 0x0  nop
    ctx->pc = 0x2973d4u;
    // NOP
label_2973d8:
    // 0x2973d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2973d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2973dc: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x2973dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x2973e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2973e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2973e4: 0x34421007  ori         $v0, $v0, 0x1007
    ctx->pc = 0x2973e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4103);
    // 0x2973e8: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x2973e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x2973ec: 0x26c20018  addiu       $v0, $s6, 0x18
    ctx->pc = 0x2973ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x2973f0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x2973f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2973f4: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x2973f4u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x2973f8: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2973f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2973fc: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x2973fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297400: 0x94470002  lhu         $a3, 0x2($v0)
    ctx->pc = 0x297400u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x297404: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x297404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x297408: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x297408u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29740c: 0x2403fc0f  addiu       $v1, $zero, -0x3F1
    ctx->pc = 0x29740cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966287));
    // 0x297410: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x297410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x297414: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x297414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x297418: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x297418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x29741c: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x29741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297420: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x297420u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x297424: 0x3006001f  andi        $a2, $zero, 0x1F
    ctx->pc = 0x297424u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x297428: 0x2403ffe0  addiu       $v1, $zero, -0x20
    ctx->pc = 0x297428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x29742c: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x29742cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x297430: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x297430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x297434: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x297434u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x297438: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x297438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x29743c: 0x26820008  addiu       $v0, $s4, 0x8
    ctx->pc = 0x29743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x297440: 0x90470007  lbu         $a3, 0x7($v0)
    ctx->pc = 0x297440u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
    // 0x297444: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x297444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x297448: 0x33140  sll         $a2, $v1, 5
    ctx->pc = 0x297448u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x29744c: 0x2403ff1f  addiu       $v1, $zero, -0xE1
    ctx->pc = 0x29744cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967071));
    // 0x297450: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x297450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x297454: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x297454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x297458: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x297458u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x29745c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x29745cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x297460: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x297460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297464: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x297464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x297468: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x297468u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29746c: 0x0  nop
    ctx->pc = 0x29746cu;
    // NOP
    // 0x297470: 0x0  nop
    ctx->pc = 0x297470u;
    // NOP
    // 0x297474: 0x1810  mfhi        $v1
    ctx->pc = 0x297474u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x297478: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x297478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x29747c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29747cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x297480: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x297480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x297484: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x297484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x297488: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x297488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x29748c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x29748cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297490: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x297490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x297494: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x297494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
    // 0x297498: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x297498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
    // 0x29749c: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x29749cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2974a0: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x2974a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2974a4: 0x0  nop
    ctx->pc = 0x2974a4u;
    // NOP
    // 0x2974a8: 0x1010  mfhi        $v0
    ctx->pc = 0x2974a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2974ac: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2974acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2974b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2974b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2974b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2974b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2974b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2974b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2974bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2974bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2974c0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2974c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2974c4: 0x860269a4  lh          $v0, 0x69A4($s0)
    ctx->pc = 0x2974c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27044)));
    // 0x2974c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2974c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2974cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2974ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2974d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2974d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2974d4: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2974d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2974d8: 0x860269a6  lh          $v0, 0x69A6($s0)
    ctx->pc = 0x2974d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27046)));
    // 0x2974dc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2974dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2974e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2974e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2974e4: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2974e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2974e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2974e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2974ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2974ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2974f0: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x2974f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x2974f4: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x2974f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x2974f8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2974f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x2974fc: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2974fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x297500: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x297500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x297504: 0x12a2001d  beq         $s5, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x297504u;
    {
        const bool branch_taken_0x297504 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x297504) {
            ctx->pc = 0x29757Cu;
            goto label_29757c;
        }
    }
    ctx->pc = 0x29750Cu;
    // 0x29750c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297510: 0x12a20014  beq         $s5, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x297510u;
    {
        const bool branch_taken_0x297510 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x297510) {
            ctx->pc = 0x297564u;
            goto label_297564;
        }
    }
    ctx->pc = 0x297518u;
    // 0x297518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29751c: 0x12a2000b  beq         $s5, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29751Cu;
    {
        const bool branch_taken_0x29751c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x29751c) {
            ctx->pc = 0x29754Cu;
            goto label_29754c;
        }
    }
    ctx->pc = 0x297524u;
    // 0x297524: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x297524u;
    {
        const bool branch_taken_0x297524 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x297524) {
            ctx->pc = 0x297534u;
            goto label_297534;
        }
    }
    ctx->pc = 0x29752Cu;
    // 0x29752c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29752Cu;
    {
        const bool branch_taken_0x29752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29752c) {
            ctx->pc = 0x297594u;
            goto label_297594;
        }
    }
    ctx->pc = 0x297534u;
label_297534:
    // 0x297534: 0x3c028070  lui         $v0, 0x8070
    ctx->pc = 0x297534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32880 << 16));
    // 0x297538: 0x34437070  ori         $v1, $v0, 0x7070
    ctx->pc = 0x297538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28784);
    // 0x29753c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x29753cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297540: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297544: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x297544u;
    {
        const bool branch_taken_0x297544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297544) {
            ctx->pc = 0x2975A8u;
            goto label_2975a8;
        }
    }
    ctx->pc = 0x29754Cu;
label_29754c:
    // 0x29754c: 0x3c028020  lui         $v0, 0x8020
    ctx->pc = 0x29754cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32800 << 16));
    // 0x297550: 0x344320c0  ori         $v1, $v0, 0x20C0
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8384);
    // 0x297554: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x297554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297558: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297558u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29755c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29755Cu;
    {
        const bool branch_taken_0x29755c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29755c) {
            ctx->pc = 0x2975A8u;
            goto label_2975a8;
        }
    }
    ctx->pc = 0x297564u;
label_297564:
    // 0x297564: 0x3c028010  lui         $v0, 0x8010
    ctx->pc = 0x297564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32784 << 16));
    // 0x297568: 0x34436010  ori         $v1, $v0, 0x6010
    ctx->pc = 0x297568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24592);
    // 0x29756c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x29756cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297570: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297574: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x297574u;
    {
        const bool branch_taken_0x297574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297574) {
            ctx->pc = 0x2975A8u;
            goto label_2975a8;
        }
    }
    ctx->pc = 0x29757Cu;
label_29757c:
    // 0x29757c: 0x3c0280c0  lui         $v0, 0x80C0
    ctx->pc = 0x29757cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32960 << 16));
    // 0x297580: 0x34432020  ori         $v1, $v0, 0x2020
    ctx->pc = 0x297580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x297584: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x297584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x297588: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297588u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29758c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x29758Cu;
    {
        const bool branch_taken_0x29758c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29758c) {
            ctx->pc = 0x2975A8u;
            goto label_2975a8;
        }
    }
    ctx->pc = 0x297594u;
label_297594:
    // 0x297594: 0x3c028070  lui         $v0, 0x8070
    ctx->pc = 0x297594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32880 << 16));
    // 0x297598: 0x34437070  ori         $v1, $v0, 0x7070
    ctx->pc = 0x297598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28784);
    // 0x29759c: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x29759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2975a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2975a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2975a4: 0x0  nop
    ctx->pc = 0x2975a4u;
    // NOP
label_2975a8:
    // 0x2975a8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2975ac: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2975acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975b0: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2975b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2975b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975b8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2975b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2975bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2975bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2975c0: 0x26620014  addiu       $v0, $s3, 0x14
    ctx->pc = 0x2975c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x2975c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2975c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2975c8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2975c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2975cc: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2975ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2975d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2975d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975d4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2975d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2975d8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x2975d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2975dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2975dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2975e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2975e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2975e4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2975e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2975e8: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x2975e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2975ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2975ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2975f0: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2975f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x2975f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2975f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2975f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2975f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2975fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x2975fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x297600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297604: 0x0  nop
    ctx->pc = 0x297604u;
    // NOP
    // 0x297608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x297608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29760c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x29760cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x297610: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x297610u;
    SET_GPR_U32(ctx, 31, 0x297618u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x297610u, 0x297618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297618u;
label_297618:
    // 0x297618: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x297618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29761c: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x29761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x297620: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x297620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x297624: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x297624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x297628: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x297628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x29762c: 0x24427900  addiu       $v0, $v0, 0x7900
    ctx->pc = 0x29762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30976));
    // 0x297630: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x297630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x297634: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x297634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297638: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x29763c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29763cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x297640: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x297640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x297644: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x297644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x297648: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x297648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29764c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x29764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x297650: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x297654: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x297658: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x297658u;
    {
        const bool branch_taken_0x297658 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x297658) {
            ctx->pc = 0x297674u;
            goto label_297674;
        }
    }
    ctx->pc = 0x297660u;
    // 0x297660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297664: 0x0  nop
    ctx->pc = 0x297664u;
    // NOP
    // 0x297668: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x297668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29766c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29766Cu;
    {
        const bool branch_taken_0x29766c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29766c) {
            ctx->pc = 0x297690u;
            goto label_297690;
        }
    }
    ctx->pc = 0x297674u;
label_297674:
    // 0x297674: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x297674u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x297678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29767c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297680: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x297680u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297684: 0x0  nop
    ctx->pc = 0x297684u;
    // NOP
    // 0x297688: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x297688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29768c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x29768cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_297690:
    // 0x297690: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x297690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x297694: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x297694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x297698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x297698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29769c: 0x0  nop
    ctx->pc = 0x29769cu;
    // NOP
    // 0x2976a0: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x2976a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2976a4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x2976A4u;
    SET_GPR_U32(ctx, 31, 0x2976ACu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x2976A4u, 0x2976ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976ACu;
label_2976ac:
    // 0x2976ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2976acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2976b0: 0x24427000  addiu       $v0, $v0, 0x7000
    ctx->pc = 0x2976b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28672));
    // 0x2976b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2976b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2976b8: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x2976b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2976bc: 0x8e0369d8  lw          $v1, 0x69D8($s0)
    ctx->pc = 0x2976bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27096)));
    // 0x2976c0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2976c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2976c4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2976c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2976c8: 0x24637900  addiu       $v1, $v1, 0x7900
    ctx->pc = 0x2976c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30976));
    // 0x2976cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2976ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2976d0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2976d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2976d4: 0x26620024  addiu       $v0, $s3, 0x24
    ctx->pc = 0x2976d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x2976d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2976d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2976dc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2976dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2976e0: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x2976e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2976e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2976e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2976e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2976e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2976ec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2976ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x2976f0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x2976f4: 0x34421009  ori         $v0, $v0, 0x1009
    ctx->pc = 0x2976f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4105);
    // 0x2976f8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2976f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x2976fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2976fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297704: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297708: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x297708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x29770c: 0x3443000a  ori         $v1, $v0, 0xA
    ctx->pc = 0x29770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x297710: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x297710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x297714: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x297714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x297718: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29771c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29771cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297720: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x297720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x297724: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x297724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x297728: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x297728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x29772c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29772cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297730: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297730u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x297734: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x297734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x297738: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x297738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29773c: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x29773cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x297740: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x297740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x297744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x297744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x297748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29774c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29774cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x297750: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x297750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x297754: 0xffc20008  sd          $v0, 0x8($fp)
    ctx->pc = 0x297754u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x297758: 0x860369ac  lh          $v1, 0x69AC($s0)
    ctx->pc = 0x297758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 27052)));
    // 0x29775c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x29775cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x297760: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x297760u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x297764: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x297764u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x297768: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x297768u;
    {
        const bool branch_taken_0x297768 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x297768) {
            ctx->pc = 0x2977C0u;
            goto label_2977c0;
        }
    }
    ctx->pc = 0x297770u;
    // 0x297770: 0xae760008  sw          $s6, 0x8($s3)
    ctx->pc = 0x297770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 22));
    // 0x297774: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x297774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297778: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x297778u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x29777c: 0x72602e28  paddub      $a1, $s3, $zero
    ctx->pc = 0x29777cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x297780: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297780u;
    SET_GPR_U32(ctx, 31, 0x297788u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297780u, 0x297788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297788u;
label_297788:
    // 0x297788: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x297788u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29778c: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x29778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297790: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x297790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x297794: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x297794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x297798: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297798u;
    SET_GPR_U32(ctx, 31, 0x2977A0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297798u, 0x2977A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977A0u;
label_2977a0:
    // 0x2977a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2977a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977a4: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2977a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2977a8: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2977a8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2977ac: 0x73c02e28  paddub      $a1, $fp, $zero
    ctx->pc = 0x2977acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x2977b0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2977B0u;
    SET_GPR_U32(ctx, 31, 0x2977B8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2977B0u, 0x2977B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977B8u;
label_2977b8:
    // 0x2977b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2977b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977bc: 0x0  nop
    ctx->pc = 0x2977bcu;
    // NOP
label_2977c0:
    // 0x2977c0: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x2977c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x2977c4: 0x7060f628  paddub      $fp, $v1, $zero
    ctx->pc = 0x2977c4u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2977c8: 0x2662002c  addiu       $v0, $s3, 0x2C
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x2977cc: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x2977ccu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977d0: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x2977d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x2977d4: 0x7040a628  paddub      $s4, $v0, $zero
    ctx->pc = 0x2977d4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977d8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x2977d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2977dc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2977dcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2977e0: 0x8e0269d4  lw          $v0, 0x69D4($s0)
    ctx->pc = 0x2977e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27092)));
    // 0x2977e4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2977e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2977e8: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x2977e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2977ec: 0x0  nop
    ctx->pc = 0x2977ecu;
    // NOP
label_2977f0:
    // 0x2977f0: 0x8e0269c0  lw          $v0, 0x69C0($s0)
    ctx->pc = 0x2977f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27072)));
    // 0x2977f4: 0x1622fecc  bne         $s1, $v0, . + 4 + (-0x134 << 2)
    ctx->pc = 0x2977F4u;
    {
        const bool branch_taken_0x2977f4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2977f4) {
            ctx->pc = 0x297328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_297328;
        }
    }
    ctx->pc = 0x2977FCu;
    // 0x2977fc: 0x26124d48  addiu       $s2, $s0, 0x4D48
    ctx->pc = 0x2977fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 19784));
    // 0x297800: 0x7240be28  paddub      $s7, $s2, $zero
    ctx->pc = 0x297800u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x297804: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x297804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x297808: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x297808u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x29780c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x29780cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x297810: 0x3462103b  ori         $v0, $v1, 0x103B
    ctx->pc = 0x297810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4155);
    // 0x297814: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x297814u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x297818: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x297818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29781c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29781cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x297820: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x297820u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x297824: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x297824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297828: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x297828u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29782c: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x29782cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x297830: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297830u;
    SET_GPR_U32(ctx, 31, 0x297838u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297830u, 0x297838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297838u;
label_297838:
    // 0x297838: 0x26f60010  addiu       $s6, $s7, 0x10
    ctx->pc = 0x297838u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x29783c: 0x72c0be28  paddub      $s7, $s6, $zero
    ctx->pc = 0x29783cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x297840: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x297840u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x297844: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x297844u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
    // 0x297848: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x297848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x29784c: 0x34621048  ori         $v0, $v1, 0x1048
    ctx->pc = 0x29784cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4168);
    // 0x297850: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x297850u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x297854: 0x2402080b  addiu       $v0, $zero, 0x80B
    ctx->pc = 0x297854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2059));
    // 0x297858: 0xfee20008  sd          $v0, 0x8($s7)
    ctx->pc = 0x297858u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 2));
    // 0x29785c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x29785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297860: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x297860u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x297864: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x297864u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x297868: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x297868u;
    SET_GPR_U32(ctx, 31, 0x297870u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x297868u, 0x297870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297870u;
label_297870:
    // 0x297870: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x297874: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x297874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x297878: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x297878u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x29787c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x29787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x297880: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x297880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x297884: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x297884u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x297888: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x29788c: 0xfee30008  sd          $v1, 0x8($s7)
    ctx->pc = 0x29788cu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 8), GPR_U64(ctx, 3));
    // 0x297890: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x297890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x297894: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x297894u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x297898: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x297898u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x29789c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x29789Cu;
    SET_GPR_U32(ctx, 31, 0x2978A4u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x29789Cu, 0x2978A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978A4u;
label_2978a4:
    // 0x2978a4: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x2978a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2978a8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x2978a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x2978ac: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x2978acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x2978b0: 0x3c120400  lui         $s2, 0x400
    ctx->pc = 0x2978b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1024 << 16));
    // 0x2978b4: 0x3642103f  ori         $v0, $s2, 0x103F
    ctx->pc = 0x2978b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4159);
    // 0x2978b8: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x2978b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x2978bc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2978bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2978c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2978c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2978c4: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x2978c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x2978c8: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x2978C8u;
    SET_GPR_U32(ctx, 31, 0x2978D0u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x2978C8u, 0x2978D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978D0u;
label_2978d0:
    // 0x2978d0: 0x26f70010  addiu       $s7, $s7, 0x10
    ctx->pc = 0x2978d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_2978d4:
    // 0x2978d4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x2978d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2978d8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2978d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2978dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2978dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2978e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2978e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2978e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2978e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2978e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2978e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2978ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2978ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2978f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2978f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2978f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2978f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2978f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2978f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2978fc: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2978fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x297900: 0x3e00008  jr          $ra
    ctx->pc = 0x297900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297908u;
}
