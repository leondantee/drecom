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

// Function: get_next_4R
// Address: 0x168430 - 0x16862c
void get_next_4R_0x168430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("get_next_4R_0x168430");
#endif

    switch (ctx->pc) {
        case 0x168444u: goto label_168444;
        case 0x1685c8u: goto label_1685c8;
        case 0x1685ecu: goto label_1685ec;
        default: break;
    }

    ctx->pc = 0x168430u;

label_168430:
    // 0x168430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168434: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x168434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x168438: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x168438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x16843c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16843cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x168440: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x168440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_168444:
    // 0x168444: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168448: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x168448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16844c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x16844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168450: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x168450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168454: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x168454u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168458: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16845c: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x16845cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x168460: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x168460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x168464: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x168464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168468: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x168468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16846c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16846cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168470: 0x31823  negu        $v1, $v1
    ctx->pc = 0x168470u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x168474: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x168474u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168478: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x168478u;
    {
        const bool branch_taken_0x168478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168478) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x168480u;
    // 0x168480: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168484: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x168484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168488: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16848c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16848cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x168490: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x168490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168494: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168498: 0x9463000c  lhu         $v1, 0xC($v1)
    ctx->pc = 0x168498u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x16849c: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x16849cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1684a0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1684a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1684a4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1684a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1684a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1684a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1684ac: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1684acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1684b0: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x1684B0u;
    {
        const bool branch_taken_0x1684b0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684b0) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x1684B8u;
    // 0x1684b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1684b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1684bc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1684bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1684c0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1684c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1684c4: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1684c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1684c8: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x1684c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1684cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1684ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1684d0: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x1684d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x1684d4: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x1684d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1684d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1684d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1684dc: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x1684dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1684e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1684e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1684e4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1684e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1684e8: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x1684e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1684ec: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x1684ECu;
    {
        const bool branch_taken_0x1684ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1684ec) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x1684F4u;
    // 0x1684f4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1684f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1684f8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1684f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1684fc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1684fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168500: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x168500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x168504: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x168504u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168508: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16850c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x16850cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x168510: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x168510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x168514: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x168514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168518: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x168518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x16851c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168520: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x168520u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x168524: 0x14200032  bnez        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x168524u;
    {
        const bool branch_taken_0x168524 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168524) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x16852Cu;
    // 0x16852c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168530: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x168530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x168534: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168538: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x16853c: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x16853cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168540: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168544: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x168544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x168548: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x168548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16854c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x16854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168550: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x168550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x168554: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x168554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168558: 0x31823  negu        $v1, $v1
    ctx->pc = 0x168558u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x16855c: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x16855cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x168560: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x168560u;
    {
        const bool branch_taken_0x168560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168560) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x168568u;
    // 0x168568: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16856c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x16856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x168570: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x168570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168574: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x168574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x168578: 0x832823  subu        $a1, $a0, $v1
    ctx->pc = 0x168578u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16857c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x16857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168580: 0x94630010  lhu         $v1, 0x10($v1)
    ctx->pc = 0x168580u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x168584: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x168584u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x168588: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x168588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16858c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x16858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x168590: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x168590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168594: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x168594u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x168598: 0x14200015  bnez        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x168598u;
    {
        const bool branch_taken_0x168598 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x168598) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x1685A0u;
    // 0x1685a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1685a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685a4: 0x94420012  lhu         $v0, 0x12($v0)
    ctx->pc = 0x1685a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x1685a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1685A8u;
    {
        const bool branch_taken_0x1685a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685a8) {
            ctx->pc = 0x1685D0u;
            goto label_1685d0;
        }
    }
    ctx->pc = 0x1685B0u;
    // 0x1685b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1685b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685b4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1685b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1685b8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1685b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1685bc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1685bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1685c0: 0xc05a10c  jal         func_168430
    ctx->pc = 0x1685C0u;
    SET_GPR_U32(ctx, 31, 0x1685C8u);
    ctx->pc = 0x168430u;
    goto label_168430;
    ctx->pc = 0x1685C8u;
label_1685c8:
    // 0x1685c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1685C8u;
    {
        const bool branch_taken_0x1685c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685c8) {
            ctx->pc = 0x1685F0u;
            goto label_1685f0;
        }
    }
    ctx->pc = 0x1685D0u;
label_1685d0:
    // 0x1685d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1685d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685d4: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1685d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1685d8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1685d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685dc: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x1685dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1685e0: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x1685e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1685e4: 0xc05a18c  jal         func_168630
    ctx->pc = 0x1685E4u;
    SET_GPR_U32(ctx, 31, 0x1685ECu);
    ctx->pc = 0x168630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168630u, 0x1685E4u, 0x1685ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1685ECu;
label_1685ec:
    // 0x1685ec: 0x0  nop
    ctx->pc = 0x1685ecu;
    // NOP
label_1685f0:
    // 0x1685f0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1685f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1685f4: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x1685f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1685f8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1685F8u;
    {
        const bool branch_taken_0x1685f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1685f8) {
            ctx->pc = 0x16861Cu;
            goto label_16861c;
        }
    }
    ctx->pc = 0x168600u;
    // 0x168600: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x168600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168604: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x168604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168608: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x168608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16860c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x168610: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x168610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x168614: 0x1000ff8b  b           . + 4 + (-0x75 << 2)
    ctx->pc = 0x168614u;
    {
        const bool branch_taken_0x168614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x168614) {
            ctx->pc = 0x168444u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168444;
        }
    }
    ctx->pc = 0x16861Cu;
label_16861c:
    // 0x16861c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x16861cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168620: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x168620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x168624: 0x3e00008  jr          $ra
    ctx->pc = 0x168624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16862Cu;
}
