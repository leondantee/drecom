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

// Function: Scr_morph_init
// Address: 0x1b1020 - 0x1b1350
void Scr_morph_init_0x1b1020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Scr_morph_init_0x1b1020");
#endif

    switch (ctx->pc) {
        case 0x1b1090u: goto label_1b1090;
        case 0x1b1128u: goto label_1b1128;
        case 0x1b1160u: goto label_1b1160;
        case 0x1b11d8u: goto label_1b11d8;
        case 0x1b1210u: goto label_1b1210;
        case 0x1b1298u: goto label_1b1298;
        default: break;
    }

    ctx->pc = 0x1b1020u;

    // 0x1b1020: 0x27bdfb40  addiu       $sp, $sp, -0x4C0
    ctx->pc = 0x1b1020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966080));
    // 0x1b1024: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1b1024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1b1028: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b1028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b102c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b1030: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b1030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b1034: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b1034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b1038: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b103c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b103cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1040: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1044: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b1048: 0xafa404b8  sw          $a0, 0x4B8($sp)
    ctx->pc = 0x1b1048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1208), GPR_U32(ctx, 4));
    // 0x1b104c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1b104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x1b1050: 0x24770080  addiu       $s7, $v1, 0x80
    ctx->pc = 0x1b1050u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1b1054: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b1054u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AE8u));
    // 0x1b1058: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b1058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b105c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b1060: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b1060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b1064: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b1064u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b1068: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b1068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b106c: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x1b106cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x1b1070: 0xafa30494  sw          $v1, 0x494($sp)
    ctx->pc = 0x1b1070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1172), GPR_U32(ctx, 3));
    // 0x1b1074: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b1074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b1078: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1b1078u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b107c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b107cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b1080: 0xa7a304ae  sh          $v1, 0x4AE($sp)
    ctx->pc = 0x1b1080u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1198), (uint16_t)GPR_U32(ctx, 3));
    // 0x1b1084: 0xafa004a0  sw          $zero, 0x4A0($sp)
    ctx->pc = 0x1b1084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 0));
    // 0x1b1088: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1b1088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b108c: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b108cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
label_1b1090:
    // 0x1b1090: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1b1090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1b1094: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1b1094u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1098: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b1098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b109c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b109cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10a0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1b10a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b10a4: 0x8fa30494  lw          $v1, 0x494($sp)
    ctx->pc = 0x1b10a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1172)));
    // 0x1b10a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b10a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10ac: 0xafa3049c  sw          $v1, 0x49C($sp)
    ctx->pc = 0x1b10acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1180), GPR_U32(ctx, 3));
    // 0x1b10b0: 0x8fa3049c  lw          $v1, 0x49C($sp)
    ctx->pc = 0x1b10b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1180)));
    // 0x1b10b4: 0xafa30498  sw          $v1, 0x498($sp)
    ctx->pc = 0x1b10b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1176), GPR_U32(ctx, 3));
    // 0x1b10b8: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b10b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b10bc: 0x24760004  addiu       $s6, $v1, 0x4
    ctx->pc = 0x1b10bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1b10c0: 0x8fa304b8  lw          $v1, 0x4B8($sp)
    ctx->pc = 0x1b10c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1b10c4: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x1b10c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x1b10c8: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1b10c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1b10cc: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b10ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b10d0: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b10d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b10d4: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b10d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b10d8: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1b10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1b10dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b10dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10e0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x1b10e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1b10e4: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b10e8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b10e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b10ec: 0xafa30490  sw          $v1, 0x490($sp)
    ctx->pc = 0x1b10ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1168), GPR_U32(ctx, 3));
    // 0x1b10f0: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b10f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b10f4: 0x8c750034  lw          $s5, 0x34($v1)
    ctx->pc = 0x1b10f4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1b10f8: 0x7000f628  paddub      $fp, $zero, $zero
    ctx->pc = 0x1b10f8u;
    SET_GPR_VEC(ctx, 30, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b10fc: 0xafa004a4  sw          $zero, 0x4A4($sp)
    ctx->pc = 0x1b10fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 0));
    // 0x1b1100: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b1100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b1104: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b1104u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b1108: 0x30643fff  andi        $a0, $v1, 0x3FFF
    ctx->pc = 0x1b1108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b110c: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b1110: 0x10830061  beq         $a0, $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1B1110u;
    {
        const bool branch_taken_0x1b1110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1b1110) {
            ctx->pc = 0x1B1298u;
            goto label_1b1298;
        }
    }
    ctx->pc = 0x1B1118u;
    // 0x1b1118: 0x8fa30498  lw          $v1, 0x498($sp)
    ctx->pc = 0x1b1118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1176)));
    // 0x1b111c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1b111cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1b1120: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1b1120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1b1124: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b1124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
label_1b1128:
    // 0x1b1128: 0x8eb20020  lw          $s2, 0x20($s5)
    ctx->pc = 0x1b1128u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b112c: 0x8eb10028  lw          $s1, 0x28($s5)
    ctx->pc = 0x1b112cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1b1130: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1b1130u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b1134: 0x8fa404a4  lw          $a0, 0x4A4($sp)
    ctx->pc = 0x1b1134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b1138: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1b1138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b113c: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b113cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b1140: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1b1140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1b1144: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b1148: 0xac700090  sw          $s0, 0x90($v1)
    ctx->pc = 0x1b1148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 16));
    // 0x1b114c: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b114cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b1150: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1154: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1154u;
    {
        const bool branch_taken_0x1b1154 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1154) {
            ctx->pc = 0x1B1160u;
            goto label_1b1160;
        }
    }
    ctx->pc = 0x1B115Cu;
    // 0x1b115c: 0xaed00008  sw          $s0, 0x8($s6)
    ctx->pc = 0x1b115cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 16));
label_1b1160:
    // 0x1b1160: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1b1160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1164: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1168: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b1168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b116c: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1b116cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b1170: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b1170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b1174: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b1174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b1178: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b1178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b117c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1b117cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1b1180: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b1180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b1184: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B1184u;
    {
        const bool branch_taken_0x1b1184 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1184) {
            ctx->pc = 0x1B1160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1160;
        }
    }
    ctx->pc = 0x1B118Cu;
    // 0x1b118c: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1b118cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b1190: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b1190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b1194: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1198: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1b1198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b119c: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b119cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b11a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b11a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b11a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b11a8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b11ac: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b11acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b11b0: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b11b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b11b4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b11b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b11b8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b11b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b11bc: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b11bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b11c0: 0x8eb10028  lw          $s1, 0x28($s5)
    ctx->pc = 0x1b11c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x1b11c4: 0x8ef00a68  lw          $s0, 0xA68($s7)
    ctx->pc = 0x1b11c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b11c8: 0x72009e28  paddub      $s3, $s0, $zero
    ctx->pc = 0x1b11c8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1b11cc: 0x8eb20020  lw          $s2, 0x20($s5)
    ctx->pc = 0x1b11ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b11d0: 0x0  nop
    ctx->pc = 0x1b11d0u;
    // NOP
    // 0x1b11d4: 0x0  nop
    ctx->pc = 0x1b11d4u;
    // NOP
label_1b11d8:
    // 0x1b11d8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1b11d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b11dc: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1b11dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b11e0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1b11e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b11e4: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x1b11e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1b11e8: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1b11e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1b11ec: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1b11ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1b11f0: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x1b11f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1b11f4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x1b11f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1b11f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b11fc: 0x1640fff6  bnez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B11FCu;
    {
        const bool branch_taken_0x1b11fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b11fc) {
            ctx->pc = 0x1B11D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b11d8;
        }
    }
    ctx->pc = 0x1B1204u;
    // 0x1b1204: 0x8eb4001c  lw          $s4, 0x1C($s5)
    ctx->pc = 0x1b1204u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x1b1208: 0x8eb20010  lw          $s2, 0x10($s5)
    ctx->pc = 0x1b1208u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1b120c: 0xaeb3002c  sw          $s3, 0x2C($s5)
    ctx->pc = 0x1b120cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 19));
label_1b1210:
    // 0x1b1210: 0xae930054  sw          $s3, 0x54($s4)
    ctx->pc = 0x1b1210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 19));
    // 0x1b1214: 0x26730330  addiu       $s3, $s3, 0x330
    ctx->pc = 0x1b1214u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
    // 0x1b1218: 0x269400a0  addiu       $s4, $s4, 0xA0
    ctx->pc = 0x1b1218u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x1b121c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b121cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b1220: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1220u;
    {
        const bool branch_taken_0x1b1220 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1220) {
            ctx->pc = 0x1B1210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1210;
        }
    }
    ctx->pc = 0x1B1228u;
    // 0x1b1228: 0x8ea40020  lw          $a0, 0x20($s5)
    ctx->pc = 0x1b1228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1b122c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1b1230: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b1234: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1b1234u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b1238: 0x26e40a68  addiu       $a0, $s7, 0xA68
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 2664));
    // 0x1b123c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1b123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b1240: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b1240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b1244: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1b1244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1b1248: 0x8ee30a68  lw          $v1, 0xA68($s7)
    ctx->pc = 0x1b1248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2664)));
    // 0x1b124c: 0x2464000f  addiu       $a0, $v1, 0xF
    ctx->pc = 0x1b124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1b1250: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1b1254: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b1254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b1258: 0xaee30a68  sw          $v1, 0xA68($s7)
    ctx->pc = 0x1b1258u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 2664), GPR_U32(ctx, 3));
    // 0x1b125c: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b125cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b1260: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1264: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1264u;
    {
        const bool branch_taken_0x1b1264 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1264) {
            ctx->pc = 0x1B1270u;
            goto label_1b1270;
        }
    }
    ctx->pc = 0x1B126Cu;
    // 0x1b126c: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b126cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1b1270:
    // 0x1b1270: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b1270u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b1274: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b1274u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b1278: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b1278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b127c: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b127cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b1280: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b1280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b1284: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b1284u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1288: 0x1460ffa7  bnez        $v1, . + 4 + (-0x59 << 2)
    ctx->pc = 0x1B1288u;
    {
        const bool branch_taken_0x1b1288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1288) {
            ctx->pc = 0x1B1128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1128;
        }
    }
    ctx->pc = 0x1B1290u;
    // 0x1b1290: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1B1290u;
    {
        const bool branch_taken_0x1b1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1290) {
            ctx->pc = 0x1B1300u;
            goto label_1b1300;
        }
    }
    ctx->pc = 0x1B1298u;
label_1b1298:
    // 0x1b1298: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b1298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b129c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b129cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b12a0: 0x17c30007  bne         $fp, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B12A0u;
    {
        const bool branch_taken_0x1b12a0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b12a0) {
            ctx->pc = 0x1B12C0u;
            goto label_1b12c0;
        }
    }
    ctx->pc = 0x1B12A8u;
    // 0x1b12a8: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b12a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b12ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b12acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b12b0: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1b12b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1b12b4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x1b12b8: 0xaec30008  sw          $v1, 0x8($s6)
    ctx->pc = 0x1b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 3));
    // 0x1b12bc: 0x0  nop
    ctx->pc = 0x1b12bcu;
    // NOP
label_1b12c0:
    // 0x1b12c0: 0x8fa304a4  lw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1b12c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b12c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b12c8: 0xafa304a4  sw          $v1, 0x4A4($sp)
    ctx->pc = 0x1b12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 3));
    // 0x1b12cc: 0x96c30006  lhu         $v1, 0x6($s6)
    ctx->pc = 0x1b12ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 6)));
    // 0x1b12d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b12d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b12d4: 0x17c30002  bne         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B12D4u;
    {
        const bool branch_taken_0x1b12d4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b12d4) {
            ctx->pc = 0x1B12E0u;
            goto label_1b12e0;
        }
    }
    ctx->pc = 0x1B12DCu;
    // 0x1b12dc: 0x26d60010  addiu       $s6, $s6, 0x10
    ctx->pc = 0x1b12dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_1b12e0:
    // 0x1b12e0: 0x26b500c0  addiu       $s5, $s5, 0xC0
    ctx->pc = 0x1b12e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 192));
    // 0x1b12e4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b12e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b12e8: 0x8fa30490  lw          $v1, 0x490($sp)
    ctx->pc = 0x1b12e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x1b12ec: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x1b12ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x1b12f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1b12f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1b12f4: 0x3c3182b  sltu        $v1, $fp, $v1
    ctx->pc = 0x1b12f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b12f8: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B12F8u;
    {
        const bool branch_taken_0x1b12f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b12f8) {
            ctx->pc = 0x1B1298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1298;
        }
    }
    ctx->pc = 0x1B1300u;
label_1b1300:
    // 0x1b1300: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1b1300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1b1304: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1b1304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b1308: 0xafa404a0  sw          $a0, 0x4A0($sp)
    ctx->pc = 0x1b1308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1184), GPR_U32(ctx, 4));
    // 0x1b130c: 0x97a304ae  lhu         $v1, 0x4AE($sp)
    ctx->pc = 0x1b130cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1198)));
    // 0x1b1310: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1b1310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1b1314: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1b1314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b1318: 0x1460ff5d  bnez        $v1, . + 4 + (-0xA3 << 2)
    ctx->pc = 0x1B1318u;
    {
        const bool branch_taken_0x1b1318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1318) {
            ctx->pc = 0x1B1090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1090;
        }
    }
    ctx->pc = 0x1B1320u;
    // 0x1b1320: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1b1320u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1324: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b1324u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1328: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b1328u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b132c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b132cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1330: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1330u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1334: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b1334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1338: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1338u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b133c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b133cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1344: 0x27bd04c0  addiu       $sp, $sp, 0x4C0
    ctx->pc = 0x1b1344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
    // 0x1b1348: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1350u;
}
