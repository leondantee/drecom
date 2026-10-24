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

// Function: strip_draw_simple_3d
// Address: 0x1931f0 - 0x194550
void strip_draw_simple_3d_0x1931f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("strip_draw_simple_3d_0x1931f0");
#endif

    switch (ctx->pc) {
        case 0x193408u: goto label_193408;
        case 0x193444u: goto label_193444;
        case 0x1934acu: goto label_1934ac;
        case 0x1935fcu: goto label_1935fc;
        case 0x193704u: goto label_193704;
        case 0x19372cu: goto label_19372c;
        case 0x193748u: goto label_193748;
        case 0x193758u: goto label_193758;
        case 0x193798u: goto label_193798;
        case 0x19381cu: goto label_19381c;
        case 0x193984u: goto label_193984;
        case 0x193a8cu: goto label_193a8c;
        case 0x193c28u: goto label_193c28;
        case 0x193d98u: goto label_193d98;
        case 0x193db4u: goto label_193db4;
        case 0x193dd8u: goto label_193dd8;
        case 0x193e7cu: goto label_193e7c;
        case 0x1940c4u: goto label_1940c4;
        case 0x1944f8u: goto label_1944f8;
        default: break;
    }

    ctx->pc = 0x1931f0u;

    // 0x1931f0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1931f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x1931f4: 0x7fbf00a0  sq          $ra, 0xA0($sp)
    ctx->pc = 0x1931f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 31));
    // 0x1931f8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1931f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x1931fc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1931fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x193200: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x193200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x193204: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x193204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x193208: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x193208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19320c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x19320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x193210: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x193210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x193214: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x193214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x193218: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x193218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19321c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x19321cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x193220: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x193220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x193224: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x193224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x193228: 0x7080b628  paddub      $s6, $a0, $zero
    ctx->pc = 0x193228u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x19322c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x19322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
    // 0x193230: 0x3c137000  lui         $s3, 0x7000
    ctx->pc = 0x193230u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)28672 << 16));
    // 0x193234: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x193238: 0x34570244  ori         $s7, $v0, 0x244
    ctx->pc = 0x193238u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)580);
    // 0x19323c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x193240: 0x3454026c  ori         $s4, $v0, 0x26C
    ctx->pc = 0x193240u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)620);
    // 0x193244: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x193244u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193248: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19324c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19324cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193250: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x193250u;
    {
        const bool branch_taken_0x193250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193250) {
            ctx->pc = 0x1932E8u;
            goto label_1932e8;
        }
    }
    ctx->pc = 0x193258u;
    // 0x193258: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19325c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19325cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193260: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193260u;
    {
        const bool branch_taken_0x193260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193260) {
            ctx->pc = 0x193274u;
            goto label_193274;
        }
    }
    ctx->pc = 0x193268u;
    // 0x193268: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x193268u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19326c: 0x100004a8  b           . + 4 + (0x4A8 << 2)
    ctx->pc = 0x19326Cu;
    {
        const bool branch_taken_0x19326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19326c) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x193274u;
label_193274:
    // 0x193274: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193274u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193278: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19327c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x19327cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x193280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193284: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x193284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193288: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x193288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x19328c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x19328cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x193290: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x193290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x193294: 0x31082  srl         $v0, $v1, 2
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x193298: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19329c: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1932a0: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1932a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x1932a4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1932a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1932a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1932a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1932ac: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1932acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1932b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1932b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1932b4: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x1932b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x1932b8: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x1932b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x1932bc: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x1932bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x1932c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1932c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1932c4: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x1932c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x1932c8: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x1932c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x1932cc: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1932ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x1932d0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1932d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1932D4u;
    {
        const bool branch_taken_0x1932d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1932d4) {
            ctx->pc = 0x1932E8u;
            goto label_1932e8;
        }
    }
    ctx->pc = 0x1932DCu;
    // 0x1932dc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1932dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1932e0: 0x1000048b  b           . + 4 + (0x48B << 2)
    ctx->pc = 0x1932E0u;
    {
        const bool branch_taken_0x1932e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1932e0) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x1932E8u;
label_1932e8:
    // 0x1932e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1932e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1932ec: 0x8c3e0af0  lw          $fp, 0xAF0($at)
    ctx->pc = 0x1932ecu;
    SET_GPR_S32(ctx, 30, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x1932f0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1932F0u;
    {
        const bool branch_taken_0x1932f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1932f0) {
            ctx->pc = 0x19330Cu;
            goto label_19330c;
        }
    }
    ctx->pc = 0x1932F8u;
    // 0x1932f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1932f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1932fc: 0x2442df50  addiu       $v0, $v0, -0x20B0
    ctx->pc = 0x1932fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958928));
    // 0x193300: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x193300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x193304: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x193304u;
    {
        const bool branch_taken_0x193304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193304) {
            ctx->pc = 0x193318u;
            goto label_193318;
        }
    }
    ctx->pc = 0x19330Cu;
label_19330c:
    // 0x19330c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x19330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x193310: 0x2442e550  addiu       $v0, $v0, -0x1AB0
    ctx->pc = 0x193310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x193314: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x193314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_193318:
    // 0x193318: 0x8ec20ac0  lw          $v0, 0xAC0($s6)
    ctx->pc = 0x193318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2752)));
    // 0x19331c: 0x8ec20ac4  lw          $v0, 0xAC4($s6)
    ctx->pc = 0x19331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2756)));
    // 0x193320: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x193320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x193324: 0x92c20b1c  lbu         $v0, 0xB1C($s6)
    ctx->pc = 0x193324u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2844)));
    // 0x193328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19332c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x19332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x193330: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x193330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x193334: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x193334u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193338: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19333c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19333cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193340: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x193340u;
    {
        const bool branch_taken_0x193340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193340) {
            ctx->pc = 0x1933ACu;
            goto label_1933ac;
        }
    }
    ctx->pc = 0x193348u;
    // 0x193348: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19334c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x19334cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x193350: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193358: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x193358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x19335c: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x19335cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x193360: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x193360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193364: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x193364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x193368: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x193368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19336c: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x19336cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x193370: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193370u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193374: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193378: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x19337c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193380: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x193380u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x193384: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x193384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x193388: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x193388u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x19338c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x19338cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x193390: 0x72a01e28  paddub      $v1, $s5, $zero
    ctx->pc = 0x193390u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x193394: 0x24750008  addiu       $s5, $v1, 0x8
    ctx->pc = 0x193394u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x193398: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x193398u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19339c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x19339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1933a0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1933a0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1933a4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1933A4u;
    {
        const bool branch_taken_0x1933a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1933a4) {
            ctx->pc = 0x1933E8u;
            goto label_1933e8;
        }
    }
    ctx->pc = 0x1933ACu;
label_1933ac:
    // 0x1933ac: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1933acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1933b0: 0x8c352580  lw          $s5, 0x2580($at)
    ctx->pc = 0x1933b0u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x532580u));
    // 0x1933b4: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1933b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1933b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1933b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1933bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1933bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1933c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1933c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1933c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1933c8: 0x24430009  addiu       $v1, $v0, 0x9
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x1933cc: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1933ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1933d0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1933d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1933d4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1933d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1933d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1933d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1933dc: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1933dcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1933e0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1933e4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1933e4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_1933e8:
    // 0x1933e8: 0xafb500c0  sw          $s5, 0xC0($sp)
    ctx->pc = 0x1933e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 21));
    // 0x1933ec: 0x72a01628  paddub      $v0, $s5, $zero
    ctx->pc = 0x1933ecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x1933f0: 0x24550008  addiu       $s5, $v0, 0x8
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1933f4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x1933f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x1933f8: 0x72c02628  paddub      $a0, $s6, $zero
    ctx->pc = 0x1933f8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x1933fc: 0x72a02e28  paddub      $a1, $s5, $zero
    ctx->pc = 0x1933fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x193400: 0xc0d889c  jal         func_362270
    ctx->pc = 0x193400u;
    SET_GPR_U32(ctx, 31, 0x193408u);
    ctx->pc = 0x362270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362270u, 0x193400u, 0x193408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193408u;
label_193408:
    // 0x193408: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x193408u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19340c: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x19340cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x193414: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x193414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x193418: 0x1040025c  beqz        $v0, . + 4 + (0x25C << 2)
    ctx->pc = 0x193418u;
    {
        const bool branch_taken_0x193418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193418) {
            ctx->pc = 0x193D8Cu;
            goto label_193d8c;
        }
    }
    ctx->pc = 0x193420u;
    // 0x193420: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193428: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19342c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x19342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193430: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193434: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x193434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x193438: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x193438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x19343c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19343Cu;
    SET_GPR_U32(ctx, 31, 0x193444u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x193444u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193444u) { return; }
    ctx->pc = 0x193444u;
label_193444:
    // 0x193444: 0xc7b600ec  lwc1        $f22, 0xEC($sp)
    ctx->pc = 0x193444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x193448: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x193448u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19344c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x19344cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x193450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193454: 0x0  nop
    ctx->pc = 0x193454u;
    // NOP
    // 0x193458: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x193458u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19345c: 0x0  nop
    ctx->pc = 0x19345cu;
    // NOP
    // 0x193460: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x193460u;
    {
        const bool branch_taken_0x193460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193460) {
            ctx->pc = 0x193480u;
            goto label_193480;
        }
    }
    ctx->pc = 0x193468u;
    // 0x193468: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19346c: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x19346cu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193470: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x193470u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193474: 0x0  nop
    ctx->pc = 0x193474u;
    // NOP
    // 0x193478: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x193478u;
    {
        const bool branch_taken_0x193478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193478) {
            ctx->pc = 0x193488u;
            goto label_193488;
        }
    }
    ctx->pc = 0x193480u;
label_193480:
    // 0x193480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193484: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x193484u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193488:
    // 0x193488: 0xc6c10338  lwc1        $f1, 0x338($s6)
    ctx->pc = 0x193488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19348c: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x19348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193490: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193494: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x193498: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19349c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x19349cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1934a0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1934a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x1934a4: 0xc040c60  jal         func_103180
    ctx->pc = 0x1934A4u;
    SET_GPR_U32(ctx, 31, 0x1934ACu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1934ACu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1934ACu) { return; }
    ctx->pc = 0x1934ACu;
label_1934ac:
    // 0x1934ac: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1934acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934b0: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x1934b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x1934b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1934b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934b8: 0x0  nop
    ctx->pc = 0x1934b8u;
    // NOP
    // 0x1934bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1934bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934c0: 0x0  nop
    ctx->pc = 0x1934c0u;
    // NOP
    // 0x1934c4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1934C4u;
    {
        const bool branch_taken_0x1934c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934c4) {
            ctx->pc = 0x1934F0u;
            goto label_1934f0;
        }
    }
    ctx->pc = 0x1934CCu;
    // 0x1934cc: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x1934ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934d0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x1934d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x1934d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1934d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1934d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1934d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1934dc: 0x0  nop
    ctx->pc = 0x1934dcu;
    // NOP
    // 0x1934e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1934e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1934e4: 0x0  nop
    ctx->pc = 0x1934e4u;
    // NOP
    // 0x1934e8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1934E8u;
    {
        const bool branch_taken_0x1934e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1934e8) {
            ctx->pc = 0x1934F8u;
            goto label_1934f8;
        }
    }
    ctx->pc = 0x1934F0u;
label_1934f0:
    // 0x1934f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1934f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1934f4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1934f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1934f8:
    // 0x1934f8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1934f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1934fc: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x1934fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x193500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193504: 0x0  nop
    ctx->pc = 0x193504u;
    // NOP
    // 0x193508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19350c: 0x0  nop
    ctx->pc = 0x19350cu;
    // NOP
    // 0x193510: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x193510u;
    {
        const bool branch_taken_0x193510 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193510) {
            ctx->pc = 0x19353Cu;
            goto label_19353c;
        }
    }
    ctx->pc = 0x193518u;
    // 0x193518: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19351c: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x19351cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x193520: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193528: 0x0  nop
    ctx->pc = 0x193528u;
    // NOP
    // 0x19352c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19352cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193530: 0x0  nop
    ctx->pc = 0x193530u;
    // NOP
    // 0x193534: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193534u;
    {
        const bool branch_taken_0x193534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193534) {
            ctx->pc = 0x193544u;
            goto label_193544;
        }
    }
    ctx->pc = 0x19353Cu;
label_19353c:
    // 0x19353c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193540: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x193540u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193544:
    // 0x193544: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x193544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x193548: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x193548u;
    {
        const bool branch_taken_0x193548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193548) {
            ctx->pc = 0x193558u;
            goto label_193558;
        }
    }
    ctx->pc = 0x193550u;
    // 0x193550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193554: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x193554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_193558:
    // 0x193558: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x19355c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19355cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193560: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x193560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x193564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193568: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x193568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x19356c: 0x8ec20ab8  lw          $v0, 0xAB8($s6)
    ctx->pc = 0x19356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2744)));
    // 0x193570: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x193570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193574: 0x8ec20290  lw          $v0, 0x290($s6)
    ctx->pc = 0x193574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 656)));
    // 0x193578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19357c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19357Cu;
    {
        const bool branch_taken_0x19357c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x19357c) {
            ctx->pc = 0x193598u;
            goto label_193598;
        }
    }
    ctx->pc = 0x193584u;
    // 0x193584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193588: 0x0  nop
    ctx->pc = 0x193588u;
    // NOP
    // 0x19358c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x19358cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193590: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193590u;
    {
        const bool branch_taken_0x193590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193590) {
            ctx->pc = 0x1935B4u;
            goto label_1935b4;
        }
    }
    ctx->pc = 0x193598u;
label_193598:
    // 0x193598: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193598u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x19359c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1935a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1935a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1935a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1935a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935a8: 0x0  nop
    ctx->pc = 0x1935a8u;
    // NOP
    // 0x1935ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1935acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1935b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1935b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1935b4:
    // 0x1935b4: 0xc6c00294  lwc1        $f0, 0x294($s6)
    ctx->pc = 0x1935b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1935b8: 0x0  nop
    ctx->pc = 0x1935b8u;
    // NOP
    // 0x1935bc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1935bcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1935c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1935c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1935c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1935c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1935c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1935c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935cc: 0x0  nop
    ctx->pc = 0x1935ccu;
    // NOP
    // 0x1935d0: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x1935d0u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1935d4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1935d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1935d8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1935d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1935dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1935dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1935e0: 0x0  nop
    ctx->pc = 0x1935e0u;
    // NOP
    // 0x1935e4: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x1935e4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1935e8: 0x0  nop
    ctx->pc = 0x1935e8u;
    // NOP
    // 0x1935ec: 0x0  nop
    ctx->pc = 0x1935ecu;
    // NOP
    // 0x1935f0: 0x0  nop
    ctx->pc = 0x1935f0u;
    // NOP
    // 0x1935f4: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x1935F4u;
    SET_GPR_U32(ctx, 31, 0x1935FCu);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x1935F4u, 0x1935FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1935FCu;
label_1935fc:
    // 0x1935fc: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x1935fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x193600: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x193600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x193604: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x193604u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193608: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193608u;
    {
        const bool branch_taken_0x193608 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193608) {
            ctx->pc = 0x193624u;
            goto label_193624;
        }
    }
    ctx->pc = 0x193610u;
    // 0x193610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193614: 0x0  nop
    ctx->pc = 0x193614u;
    // NOP
    // 0x193618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19361c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19361Cu;
    {
        const bool branch_taken_0x19361c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19361c) {
            ctx->pc = 0x193640u;
            goto label_193640;
        }
    }
    ctx->pc = 0x193624u;
label_193624:
    // 0x193624: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193624u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x193628: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19362c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19362cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x193630: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x193630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193634: 0x0  nop
    ctx->pc = 0x193634u;
    // NOP
    // 0x193638: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x193638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19363c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19363cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_193640:
    // 0x193640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193644: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x193644u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x193648: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x193648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x19364c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193654: 0x0  nop
    ctx->pc = 0x193654u;
    // NOP
    // 0x193658: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x193658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19365c: 0x0  nop
    ctx->pc = 0x19365cu;
    // NOP
    // 0x193660: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x193660u;
    {
        const bool branch_taken_0x193660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193660) {
            ctx->pc = 0x1936A4u;
            goto label_1936a4;
        }
    }
    ctx->pc = 0x193668u;
    // 0x193668: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x193668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x19366c: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x19366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x193670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193674: 0x0  nop
    ctx->pc = 0x193674u;
    // NOP
    // 0x193678: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x193678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19367c: 0x0  nop
    ctx->pc = 0x19367cu;
    // NOP
    // 0x193680: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x193680u;
    {
        const bool branch_taken_0x193680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193680) {
            ctx->pc = 0x1936A4u;
            goto label_1936a4;
        }
    }
    ctx->pc = 0x193688u;
    // 0x193688: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x193688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x19368c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193694: 0x0  nop
    ctx->pc = 0x193694u;
    // NOP
    // 0x193698: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x193698u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x19369c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x19369Cu;
    {
        const bool branch_taken_0x19369c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19369c) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936A4u;
label_1936a4:
    // 0x1936a4: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x1936a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x1936a8: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1936a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1936ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936b0: 0x0  nop
    ctx->pc = 0x1936b0u;
    // NOP
    // 0x1936b4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1936b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936b8: 0x0  nop
    ctx->pc = 0x1936b8u;
    // NOP
    // 0x1936bc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1936BCu;
    {
        const bool branch_taken_0x1936bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936bc) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936C4u;
    // 0x1936c4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1936c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1936c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1936c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1936cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936d0: 0x0  nop
    ctx->pc = 0x1936d0u;
    // NOP
    // 0x1936d4: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1936d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1936d8: 0x0  nop
    ctx->pc = 0x1936d8u;
    // NOP
    // 0x1936dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1936DCu;
    {
        const bool branch_taken_0x1936dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1936dc) {
            ctx->pc = 0x1936F8u;
            goto label_1936f8;
        }
    }
    ctx->pc = 0x1936E4u;
    // 0x1936e4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1936e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1936e8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1936e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1936ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1936ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1936f0: 0x0  nop
    ctx->pc = 0x1936f0u;
    // NOP
    // 0x1936f4: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1936f4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_1936f8:
    // 0x1936f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1936f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1936fc: 0xc0675d0  jal         func_19D740
    ctx->pc = 0x1936FCu;
    SET_GPR_U32(ctx, 31, 0x193704u);
    ctx->pc = 0x19D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D740u, 0x1936FCu, 0x193704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193704u;
label_193704:
    // 0x193704: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x193704u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x193708: 0xc6c0029c  lwc1        $f0, 0x29C($s6)
    ctx->pc = 0x193708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19370c: 0x46006042  mul.s       $f1, $f12, $f0
    ctx->pc = 0x19370cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x193710: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x193710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193714: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x193714u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x193718: 0x0  nop
    ctx->pc = 0x193718u;
    // NOP
    // 0x19371c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x19371cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193720: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x193720u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193724: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x193724u;
    {
        const bool branch_taken_0x193724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193724) {
            ctx->pc = 0x193BD8u;
            goto label_193bd8;
        }
    }
    ctx->pc = 0x19372Cu;
label_19372c:
    // 0x19372c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x19372cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193730: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x193730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193734: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193738: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x193738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x19373c: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x19373cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x193740: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x193740u;
    SET_GPR_U32(ctx, 31, 0x193748u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x193748u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193748u) { return; }
    ctx->pc = 0x193748u;
label_193748:
    // 0x193748: 0xc7b600ec  lwc1        $f22, 0xEC($sp)
    ctx->pc = 0x193748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19374c: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x19374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193750: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x193750u;
    SET_GPR_U32(ctx, 31, 0x193758u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x193750u, 0x193758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193758u;
label_193758:
    // 0x193758: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x193758u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19375c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19375cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193760: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x193760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193764: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193764u;
    {
        const bool branch_taken_0x193764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193764) {
            ctx->pc = 0x193770u;
            goto label_193770;
        }
    }
    ctx->pc = 0x19376Cu;
    // 0x19376c: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x19376cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_193770:
    // 0x193770: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x193770u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x193774: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193778: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x193778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19377c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x193780: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x193784: 0x1602000c  bne         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x193784u;
    {
        const bool branch_taken_0x193784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x193784) {
            ctx->pc = 0x1937B8u;
            goto label_1937b8;
        }
    }
    ctx->pc = 0x19378Cu;
    // 0x19378c: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x19378cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193790: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x193790u;
    SET_GPR_U32(ctx, 31, 0x193798u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x193790u, 0x193798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193798u;
label_193798:
    // 0x193798: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x193798u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19379c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1937a0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1937a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1937a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1937A4u;
    {
        const bool branch_taken_0x1937a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1937a4) {
            ctx->pc = 0x1937B0u;
            goto label_1937b0;
        }
    }
    ctx->pc = 0x1937ACu;
    // 0x1937ac: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x1937acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1937b0:
    // 0x1937b0: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x1937b0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x1937b4: 0x0  nop
    ctx->pc = 0x1937b4u;
    // NOP
label_1937b8:
    // 0x1937b8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1937b8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1937bc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1937bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1937c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1937c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1937c4: 0x0  nop
    ctx->pc = 0x1937c4u;
    // NOP
    // 0x1937c8: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1937c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937cc: 0x0  nop
    ctx->pc = 0x1937ccu;
    // NOP
    // 0x1937d0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1937D0u;
    {
        const bool branch_taken_0x1937d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1937d0) {
            ctx->pc = 0x1937F0u;
            goto label_1937f0;
        }
    }
    ctx->pc = 0x1937D8u;
    // 0x1937d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1937d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1937dc: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x1937dcu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1937e0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1937e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937e4: 0x0  nop
    ctx->pc = 0x1937e4u;
    // NOP
    // 0x1937e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1937E8u;
    {
        const bool branch_taken_0x1937e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1937e8) {
            ctx->pc = 0x1937F8u;
            goto label_1937f8;
        }
    }
    ctx->pc = 0x1937F0u;
label_1937f0:
    // 0x1937f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1937f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1937f4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1937f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1937f8:
    // 0x1937f8: 0xc6c10338  lwc1        $f1, 0x338($s6)
    ctx->pc = 0x1937f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1937fc: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x1937fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193800: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193800u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193804: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x193808: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x19380c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x19380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193810: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x193810u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x193814: 0xc040c60  jal         func_103180
    ctx->pc = 0x193814u;
    SET_GPR_U32(ctx, 31, 0x19381Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x19381Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19381Cu) { return; }
    ctx->pc = 0x19381Cu;
label_19381c:
    // 0x19381c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x19381cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193820: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x193820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x193824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193828: 0x0  nop
    ctx->pc = 0x193828u;
    // NOP
    // 0x19382c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19382cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193830: 0x0  nop
    ctx->pc = 0x193830u;
    // NOP
    // 0x193834: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x193834u;
    {
        const bool branch_taken_0x193834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193834) {
            ctx->pc = 0x193860u;
            goto label_193860;
        }
    }
    ctx->pc = 0x19383Cu;
    // 0x19383c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x19383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193840: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x193840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x193844: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19384c: 0x0  nop
    ctx->pc = 0x19384cu;
    // NOP
    // 0x193850: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193854: 0x0  nop
    ctx->pc = 0x193854u;
    // NOP
    // 0x193858: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193858u;
    {
        const bool branch_taken_0x193858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193858) {
            ctx->pc = 0x193868u;
            goto label_193868;
        }
    }
    ctx->pc = 0x193860u;
label_193860:
    // 0x193860: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193864: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x193864u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193868:
    // 0x193868: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19386c: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x19386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x193870: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193870u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193874: 0x0  nop
    ctx->pc = 0x193874u;
    // NOP
    // 0x193878: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193878u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19387c: 0x0  nop
    ctx->pc = 0x19387cu;
    // NOP
    // 0x193880: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x193880u;
    {
        const bool branch_taken_0x193880 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193880) {
            ctx->pc = 0x1938B0u;
            goto label_1938b0;
        }
    }
    ctx->pc = 0x193888u;
    // 0x193888: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19388c: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x19388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x193890: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193894: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193894u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193898: 0x0  nop
    ctx->pc = 0x193898u;
    // NOP
    // 0x19389c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19389cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1938a0: 0x0  nop
    ctx->pc = 0x1938a0u;
    // NOP
    // 0x1938a4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1938A4u;
    {
        const bool branch_taken_0x1938a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1938a4) {
            ctx->pc = 0x1938B8u;
            goto label_1938b8;
        }
    }
    ctx->pc = 0x1938ACu;
    // 0x1938ac: 0x0  nop
    ctx->pc = 0x1938acu;
    // NOP
label_1938b0:
    // 0x1938b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1938b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1938b4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1938b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1938b8:
    // 0x1938b8: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x1938b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1938bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1938BCu;
    {
        const bool branch_taken_0x1938bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1938bc) {
            ctx->pc = 0x1938D0u;
            goto label_1938d0;
        }
    }
    ctx->pc = 0x1938C4u;
    // 0x1938c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1938c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1938c8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x1938c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x1938cc: 0x0  nop
    ctx->pc = 0x1938ccu;
    // NOP
label_1938d0:
    // 0x1938d0: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x1938d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x1938d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1938d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1938d8: 0x12020079  beq         $s0, $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x1938D8u;
    {
        const bool branch_taken_0x1938d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1938d8) {
            ctx->pc = 0x193AC0u;
            goto label_193ac0;
        }
    }
    ctx->pc = 0x1938E0u;
    // 0x1938e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1938e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1938e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1938e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1938e8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1938e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1938ec: 0x8ec20ab8  lw          $v0, 0xAB8($s6)
    ctx->pc = 0x1938ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2744)));
    // 0x1938f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1938f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1938f4: 0x8ec20ab8  lw          $v0, 0xAB8($s6)
    ctx->pc = 0x1938f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 2744)));
    // 0x1938f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1938f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1938fc: 0x8ec20290  lw          $v0, 0x290($s6)
    ctx->pc = 0x1938fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 656)));
    // 0x193900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x193900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x193904: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193904u;
    {
        const bool branch_taken_0x193904 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193904) {
            ctx->pc = 0x193920u;
            goto label_193920;
        }
    }
    ctx->pc = 0x19390Cu;
    // 0x19390c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19390cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193910: 0x0  nop
    ctx->pc = 0x193910u;
    // NOP
    // 0x193914: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x193914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x193918u;
    {
        const bool branch_taken_0x193918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193918) {
            ctx->pc = 0x19393Cu;
            goto label_19393c;
        }
    }
    ctx->pc = 0x193920u;
label_193920:
    // 0x193920: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x193920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x193924: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x193924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x193928: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x193928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19392c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19392cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193930: 0x0  nop
    ctx->pc = 0x193930u;
    // NOP
    // 0x193934: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x193934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x193938: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x193938u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19393c:
    // 0x19393c: 0xc6c00294  lwc1        $f0, 0x294($s6)
    ctx->pc = 0x19393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193940: 0x0  nop
    ctx->pc = 0x193940u;
    // NOP
    // 0x193944: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x193944u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x193948: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x19394c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19394cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193954: 0x0  nop
    ctx->pc = 0x193954u;
    // NOP
    // 0x193958: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x193958u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19395c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x193960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193968: 0x0  nop
    ctx->pc = 0x193968u;
    // NOP
    // 0x19396c: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x19396cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x193970: 0x0  nop
    ctx->pc = 0x193970u;
    // NOP
    // 0x193974: 0x0  nop
    ctx->pc = 0x193974u;
    // NOP
    // 0x193978: 0x0  nop
    ctx->pc = 0x193978u;
    // NOP
    // 0x19397c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x19397Cu;
    SET_GPR_U32(ctx, 31, 0x193984u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x19397Cu, 0x193984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193984u;
label_193984:
    // 0x193984: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x193984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x193988: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x193988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x19398c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19398cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193990: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193990u;
    {
        const bool branch_taken_0x193990 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193990) {
            ctx->pc = 0x1939ACu;
            goto label_1939ac;
        }
    }
    ctx->pc = 0x193998u;
    // 0x193998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19399c: 0x0  nop
    ctx->pc = 0x19399cu;
    // NOP
    // 0x1939a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1939a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1939a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1939A4u;
    {
        const bool branch_taken_0x1939a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1939a4) {
            ctx->pc = 0x1939C8u;
            goto label_1939c8;
        }
    }
    ctx->pc = 0x1939ACu;
label_1939ac:
    // 0x1939ac: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1939acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1939b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1939b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1939b4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1939b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1939b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1939b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939bc: 0x0  nop
    ctx->pc = 0x1939bcu;
    // NOP
    // 0x1939c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1939c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1939c4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1939c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1939c8:
    // 0x1939c8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1939c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1939cc: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x1939ccu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x1939d0: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1939d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1939d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1939d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1939d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1939d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939dc: 0x0  nop
    ctx->pc = 0x1939dcu;
    // NOP
    // 0x1939e0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1939e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1939e4: 0x0  nop
    ctx->pc = 0x1939e4u;
    // NOP
    // 0x1939e8: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1939E8u;
    {
        const bool branch_taken_0x1939e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1939e8) {
            ctx->pc = 0x193A2Cu;
            goto label_193a2c;
        }
    }
    ctx->pc = 0x1939F0u;
    // 0x1939f0: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x1939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x1939f4: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x1939f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x1939f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1939f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1939fc: 0x0  nop
    ctx->pc = 0x1939fcu;
    // NOP
    // 0x193a00: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x193a00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a04: 0x0  nop
    ctx->pc = 0x193a04u;
    // NOP
    // 0x193a08: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x193A08u;
    {
        const bool branch_taken_0x193a08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193a08) {
            ctx->pc = 0x193A2Cu;
            goto label_193a2c;
        }
    }
    ctx->pc = 0x193A10u;
    // 0x193a10: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x193a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x193a14: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193a18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a1c: 0x0  nop
    ctx->pc = 0x193a1cu;
    // NOP
    // 0x193a20: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x193a20u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x193a24: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x193A24u;
    {
        const bool branch_taken_0x193a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a24) {
            ctx->pc = 0x193A80u;
            goto label_193a80;
        }
    }
    ctx->pc = 0x193A2Cu;
label_193a2c:
    // 0x193a2c: 0x3c024096  lui         $v0, 0x4096
    ctx->pc = 0x193a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16534 << 16));
    // 0x193a30: 0x3442cbe4  ori         $v0, $v0, 0xCBE4
    ctx->pc = 0x193a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52196);
    // 0x193a34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a38: 0x0  nop
    ctx->pc = 0x193a38u;
    // NOP
    // 0x193a3c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x193a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a40: 0x0  nop
    ctx->pc = 0x193a40u;
    // NOP
    // 0x193a44: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x193A44u;
    {
        const bool branch_taken_0x193a44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193a44) {
            ctx->pc = 0x193A80u;
            goto label_193a80;
        }
    }
    ctx->pc = 0x193A4Cu;
    // 0x193a4c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x193a50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a58: 0x0  nop
    ctx->pc = 0x193a58u;
    // NOP
    // 0x193a5c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x193a5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193a60: 0x0  nop
    ctx->pc = 0x193a60u;
    // NOP
    // 0x193a64: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x193A64u;
    {
        const bool branch_taken_0x193a64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193a64) {
            ctx->pc = 0x193A80u;
            goto label_193a80;
        }
    }
    ctx->pc = 0x193A6Cu;
    // 0x193a6c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x193a70: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193a74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193a78: 0x0  nop
    ctx->pc = 0x193a78u;
    // NOP
    // 0x193a7c: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x193a7cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_193a80:
    // 0x193a80: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x193a80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x193a84: 0xc0675d0  jal         func_19D740
    ctx->pc = 0x193A84u;
    SET_GPR_U32(ctx, 31, 0x193A8Cu);
    ctx->pc = 0x19D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D740u, 0x193A84u, 0x193A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A8Cu;
label_193a8c:
    // 0x193a8c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x193a8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x193a90: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x193a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a94: 0x46160043  div.s       $f1, $f0, $f22
    ctx->pc = 0x193a94u;
    { if (ctx->f[22] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[22]); }
    // 0x193a98: 0xc6c0029c  lwc1        $f0, 0x29C($s6)
    ctx->pc = 0x193a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x193a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x193aa0: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x193aa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x193aa4: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x193aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193aa8: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x193aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x193aac: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x193aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x193ab0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x193ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ab4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x193ab4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x193ab8: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x193ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x193abc: 0x0  nop
    ctx->pc = 0x193abcu;
    // NOP
label_193ac0:
    // 0x193ac0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193ac4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193ac8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193acc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193accu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193ad0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193ad4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193ad8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193adc: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193adcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193ae0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193ae4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193ae8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193aec: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193af0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193af0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193af4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193af8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x193af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x193afc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x193afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193b00: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b08: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b10: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x193b10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x193b14: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b1c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193b24: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b2c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b30: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x193b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193b34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193b38: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b44: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193b48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193b4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193b50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b58: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x193b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x193b60: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193b68: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193b74: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x193b74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x193b78: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193b80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193b8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193b94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193b98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193b9c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x193b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ba0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x193ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x193ba4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193bac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193bb0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193bb4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193bb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193bc0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193bc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193bc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193bcc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193bd0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x193bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x193bd4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_193bd8:
    // 0x193bd8: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x193bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x193bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x193be0: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x193be0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x193be4: 0x1020fed1  beqz        $at, . + 4 + (-0x12F << 2)
    ctx->pc = 0x193BE4u;
    {
        const bool branch_taken_0x193be4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x193be4) {
            ctx->pc = 0x19372Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19372c;
        }
    }
    ctx->pc = 0x193BECu;
    // 0x193bec: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x193becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x193bf0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x193bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x193bf4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x193bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x193bf8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x193BF8u;
    {
        const bool branch_taken_0x193bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193bf8) {
            ctx->pc = 0x193C18u;
            goto label_193c18;
        }
    }
    ctx->pc = 0x193C00u;
    // 0x193c00: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x193c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x193c04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193C04u;
    {
        const bool branch_taken_0x193c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193c04) {
            ctx->pc = 0x193C18u;
            goto label_193c18;
        }
    }
    ctx->pc = 0x193C0Cu;
    // 0x193c0c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x193c0cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193c10: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x193C10u;
    {
        const bool branch_taken_0x193c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c10) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x193C18u;
label_193c18:
    // 0x193c18: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x193c18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193c1c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x193c1cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193c20: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x193C20u;
    {
        const bool branch_taken_0x193c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193c20) {
            ctx->pc = 0x193D70u;
            goto label_193d70;
        }
    }
    ctx->pc = 0x193C28u;
label_193c28:
    // 0x193c28: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193c2c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193c30: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193c34: 0x26c502d0  addiu       $a1, $s6, 0x2D0
    ctx->pc = 0x193c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193c38: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193c3c: 0x2633021  addu        $a2, $s3, $v1
    ctx->pc = 0x193c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193c40: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x193c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x193c44: 0x0  nop
    ctx->pc = 0x193c44u;
    // NOP
    // 0x193c48: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x193c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x193c4c: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x193c4cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x193c50: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x193c50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x193c54: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x193c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x193c58: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193c5c: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x193c5cu;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x193c60: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193c60u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193c64: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x193c64u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c68: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193c68u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193c6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x193c6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x193c70: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193c70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193c74: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193c74u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193c78: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x193c78u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c7c: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x193c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c80: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x193c80u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x193c84: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x193c84u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x193c88: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193c88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193c8c: 0xdea40000  ld          $a0, 0x0($s5)
    ctx->pc = 0x193c8cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193c90: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x193c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193c94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x193c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x193c98: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x193c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x193c9c: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x193c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x193ca0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193ca0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193ca4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193ca8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193cac: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193cb0: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193cb4: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x193cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193cb8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193cbc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193cc0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x193cc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193cc4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193cc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193cc8: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193cc8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193ccc: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193cccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193cd0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193cd4: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193cd8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x193cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x193cdc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193ce0: 0xdea40000  ld          $a0, 0x0($s5)
    ctx->pc = 0x193ce0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x193ce4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x193ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x193ce8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x193ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x193cec: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x193cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x193cf0: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x193cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x193cf4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x193cf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193cfc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d00: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193d04: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193d08: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x193d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193d0c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d10: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193d14: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x193d14u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193d18: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193d1c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193d1cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193d20: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193d20u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193d24: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193d28: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193d28u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193d2c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x193d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x193d30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x193d34: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d38: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x193d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x193d3c: 0x246405b0  addiu       $a0, $v1, 0x5B0
    ctx->pc = 0x193d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x193d40: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x193d44: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x193d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d48: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x193d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x193d4c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x193d4cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x193d50: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x193d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x193d54: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x193d54u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x193d58: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x193d58u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x193d5c: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x193d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x193d60: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x193d60u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x193d64: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x193d64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x193d68: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x193d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x193d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_193d70:
    // 0x193d70: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x193d70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x193d74: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x193d78: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x193d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x193d7c: 0x1460ffaa  bnez        $v1, . + 4 + (-0x56 << 2)
    ctx->pc = 0x193D7Cu;
    {
        const bool branch_taken_0x193d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x193d7c) {
            ctx->pc = 0x193C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193c28;
        }
    }
    ctx->pc = 0x193D84u;
    // 0x193d84: 0x1000017c  b           . + 4 + (0x17C << 2)
    ctx->pc = 0x193D84u;
    {
        const bool branch_taken_0x193d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d84) {
            ctx->pc = 0x194378u;
            goto label_194378;
        }
    }
    ctx->pc = 0x193D8Cu;
label_193d8c:
    // 0x193d8c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x193d8cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193d90: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x193D90u;
    {
        const bool branch_taken_0x193d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d90) {
            ctx->pc = 0x194070u;
            goto label_194070;
        }
    }
    ctx->pc = 0x193D98u;
label_193d98:
    // 0x193d98: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x193d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x193d9c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x193d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x193da0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193da4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x193da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x193da8: 0x24460480  addiu       $a2, $v0, 0x480
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x193dac: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x193DB4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193DB4u) { return; }
    ctx->pc = 0x193DB4u;
label_193db4:
    // 0x193db4: 0xc7a000ec  lwc1        $f0, 0xEC($sp)
    ctx->pc = 0x193db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193db8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193dbc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193dc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193dc4: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x193DC4u;
    {
        const bool branch_taken_0x193dc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x193dc4) {
            ctx->pc = 0x193DF8u;
            goto label_193df8;
        }
    }
    ctx->pc = 0x193DCCu;
    // 0x193dcc: 0xc7ac00ec  lwc1        $f12, 0xEC($sp)
    ctx->pc = 0x193dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193dd0: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x193DD0u;
    SET_GPR_U32(ctx, 31, 0x193DD8u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x193DD0u, 0x193DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD8u;
label_193dd8:
    // 0x193dd8: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x193dd8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x193ddc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x193ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x193de0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x193de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x193de4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x193DE4u;
    {
        const bool branch_taken_0x193de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193de4) {
            ctx->pc = 0x193DF0u;
            goto label_193df0;
        }
    }
    ctx->pc = 0x193DECu;
    // 0x193dec: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x193decu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_193df0:
    // 0x193df0: 0x118982  srl         $s1, $s1, 6
    ctx->pc = 0x193df0u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
    // 0x193df4: 0x0  nop
    ctx->pc = 0x193df4u;
    // NOP
label_193df8:
    // 0x193df8: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x193df8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x193dfc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193e00: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193e04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x193e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e08: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x193e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193e10: 0x0  nop
    ctx->pc = 0x193e10u;
    // NOP
    // 0x193e14: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e18: 0x0  nop
    ctx->pc = 0x193e18u;
    // NOP
    // 0x193e1c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x193E1Cu;
    {
        const bool branch_taken_0x193e1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e1c) {
            ctx->pc = 0x193E48u;
            goto label_193e48;
        }
    }
    ctx->pc = 0x193E24u;
    // 0x193e24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193e28: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193e2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x193e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e30: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x193e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x193e34: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x193e34u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e38: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x193e38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e3c: 0x0  nop
    ctx->pc = 0x193e3cu;
    // NOP
    // 0x193e40: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x193E40u;
    {
        const bool branch_taken_0x193e40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e40) {
            ctx->pc = 0x193E50u;
            goto label_193e50;
        }
    }
    ctx->pc = 0x193E48u;
label_193e48:
    // 0x193e48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193e4c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193e50:
    // 0x193e50: 0xc6c10338  lwc1        $f1, 0x338($s6)
    ctx->pc = 0x193e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e54: 0xc7c001b4  lwc1        $f0, 0x1B4($fp)
    ctx->pc = 0x193e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193e58: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x193e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193e5c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x193e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x193e60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x193e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x193e64: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x193e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x193e68: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x193e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193e6c: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x193e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193e70: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x193e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x193e74: 0xc040c60  jal         func_103180
    ctx->pc = 0x193E74u;
    SET_GPR_U32(ctx, 31, 0x193E7Cu);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x193E7Cu;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x193E7Cu) { return; }
    ctx->pc = 0x193E7Cu;
label_193e7c:
    // 0x193e7c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x193e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193e80: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x193e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x193e84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193e88: 0x0  nop
    ctx->pc = 0x193e88u;
    // NOP
    // 0x193e8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193e8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193e90: 0x0  nop
    ctx->pc = 0x193e90u;
    // NOP
    // 0x193e94: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x193E94u;
    {
        const bool branch_taken_0x193e94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193e94) {
            ctx->pc = 0x193EC0u;
            goto label_193ec0;
        }
    }
    ctx->pc = 0x193E9Cu;
    // 0x193e9c: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x193e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193ea0: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x193ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x193ea4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193eac: 0x0  nop
    ctx->pc = 0x193eacu;
    // NOP
    // 0x193eb0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193eb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193eb4: 0x0  nop
    ctx->pc = 0x193eb4u;
    // NOP
    // 0x193eb8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x193EB8u;
    {
        const bool branch_taken_0x193eb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193eb8) {
            ctx->pc = 0x193EC8u;
            goto label_193ec8;
        }
    }
    ctx->pc = 0x193EC0u;
label_193ec0:
    // 0x193ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193ec4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x193ec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193ec8:
    // 0x193ec8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193ecc: 0x3c0244d9  lui         $v0, 0x44D9
    ctx->pc = 0x193eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17625 << 16));
    // 0x193ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ed4: 0x0  nop
    ctx->pc = 0x193ed4u;
    // NOP
    // 0x193ed8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x193ed8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193edc: 0x0  nop
    ctx->pc = 0x193edcu;
    // NOP
    // 0x193ee0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x193EE0u;
    {
        const bool branch_taken_0x193ee0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193ee0) {
            ctx->pc = 0x193F10u;
            goto label_193f10;
        }
    }
    ctx->pc = 0x193EE8u;
    // 0x193ee8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x193ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193eec: 0x3c024513  lui         $v0, 0x4513
    ctx->pc = 0x193eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17683 << 16));
    // 0x193ef0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x193ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x193ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193ef8: 0x0  nop
    ctx->pc = 0x193ef8u;
    // NOP
    // 0x193efc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x193efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x193f00: 0x0  nop
    ctx->pc = 0x193f00u;
    // NOP
    // 0x193f04: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x193F04u;
    {
        const bool branch_taken_0x193f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x193f04) {
            ctx->pc = 0x193F18u;
            goto label_193f18;
        }
    }
    ctx->pc = 0x193F0Cu;
    // 0x193f0c: 0x0  nop
    ctx->pc = 0x193f0cu;
    // NOP
label_193f10:
    // 0x193f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f14: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x193f14u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_193f18:
    // 0x193f18: 0x324200ff  andi        $v0, $s2, 0xFF
    ctx->pc = 0x193f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x193f1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x193F1Cu;
    {
        const bool branch_taken_0x193f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193f1c) {
            ctx->pc = 0x193F30u;
            goto label_193f30;
        }
    }
    ctx->pc = 0x193F24u;
    // 0x193f24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x193f28: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x193f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x193f2c: 0x0  nop
    ctx->pc = 0x193f2cu;
    // NOP
label_193f30:
    // 0x193f30: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193f34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193f34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193f38: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f40: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f44: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193f44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193f48: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x193f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x193f4c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x193f4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x193f50: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193f58: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f5c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f60: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x193f60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x193f64: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x193f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193f68: 0xc6c00150  lwc1        $f0, 0x150($s6)
    ctx->pc = 0x193f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f6c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x193f6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193f70: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x193f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x193f74: 0xc6c00154  lwc1        $f0, 0x154($s6)
    ctx->pc = 0x193f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x193f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x193f7c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f84: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f88: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193f8c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x193f8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x193f90: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193f94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193f98: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193f9c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x193f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x193fa0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fa4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fa8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x193facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193fb0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x193fb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x193fb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fbc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fc0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x193fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x193fc4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x193fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193fcc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fd8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x193fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x193fdc: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193fe0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193fe4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x193fe8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x193fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x193fec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193ff0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x193ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x193ff4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x193ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x193ff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x193ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x193ffc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x193ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194000: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194004: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x194004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x194008: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x19400c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19400cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194010: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194014: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194018: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x194018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19401c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19401cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x194020: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x19402c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x19402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x194030: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x194030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x194034: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x194034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x194038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x194038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19403c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19403cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194040: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x194044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x194048: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x194048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x19404c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x194050: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x194050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194054: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x194054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x194058: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x194058u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x19405c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x19405cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x194060: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x194064: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x194064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x194068: 0xa0520000  sb          $s2, 0x0($v0)
    ctx->pc = 0x194068u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 18));
    // 0x19406c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x19406cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_194070:
    // 0x194070: 0x92c20348  lbu         $v0, 0x348($s6)
    ctx->pc = 0x194070u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194074: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x194074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x194078: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x194078u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x19407c: 0x1020ff46  beqz        $at, . + 4 + (-0xBA << 2)
    ctx->pc = 0x19407Cu;
    {
        const bool branch_taken_0x19407c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19407c) {
            ctx->pc = 0x193D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193d98;
        }
    }
    ctx->pc = 0x194084u;
    // 0x194084: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x194088: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x194088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19408c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x19408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194090: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x194090u;
    {
        const bool branch_taken_0x194090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194090) {
            ctx->pc = 0x1940B0u;
            goto label_1940b0;
        }
    }
    ctx->pc = 0x194098u;
    // 0x194098: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x194098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x19409c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19409Cu;
    {
        const bool branch_taken_0x19409c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19409c) {
            ctx->pc = 0x1940B0u;
            goto label_1940b0;
        }
    }
    ctx->pc = 0x1940A4u;
    // 0x1940a4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1940a4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940a8: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1940A8u;
    {
        const bool branch_taken_0x1940a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940a8) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x1940B0u;
label_1940b0:
    // 0x1940b0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1940b0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1940b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940b8: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1940b8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1940bc: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x1940BCu;
    {
        const bool branch_taken_0x1940bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1940bc) {
            ctx->pc = 0x194360u;
            goto label_194360;
        }
    }
    ctx->pc = 0x1940C4u;
label_1940c4:
    // 0x1940c4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1940c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1940c8: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1940c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1940cc: 0x246505b0  addiu       $a1, $v1, 0x5B0
    ctx->pc = 0x1940ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1940d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1940d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1940d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1940d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1940d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1940d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1940dc: 0x26c602d0  addiu       $a2, $s6, 0x2D0
    ctx->pc = 0x1940dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1940e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1940e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1940e4: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x1940e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1940e8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1940e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1940ec: 0x0  nop
    ctx->pc = 0x1940ecu;
    // NOP
    // 0x1940f0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1940f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1940f4: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x1940f4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1940f8: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x1940f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1940fc: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x1940fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194100: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x194100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x194104: 0x4be5197c  vftoi0.xyzw $vf5, $vf3
    ctx->pc = 0x194104u;
    { __m128 src = ctx->vu0_vf[3]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x194108: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x194108u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19410c: 0xfaa50010  sqc2        $vf5, 0x10($s5)
    ctx->pc = 0x19410cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194110: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194110u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194114: 0x4a0003bf  vwaitq
    ctx->pc = 0x194114u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194118: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19411c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19411cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194120: 0xfaa50040  sqc2        $vf5, 0x40($s5)
    ctx->pc = 0x194120u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194124: 0xfaa50070  sqc2        $vf5, 0x70($s5)
    ctx->pc = 0x194124u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 112), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x194128: 0xfaa500a0  sqc2        $vf5, 0xA0($s5)
    ctx->pc = 0x194128u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 160), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x19412c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19412cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x194130: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194130u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194134: 0xdea50000  ld          $a1, 0x0($s5)
    ctx->pc = 0x194134u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194138: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19413c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x19413cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194140: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x194140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x194144: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194144u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x194148: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x19414c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19414cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194150: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194150u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194154: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194154u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194158: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x194158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19415c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19415cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x194160: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x194160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x194164: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x194164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x194168: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x194168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x19416c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x19416cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194170: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x194170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x194174: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x194174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x194178: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x194178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x19417c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x19417cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194180: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x194180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x194184: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x194184u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194188: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x194188u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19418c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19418cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x194190: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194190u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194194: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194194u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x194198: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x194198u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x19419c: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x19419cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1941a0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1941a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1941a4: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x1941a4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1941a8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1941a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1941ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1941acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1941b0: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x1941b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1941b4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1941b4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1941b8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x1941b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1941bc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1941bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1941c0: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x1941c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x1941c4: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1941c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1941c8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1941c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1941cc: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1941ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1941d0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1941d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1941d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1941d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1941d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1941d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1941dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1941dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1941e0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1941e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1941e4: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x1941e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1941e8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1941e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1941ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1941ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1941f0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1941f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1941f4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1941f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1941f8: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x1941f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1941fc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1941fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x194200: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x194200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x194204: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x194204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x194208: 0x0  nop
    ctx->pc = 0x194208u;
    // NOP
    // 0x19420c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x19420cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x194210: 0x4a6203bc  vdiv        $Q, $vf0w, $vf2x
    ctx->pc = 0x194210u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x194214: 0xd8e40000  lqc2        $vf4, 0x0($a3)
    ctx->pc = 0x194214u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x194218: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x194218u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19421c: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x19421cu;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x194220: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x194220u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x194224: 0x4a0003bf  vwaitq
    ctx->pc = 0x194224u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x194228: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x194228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x19422c: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x19422cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x194230: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x194230u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x194234: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x194234u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194238: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x19423c: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x19423cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194240: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x194240) {
            ctx->pc = 0x194258u;
            goto label_194258;
        }
    }
    ctx->pc = 0x194248u;
    // 0x194248: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19424c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194250: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194250u;
    {
        const bool branch_taken_0x194250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194250) {
            ctx->pc = 0x194260u;
            goto label_194260;
        }
    }
    ctx->pc = 0x194258u;
label_194258:
    // 0x194258: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x194258u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19425c: 0x0  nop
    ctx->pc = 0x19425cu;
    // NOP
label_194260:
    // 0x194260: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x194260u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194264: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x194264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x194268: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194268u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19426c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x19426cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x194270: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194270u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194274: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x194278: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19427c: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x19427cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x194280: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194284: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194284u;
    {
        const bool branch_taken_0x194284 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194284) {
            ctx->pc = 0x19429Cu;
            goto label_19429c;
        }
    }
    ctx->pc = 0x19428Cu;
    // 0x19428c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19428cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x194290: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x194290u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x194294u;
    {
        const bool branch_taken_0x194294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194294) {
            ctx->pc = 0x1942A0u;
            goto label_1942a0;
        }
    }
    ctx->pc = 0x19429Cu;
label_19429c:
    // 0x19429c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x19429cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1942a0:
    // 0x1942a0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1942a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1942a4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1942a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1942a8: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x1942a8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x1942ac: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1942acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1942b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1942b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1942b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1942b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1942b8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1942b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1942bc: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x1942bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x1942c0: 0x246605b0  addiu       $a2, $v1, 0x5B0
    ctx->pc = 0x1942c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1456));
    // 0x1942c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1942c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1942c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1942c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1942cc: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1942ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1942d0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1942d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1942d4: 0x26c302d0  addiu       $v1, $s6, 0x2D0
    ctx->pc = 0x1942d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 720));
    // 0x1942d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x1942d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1942dc: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x1942dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x1942e0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1942e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1942e4: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1942e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1942e8: 0x4be6217d  vftoi4.xyzw $vf6, $vf4
    ctx->pc = 0x1942e8u;
    { __m128 src = ctx->vu0_vf[4]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1942ec: 0xfaa60020  sqc2        $vf6, 0x20($s5)
    ctx->pc = 0x1942ecu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1942f0: 0x4be009dc  vmulq.xyzw  $vf7, $vf1, $Q
    ctx->pc = 0x1942f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1942f4: 0xfaa70000  sqc2        $vf7, 0x0($s5)
    ctx->pc = 0x1942f4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1942f8: 0x26b50020  addiu       $s5, $s5, 0x20
    ctx->pc = 0x1942f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x1942fc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1942fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194300: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x194300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x194304: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x194304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194308: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x194308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19430c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19430cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194310: 0x2f01821  addu        $v1, $s7, $s0
    ctx->pc = 0x194310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x194314: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x194314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x194318: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x194318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x19431c: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x19431cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194320: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x194320u;
    {
        const bool branch_taken_0x194320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x194320) {
            ctx->pc = 0x194338u;
            goto label_194338;
        }
    }
    ctx->pc = 0x194328u;
    // 0x194328: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x194328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19432c: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x19432cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x194330: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x194330u;
    {
        const bool branch_taken_0x194330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194330) {
            ctx->pc = 0x194340u;
            goto label_194340;
        }
    }
    ctx->pc = 0x194338u;
label_194338:
    // 0x194338: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x194338u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19433c: 0x0  nop
    ctx->pc = 0x19433cu;
    // NOP
label_194340:
    // 0x194340: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x194340u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x194344: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x194344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x194348: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x194348u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x19434c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x19434cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x194350: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x194350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x194354: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x194354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x194358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x194358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19435c: 0x0  nop
    ctx->pc = 0x19435cu;
    // NOP
label_194360:
    // 0x194360: 0x92c30348  lbu         $v1, 0x348($s6)
    ctx->pc = 0x194360u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 840)));
    // 0x194364: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x194364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x194368: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x194368u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x19436c: 0x1460ff55  bnez        $v1, . + 4 + (-0xAB << 2)
    ctx->pc = 0x19436Cu;
    {
        const bool branch_taken_0x19436c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19436c) {
            ctx->pc = 0x1940C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1940c4;
        }
    }
    ctx->pc = 0x194374u;
    // 0x194374: 0x0  nop
    ctx->pc = 0x194374u;
    // NOP
label_194378:
    // 0x194378: 0x96c20340  lhu         $v0, 0x340($s6)
    ctx->pc = 0x194378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 832)));
    // 0x19437c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x19437cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x194380: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x194380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x194384: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x194384u;
    {
        const bool branch_taken_0x194384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194384) {
            ctx->pc = 0x194440u;
            goto label_194440;
        }
    }
    ctx->pc = 0x19438Cu;
    // 0x19438c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x19438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x194390: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x194390u;
    {
        const bool branch_taken_0x194390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194390) {
            ctx->pc = 0x1943E8u;
            goto label_1943e8;
        }
    }
    ctx->pc = 0x194398u;
    // 0x194398: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19439c: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x19439cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1943a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1943a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1943a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1943a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1943a8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1943a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1943ac: 0x8c55036c  lw          $s5, 0x36C($v0)
    ctx->pc = 0x1943acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x1943b0: 0xdea30000  ld          $v1, 0x0($s5)
    ctx->pc = 0x1943b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1943b4: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1943b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x1943b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1943b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1943bc: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x1943bcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x1943c0: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x1943c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x1943c4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1943c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1943c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1943c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1943cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1943ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1943d0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1943d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1943d4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1943d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1943d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1943d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1943dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1943dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1943e0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1943E0u;
    {
        const bool branch_taken_0x1943e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1943e0) {
            ctx->pc = 0x194434u;
            goto label_194434;
        }
    }
    ctx->pc = 0x1943E8u;
label_1943e8:
    // 0x1943e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1943e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1943ec: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1943ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1943f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1943f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1943f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1943f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1943f8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1943f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1943fc: 0x8c42036c  lw          $v0, 0x36C($v0)
    ctx->pc = 0x1943fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x194400: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x194400u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x194404: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x194404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194408: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x194408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x19440c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194410: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x194410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x194414: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x194414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x194418: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x194418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x19441c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19441cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x194420: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x194420u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x194424: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x194424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x194428: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x194428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19442c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x19442cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x194430: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x194430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_194434:
    // 0x194434: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x194434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x194438: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x194438u;
    {
        const bool branch_taken_0x194438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x194438) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x194440u;
label_194440:
    // 0x194440: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x194440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x194444: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x194444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194448: 0x2a28023  subu        $s0, $s5, $v0
    ctx->pc = 0x194448u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x19444c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19444cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x194450: 0x101082  srl         $v0, $s0, 2
    ctx->pc = 0x194450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x194454: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x194454u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x194458: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x194458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x19445c: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x19445cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194460: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x194460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194464: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x194464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x194468: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x194468u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x19446c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19446cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x194470: 0x21c80  sll         $v1, $v0, 18
    ctx->pc = 0x194470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 18));
    // 0x194474: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x194474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x194478: 0x24422580  addiu       $v0, $v0, 0x2580
    ctx->pc = 0x194478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x19447c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x194480: 0x3c010003  lui         $at, 0x3
    ctx->pc = 0x194480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3 << 16));
    // 0x194484: 0x3421fffc  ori         $at, $at, 0xFFFC
    ctx->pc = 0x194484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65532);
    // 0x194488: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x194488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
    // 0x19448c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x19448cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x194490: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x194490u;
    {
        const bool branch_taken_0x194490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x194490) {
            ctx->pc = 0x1944A4u;
            goto label_1944a4;
        }
    }
    ctx->pc = 0x194498u;
    // 0x194498: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x194498u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19449c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x19449Cu;
    {
        const bool branch_taken_0x19449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19449c) {
            ctx->pc = 0x194510u;
            goto label_194510;
        }
    }
    ctx->pc = 0x1944A4u;
label_1944a4:
    // 0x1944a4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1944a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1944a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1944ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1944acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944b0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1944b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1944b4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1944b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x1944b8: 0x2603fff0  addiu       $v1, $s0, -0x10
    ctx->pc = 0x1944b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1944bc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1944bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1944c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x1944c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1944c4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1944c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1944c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1944c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1944cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1944ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1944d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1944d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1944d4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1944d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1944d8: 0x8c22013c  lw          $v0, 0x13C($at)
    ctx->pc = 0x1944d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x1944dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1944dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1944e0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1944e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1944e4: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1944e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1944e8: 0x8c242580  lw          $a0, 0x2580($at)
    ctx->pc = 0x1944e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x532580u));
    // 0x1944ec: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x1944ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x1944f0: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x1944F0u;
    SET_GPR_U32(ctx, 31, 0x1944F8u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x1944F0u, 0x1944F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1944F8u;
label_1944f8:
    // 0x1944f8: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1944f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1944fc: 0x8c222580  lw          $v0, 0x2580($at)
    ctx->pc = 0x1944fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x532580u));
    // 0x194500: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x194500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x194504: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x194504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x194508: 0xac222580  sw          $v0, 0x2580($at)
    ctx->pc = 0x194508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x532580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x532580u, _value); } while (0);
    // 0x19450c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_194510:
    // 0x194510: 0x7bbf00a0  lq          $ra, 0xA0($sp)
    ctx->pc = 0x194510u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x194514: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x194514u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x194518: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x194518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19451c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x19451cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x194520: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x194520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x194524: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x194524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x194528: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x194528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19452c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x19452cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x194530: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x194530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x194534: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x194538: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x194538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x19453c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x19453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x194540: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x194540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x194544: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x194544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x194548: 0x3e00008  jr          $ra
    ctx->pc = 0x194548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194550u;
}
