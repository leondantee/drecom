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

// Function: Get_hermite
// Address: 0x263400 - 0x263900
void Get_hermite_0x263400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get_hermite_0x263400");
#endif

    switch (ctx->pc) {
        case 0x2634ccu: goto label_2634cc;
        default: break;
    }

    ctx->pc = 0x263400u;

    // 0x263400: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x263400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x263404: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x263404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x263408: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x263408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26340c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263410: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263414: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x263414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x263418: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x263418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
    // 0x26341c: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x26341cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
    // 0x263420: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x263420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x263424: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x263424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x263428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26342c: 0x0  nop
    ctx->pc = 0x26342cu;
    // NOP
    // 0x263430: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x263430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x263434: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x263434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x263438: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x263438u;
    {
        const bool branch_taken_0x263438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263438) {
            ctx->pc = 0x263484u;
            goto label_263484;
        }
    }
    ctx->pc = 0x263440u;
    // 0x263440: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263444: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x263444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x263448: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263448u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26344c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x26344cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x263450: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263454: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x263454u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x263458: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x263458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x26345c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263460: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x263460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x263464: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x263464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x263468: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x263468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x26346c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x26346cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x263470: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263474: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263478: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x263478u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26347c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x26347Cu;
    {
        const bool branch_taken_0x26347c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26347c) {
            ctx->pc = 0x2634BCu;
            goto label_2634bc;
        }
    }
    ctx->pc = 0x263484u;
label_263484:
    // 0x263484: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263488: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263488u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26348c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x26348cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x263490: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x263490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x263494: 0x24520002  addiu       $s2, $v0, 0x2
    ctx->pc = 0x263494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x263498: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x263498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x26349c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26349cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2634a0: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x2634a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x2634a4: 0x3042fffc  andi        $v0, $v0, 0xFFFC
    ctx->pc = 0x2634a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x2634a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2634a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2634ac: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2634acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2634b0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2634b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2634b4: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2634b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2634b8: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x2634b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2634bc:
    // 0x2634bc: 0x3274ffff  andi        $s4, $s3, 0xFFFF
    ctx->pc = 0x2634bcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x2634c0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2634c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2634c4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2634C4u;
    {
        const bool branch_taken_0x2634c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634c4) {
            ctx->pc = 0x2634F8u;
            goto label_2634f8;
        }
    }
    ctx->pc = 0x2634CCu;
label_2634cc:
    // 0x2634cc: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2634ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2634d0: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2634d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2634d4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2634d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2634d8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2634d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2634dc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2634dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2634e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2634e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2634e4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x2634e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2634e8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x2634E8u;
    {
        const bool branch_taken_0x2634e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2634e8) {
            ctx->pc = 0x263510u;
            goto label_263510;
        }
    }
    ctx->pc = 0x2634F0u;
    // 0x2634f0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x2634f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2634f4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x2634f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2634f8:
    // 0x2634f8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2634f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2634fc: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x2634fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x263500: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x263500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x263504: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x263504u;
    {
        const bool branch_taken_0x263504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263504) {
            ctx->pc = 0x2634CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2634cc;
        }
    }
    ctx->pc = 0x26350Cu;
    // 0x26350c: 0x0  nop
    ctx->pc = 0x26350cu;
    // NOP
label_263510:
    // 0x263510: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x263510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x263514: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263518: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26351c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x26351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263520: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263524: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x263524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x263528: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263528u;
    {
        const bool branch_taken_0x263528 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263528) {
            ctx->pc = 0x263550u;
            goto label_263550;
        }
    }
    ctx->pc = 0x263530u;
    // 0x263530: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263534: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263538: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26353c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26353cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263540: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263544: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263548: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x263548u;
    {
        const bool branch_taken_0x263548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263548) {
            ctx->pc = 0x2638E0u;
            goto label_2638e0;
        }
    }
    ctx->pc = 0x263550u;
label_263550:
    // 0x263550: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263554: 0x3262ffff  andi        $v0, $s3, 0xFFFF
    ctx->pc = 0x263554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x263558: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x263558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26355c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26355Cu;
    {
        const bool branch_taken_0x26355c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26355c) {
            ctx->pc = 0x263570u;
            goto label_263570;
        }
    }
    ctx->pc = 0x263564u;
    // 0x263564: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263568: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x263568u;
    {
        const bool branch_taken_0x263568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263568) {
            ctx->pc = 0x2638E0u;
            goto label_2638e0;
        }
    }
    ctx->pc = 0x263570u;
label_263570:
    // 0x263570: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263574: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x263574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263578: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26357c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263584: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263588: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x263588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26358c: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x26358cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263590: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263594: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263598: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26359c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26359cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2635a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2635a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2635a4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2635a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2635a8: 0x0  nop
    ctx->pc = 0x2635a8u;
    // NOP
    // 0x2635ac: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x2635ACu;
    {
        const bool branch_taken_0x2635ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2635ac) {
            ctx->pc = 0x263638u;
            goto label_263638;
        }
    }
    ctx->pc = 0x2635B4u;
    // 0x2635b4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2635b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2635b8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2635b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2635bc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2635bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2635c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2635c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2635c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2635c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2635c8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2635c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2635cc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2635ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2635d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2635d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2635d4: 0x0  nop
    ctx->pc = 0x2635d4u;
    // NOP
    // 0x2635d8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2635d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2635dc: 0x0  nop
    ctx->pc = 0x2635dcu;
    // NOP
    // 0x2635e0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2635E0u;
    {
        const bool branch_taken_0x2635e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2635e0) {
            ctx->pc = 0x263638u;
            goto label_263638;
        }
    }
    ctx->pc = 0x2635E8u;
    // 0x2635e8: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2635e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2635ec: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2635ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2635f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2635f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2635f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2635f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2635f8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2635f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2635fc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2635fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263600: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x263600u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263604: 0x0  nop
    ctx->pc = 0x263604u;
    // NOP
    // 0x263608: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x263608u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26360c: 0x0  nop
    ctx->pc = 0x26360cu;
    // NOP
    // 0x263610: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x263610u;
    {
        const bool branch_taken_0x263610 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x263610) {
            ctx->pc = 0x263638u;
            goto label_263638;
        }
    }
    ctx->pc = 0x263618u;
    // 0x263618: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26361c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x26361cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263620: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263628: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26362c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x26362cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263630: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x263630u;
    {
        const bool branch_taken_0x263630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263630) {
            ctx->pc = 0x2638E0u;
            goto label_2638e0;
        }
    }
    ctx->pc = 0x263638u;
label_263638:
    // 0x263638: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26363c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26363cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263640: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263644: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263648: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263648u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26364c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26364Cu;
    {
        const bool branch_taken_0x26364c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26364c) {
            ctx->pc = 0x263668u;
            goto label_263668;
        }
    }
    ctx->pc = 0x263654u;
    // 0x263654: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263654u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263658: 0x0  nop
    ctx->pc = 0x263658u;
    // NOP
    // 0x26365c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26365cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263660: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263660u;
    {
        const bool branch_taken_0x263660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263660) {
            ctx->pc = 0x263684u;
            goto label_263684;
        }
    }
    ctx->pc = 0x263668u;
label_263668:
    // 0x263668: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x263668u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x26366c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26366cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263670: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x263674: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263678: 0x0  nop
    ctx->pc = 0x263678u;
    // NOP
    // 0x26367c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26367cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x263680: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x263680u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_263684:
    // 0x263684: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x263684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x263688: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x26368c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26368cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263690: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x263690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x263694: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x263694u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263698: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263698u;
    {
        const bool branch_taken_0x263698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263698) {
            ctx->pc = 0x2636B4u;
            goto label_2636b4;
        }
    }
    ctx->pc = 0x2636A0u;
    // 0x2636a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2636a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2636a4: 0x0  nop
    ctx->pc = 0x2636a4u;
    // NOP
    // 0x2636a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2636a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2636ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2636ACu;
    {
        const bool branch_taken_0x2636ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2636ac) {
            ctx->pc = 0x2636D0u;
            goto label_2636d0;
        }
    }
    ctx->pc = 0x2636B4u;
label_2636b4:
    // 0x2636b4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2636b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2636b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2636b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2636bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2636bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2636c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2636c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2636c4: 0x0  nop
    ctx->pc = 0x2636c4u;
    // NOP
    // 0x2636c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2636c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2636cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2636ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2636d0:
    // 0x2636d0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2636d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2636d4: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x2636d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2636d8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2636d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2636dc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2636dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2636e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2636e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2636e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2636e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2636e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2636e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2636ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2636ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2636f0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2636f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2636f4: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x2636f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x2636f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2636f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2636fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2636fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263700: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263704: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263708: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x263708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26370c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x26370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x263710: 0x3202ffff  andi        $v0, $s0, 0xFFFF
    ctx->pc = 0x263710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263714: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x263714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x263718: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26371c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26371cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263720: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x263720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263724: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263728: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x263728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26372c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x26372cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x263730: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x263730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x263734: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x263734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x263738: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x263738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26373c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26373cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x263740: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x263740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x263744: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x263744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263748: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x263748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x26374c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x26374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x263750: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263750u;
    {
        const bool branch_taken_0x263750 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x263750) {
            ctx->pc = 0x26376Cu;
            goto label_26376c;
        }
    }
    ctx->pc = 0x263758u;
    // 0x263758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26375c: 0x0  nop
    ctx->pc = 0x26375cu;
    // NOP
    // 0x263760: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x263760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x263764: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263764u;
    {
        const bool branch_taken_0x263764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x263764) {
            ctx->pc = 0x263788u;
            goto label_263788;
        }
    }
    ctx->pc = 0x26376Cu;
label_26376c:
    // 0x26376c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x26376cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x263770: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x263770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x263774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x263774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x263778: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263778u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26377c: 0x0  nop
    ctx->pc = 0x26377cu;
    // NOP
    // 0x263780: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x263780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x263784: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x263784u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_263788:
    // 0x263788: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x263788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26378c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x26378cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263790: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x263790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x263794: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x263794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263798: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x263798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26379c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26379cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637a0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2637a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2637a4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2637a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637a8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2637a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2637acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2637b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2637b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2637b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2637b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2637b8: 0x0  nop
    ctx->pc = 0x2637b8u;
    // NOP
    // 0x2637bc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2637bcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2637c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2637c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2637c4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2637c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637c8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2637c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2637ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637d0: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2637d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2637d4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2637d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637d8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2637d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637dc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2637dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637e0: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x2637e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x2637e4: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x2637e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2637e8: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x2637e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2637ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2637f0: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x2637f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2637f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2637f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2637f8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2637f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2637fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2637fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x263800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x263800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263804: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x263804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x263808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x26380c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x26380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263810: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x263810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263814: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x263814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x263818: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x263818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x26381c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26381cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x263820: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x263820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263824: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x263824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263828: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x263828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26382c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26382cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x263830: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x263830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x263834: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x263834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263838: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x263838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26383c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x26383cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263840: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x263840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x263844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x263844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263848: 0x0  nop
    ctx->pc = 0x263848u;
    // NOP
    // 0x26384c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x26384cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263850: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x263850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x263854: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x263854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263858: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x263858u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x26385c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x26385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x263860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x263864: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x263864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x263868: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x263868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26386c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x26386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263870: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263870u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263874: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x263874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263878: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x263878u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x26387c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x26387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263880: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x263880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x263884: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x263884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x263888: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x263888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26388c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x26388cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x263890: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263890u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263894: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x263894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x263898: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x263898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26389c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x26389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638a0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x2638a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638a4: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x2638a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638a8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2638a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2638acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638b0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2638b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2638b4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x2638b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638b8: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2638b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2638bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638c0: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x2638c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2638c4: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x2638c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2638c8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2638c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638cc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2638ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2638d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2638d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2638d4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2638d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2638d8: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2638d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2638dc: 0x0  nop
    ctx->pc = 0x2638dcu;
    // NOP
label_2638e0:
    // 0x2638e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2638e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2638e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2638e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2638e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2638e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2638ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2638ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2638f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2638f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2638f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2638f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2638f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2638F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2638F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x263900u;
}
