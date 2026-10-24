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

// Function: Pl_r1_jump_down
// Address: 0x148100 - 0x148534
void Pl_r1_jump_down_0x148100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_jump_down_0x148100");
#endif

    switch (ctx->pc) {
        case 0x148100u: goto label_148100;
        case 0x148104u: goto label_148104;
        case 0x148108u: goto label_148108;
        case 0x14810cu: goto label_14810c;
        case 0x148110u: goto label_148110;
        case 0x148114u: goto label_148114;
        case 0x148118u: goto label_148118;
        case 0x14811cu: goto label_14811c;
        case 0x148120u: goto label_148120;
        case 0x148124u: goto label_148124;
        case 0x148128u: goto label_148128;
        case 0x14812cu: goto label_14812c;
        case 0x148130u: goto label_148130;
        case 0x148134u: goto label_148134;
        case 0x148138u: goto label_148138;
        case 0x14813cu: goto label_14813c;
        case 0x148140u: goto label_148140;
        case 0x148144u: goto label_148144;
        case 0x148148u: goto label_148148;
        case 0x14814cu: goto label_14814c;
        case 0x148150u: goto label_148150;
        case 0x148154u: goto label_148154;
        case 0x148158u: goto label_148158;
        case 0x14815cu: goto label_14815c;
        case 0x148160u: goto label_148160;
        case 0x148164u: goto label_148164;
        case 0x148168u: goto label_148168;
        case 0x14816cu: goto label_14816c;
        case 0x148170u: goto label_148170;
        case 0x148174u: goto label_148174;
        case 0x148178u: goto label_148178;
        case 0x14817cu: goto label_14817c;
        case 0x148180u: goto label_148180;
        case 0x148184u: goto label_148184;
        case 0x148188u: goto label_148188;
        case 0x14818cu: goto label_14818c;
        case 0x148190u: goto label_148190;
        case 0x148194u: goto label_148194;
        case 0x148198u: goto label_148198;
        case 0x14819cu: goto label_14819c;
        case 0x1481a0u: goto label_1481a0;
        case 0x1481a4u: goto label_1481a4;
        case 0x1481a8u: goto label_1481a8;
        case 0x1481acu: goto label_1481ac;
        case 0x1481b0u: goto label_1481b0;
        case 0x1481b4u: goto label_1481b4;
        case 0x1481b8u: goto label_1481b8;
        case 0x1481bcu: goto label_1481bc;
        case 0x1481c0u: goto label_1481c0;
        case 0x1481c4u: goto label_1481c4;
        case 0x1481c8u: goto label_1481c8;
        case 0x1481ccu: goto label_1481cc;
        case 0x1481d0u: goto label_1481d0;
        case 0x1481d4u: goto label_1481d4;
        case 0x1481d8u: goto label_1481d8;
        case 0x1481dcu: goto label_1481dc;
        case 0x1481e0u: goto label_1481e0;
        case 0x1481e4u: goto label_1481e4;
        case 0x1481e8u: goto label_1481e8;
        case 0x1481ecu: goto label_1481ec;
        case 0x1481f0u: goto label_1481f0;
        case 0x1481f4u: goto label_1481f4;
        case 0x1481f8u: goto label_1481f8;
        case 0x1481fcu: goto label_1481fc;
        case 0x148200u: goto label_148200;
        case 0x148204u: goto label_148204;
        case 0x148208u: goto label_148208;
        case 0x14820cu: goto label_14820c;
        case 0x148210u: goto label_148210;
        case 0x148214u: goto label_148214;
        case 0x148218u: goto label_148218;
        case 0x14821cu: goto label_14821c;
        case 0x148220u: goto label_148220;
        case 0x148224u: goto label_148224;
        case 0x148228u: goto label_148228;
        case 0x14822cu: goto label_14822c;
        case 0x148230u: goto label_148230;
        case 0x148234u: goto label_148234;
        case 0x148238u: goto label_148238;
        case 0x14823cu: goto label_14823c;
        case 0x148240u: goto label_148240;
        case 0x148244u: goto label_148244;
        case 0x148248u: goto label_148248;
        case 0x14824cu: goto label_14824c;
        case 0x148250u: goto label_148250;
        case 0x148254u: goto label_148254;
        case 0x148258u: goto label_148258;
        case 0x14825cu: goto label_14825c;
        case 0x148260u: goto label_148260;
        case 0x148264u: goto label_148264;
        case 0x148268u: goto label_148268;
        case 0x14826cu: goto label_14826c;
        case 0x148270u: goto label_148270;
        case 0x148274u: goto label_148274;
        case 0x148278u: goto label_148278;
        case 0x14827cu: goto label_14827c;
        case 0x148280u: goto label_148280;
        case 0x148284u: goto label_148284;
        case 0x148288u: goto label_148288;
        case 0x14828cu: goto label_14828c;
        case 0x148290u: goto label_148290;
        case 0x148294u: goto label_148294;
        case 0x148298u: goto label_148298;
        case 0x14829cu: goto label_14829c;
        case 0x1482a0u: goto label_1482a0;
        case 0x1482a4u: goto label_1482a4;
        case 0x1482a8u: goto label_1482a8;
        case 0x1482acu: goto label_1482ac;
        case 0x1482b0u: goto label_1482b0;
        case 0x1482b4u: goto label_1482b4;
        case 0x1482b8u: goto label_1482b8;
        case 0x1482bcu: goto label_1482bc;
        case 0x1482c0u: goto label_1482c0;
        case 0x1482c4u: goto label_1482c4;
        case 0x1482c8u: goto label_1482c8;
        case 0x1482ccu: goto label_1482cc;
        case 0x1482d0u: goto label_1482d0;
        case 0x1482d4u: goto label_1482d4;
        case 0x1482d8u: goto label_1482d8;
        case 0x1482dcu: goto label_1482dc;
        case 0x1482e0u: goto label_1482e0;
        case 0x1482e4u: goto label_1482e4;
        case 0x1482e8u: goto label_1482e8;
        case 0x1482ecu: goto label_1482ec;
        case 0x1482f0u: goto label_1482f0;
        case 0x1482f4u: goto label_1482f4;
        case 0x1482f8u: goto label_1482f8;
        case 0x1482fcu: goto label_1482fc;
        case 0x148300u: goto label_148300;
        case 0x148304u: goto label_148304;
        case 0x148308u: goto label_148308;
        case 0x14830cu: goto label_14830c;
        case 0x148310u: goto label_148310;
        case 0x148314u: goto label_148314;
        case 0x148318u: goto label_148318;
        case 0x14831cu: goto label_14831c;
        case 0x148320u: goto label_148320;
        case 0x148324u: goto label_148324;
        case 0x148328u: goto label_148328;
        case 0x14832cu: goto label_14832c;
        case 0x148330u: goto label_148330;
        case 0x148334u: goto label_148334;
        case 0x148338u: goto label_148338;
        case 0x14833cu: goto label_14833c;
        case 0x148340u: goto label_148340;
        case 0x148344u: goto label_148344;
        case 0x148348u: goto label_148348;
        case 0x14834cu: goto label_14834c;
        case 0x148350u: goto label_148350;
        case 0x148354u: goto label_148354;
        case 0x148358u: goto label_148358;
        case 0x14835cu: goto label_14835c;
        case 0x148360u: goto label_148360;
        case 0x148364u: goto label_148364;
        case 0x148368u: goto label_148368;
        case 0x14836cu: goto label_14836c;
        case 0x148370u: goto label_148370;
        case 0x148374u: goto label_148374;
        case 0x148378u: goto label_148378;
        case 0x14837cu: goto label_14837c;
        case 0x148380u: goto label_148380;
        case 0x148384u: goto label_148384;
        case 0x148388u: goto label_148388;
        case 0x14838cu: goto label_14838c;
        case 0x148390u: goto label_148390;
        case 0x148394u: goto label_148394;
        case 0x148398u: goto label_148398;
        case 0x14839cu: goto label_14839c;
        case 0x1483a0u: goto label_1483a0;
        case 0x1483a4u: goto label_1483a4;
        case 0x1483a8u: goto label_1483a8;
        case 0x1483acu: goto label_1483ac;
        case 0x1483b0u: goto label_1483b0;
        case 0x1483b4u: goto label_1483b4;
        case 0x1483b8u: goto label_1483b8;
        case 0x1483bcu: goto label_1483bc;
        case 0x1483c0u: goto label_1483c0;
        case 0x1483c4u: goto label_1483c4;
        case 0x1483c8u: goto label_1483c8;
        case 0x1483ccu: goto label_1483cc;
        case 0x1483d0u: goto label_1483d0;
        case 0x1483d4u: goto label_1483d4;
        case 0x1483d8u: goto label_1483d8;
        case 0x1483dcu: goto label_1483dc;
        case 0x1483e0u: goto label_1483e0;
        case 0x1483e4u: goto label_1483e4;
        case 0x1483e8u: goto label_1483e8;
        case 0x1483ecu: goto label_1483ec;
        case 0x1483f0u: goto label_1483f0;
        case 0x1483f4u: goto label_1483f4;
        case 0x1483f8u: goto label_1483f8;
        case 0x1483fcu: goto label_1483fc;
        case 0x148400u: goto label_148400;
        case 0x148404u: goto label_148404;
        case 0x148408u: goto label_148408;
        case 0x14840cu: goto label_14840c;
        case 0x148410u: goto label_148410;
        case 0x148414u: goto label_148414;
        case 0x148418u: goto label_148418;
        case 0x14841cu: goto label_14841c;
        case 0x148420u: goto label_148420;
        case 0x148424u: goto label_148424;
        case 0x148428u: goto label_148428;
        case 0x14842cu: goto label_14842c;
        case 0x148430u: goto label_148430;
        case 0x148434u: goto label_148434;
        case 0x148438u: goto label_148438;
        case 0x14843cu: goto label_14843c;
        case 0x148440u: goto label_148440;
        case 0x148444u: goto label_148444;
        case 0x148448u: goto label_148448;
        case 0x14844cu: goto label_14844c;
        case 0x148450u: goto label_148450;
        case 0x148454u: goto label_148454;
        case 0x148458u: goto label_148458;
        case 0x14845cu: goto label_14845c;
        case 0x148460u: goto label_148460;
        case 0x148464u: goto label_148464;
        case 0x148468u: goto label_148468;
        case 0x14846cu: goto label_14846c;
        case 0x148470u: goto label_148470;
        case 0x148474u: goto label_148474;
        case 0x148478u: goto label_148478;
        case 0x14847cu: goto label_14847c;
        case 0x148480u: goto label_148480;
        case 0x148484u: goto label_148484;
        case 0x148488u: goto label_148488;
        case 0x14848cu: goto label_14848c;
        case 0x148490u: goto label_148490;
        case 0x148494u: goto label_148494;
        case 0x148498u: goto label_148498;
        case 0x14849cu: goto label_14849c;
        case 0x1484a0u: goto label_1484a0;
        case 0x1484a4u: goto label_1484a4;
        case 0x1484a8u: goto label_1484a8;
        case 0x1484acu: goto label_1484ac;
        case 0x1484b0u: goto label_1484b0;
        case 0x1484b4u: goto label_1484b4;
        case 0x1484b8u: goto label_1484b8;
        case 0x1484bcu: goto label_1484bc;
        case 0x1484c0u: goto label_1484c0;
        case 0x1484c4u: goto label_1484c4;
        case 0x1484c8u: goto label_1484c8;
        case 0x1484ccu: goto label_1484cc;
        case 0x1484d0u: goto label_1484d0;
        case 0x1484d4u: goto label_1484d4;
        case 0x1484d8u: goto label_1484d8;
        case 0x1484dcu: goto label_1484dc;
        case 0x1484e0u: goto label_1484e0;
        case 0x1484e4u: goto label_1484e4;
        case 0x1484e8u: goto label_1484e8;
        case 0x1484ecu: goto label_1484ec;
        case 0x1484f0u: goto label_1484f0;
        case 0x1484f4u: goto label_1484f4;
        case 0x1484f8u: goto label_1484f8;
        case 0x1484fcu: goto label_1484fc;
        case 0x148500u: goto label_148500;
        case 0x148504u: goto label_148504;
        case 0x148508u: goto label_148508;
        case 0x14850cu: goto label_14850c;
        case 0x148510u: goto label_148510;
        case 0x148514u: goto label_148514;
        case 0x148518u: goto label_148518;
        case 0x14851cu: goto label_14851c;
        case 0x148520u: goto label_148520;
        case 0x148524u: goto label_148524;
        case 0x148528u: goto label_148528;
        case 0x14852cu: goto label_14852c;
        case 0x148530u: goto label_148530;
        default: break;
    }

    ctx->pc = 0x148100u;

label_148100:
    // 0x148100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_148104:
    // 0x148104: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x148104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_148108:
    // 0x148108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x148108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_14810c:
    // 0x14810c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x14810cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_148110:
    // 0x148110: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x148110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_148114:
    // 0x148114: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x148114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_148118:
    // 0x148118: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14811c:
    // 0x14811c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x14811cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148120:
    // 0x148120: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x148120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_148124:
    // 0x148124: 0x2ca10006  sltiu       $at, $a1, 0x6
    ctx->pc = 0x148124u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_148128:
    // 0x148128: 0x102000fd  beqz        $at, . + 4 + (0xFD << 2)
label_14812c:
    if (ctx->pc == 0x14812Cu) {
        ctx->pc = 0x148130u;
        goto label_148130;
    }
    ctx->pc = 0x148128u;
    {
        const bool branch_taken_0x148128 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x148128) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x148130u;
label_148130:
    // 0x148130: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x148130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_148134:
    // 0x148134: 0x2464e770  addiu       $a0, $v1, -0x1890
    ctx->pc = 0x148134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961008));
label_148138:
    // 0x148138: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x148138u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14813c:
    // 0x14813c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14813cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_148140:
    // 0x148140: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x148140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_148144:
    // 0x148144: 0x600008  jr          $v1
label_148148:
    if (ctx->pc == 0x148148u) {
        ctx->pc = 0x14814Cu;
        goto label_14814c;
    }
    ctx->pc = 0x148144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14814Cu;
label_14814c:
    // 0x14814c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148150:
    // 0x148150: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148154:
    // 0x148154: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148158:
    // 0x148158: 0x24060a25  addiu       $a2, $zero, 0xA25
    ctx->pc = 0x148158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2597));
label_14815c:
    // 0x14815c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x14815cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148160:
    // 0x148160: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_148164:
    // 0x148164: 0xc0965d0  jal         func_259740
label_148168:
    if (ctx->pc == 0x148168u) {
        ctx->pc = 0x14816Cu;
        goto label_14816c;
    }
    ctx->pc = 0x148164u;
    SET_GPR_U32(ctx, 31, 0x14816Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148164u, 0x14816Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14816Cu;
label_14816c:
    // 0x14816c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x14816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_148170:
    // 0x148170: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148174:
    // 0x148174: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x148174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
label_148178:
    // 0x148178: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14817c:
    // 0x14817c: 0xac4013f0  sw          $zero, 0x13F0($v0)
    ctx->pc = 0x14817cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5104), GPR_U32(ctx, 0));
label_148180:
    // 0x148180: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148184:
    // 0x148184: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148188:
    // 0x148188: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14818c:
    // 0x14818c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14818cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148190:
    // 0x148190: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148194:
    // 0x148194: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x148194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_148198:
    // 0x148198: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x148198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_14819c:
    // 0x14819c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1481a0:
    // 0x1481a0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1481a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1481a4:
    // 0x1481a4: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1481a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_1481a8:
    // 0x1481a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1481a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1481ac:
    // 0x1481ac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1481acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1481b0:
    // 0x1481b0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1481b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481b4:
    // 0x1481b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1481b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481b8:
    // 0x1481b8: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1481b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1481bc:
    // 0x1481bc: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x1481bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1481c0:
    // 0x1481c0: 0xc058f50  jal         func_163D40
label_1481c4:
    if (ctx->pc == 0x1481C4u) {
        ctx->pc = 0x1481C8u;
        goto label_1481c8;
    }
    ctx->pc = 0x1481C0u;
    SET_GPR_U32(ctx, 31, 0x1481C8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1481C0u, 0x1481C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481C8u;
label_1481c8:
    // 0x1481c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481cc:
    // 0x1481cc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1481ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1481d0:
    // 0x1481d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1481d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481d4:
    // 0x1481d4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1481d4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1481d8:
    // 0x1481d8: 0xc096b40  jal         func_25AD00
label_1481dc:
    if (ctx->pc == 0x1481DCu) {
        ctx->pc = 0x1481E0u;
        goto label_1481e0;
    }
    ctx->pc = 0x1481D8u;
    SET_GPR_U32(ctx, 31, 0x1481E0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1481D8u, 0x1481E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481E0u;
label_1481e0:
    // 0x1481e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1481e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481e4:
    // 0x1481e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481e8:
    // 0x1481e8: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x1481e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1481ec:
    // 0x1481ec: 0xc05cd58  jal         func_173560
label_1481f0:
    if (ctx->pc == 0x1481F0u) {
        ctx->pc = 0x1481F4u;
        goto label_1481f4;
    }
    ctx->pc = 0x1481ECu;
    SET_GPR_U32(ctx, 31, 0x1481F4u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1481ECu, 0x1481F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1481F4u;
label_1481f4:
    // 0x1481f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1481f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1481f8:
    // 0x1481f8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1481f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1481fc:
    // 0x1481fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1481fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148200:
    // 0x148200: 0xc057480  jal         func_15D200
label_148204:
    if (ctx->pc == 0x148204u) {
        ctx->pc = 0x148208u;
        goto label_148208;
    }
    ctx->pc = 0x148200u;
    SET_GPR_U32(ctx, 31, 0x148208u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x148200u, 0x148208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148208u;
label_148208:
    // 0x148208: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148208u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14820c:
    // 0x14820c: 0xc097530  jal         func_25D4C0
label_148210:
    if (ctx->pc == 0x148210u) {
        ctx->pc = 0x148214u;
        goto label_148214;
    }
    ctx->pc = 0x14820Cu;
    SET_GPR_U32(ctx, 31, 0x148214u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14820Cu, 0x148214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148214u;
label_148214:
    // 0x148214: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148218:
    // 0x148218: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x148218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_14821c:
    // 0x14821c: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_148220:
    if (ctx->pc == 0x148220u) {
        ctx->pc = 0x148224u;
        goto label_148224;
    }
    ctx->pc = 0x14821Cu;
    {
        const bool branch_taken_0x14821c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14821c) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x148224u;
label_148224:
    // 0x148224: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148228:
    // 0x148228: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x148228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_14822c:
    // 0x14822c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x14822cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_148230:
    // 0x148230: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x148230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
label_148234:
    // 0x148234: 0x100000ba  b           . + 4 + (0xBA << 2)
label_148238:
    if (ctx->pc == 0x148238u) {
        ctx->pc = 0x14823Cu;
        goto label_14823c;
    }
    ctx->pc = 0x148234u;
    {
        const bool branch_taken_0x148234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148234) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x14823Cu;
label_14823c:
    // 0x14823c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14823cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148240:
    // 0x148240: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148244:
    // 0x148244: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_148248:
    // 0x148248: 0x2406141b  addiu       $a2, $zero, 0x141B
    ctx->pc = 0x148248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5147));
label_14824c:
    // 0x14824c: 0x24070021  addiu       $a3, $zero, 0x21
    ctx->pc = 0x14824cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_148250:
    // 0x148250: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_148254:
    // 0x148254: 0xc0965d0  jal         func_259740
label_148258:
    if (ctx->pc == 0x148258u) {
        ctx->pc = 0x14825Cu;
        goto label_14825c;
    }
    ctx->pc = 0x148254u;
    SET_GPR_U32(ctx, 31, 0x14825Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x148254u, 0x14825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14825Cu;
label_14825c:
    // 0x14825c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x14825cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_148260:
    // 0x148260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148264:
    // 0x148264: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148268:
    // 0x148268: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x148268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
label_14826c:
    // 0x14826c: 0x3c02c234  lui         $v0, 0xC234
    ctx->pc = 0x14826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49716 << 16));
label_148270:
    // 0x148270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148274:
    // 0x148274: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148278:
    // 0x148278: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x148278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
label_14827c:
    // 0x14827c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14827cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148280:
    // 0x148280: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x148280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_148284:
    // 0x148284: 0x3c0243cd  lui         $v0, 0x43CD
    ctx->pc = 0x148284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17357 << 16));
label_148288:
    // 0x148288: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x148288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
label_14828c:
    // 0x14828c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14828cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_148290:
    // 0x148290: 0x0  nop
    ctx->pc = 0x148290u;
    // NOP
label_148294:
    // 0x148294: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x148294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_148298:
    // 0x148298: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x148298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
label_14829c:
    // 0x14829c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482a0:
    // 0x1482a0: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x1482a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1482a4:
    // 0x1482a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1482a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482a8:
    // 0x1482a8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1482a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_1482ac:
    // 0x1482ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1482acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1482b0:
    // 0x1482b0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1482b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_1482b4:
    // 0x1482b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1482b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482b8:
    // 0x1482b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1482b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1482bc:
    // 0x1482bc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1482bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
label_1482c0:
    // 0x1482c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1482c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1482c4:
    // 0x1482c4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1482c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1482c8:
    // 0x1482c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1482c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482cc:
    // 0x1482cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1482ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482d0:
    // 0x1482d0: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x1482d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_1482d4:
    // 0x1482d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1482d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1482d8:
    // 0x1482d8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1482d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1482dc:
    // 0x1482dc: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x1482dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1482e0:
    // 0x1482e0: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x1482e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1482e4:
    // 0x1482e4: 0xc058f50  jal         func_163D40
label_1482e8:
    if (ctx->pc == 0x1482E8u) {
        ctx->pc = 0x1482ECu;
        goto label_1482ec;
    }
    ctx->pc = 0x1482E4u;
    SET_GPR_U32(ctx, 31, 0x1482ECu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1482E4u, 0x1482ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1482ECu;
label_1482ec:
    // 0x1482ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1482ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482f0:
    // 0x1482f0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1482f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1482f4:
    // 0x1482f4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1482f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1482f8:
    // 0x1482f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1482f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1482fc:
    // 0x1482fc: 0xc096b40  jal         func_25AD00
label_148300:
    if (ctx->pc == 0x148300u) {
        ctx->pc = 0x148304u;
        goto label_148304;
    }
    ctx->pc = 0x1482FCu;
    SET_GPR_U32(ctx, 31, 0x148304u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1482FCu, 0x148304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148304u;
label_148304:
    // 0x148304: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148308:
    // 0x148308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14830c:
    // 0x14830c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x14830cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_148310:
    // 0x148310: 0xc05cd58  jal         func_173560
label_148314:
    if (ctx->pc == 0x148314u) {
        ctx->pc = 0x148318u;
        goto label_148318;
    }
    ctx->pc = 0x148310u;
    SET_GPR_U32(ctx, 31, 0x148318u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x148310u, 0x148318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148318u;
label_148318:
    // 0x148318: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_14831c:
    // 0x14831c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148320:
    // 0x148320: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x148320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148324:
    // 0x148324: 0xc057480  jal         func_15D200
label_148328:
    if (ctx->pc == 0x148328u) {
        ctx->pc = 0x14832Cu;
        goto label_14832c;
    }
    ctx->pc = 0x148324u;
    SET_GPR_U32(ctx, 31, 0x14832Cu);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x148324u, 0x14832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14832Cu;
label_14832c:
    // 0x14832c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x14832cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148330:
    // 0x148330: 0xc05cf54  jal         func_173D50
label_148334:
    if (ctx->pc == 0x148334u) {
        ctx->pc = 0x148338u;
        goto label_148338;
    }
    ctx->pc = 0x148330u;
    SET_GPR_U32(ctx, 31, 0x148338u);
    ctx->pc = 0x173D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173D50u, 0x148330u, 0x148338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148338u;
label_148338:
    // 0x148338: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_14833c:
    if (ctx->pc == 0x14833Cu) {
        ctx->pc = 0x148340u;
        goto label_148340;
    }
    ctx->pc = 0x148338u;
    {
        const bool branch_taken_0x148338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x148338) {
            ctx->pc = 0x148350u;
            goto label_148350;
        }
    }
    ctx->pc = 0x148340u;
label_148340:
    // 0x148340: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148344:
    // 0x148344: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_148348:
    // 0x148348: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x148348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14834c:
    // 0x14834c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x14834cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148350:
    // 0x148350: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148350u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_148354:
    // 0x148354: 0xc097530  jal         func_25D4C0
label_148358:
    if (ctx->pc == 0x148358u) {
        ctx->pc = 0x14835Cu;
        goto label_14835c;
    }
    ctx->pc = 0x148354u;
    SET_GPR_U32(ctx, 31, 0x14835Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148354u, 0x14835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14835Cu;
label_14835c:
    // 0x14835c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x14835cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148360:
    // 0x148360: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x148360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_148364:
    // 0x148364: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148368:
    // 0x148368: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x148368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
label_14836c:
    // 0x14836c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14836cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148370:
    // 0x148370: 0xc0587a8  jal         func_161EA0
label_148374:
    if (ctx->pc == 0x148374u) {
        ctx->pc = 0x148378u;
        goto label_148378;
    }
    ctx->pc = 0x148370u;
    SET_GPR_U32(ctx, 31, 0x148378u);
    ctx->pc = 0x161EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161EA0u, 0x148370u, 0x148378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148378u;
label_148378:
    // 0x148378: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_14837c:
    if (ctx->pc == 0x14837Cu) {
        ctx->pc = 0x148380u;
        goto label_148380;
    }
    ctx->pc = 0x148378u;
    {
        const bool branch_taken_0x148378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148378) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x148380u;
label_148380:
    // 0x148380: 0x10000067  b           . + 4 + (0x67 << 2)
label_148384:
    if (ctx->pc == 0x148384u) {
        ctx->pc = 0x148388u;
        goto label_148388;
    }
    ctx->pc = 0x148380u;
    {
        const bool branch_taken_0x148380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x148380) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x148388u;
label_148388:
    // 0x148388: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14838c:
    // 0x14838c: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x14838cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_148390:
    // 0x148390: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x148390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
label_148394:
    // 0x148394: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x148394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_148398:
    // 0x148398: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x148398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14839c:
    // 0x14839c: 0x0  nop
    ctx->pc = 0x14839cu;
    // NOP
label_1483a0:
    // 0x1483a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1483a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1483a4:
    // 0x1483a4: 0x0  nop
    ctx->pc = 0x1483a4u;
    // NOP
label_1483a8:
    // 0x1483a8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_1483ac:
    if (ctx->pc == 0x1483ACu) {
        ctx->pc = 0x1483B0u;
        goto label_1483b0;
    }
    ctx->pc = 0x1483A8u;
    {
        const bool branch_taken_0x1483a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1483a8) {
            ctx->pc = 0x1483E0u;
            goto label_1483e0;
        }
    }
    ctx->pc = 0x1483B0u;
label_1483b0:
    // 0x1483b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1483b4:
    // 0x1483b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1483b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1483b8:
    // 0x1483b8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1483bc:
    // 0x1483bc: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1483bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1483c0:
    // 0x1483c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1483c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1483c4:
    // 0x1483c4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1483c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1483c8:
    // 0x1483c8: 0xc0965d0  jal         func_259740
label_1483cc:
    if (ctx->pc == 0x1483CCu) {
        ctx->pc = 0x1483D0u;
        goto label_1483d0;
    }
    ctx->pc = 0x1483C8u;
    SET_GPR_U32(ctx, 31, 0x1483D0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1483C8u, 0x1483D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D0u;
label_1483d0:
    // 0x1483d0: 0xc05772c  jal         func_15DCB0
label_1483d4:
    if (ctx->pc == 0x1483D4u) {
        ctx->pc = 0x1483D8u;
        goto label_1483d8;
    }
    ctx->pc = 0x1483D0u;
    SET_GPR_U32(ctx, 31, 0x1483D8u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1483D0u, 0x1483D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1483D8u;
label_1483d8:
    // 0x1483d8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1483dc:
    if (ctx->pc == 0x1483DCu) {
        ctx->pc = 0x1483E0u;
        goto label_1483e0;
    }
    ctx->pc = 0x1483D8u;
    {
        const bool branch_taken_0x1483d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1483d8) {
            ctx->pc = 0x148424u;
            goto label_148424;
        }
    }
    ctx->pc = 0x1483E0u;
label_1483e0:
    // 0x1483e0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1483e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1483e4:
    // 0x1483e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1483e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1483e8:
    // 0x1483e8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1483e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
label_1483ec:
    // 0x1483ec: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1483ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1483f0:
    // 0x1483f0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1483f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1483f4:
    // 0x1483f4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1483f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1483f8:
    // 0x1483f8: 0xc0965d0  jal         func_259740
label_1483fc:
    if (ctx->pc == 0x1483FCu) {
        ctx->pc = 0x148400u;
        goto label_148400;
    }
    ctx->pc = 0x1483F8u;
    SET_GPR_U32(ctx, 31, 0x148400u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1483F8u, 0x148400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148400u;
label_148400:
    // 0x148400: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x148400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
label_148404:
    // 0x148404: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x148404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
label_148408:
    // 0x148408: 0xc0684d8  jal         func_1A1360
label_14840c:
    if (ctx->pc == 0x14840Cu) {
        ctx->pc = 0x148410u;
        goto label_148410;
    }
    ctx->pc = 0x148408u;
    SET_GPR_U32(ctx, 31, 0x148410u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x148408u, 0x148410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148410u;
label_148410:
    // 0x148410: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x148410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_148414:
    // 0x148414: 0x3444ff80  ori         $a0, $v0, 0xFF80
    ctx->pc = 0x148414u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_148418:
    // 0x148418: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x148418u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_14841c:
    // 0x14841c: 0xc0684d8  jal         func_1A1360
label_148420:
    if (ctx->pc == 0x148420u) {
        ctx->pc = 0x148424u;
        goto label_148424;
    }
    ctx->pc = 0x14841Cu;
    SET_GPR_U32(ctx, 31, 0x148424u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x14841Cu, 0x148424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148424u;
label_148424:
    // 0x148424: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148428:
    // 0x148428: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x148428u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_14842c:
    // 0x14842c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_148430:
    // 0x148430: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x148430u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_148434:
    // 0x148434: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148438:
    // 0x148438: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148438u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14843c:
    // 0x14843c: 0xc096b40  jal         func_25AD00
label_148440:
    if (ctx->pc == 0x148440u) {
        ctx->pc = 0x148444u;
        goto label_148444;
    }
    ctx->pc = 0x14843Cu;
    SET_GPR_U32(ctx, 31, 0x148444u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14843Cu, 0x148444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148444u;
label_148444:
    // 0x148444: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148448:
    // 0x148448: 0xc05cd10  jal         func_173440
label_14844c:
    if (ctx->pc == 0x14844Cu) {
        ctx->pc = 0x148450u;
        goto label_148450;
    }
    ctx->pc = 0x148448u;
    SET_GPR_U32(ctx, 31, 0x148450u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x148448u, 0x148450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148450u;
label_148450:
    // 0x148450: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x148450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_148454:
    // 0x148454: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x148454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148458:
    // 0x148458: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x148458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_14845c:
    // 0x14845c: 0xc0573d8  jal         func_15CF60
label_148460:
    if (ctx->pc == 0x148460u) {
        ctx->pc = 0x148464u;
        goto label_148464;
    }
    ctx->pc = 0x14845Cu;
    SET_GPR_U32(ctx, 31, 0x148464u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14845Cu, 0x148464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148464u;
label_148464:
    // 0x148464: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x148464u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_148468:
    // 0x148468: 0xc097530  jal         func_25D4C0
label_14846c:
    if (ctx->pc == 0x14846Cu) {
        ctx->pc = 0x148470u;
        goto label_148470;
    }
    ctx->pc = 0x148468u;
    SET_GPR_U32(ctx, 31, 0x148470u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x148468u, 0x148470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148470u;
label_148470:
    // 0x148470: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148474:
    // 0x148474: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x148474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_148478:
    // 0x148478: 0xc057b54  jal         func_15ED50
label_14847c:
    if (ctx->pc == 0x14847Cu) {
        ctx->pc = 0x148480u;
        goto label_148480;
    }
    ctx->pc = 0x148478u;
    SET_GPR_U32(ctx, 31, 0x148480u);
    ctx->pc = 0x15ED50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ED50u, 0x148478u, 0x148480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148480u;
label_148480:
    // 0x148480: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
label_148484:
    if (ctx->pc == 0x148484u) {
        ctx->pc = 0x148488u;
        goto label_148488;
    }
    ctx->pc = 0x148480u;
    {
        const bool branch_taken_0x148480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148480) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x148488u;
label_148488:
    // 0x148488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x148488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14848c:
    // 0x14848c: 0x244412c0  addiu       $a0, $v0, 0x12C0
    ctx->pc = 0x14848cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_148490:
    // 0x148490: 0xc057b04  jal         func_15EC10
label_148494:
    if (ctx->pc == 0x148494u) {
        ctx->pc = 0x148498u;
        goto label_148498;
    }
    ctx->pc = 0x148490u;
    SET_GPR_U32(ctx, 31, 0x148498u);
    ctx->pc = 0x15EC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EC10u, 0x148490u, 0x148498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148498u;
label_148498:
    // 0x148498: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_14849c:
    if (ctx->pc == 0x14849Cu) {
        ctx->pc = 0x1484A0u;
        goto label_1484a0;
    }
    ctx->pc = 0x148498u;
    {
        const bool branch_taken_0x148498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x148498) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x1484A0u;
label_1484a0:
    // 0x1484a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1484a4:
    // 0x1484a4: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1484a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
label_1484a8:
    // 0x1484a8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1484a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1484ac:
    // 0x1484ac: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1484acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1484b0:
    // 0x1484b0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1484b4:
    if (ctx->pc == 0x1484B4u) {
        ctx->pc = 0x1484B8u;
        goto label_1484b8;
    }
    ctx->pc = 0x1484B0u;
    {
        const bool branch_taken_0x1484b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484b0) {
            ctx->pc = 0x1484D8u;
            goto label_1484d8;
        }
    }
    ctx->pc = 0x1484B8u;
label_1484b8:
    // 0x1484b8: 0xc0585dc  jal         func_161770
label_1484bc:
    if (ctx->pc == 0x1484BCu) {
        ctx->pc = 0x1484C0u;
        goto label_1484c0;
    }
    ctx->pc = 0x1484B8u;
    SET_GPR_U32(ctx, 31, 0x1484C0u);
    ctx->pc = 0x161770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x161770u, 0x1484B8u, 0x1484C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484C0u;
label_1484c0:
    // 0x1484c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1484c4:
    if (ctx->pc == 0x1484C4u) {
        ctx->pc = 0x1484C8u;
        goto label_1484c8;
    }
    ctx->pc = 0x1484C0u;
    {
        const bool branch_taken_0x1484c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484c0) {
            ctx->pc = 0x1484D8u;
            goto label_1484d8;
        }
    }
    ctx->pc = 0x1484C8u;
label_1484c8:
    // 0x1484c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1484cc:
    // 0x1484cc: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1484ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_1484d0:
    // 0x1484d0: 0x10000013  b           . + 4 + (0x13 << 2)
label_1484d4:
    if (ctx->pc == 0x1484D4u) {
        ctx->pc = 0x1484D8u;
        goto label_1484d8;
    }
    ctx->pc = 0x1484D0u;
    {
        const bool branch_taken_0x1484d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484d0) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x1484D8u;
label_1484d8:
    // 0x1484d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1484dc:
    // 0x1484dc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1484dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
label_1484e0:
    // 0x1484e0: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1484e4:
    if (ctx->pc == 0x1484E4u) {
        ctx->pc = 0x1484E8u;
        goto label_1484e8;
    }
    ctx->pc = 0x1484E0u;
    {
        const bool branch_taken_0x1484e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1484e0) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x1484E8u;
label_1484e8:
    // 0x1484e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1484e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1484ec:
    // 0x1484ec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1484f0:
    // 0x1484f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1484f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_1484f4:
    // 0x1484f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1484f8:
    // 0x1484f8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1484f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1484fc:
    // 0x1484fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1484fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148500:
    // 0x148500: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x148500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_148504:
    // 0x148504: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148508:
    // 0x148508: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x148508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_14850c:
    // 0x14850c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x14850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_148510:
    // 0x148510: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_148514:
    // 0x148514: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x148514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_148518:
    // 0x148518: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x148518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_14851c:
    // 0x14851c: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x14851cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
label_148520:
    // 0x148520: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x148520u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_148524:
    // 0x148524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x148524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_148528:
    // 0x148528: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x148528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_14852c:
    // 0x14852c: 0x3e00008  jr          $ra
label_148530:
    if (ctx->pc == 0x148530u) {
        ctx->pc = 0x148534u;
        goto label_fallthrough_0x14852c;
    }
    ctx->pc = 0x14852Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14852Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14852c:
    ctx->pc = 0x148534u;
}
