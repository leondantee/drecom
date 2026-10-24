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

// Function: Set_enemy_om
// Address: 0x2670c0 - 0x26761c
void Set_enemy_om_0x2670c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_enemy_om_0x2670c0");
#endif

    switch (ctx->pc) {
        case 0x267130u: goto label_267130;
        case 0x2671d4u: goto label_2671d4;
        case 0x2671e4u: goto label_2671e4;
        case 0x267234u: goto label_267234;
        case 0x26724cu: goto label_26724c;
        case 0x267268u: goto label_267268;
        case 0x26727cu: goto label_26727c;
        case 0x267294u: goto label_267294;
        case 0x2674d4u: goto label_2674d4;
        case 0x267510u: goto label_267510;
        case 0x267548u: goto label_267548;
        case 0x267554u: goto label_267554;
        case 0x267580u: goto label_267580;
        case 0x2675a0u: goto label_2675a0;
        default: break;
    }

    ctx->pc = 0x2670c0u;

    // 0x2670c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2670c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2670c4: 0x7fbf0080  sq          $ra, 0x80($sp)
    ctx->pc = 0x2670c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 31));
    // 0x2670c8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2670c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2670cc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2670ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2670d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2670d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2670d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2670d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2670d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2670d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2670dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2670dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2670e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2670e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2670e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2670e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2670e8: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2670e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
    // 0x2670ec: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x2670ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
    // 0x2670f0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2670f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2670f4: 0x24520080  addiu       $s2, $v0, 0x80
    ctx->pc = 0x2670f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x2670f8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2670f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2670fc: 0x2457fe10  addiu       $s7, $v0, -0x1F0
    ctx->pc = 0x2670fcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x267100: 0x8fb600a0  lw          $s6, 0xA0($sp)
    ctx->pc = 0x267100u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x267104: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x267104u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267108: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x267108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x26710c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x26710cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267110: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x267110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x267114: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x267114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x267118: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x267118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x26711c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x267120: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x267120u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x267124: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x267124u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267128: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x267128u;
    {
        const bool branch_taken_0x267128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267128) {
            ctx->pc = 0x2675D0u;
            goto label_2675d0;
        }
    }
    ctx->pc = 0x267130u;
label_267130:
    // 0x267130: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x267130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x267134: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x267134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267138: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x267138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x26713c: 0x8c5001ac  lw          $s0, 0x1AC($v0)
    ctx->pc = 0x26713cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x267140: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x267140u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x267144: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267148: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26714c: 0xae021338  sw          $v0, 0x1338($s0)
    ctx->pc = 0x26714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 2));
    // 0x267150: 0x96c210a4  lhu         $v0, 0x10A4($s6)
    ctx->pc = 0x267150u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 4260)));
    // 0x267154: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x267154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x267158: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x267158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x26715c: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x26715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x267160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267164: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x267164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x267168: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x267168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26716c: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x26716cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x267170: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267174: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x267174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x267178: 0xa60210a4  sh          $v0, 0x10A4($s0)
    ctx->pc = 0x267178u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4260), (uint16_t)GPR_U32(ctx, 2));
    // 0x26717c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26717cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x267180: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x267180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x267184: 0x9622000a  lhu         $v0, 0xA($s1)
    ctx->pc = 0x267184u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x267188: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x267188u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x26718c: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x26718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x267190: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x267190u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267194: 0x260200d0  addiu       $v0, $s0, 0xD0
    ctx->pc = 0x267194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x267198: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x267198u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x26719c: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x26719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2671a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2671a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2671a4: 0x26020120  addiu       $v0, $s0, 0x120
    ctx->pc = 0x2671a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x2671a8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2671a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2671ac: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2671acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671b0: 0xe60001a0  swc1        $f0, 0x1A0($s0)
    ctx->pc = 0x2671b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 416), bits); }
    // 0x2671b4: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2671b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671b8: 0xe60001a4  swc1        $f0, 0x1A4($s0)
    ctx->pc = 0x2671b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 420), bits); }
    // 0x2671bc: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2671bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671c0: 0xe60001a8  swc1        $f0, 0x1A8($s0)
    ctx->pc = 0x2671c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 424), bits); }
    // 0x2671c4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2671c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2671c8: 0x8e450a68  lw          $a1, 0xA68($s2)
    ctx->pc = 0x2671c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2671cc: 0xc095228  jal         func_2548A0
    ctx->pc = 0x2671CCu;
    SET_GPR_U32(ctx, 31, 0x2671D4u);
    ctx->pc = 0x2548A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548A0u, 0x2671CCu, 0x2671D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671D4u;
label_2671d4:
    // 0x2671d4: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2671d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2671d8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2671d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2671dc: 0xc096558  jal         func_259560
    ctx->pc = 0x2671DCu;
    SET_GPR_U32(ctx, 31, 0x2671E4u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x2671DCu, 0x2671E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2671E4u;
label_2671e4:
    // 0x2671e4: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x2671e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x2671e8: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2671e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2671ec: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2671ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2671f0: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2671F0u;
    {
        const bool branch_taken_0x2671f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2671f0) {
            ctx->pc = 0x267284u;
            goto label_267284;
        }
    }
    ctx->pc = 0x2671F8u;
    // 0x2671f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2671f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2671fc: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2671FCu;
    {
        const bool branch_taken_0x2671fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2671fc) {
            ctx->pc = 0x267254u;
            goto label_267254;
        }
    }
    ctx->pc = 0x267204u;
    // 0x267204: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267208: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x267208u;
    {
        const bool branch_taken_0x267208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267208) {
            ctx->pc = 0x26723Cu;
            goto label_26723c;
        }
    }
    ctx->pc = 0x267210u;
    // 0x267210: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267214: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x267214u;
    {
        const bool branch_taken_0x267214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267214) {
            ctx->pc = 0x267224u;
            goto label_267224;
        }
    }
    ctx->pc = 0x26721Cu;
    // 0x26721c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26721Cu;
    {
        const bool branch_taken_0x26721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26721c) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x267224u;
label_267224:
    // 0x267224: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267224u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267228: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x267228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x26722c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x26722Cu;
    SET_GPR_U32(ctx, 31, 0x267234u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x26722Cu, 0x267234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267234u;
label_267234:
    // 0x267234: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x267234u;
    {
        const bool branch_taken_0x267234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267234) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x26723Cu;
label_26723c:
    // 0x26723c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26723cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267240: 0x2605124c  addiu       $a1, $s0, 0x124C
    ctx->pc = 0x267240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4684));
    // 0x267244: 0xc099934  jal         func_2664D0
    ctx->pc = 0x267244u;
    SET_GPR_U32(ctx, 31, 0x26724Cu);
    ctx->pc = 0x2664D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2664D0u, 0x267244u, 0x26724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26724Cu;
label_26724c:
    // 0x26724c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26724Cu;
    {
        const bool branch_taken_0x26724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26724c) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x267254u;
label_267254:
    // 0x267254: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x267254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x267258: 0x26450a68  addiu       $a1, $s2, 0xA68
    ctx->pc = 0x267258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2664));
    // 0x26725c: 0x27a60098  addiu       $a2, $sp, 0x98
    ctx->pc = 0x26725cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x267260: 0xc0506e8  jal         func_141BA0
    ctx->pc = 0x267260u;
    SET_GPR_U32(ctx, 31, 0x267268u);
    ctx->pc = 0x141BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141BA0u, 0x267260u, 0x267268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267268u;
label_267268:
    // 0x267268: 0xae021248  sw          $v0, 0x1248($s0)
    ctx->pc = 0x267268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4680), GPR_U32(ctx, 2));
    // 0x26726c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26726cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267270: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x267270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    // 0x267274: 0xc099a54  jal         func_266950
    ctx->pc = 0x267274u;
    SET_GPR_U32(ctx, 31, 0x26727Cu);
    ctx->pc = 0x266950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266950u, 0x267274u, 0x26727Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26727Cu;
label_26727c:
    // 0x26727c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26727Cu;
    {
        const bool branch_taken_0x26727c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26727c) {
            ctx->pc = 0x267298u;
            goto label_267298;
        }
    }
    ctx->pc = 0x267284u;
label_267284:
    // 0x267284: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267288: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x267288u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26728c: 0xc05be64  jal         func_16F990
    ctx->pc = 0x26728Cu;
    SET_GPR_U32(ctx, 31, 0x267294u);
    ctx->pc = 0x16F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F990u, 0x26728Cu, 0x267294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267294u;
label_267294:
    // 0x267294: 0x0  nop
    ctx->pc = 0x267294u;
    // NOP
label_267298:
    // 0x267298: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26729c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x26729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2672a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2672A0u;
    {
        const bool branch_taken_0x2672a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672a0) {
            ctx->pc = 0x2672B4u;
            goto label_2672b4;
        }
    }
    ctx->pc = 0x2672A8u;
    // 0x2672a8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2672a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2672ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2672ACu;
    {
        const bool branch_taken_0x2672ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672ac) {
            ctx->pc = 0x2672B8u;
            goto label_2672b8;
        }
    }
    ctx->pc = 0x2672B4u;
label_2672b4:
    // 0x2672b4: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x2672b4u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2672b8:
    // 0x2672b8: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x2672b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x2672bc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2672bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2672c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2672c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2672c4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2672c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2672c8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2672c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2672cc: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x2672ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x2672d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2672d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2672d4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2672d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2672d8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2672d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2672dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2672dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2672e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2672e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2672e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2672E4u;
    {
        const bool branch_taken_0x2672e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2672e4) {
            ctx->pc = 0x267348u;
            goto label_267348;
        }
    }
    ctx->pc = 0x2672ECu;
    // 0x2672ec: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2672ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2672f0: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2672f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2672f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2672f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2672f8: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x2672f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2672fc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2672fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267300: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x267300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x267304: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267304u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x267308: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26730c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26730cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267310: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267314: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267318: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26731c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26731cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267320: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267324: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267328: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26732c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267330: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x267330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x267334: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267334u;
    {
        const bool branch_taken_0x267334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267334) {
            ctx->pc = 0x267348u;
            goto label_267348;
        }
    }
    ctx->pc = 0x26733Cu;
    // 0x26733c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x26733cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267340: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x267340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x267344: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_267348:
    // 0x267348: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26734c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267350: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267350u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267354: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267358: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26735c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26735cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267360: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267368: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26736c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267370: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x267370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x267374: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267374u;
    {
        const bool branch_taken_0x267374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267374) {
            ctx->pc = 0x267398u;
            goto label_267398;
        }
    }
    ctx->pc = 0x26737Cu;
    // 0x26737c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x26737cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x267380: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x267380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x267384: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x267384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x267388: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x267388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26738c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x26738cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267390: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x267390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x267394: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267394u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_267398:
    // 0x267398: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26739c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2673a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2673a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2673a4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2673a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2673a8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2673ac: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x2673acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x2673b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2673b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2673b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2673bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2673c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x2673c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2673C4u;
    {
        const bool branch_taken_0x2673c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2673c4) {
            ctx->pc = 0x2673D8u;
            goto label_2673d8;
        }
    }
    ctx->pc = 0x2673CCu;
    // 0x2673cc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2673ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2673d0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2673d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2673d4: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2673d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2673d8:
    // 0x2673d8: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x2673d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x2673dc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2673dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2673e0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2673e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2673e4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2673e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x2673e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2673e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2673ec: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x2673ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x2673f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2673f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2673f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2673f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2673f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2673fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2673fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267400: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x267400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x267404: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267404u;
    {
        const bool branch_taken_0x267404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267404) {
            ctx->pc = 0x267418u;
            goto label_267418;
        }
    }
    ctx->pc = 0x26740Cu;
    // 0x26740c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x26740cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x267410: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x267410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x267414: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x267414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_267418:
    // 0x267418: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26741c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267420: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267420u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267424: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267428: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26742c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267438: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26743c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26743cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267440: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x267440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x267444: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267444u;
    {
        const bool branch_taken_0x267444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267444) {
            ctx->pc = 0x267458u;
            goto label_267458;
        }
    }
    ctx->pc = 0x26744Cu;
    // 0x26744c: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x26744cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x267450: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x267450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x267454: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x267454u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_267458:
    // 0x267458: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x267458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26745c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x26745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x267460: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x267460u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x267464: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x267464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x267468: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x267468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x26746c: 0x2442bbf0  addiu       $v0, $v0, -0x4410
    ctx->pc = 0x26746cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949872));
    // 0x267470: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x267470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267474: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x267474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267478: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x267478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26747c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26747cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267480: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x267480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x267484: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x267484u;
    {
        const bool branch_taken_0x267484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267484) {
            ctx->pc = 0x267490u;
            goto label_267490;
        }
    }
    ctx->pc = 0x26748Cu;
    // 0x26748c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x26748cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267490:
    // 0x267490: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x267490u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x267494: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x267494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x267498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x267498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26749c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26749Cu;
    {
        const bool branch_taken_0x26749c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26749c) {
            ctx->pc = 0x2674C0u;
            goto label_2674c0;
        }
    }
    ctx->pc = 0x2674A4u;
    // 0x2674a4: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2674a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2674a8: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x2674a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x2674ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2674acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2674b0: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x2674b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2674b4: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x2674b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2674b8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2674b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2674bc: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2674bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_2674c0:
    // 0x2674c0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2674c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2674c4: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x2674c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2674c8: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x2674c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2674cc: 0xc0767a0  jal         func_1D9E80
    ctx->pc = 0x2674CCu;
    SET_GPR_U32(ctx, 31, 0x2674D4u);
    ctx->pc = 0x1D9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9E80u, 0x2674CCu, 0x2674D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2674D4u;
label_2674d4:
    // 0x2674d4: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2674d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2674d8: 0x8e420a68  lw          $v0, 0xA68($s2)
    ctx->pc = 0x2674d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x2674dc: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x2674dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x2674e0: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2674e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2674e4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2674e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2674e8: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x2674e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x2674ec: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x2674ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x2674f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2674f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2674f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2674F4u;
    {
        const bool branch_taken_0x2674f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2674f4) {
            ctx->pc = 0x267518u;
            goto label_267518;
        }
    }
    ctx->pc = 0x2674FCu;
    // 0x2674fc: 0x8e460a68  lw          $a2, 0xA68($s2)
    ctx->pc = 0x2674fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2664)));
    // 0x267500: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x267500u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267504: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x267504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x267508: 0xc0998dc  jal         func_266370
    ctx->pc = 0x267508u;
    SET_GPR_U32(ctx, 31, 0x267510u);
    ctx->pc = 0x266370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266370u, 0x267508u, 0x267510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267510u;
label_267510:
    // 0x267510: 0xae420a68  sw          $v0, 0xA68($s2)
    ctx->pc = 0x267510u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2664), GPR_U32(ctx, 2));
    // 0x267514: 0x0  nop
    ctx->pc = 0x267514u;
    // NOP
label_267518:
    // 0x267518: 0xfe000a08  sd          $zero, 0xA08($s0)
    ctx->pc = 0x267518u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2568), GPR_U64(ctx, 0));
    // 0x26751c: 0x8e030368  lw          $v1, 0x368($s0)
    ctx->pc = 0x26751cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x267520: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267524: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x267524u;
    {
        const bool branch_taken_0x267524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267524) {
            ctx->pc = 0x267548u;
            goto label_267548;
        }
    }
    ctx->pc = 0x26752Cu;
    // 0x26752c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x26752cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x267530: 0x8e050368  lw          $a1, 0x368($s0)
    ctx->pc = 0x267530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x267534: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x267534u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267538: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x267538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26753c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26753cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x267540: 0xc0965d0  jal         func_259740
    ctx->pc = 0x267540u;
    SET_GPR_U32(ctx, 31, 0x267548u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x267540u, 0x267548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267548u;
label_267548:
    // 0x267548: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x267548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x26754c: 0xc095c7c  jal         func_2571F0
    ctx->pc = 0x26754Cu;
    SET_GPR_U32(ctx, 31, 0x267554u);
    ctx->pc = 0x2571F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2571F0u, 0x26754Cu, 0x267554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267554u;
label_267554:
    // 0x267554: 0x8e031240  lw          $v1, 0x1240($s0)
    ctx->pc = 0x267554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x267558: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26755c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26755Cu;
    {
        const bool branch_taken_0x26755c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26755c) {
            ctx->pc = 0x2675C0u;
            goto label_2675c0;
        }
    }
    ctx->pc = 0x267564u;
    // 0x267564: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x267564u;
    {
        const bool branch_taken_0x267564 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x267564) {
            ctx->pc = 0x26758Cu;
            goto label_26758c;
        }
    }
    ctx->pc = 0x26756Cu;
    // 0x26756c: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x26756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x267570: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x267570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x267574: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x267574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267578: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x267578u;
    SET_GPR_U32(ctx, 31, 0x267580u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x267578u, 0x267580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267580u;
label_267580:
    // 0x267580: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x267580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x267584: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x267584u;
    {
        const bool branch_taken_0x267584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267584) {
            ctx->pc = 0x2675A8u;
            goto label_2675a8;
        }
    }
    ctx->pc = 0x26758Cu;
label_26758c:
    // 0x26758c: 0x8e041240  lw          $a0, 0x1240($s0)
    ctx->pc = 0x26758cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x267590: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x267590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x267594: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x267594u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x267598: 0xc05b4f8  jal         func_16D3E0
    ctx->pc = 0x267598u;
    SET_GPR_U32(ctx, 31, 0x2675A0u);
    ctx->pc = 0x16D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D3E0u, 0x267598u, 0x2675A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2675A0u;
label_2675a0:
    // 0x2675a0: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x2675a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x2675a4: 0x0  nop
    ctx->pc = 0x2675a4u;
    // NOP
label_2675a8:
    // 0x2675a8: 0x8e021240  lw          $v0, 0x1240($s0)
    ctx->pc = 0x2675a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4672)));
    // 0x2675ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2675ACu;
    {
        const bool branch_taken_0x2675ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2675ac) {
            ctx->pc = 0x2675C0u;
            goto label_2675c0;
        }
    }
    ctx->pc = 0x2675B4u;
    // 0x2675b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2675b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2675b8: 0xae021240  sw          $v0, 0x1240($s0)
    ctx->pc = 0x2675b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4672), GPR_U32(ctx, 2));
    // 0x2675bc: 0x0  nop
    ctx->pc = 0x2675bcu;
    // NOP
label_2675c0:
    // 0x2675c0: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x2675c0u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2675c4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2675c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2675c8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x2675c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2675cc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x2675ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2675d0:
    // 0x2675d0: 0x3283ffff  andi        $v1, $s4, 0xFFFF
    ctx->pc = 0x2675d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x2675d4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2675d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2675d8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2675d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2675dc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2675dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2675e0: 0x1440fed3  bnez        $v0, . + 4 + (-0x12D << 2)
    ctx->pc = 0x2675E0u;
    {
        const bool branch_taken_0x2675e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2675e0) {
            ctx->pc = 0x267130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_267130;
        }
    }
    ctx->pc = 0x2675E8u;
    // 0x2675e8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x2675e8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2675ec: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x2675ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2675f0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2675f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2675f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2675f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2675f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2675f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2675fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2675fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267600: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267600u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267604: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x267604u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267608: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267608u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26760c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26760cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267610: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x267610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x267614: 0x3e00008  jr          $ra
    ctx->pc = 0x267614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26761Cu;
}
