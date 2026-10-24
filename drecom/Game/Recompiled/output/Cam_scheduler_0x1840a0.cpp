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

// Function: Cam_scheduler
// Address: 0x1840a0 - 0x184300
void Cam_scheduler_0x1840a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Cam_scheduler_0x1840a0");
#endif

    switch (ctx->pc) {
        case 0x1840a0u: goto label_1840a0;
        case 0x1840a4u: goto label_1840a4;
        case 0x1840a8u: goto label_1840a8;
        case 0x1840acu: goto label_1840ac;
        case 0x1840b0u: goto label_1840b0;
        case 0x1840b4u: goto label_1840b4;
        case 0x1840b8u: goto label_1840b8;
        case 0x1840bcu: goto label_1840bc;
        case 0x1840c0u: goto label_1840c0;
        case 0x1840c4u: goto label_1840c4;
        case 0x1840c8u: goto label_1840c8;
        case 0x1840ccu: goto label_1840cc;
        case 0x1840d0u: goto label_1840d0;
        case 0x1840d4u: goto label_1840d4;
        case 0x1840d8u: goto label_1840d8;
        case 0x1840dcu: goto label_1840dc;
        case 0x1840e0u: goto label_1840e0;
        case 0x1840e4u: goto label_1840e4;
        case 0x1840e8u: goto label_1840e8;
        case 0x1840ecu: goto label_1840ec;
        case 0x1840f0u: goto label_1840f0;
        case 0x1840f4u: goto label_1840f4;
        case 0x1840f8u: goto label_1840f8;
        case 0x1840fcu: goto label_1840fc;
        case 0x184100u: goto label_184100;
        case 0x184104u: goto label_184104;
        case 0x184108u: goto label_184108;
        case 0x18410cu: goto label_18410c;
        case 0x184110u: goto label_184110;
        case 0x184114u: goto label_184114;
        case 0x184118u: goto label_184118;
        case 0x18411cu: goto label_18411c;
        case 0x184120u: goto label_184120;
        case 0x184124u: goto label_184124;
        case 0x184128u: goto label_184128;
        case 0x18412cu: goto label_18412c;
        case 0x184130u: goto label_184130;
        case 0x184134u: goto label_184134;
        case 0x184138u: goto label_184138;
        case 0x18413cu: goto label_18413c;
        case 0x184140u: goto label_184140;
        case 0x184144u: goto label_184144;
        case 0x184148u: goto label_184148;
        case 0x18414cu: goto label_18414c;
        case 0x184150u: goto label_184150;
        case 0x184154u: goto label_184154;
        case 0x184158u: goto label_184158;
        case 0x18415cu: goto label_18415c;
        case 0x184160u: goto label_184160;
        case 0x184164u: goto label_184164;
        case 0x184168u: goto label_184168;
        case 0x18416cu: goto label_18416c;
        case 0x184170u: goto label_184170;
        case 0x184174u: goto label_184174;
        case 0x184178u: goto label_184178;
        case 0x18417cu: goto label_18417c;
        case 0x184180u: goto label_184180;
        case 0x184184u: goto label_184184;
        case 0x184188u: goto label_184188;
        case 0x18418cu: goto label_18418c;
        case 0x184190u: goto label_184190;
        case 0x184194u: goto label_184194;
        case 0x184198u: goto label_184198;
        case 0x18419cu: goto label_18419c;
        case 0x1841a0u: goto label_1841a0;
        case 0x1841a4u: goto label_1841a4;
        case 0x1841a8u: goto label_1841a8;
        case 0x1841acu: goto label_1841ac;
        case 0x1841b0u: goto label_1841b0;
        case 0x1841b4u: goto label_1841b4;
        case 0x1841b8u: goto label_1841b8;
        case 0x1841bcu: goto label_1841bc;
        case 0x1841c0u: goto label_1841c0;
        case 0x1841c4u: goto label_1841c4;
        case 0x1841c8u: goto label_1841c8;
        case 0x1841ccu: goto label_1841cc;
        case 0x1841d0u: goto label_1841d0;
        case 0x1841d4u: goto label_1841d4;
        case 0x1841d8u: goto label_1841d8;
        case 0x1841dcu: goto label_1841dc;
        case 0x1841e0u: goto label_1841e0;
        case 0x1841e4u: goto label_1841e4;
        case 0x1841e8u: goto label_1841e8;
        case 0x1841ecu: goto label_1841ec;
        case 0x1841f0u: goto label_1841f0;
        case 0x1841f4u: goto label_1841f4;
        case 0x1841f8u: goto label_1841f8;
        case 0x1841fcu: goto label_1841fc;
        case 0x184200u: goto label_184200;
        case 0x184204u: goto label_184204;
        case 0x184208u: goto label_184208;
        case 0x18420cu: goto label_18420c;
        case 0x184210u: goto label_184210;
        case 0x184214u: goto label_184214;
        case 0x184218u: goto label_184218;
        case 0x18421cu: goto label_18421c;
        case 0x184220u: goto label_184220;
        case 0x184224u: goto label_184224;
        case 0x184228u: goto label_184228;
        case 0x18422cu: goto label_18422c;
        case 0x184230u: goto label_184230;
        case 0x184234u: goto label_184234;
        case 0x184238u: goto label_184238;
        case 0x18423cu: goto label_18423c;
        case 0x184240u: goto label_184240;
        case 0x184244u: goto label_184244;
        case 0x184248u: goto label_184248;
        case 0x18424cu: goto label_18424c;
        case 0x184250u: goto label_184250;
        case 0x184254u: goto label_184254;
        case 0x184258u: goto label_184258;
        case 0x18425cu: goto label_18425c;
        case 0x184260u: goto label_184260;
        case 0x184264u: goto label_184264;
        case 0x184268u: goto label_184268;
        case 0x18426cu: goto label_18426c;
        case 0x184270u: goto label_184270;
        case 0x184274u: goto label_184274;
        case 0x184278u: goto label_184278;
        case 0x18427cu: goto label_18427c;
        case 0x184280u: goto label_184280;
        case 0x184284u: goto label_184284;
        case 0x184288u: goto label_184288;
        case 0x18428cu: goto label_18428c;
        case 0x184290u: goto label_184290;
        case 0x184294u: goto label_184294;
        case 0x184298u: goto label_184298;
        case 0x18429cu: goto label_18429c;
        case 0x1842a0u: goto label_1842a0;
        case 0x1842a4u: goto label_1842a4;
        case 0x1842a8u: goto label_1842a8;
        case 0x1842acu: goto label_1842ac;
        case 0x1842b0u: goto label_1842b0;
        case 0x1842b4u: goto label_1842b4;
        case 0x1842b8u: goto label_1842b8;
        case 0x1842bcu: goto label_1842bc;
        case 0x1842c0u: goto label_1842c0;
        case 0x1842c4u: goto label_1842c4;
        case 0x1842c8u: goto label_1842c8;
        case 0x1842ccu: goto label_1842cc;
        case 0x1842d0u: goto label_1842d0;
        case 0x1842d4u: goto label_1842d4;
        case 0x1842d8u: goto label_1842d8;
        case 0x1842dcu: goto label_1842dc;
        case 0x1842e0u: goto label_1842e0;
        case 0x1842e4u: goto label_1842e4;
        case 0x1842e8u: goto label_1842e8;
        case 0x1842ecu: goto label_1842ec;
        case 0x1842f0u: goto label_1842f0;
        case 0x1842f4u: goto label_1842f4;
        case 0x1842f8u: goto label_1842f8;
        case 0x1842fcu: goto label_1842fc;
        default: break;
    }

    ctx->pc = 0x1840a0u;

label_1840a0:
    // 0x1840a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1840a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1840a4:
    // 0x1840a4: 0x7fbf0050  sq          $ra, 0x50($sp)
    ctx->pc = 0x1840a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 31));
label_1840a8:
    // 0x1840a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1840a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1840ac:
    // 0x1840ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1840acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1840b0:
    // 0x1840b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1840b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1840b4:
    // 0x1840b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1840b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1840b8:
    // 0x1840b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1840b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1840bc:
    // 0x1840bc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1840bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1840c0:
    // 0x1840c0: 0x2444f260  addiu       $a0, $v0, -0xDA0
    ctx->pc = 0x1840c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
label_1840c4:
    // 0x1840c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1840c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1840c8:
    // 0x1840c8: 0x240601d0  addiu       $a2, $zero, 0x1D0
    ctx->pc = 0x1840c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
label_1840cc:
    // 0x1840cc: 0xc046314  jal         func_118C50
label_1840d0:
    if (ctx->pc == 0x1840D0u) {
        ctx->pc = 0x1840D4u;
        goto label_1840d4;
    }
    ctx->pc = 0x1840CCu;
    SET_GPR_U32(ctx, 31, 0x1840D4u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x1840D4u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1840D4u) { return; }
    ctx->pc = 0x1840D4u;
label_1840d4:
    // 0x1840d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1840d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1840d8:
    // 0x1840d8: 0x2450f430  addiu       $s0, $v0, -0xBD0
    ctx->pc = 0x1840d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964272));
label_1840dc:
    // 0x1840dc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1840dcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1840e0:
    // 0x1840e0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1840e0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1840e4:
    // 0x1840e4: 0x1000004e  b           . + 4 + (0x4E << 2)
label_1840e8:
    if (ctx->pc == 0x1840E8u) {
        ctx->pc = 0x1840ECu;
        goto label_1840ec;
    }
    ctx->pc = 0x1840E4u;
    {
        const bool branch_taken_0x1840e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840e4) {
            ctx->pc = 0x184220u;
            goto label_184220;
        }
    }
    ctx->pc = 0x1840ECu;
label_1840ec:
    // 0x1840ec: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1840ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1840f0:
    // 0x1840f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1840f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1840f4:
    // 0x1840f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1840f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1840f8:
    // 0x1840f8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1840fc:
    if (ctx->pc == 0x1840FCu) {
        ctx->pc = 0x184100u;
        goto label_184100;
    }
    ctx->pc = 0x1840F8u;
    {
        const bool branch_taken_0x1840f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840f8) {
            ctx->pc = 0x184218u;
            goto label_184218;
        }
    }
    ctx->pc = 0x184100u;
label_184100:
    // 0x184100: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x184100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_184104:
    // 0x184104: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x184104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_184108:
    // 0x184108: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_18410c:
    if (ctx->pc == 0x18410Cu) {
        ctx->pc = 0x184110u;
        goto label_184110;
    }
    ctx->pc = 0x184108u;
    {
        const bool branch_taken_0x184108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184108) {
            ctx->pc = 0x18420Cu;
            goto label_18420c;
        }
    }
    ctx->pc = 0x184110u;
label_184110:
    // 0x184110: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x184110u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_184114:
    // 0x184114: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_184118:
    if (ctx->pc == 0x184118u) {
        ctx->pc = 0x18411Cu;
        goto label_18411c;
    }
    ctx->pc = 0x184114u;
    {
        const bool branch_taken_0x184114 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184114) {
            ctx->pc = 0x184130u;
            goto label_184130;
        }
    }
    ctx->pc = 0x18411Cu;
label_18411c:
    // 0x18411c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18411cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184120:
    // 0x184120: 0x0  nop
    ctx->pc = 0x184120u;
    // NOP
label_184124:
    // 0x184124: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_184128:
    // 0x184128: 0x10000008  b           . + 4 + (0x8 << 2)
label_18412c:
    if (ctx->pc == 0x18412Cu) {
        ctx->pc = 0x184130u;
        goto label_184130;
    }
    ctx->pc = 0x184128u;
    {
        const bool branch_taken_0x184128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184128) {
            ctx->pc = 0x18414Cu;
            goto label_18414c;
        }
    }
    ctx->pc = 0x184130u;
label_184130:
    // 0x184130: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x184130u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_184134:
    // 0x184134: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_184138:
    // 0x184138: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18413c:
    // 0x18413c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18413cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184140:
    // 0x184140: 0x0  nop
    ctx->pc = 0x184140u;
    // NOP
label_184144:
    // 0x184144: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184144u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_184148:
    // 0x184148: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x184148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18414c:
    // 0x18414c: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x18414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_184150:
    // 0x184150: 0xe420f248  swc1        $f0, -0xDB8($at)
    ctx->pc = 0x184150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963784), bits); }
label_184154:
    // 0x184154: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x184154u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_184158:
    // 0x184158: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18415c:
    if (ctx->pc == 0x18415Cu) {
        ctx->pc = 0x184160u;
        goto label_184160;
    }
    ctx->pc = 0x184158u;
    {
        const bool branch_taken_0x184158 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x184158) {
            ctx->pc = 0x184174u;
            goto label_184174;
        }
    }
    ctx->pc = 0x184160u;
label_184160:
    // 0x184160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x184160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184164:
    // 0x184164: 0x0  nop
    ctx->pc = 0x184164u;
    // NOP
label_184168:
    // 0x184168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18416c:
    // 0x18416c: 0x10000008  b           . + 4 + (0x8 << 2)
label_184170:
    if (ctx->pc == 0x184170u) {
        ctx->pc = 0x184174u;
        goto label_184174;
    }
    ctx->pc = 0x18416Cu;
    {
        const bool branch_taken_0x18416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18416c) {
            ctx->pc = 0x184190u;
            goto label_184190;
        }
    }
    ctx->pc = 0x184174u;
label_184174:
    // 0x184174: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x184174u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_184178:
    // 0x184178: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x184178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18417c:
    // 0x18417c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x18417cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_184180:
    // 0x184180: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x184180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184184:
    // 0x184184: 0x0  nop
    ctx->pc = 0x184184u;
    // NOP
label_184188:
    // 0x184188: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184188u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18418c:
    // 0x18418c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_184190:
    // 0x184190: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
label_184194:
    // 0x184194: 0xe420f250  swc1        $f0, -0xDB0($at)
    ctx->pc = 0x184194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294963792), bits); }
label_184198:
    // 0x184198: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x184198u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_18419c:
    // 0x18419c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x18419cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_1841a0:
    // 0x1841a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1841a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1841a4:
    // 0x1841a4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1841a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1841a8:
    // 0x1841a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1841a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1841ac:
    // 0x1841ac: 0x244259c8  addiu       $v0, $v0, 0x59C8
    ctx->pc = 0x1841acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22984));
label_1841b0:
    // 0x1841b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1841b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1841b4:
    // 0x1841b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1841b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1841b8:
    // 0x1841b8: 0x40f809  jalr        $v0
label_1841bc:
    if (ctx->pc == 0x1841BCu) {
        ctx->pc = 0x1841C0u;
        goto label_1841c0;
    }
    ctx->pc = 0x1841B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1841C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1841B8u, 0x1841C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1841C0u;
label_1841c0:
    // 0x1841c0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1841c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1841c4:
    // 0x1841c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1841c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1841c8:
    // 0x1841c8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1841c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1841cc:
    // 0x1841cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1841ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1841d0:
    // 0x1841d0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1841d4:
    if (ctx->pc == 0x1841D4u) {
        ctx->pc = 0x1841D8u;
        goto label_1841d8;
    }
    ctx->pc = 0x1841D0u;
    {
        const bool branch_taken_0x1841d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1841d0) {
            ctx->pc = 0x1841F4u;
            goto label_1841f4;
        }
    }
    ctx->pc = 0x1841D8u;
label_1841d8:
    // 0x1841d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1841d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1841dc:
    // 0x1841dc: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1841dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1841e0:
    // 0x1841e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1841e4:
    if (ctx->pc == 0x1841E4u) {
        ctx->pc = 0x1841E8u;
        goto label_1841e8;
    }
    ctx->pc = 0x1841E0u;
    {
        const bool branch_taken_0x1841e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1841e0) {
            ctx->pc = 0x184200u;
            goto label_184200;
        }
    }
    ctx->pc = 0x1841E8u;
label_1841e8:
    // 0x1841e8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1841e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_1841ec:
    // 0x1841ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_1841f0:
    if (ctx->pc == 0x1841F0u) {
        ctx->pc = 0x1841F4u;
        goto label_1841f4;
    }
    ctx->pc = 0x1841ECu;
    {
        const bool branch_taken_0x1841ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1841ec) {
            ctx->pc = 0x184200u;
            goto label_184200;
        }
    }
    ctx->pc = 0x1841F4u;
label_1841f4:
    // 0x1841f4: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1841f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1841f8:
    // 0x1841f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1841f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1841fc:
    // 0x1841fc: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x1841fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
label_184200:
    // 0x184200: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x184200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_184204:
    // 0x184204: 0x10000004  b           . + 4 + (0x4 << 2)
label_184208:
    if (ctx->pc == 0x184208u) {
        ctx->pc = 0x18420Cu;
        goto label_18420c;
    }
    ctx->pc = 0x184204u;
    {
        const bool branch_taken_0x184204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184204) {
            ctx->pc = 0x184218u;
            goto label_184218;
        }
    }
    ctx->pc = 0x18420Cu;
label_18420c:
    // 0x18420c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x18420cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_184210:
    // 0x184210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x184210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_184214:
    // 0x184214: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x184214u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_184218:
    // 0x184218: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x184218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_18421c:
    // 0x18421c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18421cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_184220:
    // 0x184220: 0x2e220020  sltiu       $v0, $s1, 0x20
    ctx->pc = 0x184220u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_184224:
    // 0x184224: 0x1440ffb1  bnez        $v0, . + 4 + (-0x4F << 2)
label_184228:
    if (ctx->pc == 0x184228u) {
        ctx->pc = 0x18422Cu;
        goto label_18422c;
    }
    ctx->pc = 0x184224u;
    {
        const bool branch_taken_0x184224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184224) {
            ctx->pc = 0x1840ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1840ec;
        }
    }
    ctx->pc = 0x18422Cu;
label_18422c:
    // 0x18422c: 0x1240002a  beqz        $s2, . + 4 + (0x2A << 2)
label_184230:
    if (ctx->pc == 0x184230u) {
        ctx->pc = 0x184234u;
        goto label_184234;
    }
    ctx->pc = 0x18422Cu;
    {
        const bool branch_taken_0x18422c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18422c) {
            ctx->pc = 0x1842D8u;
            goto label_1842d8;
        }
    }
    ctx->pc = 0x184234u;
label_184234:
    // 0x184234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_184238:
    // 0x184238: 0x8c330af0  lw          $s3, 0xAF0($at)
    ctx->pc = 0x184238u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2800)));
label_18423c:
    // 0x18423c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x18423cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_184240:
    // 0x184240: 0x2454f260  addiu       $s4, $v0, -0xDA0
    ctx->pc = 0x184240u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
label_184244:
    // 0x184244: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_184248:
    if (ctx->pc == 0x184248u) {
        ctx->pc = 0x18424Cu;
        goto label_18424c;
    }
    ctx->pc = 0x184244u;
    {
        const bool branch_taken_0x184244 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x184244) {
            ctx->pc = 0x184260u;
            goto label_184260;
        }
    }
    ctx->pc = 0x18424Cu;
label_18424c:
    // 0x18424c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x18424cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184250:
    // 0x184250: 0x0  nop
    ctx->pc = 0x184250u;
    // NOP
label_184254:
    // 0x184254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_184258:
    // 0x184258: 0x10000008  b           . + 4 + (0x8 << 2)
label_18425c:
    if (ctx->pc == 0x18425Cu) {
        ctx->pc = 0x184260u;
        goto label_184260;
    }
    ctx->pc = 0x184258u;
    {
        const bool branch_taken_0x184258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184258) {
            ctx->pc = 0x18427Cu;
            goto label_18427c;
        }
    }
    ctx->pc = 0x184260u;
label_184260:
    // 0x184260: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x184260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_184264:
    // 0x184264: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x184264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_184268:
    // 0x184268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x184268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18426c:
    // 0x18426c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18426cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_184270:
    // 0x184270: 0x0  nop
    ctx->pc = 0x184270u;
    // NOP
label_184274:
    // 0x184274: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x184274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_184278:
    // 0x184278: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x184278u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18427c:
    // 0x18427c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x18427cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_184280:
    // 0x184280: 0x26640190  addiu       $a0, $s3, 0x190
    ctx->pc = 0x184280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
label_184284:
    // 0x184284: 0x26850190  addiu       $a1, $s4, 0x190
    ctx->pc = 0x184284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 400));
label_184288:
    // 0x184288: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x184288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18428c:
    // 0x18428c: 0xc040c60  jal         func_103180
label_184290:
    if (ctx->pc == 0x184290u) {
        ctx->pc = 0x184294u;
        goto label_184294;
    }
    ctx->pc = 0x18428Cu;
    SET_GPR_U32(ctx, 31, 0x184294u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x184294u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x184294u) { return; }
    ctx->pc = 0x184294u;
label_184294:
    // 0x184294: 0x266401a0  addiu       $a0, $s3, 0x1A0
    ctx->pc = 0x184294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 416));
label_184298:
    // 0x184298: 0x268501a0  addiu       $a1, $s4, 0x1A0
    ctx->pc = 0x184298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
label_18429c:
    // 0x18429c: 0xc7ac006c  lwc1        $f12, 0x6C($sp)
    ctx->pc = 0x18429cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1842a0:
    // 0x1842a0: 0xc040c60  jal         func_103180
label_1842a4:
    if (ctx->pc == 0x1842A4u) {
        ctx->pc = 0x1842A8u;
        goto label_1842a8;
    }
    ctx->pc = 0x1842A0u;
    SET_GPR_U32(ctx, 31, 0x1842A8u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x1842A8u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1842A8u) { return; }
    ctx->pc = 0x1842A8u;
label_1842a8:
    // 0x1842a8: 0xc68101bc  lwc1        $f1, 0x1BC($s4)
    ctx->pc = 0x1842a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1842ac:
    // 0x1842ac: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1842acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1842b0:
    // 0x1842b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1842b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1842b4:
    // 0x1842b4: 0xe66001bc  swc1        $f0, 0x1BC($s3)
    ctx->pc = 0x1842b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 444), bits); }
label_1842b8:
    // 0x1842b8: 0xc68101b0  lwc1        $f1, 0x1B0($s4)
    ctx->pc = 0x1842b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1842bc:
    // 0x1842bc: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x1842bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1842c0:
    // 0x1842c0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1842c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1842c4:
    // 0x1842c4: 0x0  nop
    ctx->pc = 0x1842c4u;
    // NOP
label_1842c8:
    // 0x1842c8: 0xe66001b0  swc1        $f0, 0x1B0($s3)
    ctx->pc = 0x1842c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 432), bits); }
label_1842cc:
    // 0x1842cc: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x1842ccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_1842d0:
    // 0x1842d0: 0xc056488  jal         func_159220
label_1842d4:
    if (ctx->pc == 0x1842D4u) {
        ctx->pc = 0x1842D8u;
        goto label_1842d8;
    }
    ctx->pc = 0x1842D0u;
    SET_GPR_U32(ctx, 31, 0x1842D8u);
    ctx->pc = 0x159220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159220u, 0x1842D0u, 0x1842D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1842D8u;
label_1842d8:
    // 0x1842d8: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1842d8u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1842dc:
    // 0x1842dc: 0x7bbf0050  lq          $ra, 0x50($sp)
    ctx->pc = 0x1842dcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1842e0:
    // 0x1842e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1842e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1842e4:
    // 0x1842e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1842e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1842e8:
    // 0x1842e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1842e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1842ec:
    // 0x1842ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1842ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1842f0:
    // 0x1842f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1842f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1842f4:
    // 0x1842f4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1842f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1842f8:
    // 0x1842f8: 0x3e00008  jr          $ra
label_1842fc:
    if (ctx->pc == 0x1842FCu) {
        ctx->pc = 0x184300u;
        goto label_fallthrough_0x1842f8;
    }
    ctx->pc = 0x1842F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1842F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1842f8:
    ctx->pc = 0x184300u;
}
