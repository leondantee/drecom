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

// Function: Rain_env_set
// Address: 0x1ad440 - 0x1ad614
void Rain_env_set_0x1ad440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Rain_env_set_0x1ad440");
#endif

    switch (ctx->pc) {
        case 0x1ad440u: goto label_1ad440;
        case 0x1ad444u: goto label_1ad444;
        case 0x1ad448u: goto label_1ad448;
        case 0x1ad44cu: goto label_1ad44c;
        case 0x1ad450u: goto label_1ad450;
        case 0x1ad454u: goto label_1ad454;
        case 0x1ad458u: goto label_1ad458;
        case 0x1ad45cu: goto label_1ad45c;
        case 0x1ad460u: goto label_1ad460;
        case 0x1ad464u: goto label_1ad464;
        case 0x1ad468u: goto label_1ad468;
        case 0x1ad46cu: goto label_1ad46c;
        case 0x1ad470u: goto label_1ad470;
        case 0x1ad474u: goto label_1ad474;
        case 0x1ad478u: goto label_1ad478;
        case 0x1ad47cu: goto label_1ad47c;
        case 0x1ad480u: goto label_1ad480;
        case 0x1ad484u: goto label_1ad484;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad48cu: goto label_1ad48c;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad494u: goto label_1ad494;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4a0u: goto label_1ad4a0;
        case 0x1ad4a4u: goto label_1ad4a4;
        case 0x1ad4a8u: goto label_1ad4a8;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4b0u: goto label_1ad4b0;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4b8u: goto label_1ad4b8;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4c4u: goto label_1ad4c4;
        case 0x1ad4c8u: goto label_1ad4c8;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4d4u: goto label_1ad4d4;
        case 0x1ad4d8u: goto label_1ad4d8;
        case 0x1ad4dcu: goto label_1ad4dc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4e8u: goto label_1ad4e8;
        case 0x1ad4ecu: goto label_1ad4ec;
        case 0x1ad4f0u: goto label_1ad4f0;
        case 0x1ad4f4u: goto label_1ad4f4;
        case 0x1ad4f8u: goto label_1ad4f8;
        case 0x1ad4fcu: goto label_1ad4fc;
        case 0x1ad500u: goto label_1ad500;
        case 0x1ad504u: goto label_1ad504;
        case 0x1ad508u: goto label_1ad508;
        case 0x1ad50cu: goto label_1ad50c;
        case 0x1ad510u: goto label_1ad510;
        case 0x1ad514u: goto label_1ad514;
        case 0x1ad518u: goto label_1ad518;
        case 0x1ad51cu: goto label_1ad51c;
        case 0x1ad520u: goto label_1ad520;
        case 0x1ad524u: goto label_1ad524;
        case 0x1ad528u: goto label_1ad528;
        case 0x1ad52cu: goto label_1ad52c;
        case 0x1ad530u: goto label_1ad530;
        case 0x1ad534u: goto label_1ad534;
        case 0x1ad538u: goto label_1ad538;
        case 0x1ad53cu: goto label_1ad53c;
        case 0x1ad540u: goto label_1ad540;
        case 0x1ad544u: goto label_1ad544;
        case 0x1ad548u: goto label_1ad548;
        case 0x1ad54cu: goto label_1ad54c;
        case 0x1ad550u: goto label_1ad550;
        case 0x1ad554u: goto label_1ad554;
        case 0x1ad558u: goto label_1ad558;
        case 0x1ad55cu: goto label_1ad55c;
        case 0x1ad560u: goto label_1ad560;
        case 0x1ad564u: goto label_1ad564;
        case 0x1ad568u: goto label_1ad568;
        case 0x1ad56cu: goto label_1ad56c;
        case 0x1ad570u: goto label_1ad570;
        case 0x1ad574u: goto label_1ad574;
        case 0x1ad578u: goto label_1ad578;
        case 0x1ad57cu: goto label_1ad57c;
        case 0x1ad580u: goto label_1ad580;
        case 0x1ad584u: goto label_1ad584;
        case 0x1ad588u: goto label_1ad588;
        case 0x1ad58cu: goto label_1ad58c;
        case 0x1ad590u: goto label_1ad590;
        case 0x1ad594u: goto label_1ad594;
        case 0x1ad598u: goto label_1ad598;
        case 0x1ad59cu: goto label_1ad59c;
        case 0x1ad5a0u: goto label_1ad5a0;
        case 0x1ad5a4u: goto label_1ad5a4;
        case 0x1ad5a8u: goto label_1ad5a8;
        case 0x1ad5acu: goto label_1ad5ac;
        case 0x1ad5b0u: goto label_1ad5b0;
        case 0x1ad5b4u: goto label_1ad5b4;
        case 0x1ad5b8u: goto label_1ad5b8;
        case 0x1ad5bcu: goto label_1ad5bc;
        case 0x1ad5c0u: goto label_1ad5c0;
        case 0x1ad5c4u: goto label_1ad5c4;
        case 0x1ad5c8u: goto label_1ad5c8;
        case 0x1ad5ccu: goto label_1ad5cc;
        case 0x1ad5d0u: goto label_1ad5d0;
        case 0x1ad5d4u: goto label_1ad5d4;
        case 0x1ad5d8u: goto label_1ad5d8;
        case 0x1ad5dcu: goto label_1ad5dc;
        case 0x1ad5e0u: goto label_1ad5e0;
        case 0x1ad5e4u: goto label_1ad5e4;
        case 0x1ad5e8u: goto label_1ad5e8;
        case 0x1ad5ecu: goto label_1ad5ec;
        case 0x1ad5f0u: goto label_1ad5f0;
        case 0x1ad5f4u: goto label_1ad5f4;
        case 0x1ad5f8u: goto label_1ad5f8;
        case 0x1ad5fcu: goto label_1ad5fc;
        case 0x1ad600u: goto label_1ad600;
        case 0x1ad604u: goto label_1ad604;
        case 0x1ad608u: goto label_1ad608;
        case 0x1ad60cu: goto label_1ad60c;
        case 0x1ad610u: goto label_1ad610;
        default: break;
    }

    ctx->pc = 0x1ad440u;

label_1ad440:
    // 0x1ad440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ad440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_1ad444:
    // 0x1ad444: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x1ad444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
label_1ad448:
    // 0x1ad448: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ad448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ad44c:
    // 0x1ad44c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ad44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ad450:
    // 0x1ad450: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ad450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ad454:
    // 0x1ad454: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ad454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ad458:
    // 0x1ad458: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ad458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ad45c:
    // 0x1ad45c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ad45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ad460:
    // 0x1ad460: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1ad460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_1ad464:
    // 0x1ad464: 0x2472f010  addiu       $s2, $v1, -0xFF0
    ctx->pc = 0x1ad464u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
label_1ad468:
    // 0x1ad468: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1ad468u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1ad46c:
    // 0x1ad46c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_1ad470:
    if (ctx->pc == 0x1AD470u) {
        ctx->pc = 0x1AD474u;
        goto label_1ad474;
    }
    ctx->pc = 0x1AD46Cu;
    {
        const bool branch_taken_0x1ad46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad46c) {
            ctx->pc = 0x1AD5E0u;
            goto label_1ad5e0;
        }
    }
    ctx->pc = 0x1AD474u;
label_1ad474:
    // 0x1ad474: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad478:
    // 0x1ad478: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad47c:
    // 0x1ad47c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad47cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad480:
    // 0x1ad480: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1ad480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1ad484:
    // 0x1ad484: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ad484u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ad488:
    // 0x1ad488: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad48c:
    // 0x1ad48c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad48cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad490:
    // 0x1ad490: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad490u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad494:
    // 0x1ad494: 0x8c30b470  lw          $s0, -0x4B90($at)
    ctx->pc = 0x1ad494u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad498:
    // 0x1ad498: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ad498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1ad49c:
    // 0x1ad49c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1ad49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 320)));
label_1ad4a0:
    // 0x1ad4a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ad4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ad4a4:
    // 0x1ad4a4: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x1ad4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1ad4a8:
    // 0x1ad4a8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1ad4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ad4ac:
    // 0x1ad4ac: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ad4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ad4b0:
    // 0x1ad4b0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad4b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad4b4:
    // 0x1ad4b4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ad4b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ad4b8:
    // 0x1ad4b8: 0x8c30b470  lw          $s0, -0x4B90($at)
    ctx->pc = 0x1ad4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294947952)));
label_1ad4bc:
    // 0x1ad4bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad4c0:
    // 0x1ad4c0: 0x7200a628  paddub      $s4, $s0, $zero
    ctx->pc = 0x1ad4c0u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ad4c4:
    // 0x1ad4c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad4c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad4c8:
    // 0x1ad4c8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ad4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ad4cc:
    // 0x1ad4cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ad4d0:
    // 0x1ad4d0: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x1ad4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1ad4d4:
    // 0x1ad4d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ad4d8:
    // 0x1ad4d8: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1ad4d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_1ad4dc:
    // 0x1ad4dc: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x1ad4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_1ad4e0:
    // 0x1ad4e0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ad4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_1ad4e4:
    // 0x1ad4e4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad4e8:
    // 0x1ad4e8: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x1ad4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
label_1ad4ec:
    // 0x1ad4ec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ad4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ad4f0:
    // 0x1ad4f0: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ad4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_1ad4f4:
    // 0x1ad4f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad4f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad4f8:
    // 0x1ad4f8: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x1ad4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
label_1ad4fc:
    // 0x1ad4fc: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x1ad4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_1ad500:
    // 0x1ad500: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ad500u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_1ad504:
    // 0x1ad504: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad508:
    // 0x1ad508: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x1ad508u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
label_1ad50c:
    // 0x1ad50c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1ad50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ad510:
    // 0x1ad510: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ad510u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_1ad514:
    // 0x1ad514: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad518:
    // 0x1ad518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad51c:
    // 0x1ad51c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1ad51cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_1ad520:
    // 0x1ad520: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1ad520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
label_1ad524:
    // 0x1ad524: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1ad524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
label_1ad528:
    // 0x1ad528: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1ad52c:
    // 0x1ad52c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1ad52cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_1ad530:
    // 0x1ad530: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x1ad530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_1ad534:
    // 0x1ad534: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x1ad534u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
label_1ad538:
    // 0x1ad538: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad53c:
    // 0x1ad53c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x1ad53cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_1ad540:
    // 0x1ad540: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1ad540u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_1ad544:
    // 0x1ad544: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ad544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ad548:
    // 0x1ad548: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1ad548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1ad54c:
    // 0x1ad54c: 0x24428200  addiu       $v0, $v0, -0x7E00
    ctx->pc = 0x1ad54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935040));
label_1ad550:
    // 0x1ad550: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ad550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ad554:
    // 0x1ad554: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ad554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ad558:
    // 0x1ad558: 0x40f809  jalr        $v0
label_1ad55c:
    if (ctx->pc == 0x1AD55Cu) {
        ctx->pc = 0x1AD560u;
        goto label_1ad560;
    }
    ctx->pc = 0x1AD558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD558u, 0x1AD560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD560u;
label_1ad560:
    // 0x1ad560: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ad560u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1ad564:
    // 0x1ad564: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1ad564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_1ad568:
    // 0x1ad568: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x1ad568u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_1ad56c:
    // 0x1ad56c: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x1ad56cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1ad570:
    // 0x1ad570: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x1ad570u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
label_1ad574:
    // 0x1ad574: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad578:
    // 0x1ad578: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x1ad578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1ad57c:
    // 0x1ad57c: 0x2032023  subu        $a0, $s0, $v1
    ctx->pc = 0x1ad57cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1ad580:
    // 0x1ad580: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1ad580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ad584:
    // 0x1ad584: 0x4a902  srl         $s5, $a0, 4
    ctx->pc = 0x1ad584u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
label_1ad588:
    // 0x1ad588: 0x72809e28  paddub      $s3, $s4, $zero
    ctx->pc = 0x1ad588u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
label_1ad58c:
    // 0x1ad58c: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x1ad58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
label_1ad590:
    // 0x1ad590: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1ad590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1ad594:
    // 0x1ad594: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1ad594u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_1ad598:
    // 0x1ad598: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ad598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1ad59c:
    // 0x1ad59c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1ad59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_1ad5a0:
    // 0x1ad5a0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1ad5a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_1ad5a4:
    // 0x1ad5a4: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x1ad5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_1ad5a8:
    // 0x1ad5a8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1ad5ac:
    // 0x1ad5ac: 0xfe630008  sd          $v1, 0x8($s3)
    ctx->pc = 0x1ad5acu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8), GPR_U64(ctx, 3));
label_1ad5b0:
    // 0x1ad5b0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ad5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ad5b4:
    // 0x1ad5b4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1ad5b8:
    // 0x1ad5b8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad5bc:
    // 0x1ad5bc: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ad5bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1ad5c0:
    // 0x1ad5c0: 0xac30b4a0  sw          $s0, -0x4B60($at)
    ctx->pc = 0x1ad5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948000), GPR_U32(ctx, 16));
label_1ad5c4:
    // 0x1ad5c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1ad5c8:
    // 0x1ad5c8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1ad5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1ad5cc:
    // 0x1ad5cc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1ad5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_1ad5d0:
    // 0x1ad5d0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ad5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ad5d4:
    // 0x1ad5d4: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1ad5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1ad5d8:
    // 0x1ad5d8: 0xac30b490  sw          $s0, -0x4B70($at)
    ctx->pc = 0x1ad5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947984), GPR_U32(ctx, 16));
label_1ad5dc:
    // 0x1ad5dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ad5dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1ad5e0:
    // 0x1ad5e0: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x1ad5e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1ad5e4:
    // 0x1ad5e4: 0x1460ffa3  bnez        $v1, . + 4 + (-0x5D << 2)
label_1ad5e8:
    if (ctx->pc == 0x1AD5E8u) {
        ctx->pc = 0x1AD5ECu;
        goto label_1ad5ec;
    }
    ctx->pc = 0x1AD5E4u;
    {
        const bool branch_taken_0x1ad5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5e4) {
            ctx->pc = 0x1AD474u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad474;
        }
    }
    ctx->pc = 0x1AD5ECu;
label_1ad5ec:
    // 0x1ad5ec: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x1ad5ecu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ad5f0:
    // 0x1ad5f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ad5f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ad5f4:
    // 0x1ad5f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ad5f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ad5f8:
    // 0x1ad5f8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ad5f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ad5fc:
    // 0x1ad5fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ad5fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad600:
    // 0x1ad600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ad600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad604:
    // 0x1ad604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ad604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ad608:
    // 0x1ad608: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ad608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1ad60c:
    // 0x1ad60c: 0x3e00008  jr          $ra
label_1ad610:
    if (ctx->pc == 0x1AD610u) {
        ctx->pc = 0x1AD614u;
        goto label_fallthrough_0x1ad60c;
    }
    ctx->pc = 0x1AD60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ad60c:
    ctx->pc = 0x1AD614u;
}
