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

// Function: Plw01_move00
// Address: 0x1b5170 - 0x1b532c
void Plw01_move00_0x1b5170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw01_move00_0x1b5170");
#endif

    switch (ctx->pc) {
        case 0x1b5170u: goto label_1b5170;
        case 0x1b5174u: goto label_1b5174;
        case 0x1b5178u: goto label_1b5178;
        case 0x1b517cu: goto label_1b517c;
        case 0x1b5180u: goto label_1b5180;
        case 0x1b5184u: goto label_1b5184;
        case 0x1b5188u: goto label_1b5188;
        case 0x1b518cu: goto label_1b518c;
        case 0x1b5190u: goto label_1b5190;
        case 0x1b5194u: goto label_1b5194;
        case 0x1b5198u: goto label_1b5198;
        case 0x1b519cu: goto label_1b519c;
        case 0x1b51a0u: goto label_1b51a0;
        case 0x1b51a4u: goto label_1b51a4;
        case 0x1b51a8u: goto label_1b51a8;
        case 0x1b51acu: goto label_1b51ac;
        case 0x1b51b0u: goto label_1b51b0;
        case 0x1b51b4u: goto label_1b51b4;
        case 0x1b51b8u: goto label_1b51b8;
        case 0x1b51bcu: goto label_1b51bc;
        case 0x1b51c0u: goto label_1b51c0;
        case 0x1b51c4u: goto label_1b51c4;
        case 0x1b51c8u: goto label_1b51c8;
        case 0x1b51ccu: goto label_1b51cc;
        case 0x1b51d0u: goto label_1b51d0;
        case 0x1b51d4u: goto label_1b51d4;
        case 0x1b51d8u: goto label_1b51d8;
        case 0x1b51dcu: goto label_1b51dc;
        case 0x1b51e0u: goto label_1b51e0;
        case 0x1b51e4u: goto label_1b51e4;
        case 0x1b51e8u: goto label_1b51e8;
        case 0x1b51ecu: goto label_1b51ec;
        case 0x1b51f0u: goto label_1b51f0;
        case 0x1b51f4u: goto label_1b51f4;
        case 0x1b51f8u: goto label_1b51f8;
        case 0x1b51fcu: goto label_1b51fc;
        case 0x1b5200u: goto label_1b5200;
        case 0x1b5204u: goto label_1b5204;
        case 0x1b5208u: goto label_1b5208;
        case 0x1b520cu: goto label_1b520c;
        case 0x1b5210u: goto label_1b5210;
        case 0x1b5214u: goto label_1b5214;
        case 0x1b5218u: goto label_1b5218;
        case 0x1b521cu: goto label_1b521c;
        case 0x1b5220u: goto label_1b5220;
        case 0x1b5224u: goto label_1b5224;
        case 0x1b5228u: goto label_1b5228;
        case 0x1b522cu: goto label_1b522c;
        case 0x1b5230u: goto label_1b5230;
        case 0x1b5234u: goto label_1b5234;
        case 0x1b5238u: goto label_1b5238;
        case 0x1b523cu: goto label_1b523c;
        case 0x1b5240u: goto label_1b5240;
        case 0x1b5244u: goto label_1b5244;
        case 0x1b5248u: goto label_1b5248;
        case 0x1b524cu: goto label_1b524c;
        case 0x1b5250u: goto label_1b5250;
        case 0x1b5254u: goto label_1b5254;
        case 0x1b5258u: goto label_1b5258;
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5260u: goto label_1b5260;
        case 0x1b5264u: goto label_1b5264;
        case 0x1b5268u: goto label_1b5268;
        case 0x1b526cu: goto label_1b526c;
        case 0x1b5270u: goto label_1b5270;
        case 0x1b5274u: goto label_1b5274;
        case 0x1b5278u: goto label_1b5278;
        case 0x1b527cu: goto label_1b527c;
        case 0x1b5280u: goto label_1b5280;
        case 0x1b5284u: goto label_1b5284;
        case 0x1b5288u: goto label_1b5288;
        case 0x1b528cu: goto label_1b528c;
        case 0x1b5290u: goto label_1b5290;
        case 0x1b5294u: goto label_1b5294;
        case 0x1b5298u: goto label_1b5298;
        case 0x1b529cu: goto label_1b529c;
        case 0x1b52a0u: goto label_1b52a0;
        case 0x1b52a4u: goto label_1b52a4;
        case 0x1b52a8u: goto label_1b52a8;
        case 0x1b52acu: goto label_1b52ac;
        case 0x1b52b0u: goto label_1b52b0;
        case 0x1b52b4u: goto label_1b52b4;
        case 0x1b52b8u: goto label_1b52b8;
        case 0x1b52bcu: goto label_1b52bc;
        case 0x1b52c0u: goto label_1b52c0;
        case 0x1b52c4u: goto label_1b52c4;
        case 0x1b52c8u: goto label_1b52c8;
        case 0x1b52ccu: goto label_1b52cc;
        case 0x1b52d0u: goto label_1b52d0;
        case 0x1b52d4u: goto label_1b52d4;
        case 0x1b52d8u: goto label_1b52d8;
        case 0x1b52dcu: goto label_1b52dc;
        case 0x1b52e0u: goto label_1b52e0;
        case 0x1b52e4u: goto label_1b52e4;
        case 0x1b52e8u: goto label_1b52e8;
        case 0x1b52ecu: goto label_1b52ec;
        case 0x1b52f0u: goto label_1b52f0;
        case 0x1b52f4u: goto label_1b52f4;
        case 0x1b52f8u: goto label_1b52f8;
        case 0x1b52fcu: goto label_1b52fc;
        case 0x1b5300u: goto label_1b5300;
        case 0x1b5304u: goto label_1b5304;
        case 0x1b5308u: goto label_1b5308;
        case 0x1b530cu: goto label_1b530c;
        case 0x1b5310u: goto label_1b5310;
        case 0x1b5314u: goto label_1b5314;
        case 0x1b5318u: goto label_1b5318;
        case 0x1b531cu: goto label_1b531c;
        case 0x1b5320u: goto label_1b5320;
        case 0x1b5324u: goto label_1b5324;
        case 0x1b5328u: goto label_1b5328;
        default: break;
    }

    ctx->pc = 0x1b5170u;

label_1b5170:
    // 0x1b5170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b5174:
    // 0x1b5174: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b5174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1b5178:
    // 0x1b5178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b517c:
    // 0x1b517c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1b5180:
    // 0x1b5180: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b5180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1b5184:
    // 0x1b5184: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b5184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1b5188:
    // 0x1b5188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b5188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b518c:
    // 0x1b518c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5190:
    // 0x1b5190: 0xe4401564  swc1        $f0, 0x1564($v0)
    ctx->pc = 0x1b5190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5476), bits); }
label_1b5194:
    // 0x1b5194: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5198:
    // 0x1b5198: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b5198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b519c:
    // 0x1b519c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b519cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51a0:
    // 0x1b51a0: 0xe4401568  swc1        $f0, 0x1568($v0)
    ctx->pc = 0x1b51a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5480), bits); }
label_1b51a4:
    // 0x1b51a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51a8:
    // 0x1b51a8: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1b51a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b51ac:
    // 0x1b51ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51b0:
    // 0x1b51b0: 0xe4401570  swc1        $f0, 0x1570($v0)
    ctx->pc = 0x1b51b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5488), bits); }
label_1b51b4:
    // 0x1b51b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b51b8:
    // 0x1b51b8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51bc:
    // 0x1b51bc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1b51bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1b51c0:
    // 0x1b51c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51c4:
    // 0x1b51c4: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1b51c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1b51c8:
    // 0x1b51c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51cc:
    // 0x1b51cc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1b51ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_1b51d0:
    // 0x1b51d0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1b51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1b51d4:
    // 0x1b51d4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51d8:
    // 0x1b51d8: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1b51d8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1b51dc:
    // 0x1b51dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51e0:
    // 0x1b51e0: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1b51e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1b51e4:
    // 0x1b51e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b51e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b51e8:
    // 0x1b51e8: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1b51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1b51ec:
    // 0x1b51ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1b51f0:
    if (ctx->pc == 0x1B51F0u) {
        ctx->pc = 0x1B51F4u;
        goto label_1b51f4;
    }
    ctx->pc = 0x1B51ECu;
    {
        const bool branch_taken_0x1b51ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51ec) {
            ctx->pc = 0x1B5214u;
            goto label_1b5214;
        }
    }
    ctx->pc = 0x1B51F4u;
label_1b51f4:
    // 0x1b51f4: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1b51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1b51f8:
    // 0x1b51f8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b51f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1b51fc:
    // 0x1b51fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1b5200:
    if (ctx->pc == 0x1B5200u) {
        ctx->pc = 0x1B5204u;
        goto label_1b5204;
    }
    ctx->pc = 0x1B51FCu;
    {
        const bool branch_taken_0x1b51fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b51fc) {
            ctx->pc = 0x1B5214u;
            goto label_1b5214;
        }
    }
    ctx->pc = 0x1B5204u;
label_1b5204:
    // 0x1b5204: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5208:
    // 0x1b5208: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1b5208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1b520c:
    // 0x1b520c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b5210:
    if (ctx->pc == 0x1B5210u) {
        ctx->pc = 0x1B5214u;
        goto label_1b5214;
    }
    ctx->pc = 0x1B520Cu;
    {
        const bool branch_taken_0x1b520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b520c) {
            ctx->pc = 0x1B5220u;
            goto label_1b5220;
        }
    }
    ctx->pc = 0x1B5214u;
label_1b5214:
    // 0x1b5214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b5214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5218:
    // 0x1b5218: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b521c:
    // 0x1b521c: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1b521cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1b5220:
    // 0x1b5220: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b5220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5224:
    // 0x1b5224: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b5224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b5228:
    // 0x1b5228: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1b5228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
label_1b522c:
    // 0x1b522c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5230:
    // 0x1b5230: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b5234:
    // 0x1b5234: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b5234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b5238:
    // 0x1b5238: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b5238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b523c:
    // 0x1b523c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b5240:
    // 0x1b5240: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1b5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_1b5244:
    // 0x1b5244: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1b5248:
    // 0x1b5248: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b524c:
    // 0x1b524c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b524cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b5250:
    // 0x1b5250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5254:
    // 0x1b5254: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b5254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b5258:
    // 0x1b5258: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1b5258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1b525c:
    // 0x1b525c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b5260:
    // 0x1b5260: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1b5264:
    if (ctx->pc == 0x1B5264u) {
        ctx->pc = 0x1B5268u;
        goto label_1b5268;
    }
    ctx->pc = 0x1B5260u;
    {
        const bool branch_taken_0x1b5260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5260) {
            ctx->pc = 0x1B52A0u;
            goto label_1b52a0;
        }
    }
    ctx->pc = 0x1B5268u;
label_1b5268:
    // 0x1b5268: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b526c:
    // 0x1b526c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b5270:
    // 0x1b5270: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1b5270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1b5274:
    // 0x1b5274: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b5274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b5278:
    // 0x1b5278: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1b527c:
    // 0x1b527c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b527cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b5280:
    // 0x1b5280: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5284:
    // 0x1b5284: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1b5284u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
label_1b5288:
    // 0x1b5288: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b528c:
    // 0x1b528c: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1b528cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5290:
    // 0x1b5290: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b5294:
    // 0x1b5294: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1b5294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1b5298:
    // 0x1b5298: 0x10000011  b           . + 4 + (0x11 << 2)
label_1b529c:
    if (ctx->pc == 0x1B529Cu) {
        ctx->pc = 0x1B52A0u;
        goto label_1b52a0;
    }
    ctx->pc = 0x1B5298u;
    {
        const bool branch_taken_0x1b5298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5298) {
            ctx->pc = 0x1B52E0u;
            goto label_1b52e0;
        }
    }
    ctx->pc = 0x1B52A0u;
label_1b52a0:
    // 0x1b52a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52a4:
    // 0x1b52a4: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1b52a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b52a8:
    // 0x1b52a8: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1b52a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1b52ac:
    // 0x1b52ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b52acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b52b0:
    // 0x1b52b0: 0x0  nop
    ctx->pc = 0x1b52b0u;
    // NOP
label_1b52b4:
    // 0x1b52b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b52b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b52b8:
    // 0x1b52b8: 0x0  nop
    ctx->pc = 0x1b52b8u;
    // NOP
label_1b52bc:
    // 0x1b52bc: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1b52c0:
    if (ctx->pc == 0x1B52C0u) {
        ctx->pc = 0x1B52C4u;
        goto label_1b52c4;
    }
    ctx->pc = 0x1B52BCu;
    {
        const bool branch_taken_0x1b52bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b52bc) {
            ctx->pc = 0x1B52D8u;
            goto label_1b52d8;
        }
    }
    ctx->pc = 0x1B52C4u;
label_1b52c4:
    // 0x1b52c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b52c8:
    // 0x1b52c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52cc:
    // 0x1b52cc: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1b52ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
label_1b52d0:
    // 0x1b52d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b52d4:
    if (ctx->pc == 0x1B52D4u) {
        ctx->pc = 0x1B52D8u;
        goto label_1b52d8;
    }
    ctx->pc = 0x1B52D0u;
    {
        const bool branch_taken_0x1b52d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b52d0) {
            ctx->pc = 0x1B52E0u;
            goto label_1b52e0;
        }
    }
    ctx->pc = 0x1B52D8u;
label_1b52d8:
    // 0x1b52d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52dc:
    // 0x1b52dc: 0xa040156c  sb          $zero, 0x156C($v0)
    ctx->pc = 0x1b52dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1b52e0:
    // 0x1b52e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b52e4:
    // 0x1b52e4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1b52e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1b52e8:
    // 0x1b52e8: 0xac22b970  sw          $v0, -0x4690($at)
    ctx->pc = 0x1b52e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949232), GPR_U32(ctx, 2));
label_1b52ec:
    // 0x1b52ec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52f0:
    // 0x1b52f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b52f4:
    // 0x1b52f4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1b52f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1b52f8:
    // 0x1b52f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b52f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b52fc:
    // 0x1b52fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b5300:
    // 0x1b5300: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b5300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b5304:
    // 0x1b5304: 0x24429090  addiu       $v0, $v0, -0x6F70
    ctx->pc = 0x1b5304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938768));
label_1b5308:
    // 0x1b5308: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b530c:
    // 0x1b530c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b5310:
    // 0x1b5310: 0x40f809  jalr        $v0
label_1b5314:
    if (ctx->pc == 0x1B5314u) {
        ctx->pc = 0x1B5318u;
        goto label_1b5318;
    }
    ctx->pc = 0x1B5310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B5318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5310u, 0x1B5318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5318u;
label_1b5318:
    // 0x1b5318: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b5318u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b531c:
    // 0x1b531c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b531cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b5320:
    // 0x1b5320: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b5320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b5324:
    // 0x1b5324: 0x3e00008  jr          $ra
label_1b5328:
    if (ctx->pc == 0x1B5328u) {
        ctx->pc = 0x1B532Cu;
        goto label_fallthrough_0x1b5324;
    }
    ctx->pc = 0x1B5324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b5324:
    ctx->pc = 0x1B532Cu;
}
