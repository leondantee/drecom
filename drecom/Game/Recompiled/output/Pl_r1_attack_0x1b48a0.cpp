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

// Function: Pl_r1_attack
// Address: 0x1b48a0 - 0x1b4b60
void Pl_r1_attack_0x1b48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Pl_r1_attack_0x1b48a0");
#endif

    switch (ctx->pc) {
        case 0x1b48a0u: goto label_1b48a0;
        case 0x1b48a4u: goto label_1b48a4;
        case 0x1b48a8u: goto label_1b48a8;
        case 0x1b48acu: goto label_1b48ac;
        case 0x1b48b0u: goto label_1b48b0;
        case 0x1b48b4u: goto label_1b48b4;
        case 0x1b48b8u: goto label_1b48b8;
        case 0x1b48bcu: goto label_1b48bc;
        case 0x1b48c0u: goto label_1b48c0;
        case 0x1b48c4u: goto label_1b48c4;
        case 0x1b48c8u: goto label_1b48c8;
        case 0x1b48ccu: goto label_1b48cc;
        case 0x1b48d0u: goto label_1b48d0;
        case 0x1b48d4u: goto label_1b48d4;
        case 0x1b48d8u: goto label_1b48d8;
        case 0x1b48dcu: goto label_1b48dc;
        case 0x1b48e0u: goto label_1b48e0;
        case 0x1b48e4u: goto label_1b48e4;
        case 0x1b48e8u: goto label_1b48e8;
        case 0x1b48ecu: goto label_1b48ec;
        case 0x1b48f0u: goto label_1b48f0;
        case 0x1b48f4u: goto label_1b48f4;
        case 0x1b48f8u: goto label_1b48f8;
        case 0x1b48fcu: goto label_1b48fc;
        case 0x1b4900u: goto label_1b4900;
        case 0x1b4904u: goto label_1b4904;
        case 0x1b4908u: goto label_1b4908;
        case 0x1b490cu: goto label_1b490c;
        case 0x1b4910u: goto label_1b4910;
        case 0x1b4914u: goto label_1b4914;
        case 0x1b4918u: goto label_1b4918;
        case 0x1b491cu: goto label_1b491c;
        case 0x1b4920u: goto label_1b4920;
        case 0x1b4924u: goto label_1b4924;
        case 0x1b4928u: goto label_1b4928;
        case 0x1b492cu: goto label_1b492c;
        case 0x1b4930u: goto label_1b4930;
        case 0x1b4934u: goto label_1b4934;
        case 0x1b4938u: goto label_1b4938;
        case 0x1b493cu: goto label_1b493c;
        case 0x1b4940u: goto label_1b4940;
        case 0x1b4944u: goto label_1b4944;
        case 0x1b4948u: goto label_1b4948;
        case 0x1b494cu: goto label_1b494c;
        case 0x1b4950u: goto label_1b4950;
        case 0x1b4954u: goto label_1b4954;
        case 0x1b4958u: goto label_1b4958;
        case 0x1b495cu: goto label_1b495c;
        case 0x1b4960u: goto label_1b4960;
        case 0x1b4964u: goto label_1b4964;
        case 0x1b4968u: goto label_1b4968;
        case 0x1b496cu: goto label_1b496c;
        case 0x1b4970u: goto label_1b4970;
        case 0x1b4974u: goto label_1b4974;
        case 0x1b4978u: goto label_1b4978;
        case 0x1b497cu: goto label_1b497c;
        case 0x1b4980u: goto label_1b4980;
        case 0x1b4984u: goto label_1b4984;
        case 0x1b4988u: goto label_1b4988;
        case 0x1b498cu: goto label_1b498c;
        case 0x1b4990u: goto label_1b4990;
        case 0x1b4994u: goto label_1b4994;
        case 0x1b4998u: goto label_1b4998;
        case 0x1b499cu: goto label_1b499c;
        case 0x1b49a0u: goto label_1b49a0;
        case 0x1b49a4u: goto label_1b49a4;
        case 0x1b49a8u: goto label_1b49a8;
        case 0x1b49acu: goto label_1b49ac;
        case 0x1b49b0u: goto label_1b49b0;
        case 0x1b49b4u: goto label_1b49b4;
        case 0x1b49b8u: goto label_1b49b8;
        case 0x1b49bcu: goto label_1b49bc;
        case 0x1b49c0u: goto label_1b49c0;
        case 0x1b49c4u: goto label_1b49c4;
        case 0x1b49c8u: goto label_1b49c8;
        case 0x1b49ccu: goto label_1b49cc;
        case 0x1b49d0u: goto label_1b49d0;
        case 0x1b49d4u: goto label_1b49d4;
        case 0x1b49d8u: goto label_1b49d8;
        case 0x1b49dcu: goto label_1b49dc;
        case 0x1b49e0u: goto label_1b49e0;
        case 0x1b49e4u: goto label_1b49e4;
        case 0x1b49e8u: goto label_1b49e8;
        case 0x1b49ecu: goto label_1b49ec;
        case 0x1b49f0u: goto label_1b49f0;
        case 0x1b49f4u: goto label_1b49f4;
        case 0x1b49f8u: goto label_1b49f8;
        case 0x1b49fcu: goto label_1b49fc;
        case 0x1b4a00u: goto label_1b4a00;
        case 0x1b4a04u: goto label_1b4a04;
        case 0x1b4a08u: goto label_1b4a08;
        case 0x1b4a0cu: goto label_1b4a0c;
        case 0x1b4a10u: goto label_1b4a10;
        case 0x1b4a14u: goto label_1b4a14;
        case 0x1b4a18u: goto label_1b4a18;
        case 0x1b4a1cu: goto label_1b4a1c;
        case 0x1b4a20u: goto label_1b4a20;
        case 0x1b4a24u: goto label_1b4a24;
        case 0x1b4a28u: goto label_1b4a28;
        case 0x1b4a2cu: goto label_1b4a2c;
        case 0x1b4a30u: goto label_1b4a30;
        case 0x1b4a34u: goto label_1b4a34;
        case 0x1b4a38u: goto label_1b4a38;
        case 0x1b4a3cu: goto label_1b4a3c;
        case 0x1b4a40u: goto label_1b4a40;
        case 0x1b4a44u: goto label_1b4a44;
        case 0x1b4a48u: goto label_1b4a48;
        case 0x1b4a4cu: goto label_1b4a4c;
        case 0x1b4a50u: goto label_1b4a50;
        case 0x1b4a54u: goto label_1b4a54;
        case 0x1b4a58u: goto label_1b4a58;
        case 0x1b4a5cu: goto label_1b4a5c;
        case 0x1b4a60u: goto label_1b4a60;
        case 0x1b4a64u: goto label_1b4a64;
        case 0x1b4a68u: goto label_1b4a68;
        case 0x1b4a6cu: goto label_1b4a6c;
        case 0x1b4a70u: goto label_1b4a70;
        case 0x1b4a74u: goto label_1b4a74;
        case 0x1b4a78u: goto label_1b4a78;
        case 0x1b4a7cu: goto label_1b4a7c;
        case 0x1b4a80u: goto label_1b4a80;
        case 0x1b4a84u: goto label_1b4a84;
        case 0x1b4a88u: goto label_1b4a88;
        case 0x1b4a8cu: goto label_1b4a8c;
        case 0x1b4a90u: goto label_1b4a90;
        case 0x1b4a94u: goto label_1b4a94;
        case 0x1b4a98u: goto label_1b4a98;
        case 0x1b4a9cu: goto label_1b4a9c;
        case 0x1b4aa0u: goto label_1b4aa0;
        case 0x1b4aa4u: goto label_1b4aa4;
        case 0x1b4aa8u: goto label_1b4aa8;
        case 0x1b4aacu: goto label_1b4aac;
        case 0x1b4ab0u: goto label_1b4ab0;
        case 0x1b4ab4u: goto label_1b4ab4;
        case 0x1b4ab8u: goto label_1b4ab8;
        case 0x1b4abcu: goto label_1b4abc;
        case 0x1b4ac0u: goto label_1b4ac0;
        case 0x1b4ac4u: goto label_1b4ac4;
        case 0x1b4ac8u: goto label_1b4ac8;
        case 0x1b4accu: goto label_1b4acc;
        case 0x1b4ad0u: goto label_1b4ad0;
        case 0x1b4ad4u: goto label_1b4ad4;
        case 0x1b4ad8u: goto label_1b4ad8;
        case 0x1b4adcu: goto label_1b4adc;
        case 0x1b4ae0u: goto label_1b4ae0;
        case 0x1b4ae4u: goto label_1b4ae4;
        case 0x1b4ae8u: goto label_1b4ae8;
        case 0x1b4aecu: goto label_1b4aec;
        case 0x1b4af0u: goto label_1b4af0;
        case 0x1b4af4u: goto label_1b4af4;
        case 0x1b4af8u: goto label_1b4af8;
        case 0x1b4afcu: goto label_1b4afc;
        case 0x1b4b00u: goto label_1b4b00;
        case 0x1b4b04u: goto label_1b4b04;
        case 0x1b4b08u: goto label_1b4b08;
        case 0x1b4b0cu: goto label_1b4b0c;
        case 0x1b4b10u: goto label_1b4b10;
        case 0x1b4b14u: goto label_1b4b14;
        case 0x1b4b18u: goto label_1b4b18;
        case 0x1b4b1cu: goto label_1b4b1c;
        case 0x1b4b20u: goto label_1b4b20;
        case 0x1b4b24u: goto label_1b4b24;
        case 0x1b4b28u: goto label_1b4b28;
        case 0x1b4b2cu: goto label_1b4b2c;
        case 0x1b4b30u: goto label_1b4b30;
        case 0x1b4b34u: goto label_1b4b34;
        case 0x1b4b38u: goto label_1b4b38;
        case 0x1b4b3cu: goto label_1b4b3c;
        case 0x1b4b40u: goto label_1b4b40;
        case 0x1b4b44u: goto label_1b4b44;
        case 0x1b4b48u: goto label_1b4b48;
        case 0x1b4b4cu: goto label_1b4b4c;
        case 0x1b4b50u: goto label_1b4b50;
        case 0x1b4b54u: goto label_1b4b54;
        case 0x1b4b58u: goto label_1b4b58;
        case 0x1b4b5cu: goto label_1b4b5c;
        default: break;
    }

    ctx->pc = 0x1b48a0u;

label_1b48a0:
    // 0x1b48a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b48a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b48a4:
    // 0x1b48a4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1b48a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
label_1b48a8:
    // 0x1b48a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b48a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1b48ac:
    // 0x1b48ac: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1b48acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1b48b0:
    // 0x1b48b0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1b48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_1b48b4:
    // 0x1b48b4: 0x24500080  addiu       $s0, $v0, 0x80
    ctx->pc = 0x1b48b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_1b48b8:
    // 0x1b48b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b48b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b48bc:
    // 0x1b48bc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1b48bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6808)));
label_1b48c0:
    // 0x1b48c0: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x1b48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_1b48c4:
    // 0x1b48c4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b48c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b48c8:
    // 0x1b48c8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b48c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b48cc:
    // 0x1b48cc: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x1b48ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6808), GPR_U32(ctx, 2));
label_1b48d0:
    // 0x1b48d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b48d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b48d4:
    // 0x1b48d4: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b48d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 6756)));
label_1b48d8:
    // 0x1b48d8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1b48d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
label_1b48dc:
    // 0x1b48dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b48dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_1b48e0:
    // 0x1b48e0: 0xac221a64  sw          $v0, 0x1A64($at)
    ctx->pc = 0x1b48e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6756), GPR_U32(ctx, 2));
label_1b48e4:
    // 0x1b48e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b48e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b48e8:
    // 0x1b48e8: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
label_1b48ec:
    // 0x1b48ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1b48f0:
    if (ctx->pc == 0x1B48F0u) {
        ctx->pc = 0x1B48F4u;
        goto label_1b48f4;
    }
    ctx->pc = 0x1B48ECu;
    {
        const bool branch_taken_0x1b48ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b48ec) {
            ctx->pc = 0x1B4904u;
            goto label_1b4904;
        }
    }
    ctx->pc = 0x1B48F4u;
label_1b48f4:
    // 0x1b48f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b48f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b48f8:
    // 0x1b48f8: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
label_1b48fc:
    // 0x1b48fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b4900:
    // 0x1b4900: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x1b4900u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
label_1b4904:
    // 0x1b4904: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b4904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b4908:
    // 0x1b4908: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1b4908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_1b490c:
    // 0x1b490c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b4910:
    if (ctx->pc == 0x1B4910u) {
        ctx->pc = 0x1B4914u;
        goto label_1b4914;
    }
    ctx->pc = 0x1B490Cu;
    {
        const bool branch_taken_0x1b490c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b490c) {
            ctx->pc = 0x1B4928u;
            goto label_1b4928;
        }
    }
    ctx->pc = 0x1B4914u;
label_1b4914:
    // 0x1b4914: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4918:
    // 0x1b4918: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b491c:
    // 0x1b491c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b491cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_1b4920:
    // 0x1b4920: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b4924:
    // 0x1b4924: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b4928:
    // 0x1b4928: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x1b4928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_1b492c:
    // 0x1b492c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1b492cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1b4930:
    // 0x1b4930: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_1b4934:
    if (ctx->pc == 0x1B4934u) {
        ctx->pc = 0x1B4938u;
        goto label_1b4938;
    }
    ctx->pc = 0x1B4930u;
    {
        const bool branch_taken_0x1b4930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4930) {
            ctx->pc = 0x1B49FCu;
            goto label_1b49fc;
        }
    }
    ctx->pc = 0x1B4938u;
label_1b4938:
    // 0x1b4938: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b493c:
    // 0x1b493c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b493cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1b4940:
    // 0x1b4940: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x1b4940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_1b4944:
    // 0x1b4944: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1b4944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1b4948:
    // 0x1b4948: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_1b494c:
    if (ctx->pc == 0x1B494Cu) {
        ctx->pc = 0x1B4950u;
        goto label_1b4950;
    }
    ctx->pc = 0x1B4948u;
    {
        const bool branch_taken_0x1b4948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4948) {
            ctx->pc = 0x1B49FCu;
            goto label_1b49fc;
        }
    }
    ctx->pc = 0x1B4950u;
label_1b4950:
    // 0x1b4950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1b4950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4954:
    // 0x1b4954: 0x84621416  lh          $v0, 0x1416($v1)
    ctx->pc = 0x1b4954u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5142)));
label_1b4958:
    // 0x1b4958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b4958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b495c:
    // 0x1b495c: 0xa4621416  sh          $v0, 0x1416($v1)
    ctx->pc = 0x1b495cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5142), (uint16_t)GPR_U32(ctx, 2));
label_1b4960:
    // 0x1b4960: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4964:
    // 0x1b4964: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b4964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
label_1b4968:
    // 0x1b4968: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b4968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b496c:
    // 0x1b496c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4970:
    // 0x1b4970: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1b4974:
    if (ctx->pc == 0x1B4974u) {
        ctx->pc = 0x1B4978u;
        goto label_1b4978;
    }
    ctx->pc = 0x1B4970u;
    {
        const bool branch_taken_0x1b4970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4970) {
            ctx->pc = 0x1B49BCu;
            goto label_1b49bc;
        }
    }
    ctx->pc = 0x1B4978u;
label_1b4978:
    // 0x1b4978: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b497c:
    // 0x1b497c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b4980:
    if (ctx->pc == 0x1B4980u) {
        ctx->pc = 0x1B4984u;
        goto label_1b4984;
    }
    ctx->pc = 0x1B497Cu;
    {
        const bool branch_taken_0x1b497c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b497c) {
            ctx->pc = 0x1B498Cu;
            goto label_1b498c;
        }
    }
    ctx->pc = 0x1B4984u;
label_1b4984:
    // 0x1b4984: 0x10000019  b           . + 4 + (0x19 << 2)
label_1b4988:
    if (ctx->pc == 0x1B4988u) {
        ctx->pc = 0x1B498Cu;
        goto label_1b498c;
    }
    ctx->pc = 0x1B4984u;
    {
        const bool branch_taken_0x1b4984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4984) {
            ctx->pc = 0x1B49ECu;
            goto label_1b49ec;
        }
    }
    ctx->pc = 0x1B498Cu;
label_1b498c:
    // 0x1b498c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4990:
    // 0x1b4990: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4990u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
label_1b4994:
    // 0x1b4994: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b4998:
    // 0x1b4998: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4998u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b499c:
    // 0x1b499c: 0x2841003d  slti        $at, $v0, 0x3D
    ctx->pc = 0x1b499cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
label_1b49a0:
    // 0x1b49a0: 0x14200051  bnez        $at, . + 4 + (0x51 << 2)
label_1b49a4:
    if (ctx->pc == 0x1B49A4u) {
        ctx->pc = 0x1B49A8u;
        goto label_1b49a8;
    }
    ctx->pc = 0x1B49A0u;
    {
        const bool branch_taken_0x1b49a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49a0) {
            ctx->pc = 0x1B4AE8u;
            goto label_1b4ae8;
        }
    }
    ctx->pc = 0x1B49A8u;
label_1b49a8:
    // 0x1b49a8: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1b49a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1b49ac:
    // 0x1b49ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b49b0:
    // 0x1b49b0: 0xa4431416  sh          $v1, 0x1416($v0)
    ctx->pc = 0x1b49b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 3));
label_1b49b4:
    // 0x1b49b4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1b49b8:
    if (ctx->pc == 0x1B49B8u) {
        ctx->pc = 0x1B49BCu;
        goto label_1b49bc;
    }
    ctx->pc = 0x1B49B4u;
    {
        const bool branch_taken_0x1b49b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49b4) {
            ctx->pc = 0x1B4AE8u;
            goto label_1b4ae8;
        }
    }
    ctx->pc = 0x1B49BCu;
label_1b49bc:
    // 0x1b49bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b49c0:
    // 0x1b49c0: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b49c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
label_1b49c4:
    // 0x1b49c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b49c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b49c8:
    // 0x1b49c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b49c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b49cc:
    // 0x1b49cc: 0x28410079  slti        $at, $v0, 0x79
    ctx->pc = 0x1b49ccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)121) ? 1 : 0);
label_1b49d0:
    // 0x1b49d0: 0x14200045  bnez        $at, . + 4 + (0x45 << 2)
label_1b49d4:
    if (ctx->pc == 0x1B49D4u) {
        ctx->pc = 0x1B49D8u;
        goto label_1b49d8;
    }
    ctx->pc = 0x1B49D0u;
    {
        const bool branch_taken_0x1b49d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b49d0) {
            ctx->pc = 0x1B4AE8u;
            goto label_1b4ae8;
        }
    }
    ctx->pc = 0x1B49D8u;
label_1b49d8:
    // 0x1b49d8: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1b49d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1b49dc:
    // 0x1b49dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b49e0:
    // 0x1b49e0: 0xa4431416  sh          $v1, 0x1416($v0)
    ctx->pc = 0x1b49e0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 3));
label_1b49e4:
    // 0x1b49e4: 0x10000040  b           . + 4 + (0x40 << 2)
label_1b49e8:
    if (ctx->pc == 0x1B49E8u) {
        ctx->pc = 0x1B49ECu;
        goto label_1b49ec;
    }
    ctx->pc = 0x1B49E4u;
    {
        const bool branch_taken_0x1b49e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49e4) {
            ctx->pc = 0x1B4AE8u;
            goto label_1b4ae8;
        }
    }
    ctx->pc = 0x1B49ECu;
label_1b49ec:
    // 0x1b49ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b49f0:
    // 0x1b49f0: 0xa4401416  sh          $zero, 0x1416($v0)
    ctx->pc = 0x1b49f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 0));
label_1b49f4:
    // 0x1b49f4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1b49f8:
    if (ctx->pc == 0x1B49F8u) {
        ctx->pc = 0x1B49FCu;
        goto label_1b49fc;
    }
    ctx->pc = 0x1B49F4u;
    {
        const bool branch_taken_0x1b49f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b49f4) {
            ctx->pc = 0x1B4AE8u;
            goto label_1b4ae8;
        }
    }
    ctx->pc = 0x1B49FCu;
label_1b49fc:
    // 0x1b49fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b49fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4a00:
    // 0x1b4a00: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b4a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
label_1b4a04:
    // 0x1b4a04: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1b4a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b4a08:
    // 0x1b4a08: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b4a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4a0c:
    // 0x1b4a0c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1b4a10:
    if (ctx->pc == 0x1B4A10u) {
        ctx->pc = 0x1B4A14u;
        goto label_1b4a14;
    }
    ctx->pc = 0x1B4A0Cu;
    {
        const bool branch_taken_0x1b4a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4a0c) {
            ctx->pc = 0x1B4A88u;
            goto label_1b4a88;
        }
    }
    ctx->pc = 0x1B4A14u;
label_1b4a14:
    // 0x1b4a14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b4a18:
    // 0x1b4a18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1b4a1c:
    if (ctx->pc == 0x1B4A1Cu) {
        ctx->pc = 0x1B4A20u;
        goto label_1b4a20;
    }
    ctx->pc = 0x1B4A18u;
    {
        const bool branch_taken_0x1b4a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b4a18) {
            ctx->pc = 0x1B4A28u;
            goto label_1b4a28;
        }
    }
    ctx->pc = 0x1B4A20u;
label_1b4a20:
    // 0x1b4a20: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1b4a24:
    if (ctx->pc == 0x1B4A24u) {
        ctx->pc = 0x1B4A28u;
        goto label_1b4a28;
    }
    ctx->pc = 0x1B4A20u;
    {
        const bool branch_taken_0x1b4a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a20) {
            ctx->pc = 0x1B4AE0u;
            goto label_1b4ae0;
        }
    }
    ctx->pc = 0x1B4A28u;
label_1b4a28:
    // 0x1b4a28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4a2c:
    // 0x1b4a2c: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4a2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
label_1b4a30:
    // 0x1b4a30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b4a34:
    // 0x1b4a34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4a34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b4a38:
    // 0x1b4a38: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x1b4a38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_1b4a3c:
    // 0x1b4a3c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_1b4a40:
    if (ctx->pc == 0x1B4A40u) {
        ctx->pc = 0x1B4A44u;
        goto label_1b4a44;
    }
    ctx->pc = 0x1B4A3Cu;
    {
        const bool branch_taken_0x1b4a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a3c) {
            ctx->pc = 0x1B4AE0u;
            goto label_1b4ae0;
        }
    }
    ctx->pc = 0x1B4A44u;
label_1b4a44:
    // 0x1b4a44: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4a48:
    // 0x1b4a48: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b4a4c:
    // 0x1b4a4c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b4a50:
    // 0x1b4a50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b4a54:
    // 0x1b4a54: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b4a58:
    // 0x1b4a58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4a5c:
    // 0x1b4a5c: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4a5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
label_1b4a60:
    // 0x1b4a60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b4a64:
    // 0x1b4a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b4a68:
    // 0x1b4a68: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x1b4a68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_1b4a6c:
    // 0x1b4a6c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_1b4a70:
    if (ctx->pc == 0x1B4A70u) {
        ctx->pc = 0x1B4A74u;
        goto label_1b4a74;
    }
    ctx->pc = 0x1B4A6Cu;
    {
        const bool branch_taken_0x1b4a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a6c) {
            ctx->pc = 0x1B4AE0u;
            goto label_1b4ae0;
        }
    }
    ctx->pc = 0x1B4A74u;
label_1b4a74:
    // 0x1b4a74: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1b4a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1b4a78:
    // 0x1b4a78: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4a7c:
    // 0x1b4a7c: 0xa4431418  sh          $v1, 0x1418($v0)
    ctx->pc = 0x1b4a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5144), (uint16_t)GPR_U32(ctx, 3));
label_1b4a80:
    // 0x1b4a80: 0x10000017  b           . + 4 + (0x17 << 2)
label_1b4a84:
    if (ctx->pc == 0x1B4A84u) {
        ctx->pc = 0x1B4A88u;
        goto label_1b4a88;
    }
    ctx->pc = 0x1B4A80u;
    {
        const bool branch_taken_0x1b4a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a80) {
            ctx->pc = 0x1B4AE0u;
            goto label_1b4ae0;
        }
    }
    ctx->pc = 0x1B4A88u;
label_1b4a88:
    // 0x1b4a88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4a8c:
    // 0x1b4a8c: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4a8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
label_1b4a90:
    // 0x1b4a90: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b4a94:
    // 0x1b4a94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b4a98:
    // 0x1b4a98: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x1b4a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_1b4a9c:
    // 0x1b4a9c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1b4aa0:
    if (ctx->pc == 0x1B4AA0u) {
        ctx->pc = 0x1B4AA4u;
        goto label_1b4aa4;
    }
    ctx->pc = 0x1B4A9Cu;
    {
        const bool branch_taken_0x1b4a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4a9c) {
            ctx->pc = 0x1B4AE0u;
            goto label_1b4ae0;
        }
    }
    ctx->pc = 0x1B4AA4u;
label_1b4aa4:
    // 0x1b4aa4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4aa8:
    // 0x1b4aa8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b4aac:
    // 0x1b4aac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1b4aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1b4ab0:
    // 0x1b4ab0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b4ab4:
    // 0x1b4ab4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b4ab8:
    // 0x1b4ab8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4abc:
    // 0x1b4abc: 0x84421416  lh          $v0, 0x1416($v0)
    ctx->pc = 0x1b4abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5142)));
label_1b4ac0:
    // 0x1b4ac0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1b4ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_1b4ac4:
    // 0x1b4ac4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1b4ac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1b4ac8:
    // 0x1b4ac8: 0x28420078  slti        $v0, $v0, 0x78
    ctx->pc = 0x1b4ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)120) ? 1 : 0);
label_1b4acc:
    // 0x1b4acc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1b4ad0:
    if (ctx->pc == 0x1B4AD0u) {
        ctx->pc = 0x1B4AD4u;
        goto label_1b4ad4;
    }
    ctx->pc = 0x1B4ACCu;
    {
        const bool branch_taken_0x1b4acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b4acc) {
            ctx->pc = 0x1B4AE0u;
            goto label_1b4ae0;
        }
    }
    ctx->pc = 0x1B4AD4u;
label_1b4ad4:
    // 0x1b4ad4: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x1b4ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_1b4ad8:
    // 0x1b4ad8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4adc:
    // 0x1b4adc: 0xa4431418  sh          $v1, 0x1418($v0)
    ctx->pc = 0x1b4adcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5144), (uint16_t)GPR_U32(ctx, 3));
label_1b4ae0:
    // 0x1b4ae0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4ae4:
    // 0x1b4ae4: 0xa4401416  sh          $zero, 0x1416($v0)
    ctx->pc = 0x1b4ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 0));
label_1b4ae8:
    // 0x1b4ae8: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x1b4ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1b4aec:
    // 0x1b4aec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1b4aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1b4af0:
    // 0x1b4af0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b4af4:
    if (ctx->pc == 0x1B4AF4u) {
        ctx->pc = 0x1B4AF8u;
        goto label_1b4af8;
    }
    ctx->pc = 0x1B4AF0u;
    {
        const bool branch_taken_0x1b4af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4af0) {
            ctx->pc = 0x1B4B0Cu;
            goto label_1b4b0c;
        }
    }
    ctx->pc = 0x1B4AF8u;
label_1b4af8:
    // 0x1b4af8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4afc:
    // 0x1b4afc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1b4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1b4b00:
    // 0x1b4b00: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1b4b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
label_1b4b04:
    // 0x1b4b04: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1b4b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1b4b08:
    // 0x1b4b08: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1b4b08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1b4b0c:
    // 0x1b4b0c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b10:
    // 0x1b4b10: 0xc4401388  lwc1        $f0, 0x1388($v0)
    ctx->pc = 0x1b4b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b4b14:
    // 0x1b4b14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b18:
    // 0x1b4b18: 0xe4401b5c  swc1        $f0, 0x1B5C($v0)
    ctx->pc = 0x1b4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7004), bits); }
label_1b4b1c:
    // 0x1b4b1c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1b4b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b20:
    // 0x1b4b20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_1b4b24:
    // 0x1b4b24: 0x904213f8  lbu         $v0, 0x13F8($v0)
    ctx->pc = 0x1b4b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5112)));
label_1b4b28:
    // 0x1b4b28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1b4b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1b4b2c:
    // 0x1b4b2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b4b30:
    // 0x1b4b30: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1b4b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b4b34:
    // 0x1b4b34: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1b4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1b4b38:
    // 0x1b4b38: 0x244291c0  addiu       $v0, $v0, -0x6E40
    ctx->pc = 0x1b4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939072));
label_1b4b3c:
    // 0x1b4b3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b4b40:
    // 0x1b4b40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b4b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b4b44:
    // 0x1b4b44: 0x40f809  jalr        $v0
label_1b4b48:
    if (ctx->pc == 0x1B4B48u) {
        ctx->pc = 0x1B4B4Cu;
        goto label_1b4b4c;
    }
    ctx->pc = 0x1B4B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B4B4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B44u, 0x1B4B4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B4B4Cu;
label_1b4b4c:
    // 0x1b4b4c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1b4b4cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b4b50:
    // 0x1b4b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b4b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1b4b54:
    // 0x1b4b54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1b4b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b4b58:
    // 0x1b4b58: 0x3e00008  jr          $ra
label_1b4b5c:
    if (ctx->pc == 0x1B4B5Cu) {
        ctx->pc = 0x1B4B60u;
        goto label_fallthrough_0x1b4b58;
    }
    ctx->pc = 0x1B4B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b4b58:
    ctx->pc = 0x1B4B60u;
}
