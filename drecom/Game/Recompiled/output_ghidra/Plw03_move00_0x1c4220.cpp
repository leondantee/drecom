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

// Function: Plw03_move00
// Address: 0x1c4220 - 0x1c43dc
void Plw03_move00_0x1c4220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Plw03_move00_0x1c4220");
#endif

    switch (ctx->pc) {
        case 0x1c4220u: goto label_1c4220;
        case 0x1c4224u: goto label_1c4224;
        case 0x1c4228u: goto label_1c4228;
        case 0x1c422cu: goto label_1c422c;
        case 0x1c4230u: goto label_1c4230;
        case 0x1c4234u: goto label_1c4234;
        case 0x1c4238u: goto label_1c4238;
        case 0x1c423cu: goto label_1c423c;
        case 0x1c4240u: goto label_1c4240;
        case 0x1c4244u: goto label_1c4244;
        case 0x1c4248u: goto label_1c4248;
        case 0x1c424cu: goto label_1c424c;
        case 0x1c4250u: goto label_1c4250;
        case 0x1c4254u: goto label_1c4254;
        case 0x1c4258u: goto label_1c4258;
        case 0x1c425cu: goto label_1c425c;
        case 0x1c4260u: goto label_1c4260;
        case 0x1c4264u: goto label_1c4264;
        case 0x1c4268u: goto label_1c4268;
        case 0x1c426cu: goto label_1c426c;
        case 0x1c4270u: goto label_1c4270;
        case 0x1c4274u: goto label_1c4274;
        case 0x1c4278u: goto label_1c4278;
        case 0x1c427cu: goto label_1c427c;
        case 0x1c4280u: goto label_1c4280;
        case 0x1c4284u: goto label_1c4284;
        case 0x1c4288u: goto label_1c4288;
        case 0x1c428cu: goto label_1c428c;
        case 0x1c4290u: goto label_1c4290;
        case 0x1c4294u: goto label_1c4294;
        case 0x1c4298u: goto label_1c4298;
        case 0x1c429cu: goto label_1c429c;
        case 0x1c42a0u: goto label_1c42a0;
        case 0x1c42a4u: goto label_1c42a4;
        case 0x1c42a8u: goto label_1c42a8;
        case 0x1c42acu: goto label_1c42ac;
        case 0x1c42b0u: goto label_1c42b0;
        case 0x1c42b4u: goto label_1c42b4;
        case 0x1c42b8u: goto label_1c42b8;
        case 0x1c42bcu: goto label_1c42bc;
        case 0x1c42c0u: goto label_1c42c0;
        case 0x1c42c4u: goto label_1c42c4;
        case 0x1c42c8u: goto label_1c42c8;
        case 0x1c42ccu: goto label_1c42cc;
        case 0x1c42d0u: goto label_1c42d0;
        case 0x1c42d4u: goto label_1c42d4;
        case 0x1c42d8u: goto label_1c42d8;
        case 0x1c42dcu: goto label_1c42dc;
        case 0x1c42e0u: goto label_1c42e0;
        case 0x1c42e4u: goto label_1c42e4;
        case 0x1c42e8u: goto label_1c42e8;
        case 0x1c42ecu: goto label_1c42ec;
        case 0x1c42f0u: goto label_1c42f0;
        case 0x1c42f4u: goto label_1c42f4;
        case 0x1c42f8u: goto label_1c42f8;
        case 0x1c42fcu: goto label_1c42fc;
        case 0x1c4300u: goto label_1c4300;
        case 0x1c4304u: goto label_1c4304;
        case 0x1c4308u: goto label_1c4308;
        case 0x1c430cu: goto label_1c430c;
        case 0x1c4310u: goto label_1c4310;
        case 0x1c4314u: goto label_1c4314;
        case 0x1c4318u: goto label_1c4318;
        case 0x1c431cu: goto label_1c431c;
        case 0x1c4320u: goto label_1c4320;
        case 0x1c4324u: goto label_1c4324;
        case 0x1c4328u: goto label_1c4328;
        case 0x1c432cu: goto label_1c432c;
        case 0x1c4330u: goto label_1c4330;
        case 0x1c4334u: goto label_1c4334;
        case 0x1c4338u: goto label_1c4338;
        case 0x1c433cu: goto label_1c433c;
        case 0x1c4340u: goto label_1c4340;
        case 0x1c4344u: goto label_1c4344;
        case 0x1c4348u: goto label_1c4348;
        case 0x1c434cu: goto label_1c434c;
        case 0x1c4350u: goto label_1c4350;
        case 0x1c4354u: goto label_1c4354;
        case 0x1c4358u: goto label_1c4358;
        case 0x1c435cu: goto label_1c435c;
        case 0x1c4360u: goto label_1c4360;
        case 0x1c4364u: goto label_1c4364;
        case 0x1c4368u: goto label_1c4368;
        case 0x1c436cu: goto label_1c436c;
        case 0x1c4370u: goto label_1c4370;
        case 0x1c4374u: goto label_1c4374;
        case 0x1c4378u: goto label_1c4378;
        case 0x1c437cu: goto label_1c437c;
        case 0x1c4380u: goto label_1c4380;
        case 0x1c4384u: goto label_1c4384;
        case 0x1c4388u: goto label_1c4388;
        case 0x1c438cu: goto label_1c438c;
        case 0x1c4390u: goto label_1c4390;
        case 0x1c4394u: goto label_1c4394;
        case 0x1c4398u: goto label_1c4398;
        case 0x1c439cu: goto label_1c439c;
        case 0x1c43a0u: goto label_1c43a0;
        case 0x1c43a4u: goto label_1c43a4;
        case 0x1c43a8u: goto label_1c43a8;
        case 0x1c43acu: goto label_1c43ac;
        case 0x1c43b0u: goto label_1c43b0;
        case 0x1c43b4u: goto label_1c43b4;
        case 0x1c43b8u: goto label_1c43b8;
        case 0x1c43bcu: goto label_1c43bc;
        case 0x1c43c0u: goto label_1c43c0;
        case 0x1c43c4u: goto label_1c43c4;
        case 0x1c43c8u: goto label_1c43c8;
        case 0x1c43ccu: goto label_1c43cc;
        case 0x1c43d0u: goto label_1c43d0;
        case 0x1c43d4u: goto label_1c43d4;
        case 0x1c43d8u: goto label_1c43d8;
        default: break;
    }

    ctx->pc = 0x1c4220u;

label_1c4220:
    // 0x1c4220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c4224:
    // 0x1c4224: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1c4224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1c4228:
    // 0x1c4228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1c422c:
    // 0x1c422c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1c422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1c4230:
    // 0x1c4230: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1c4230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1c4234:
    // 0x1c4234: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1c4238:
    // 0x1c4238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c4238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c423c:
    // 0x1c423c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c423cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4240:
    // 0x1c4240: 0xe4401564  swc1        $f0, 0x1564($v0)
    ctx->pc = 0x1c4240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5476), bits); }
label_1c4244:
    // 0x1c4244: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4248:
    // 0x1c4248: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c424c:
    // 0x1c424c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c424cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4250:
    // 0x1c4250: 0xe4401568  swc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5480), bits); }
label_1c4254:
    // 0x1c4254: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4258:
    // 0x1c4258: 0xc4401568  lwc1        $f0, 0x1568($v0)
    ctx->pc = 0x1c4258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c425c:
    // 0x1c425c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4260:
    // 0x1c4260: 0xe4401570  swc1        $f0, 0x1570($v0)
    ctx->pc = 0x1c4260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5488), bits); }
label_1c4264:
    // 0x1c4264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4268:
    // 0x1c4268: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c426c:
    // 0x1c426c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1c426cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
label_1c4270:
    // 0x1c4270: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4274:
    // 0x1c4274: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x1c4274u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
label_1c4278:
    // 0x1c4278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c427c:
    // 0x1c427c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x1c427cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
label_1c4280:
    // 0x1c4280: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1c4280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1c4284:
    // 0x1c4284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4288:
    // 0x1c4288: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1c4288u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
label_1c428c:
    // 0x1c428c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c428cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4290:
    // 0x1c4290: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1c4290u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
label_1c4294:
    // 0x1c4294: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4298:
    // 0x1c4298: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x1c4298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_1c429c:
    // 0x1c429c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1c42a0:
    if (ctx->pc == 0x1C42A0u) {
        ctx->pc = 0x1C42A4u;
        goto label_1c42a4;
    }
    ctx->pc = 0x1C429Cu;
    {
        const bool branch_taken_0x1c429c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c429c) {
            ctx->pc = 0x1C42C4u;
            goto label_1c42c4;
        }
    }
    ctx->pc = 0x1C42A4u;
label_1c42a4:
    // 0x1c42a4: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1c42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1c42a8:
    // 0x1c42a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c42a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1c42ac:
    // 0x1c42ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1c42b0:
    if (ctx->pc == 0x1C42B0u) {
        ctx->pc = 0x1C42B4u;
        goto label_1c42b4;
    }
    ctx->pc = 0x1C42ACu;
    {
        const bool branch_taken_0x1c42ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c42ac) {
            ctx->pc = 0x1C42C4u;
            goto label_1c42c4;
        }
    }
    ctx->pc = 0x1C42B4u;
label_1c42b4:
    // 0x1c42b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c42b8:
    // 0x1c42b8: 0xa040156d  sb          $zero, 0x156D($v0)
    ctx->pc = 0x1c42b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 0));
label_1c42bc:
    // 0x1c42bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1c42c0:
    if (ctx->pc == 0x1C42C0u) {
        ctx->pc = 0x1C42C4u;
        goto label_1c42c4;
    }
    ctx->pc = 0x1C42BCu;
    {
        const bool branch_taken_0x1c42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c42bc) {
            ctx->pc = 0x1C42D0u;
            goto label_1c42d0;
        }
    }
    ctx->pc = 0x1C42C4u;
label_1c42c4:
    // 0x1c42c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c42c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c42c8:
    // 0x1c42c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c42c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c42cc:
    // 0x1c42cc: 0xa043156d  sb          $v1, 0x156D($v0)
    ctx->pc = 0x1c42ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5485), (uint8_t)GPR_U32(ctx, 3));
label_1c42d0:
    // 0x1c42d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c42d4:
    // 0x1c42d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c42d8:
    // 0x1c42d8: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1c42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
label_1c42dc:
    // 0x1c42dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c42dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c42e0:
    // 0x1c42e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c42e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c42e4:
    // 0x1c42e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c42e8:
    // 0x1c42e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c42ec:
    // 0x1c42ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c42f0:
    // 0x1c42f0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1c42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
label_1c42f4:
    // 0x1c42f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c42f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1c42f8:
    // 0x1c42f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c42f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c42fc:
    // 0x1c42fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1c4300:
    // 0x1c4300: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4304:
    // 0x1c4304: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c4308:
    // 0x1c4308: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c4308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_1c430c:
    // 0x1c430c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c430cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c4310:
    // 0x1c4310: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1c4314:
    if (ctx->pc == 0x1C4314u) {
        ctx->pc = 0x1C4318u;
        goto label_1c4318;
    }
    ctx->pc = 0x1C4310u;
    {
        const bool branch_taken_0x1c4310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4310) {
            ctx->pc = 0x1C4350u;
            goto label_1c4350;
        }
    }
    ctx->pc = 0x1C4318u;
label_1c4318:
    // 0x1c4318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c431c:
    // 0x1c431c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c4320:
    // 0x1c4320: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1c4320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_1c4324:
    // 0x1c4324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1c4328:
    // 0x1c4328: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1c4328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
label_1c432c:
    // 0x1c432c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c4330:
    // 0x1c4330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4334:
    // 0x1c4334: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c4334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
label_1c4338:
    // 0x1c4338: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c433c:
    // 0x1c433c: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1c433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c4340:
    // 0x1c4340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4344:
    // 0x1c4344: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1c4348:
    // 0x1c4348: 0x10000011  b           . + 4 + (0x11 << 2)
label_1c434c:
    if (ctx->pc == 0x1C434Cu) {
        ctx->pc = 0x1C4350u;
        goto label_1c4350;
    }
    ctx->pc = 0x1C4348u;
    {
        const bool branch_taken_0x1c4348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4348) {
            ctx->pc = 0x1C4390u;
            goto label_1c4390;
        }
    }
    ctx->pc = 0x1C4350u;
label_1c4350:
    // 0x1c4350: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c4354:
    // 0x1c4354: 0xc4411388  lwc1        $f1, 0x1388($v0)
    ctx->pc = 0x1c4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c4358:
    // 0x1c4358: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
label_1c435c:
    // 0x1c435c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c435cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c4360:
    // 0x1c4360: 0x0  nop
    ctx->pc = 0x1c4360u;
    // NOP
label_1c4364:
    // 0x1c4364: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c4364u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c4368:
    // 0x1c4368: 0x0  nop
    ctx->pc = 0x1c4368u;
    // NOP
label_1c436c:
    // 0x1c436c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1c4370:
    if (ctx->pc == 0x1C4370u) {
        ctx->pc = 0x1C4374u;
        goto label_1c4374;
    }
    ctx->pc = 0x1C436Cu;
    {
        const bool branch_taken_0x1c436c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c436c) {
            ctx->pc = 0x1C4388u;
            goto label_1c4388;
        }
    }
    ctx->pc = 0x1C4374u;
label_1c4374:
    // 0x1c4374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c4374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4378:
    // 0x1c4378: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c437c:
    // 0x1c437c: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c437cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
label_1c4380:
    // 0x1c4380: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c4384:
    if (ctx->pc == 0x1C4384u) {
        ctx->pc = 0x1C4388u;
        goto label_1c4388;
    }
    ctx->pc = 0x1C4380u;
    {
        const bool branch_taken_0x1c4380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4380) {
            ctx->pc = 0x1C4390u;
            goto label_1c4390;
        }
    }
    ctx->pc = 0x1C4388u;
label_1c4388:
    // 0x1c4388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c438c:
    // 0x1c438c: 0xa040156c  sb          $zero, 0x156C($v0)
    ctx->pc = 0x1c438cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 0));
label_1c4390:
    // 0x1c4390: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c4390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c4394:
    // 0x1c4394: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1c4394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
label_1c4398:
    // 0x1c4398: 0xac22b970  sw          $v0, -0x4690($at)
    ctx->pc = 0x1c4398u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949232), GPR_U32(ctx, 2));
label_1c439c:
    // 0x1c439c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c43a0:
    // 0x1c43a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1c43a4:
    // 0x1c43a4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x1c43a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_1c43a8:
    // 0x1c43a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1c43a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1c43ac:
    // 0x1c43ac: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c43acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1c43b0:
    // 0x1c43b0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1c43b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1c43b4:
    // 0x1c43b4: 0x24429190  addiu       $v0, $v0, -0x6E70
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939024));
label_1c43b8:
    // 0x1c43b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c43bc:
    // 0x1c43bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c43c0:
    // 0x1c43c0: 0x40f809  jalr        $v0
label_1c43c4:
    if (ctx->pc == 0x1C43C4u) {
        ctx->pc = 0x1C43C8u;
        goto label_1c43c8;
    }
    ctx->pc = 0x1C43C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C43C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43C0u, 0x1C43C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C43C8u;
label_1c43c8:
    // 0x1c43c8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1c43c8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c43cc:
    // 0x1c43cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c43ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c43d0:
    // 0x1c43d0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1c43d4:
    // 0x1c43d4: 0x3e00008  jr          $ra
label_1c43d8:
    if (ctx->pc == 0x1C43D8u) {
        ctx->pc = 0x1C43DCu;
        goto label_fallthrough_0x1c43d4;
    }
    ctx->pc = 0x1C43D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c43d4:
    ctx->pc = 0x1C43DCu;
}
