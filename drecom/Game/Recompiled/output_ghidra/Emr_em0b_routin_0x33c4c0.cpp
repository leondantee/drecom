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

// Function: Emr_em0b_routin
// Address: 0x33c4c0 - 0x33c660
void Emr_em0b_routin_0x33c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Emr_em0b_routin_0x33c4c0");
#endif

    ctx->pc = 0x33c4c0u;

    // 0x33c4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33c4c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33c4c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33c4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33c4cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x33c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x33c4d0: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33c4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33c4d4: 0x24505450  addiu       $s0, $v0, 0x5450
    ctx->pc = 0x33c4d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21584));
    // 0x33c4d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x33c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x33c4dc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x33c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x33c4e0: 0x8e1100b0  lw          $s1, 0xB0($s0)
    ctx->pc = 0x33c4e0u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x895500u));
    // 0x33c4e4: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33c4e4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x89545Eu));
    // 0x33c4e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c4ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c4ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c4f0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x33c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x33c4f4: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c4fc: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x33c4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x33c500: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x33c500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c504: 0x26220120  addiu       $v0, $s1, 0x120
    ctx->pc = 0x33c504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x33c508: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33c508u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33c50c: 0x8602000e  lh          $v0, 0xE($s0)
    ctx->pc = 0x33c50cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x33c510: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x33c510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x33c514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33c514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x33c518: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x33c518u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33c51c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x33c51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x33c520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33c520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33c524: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x33c524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x33c528: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x33c528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x33c52c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x33c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x33c530: 0x10620042  beq         $v1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x33C530u;
    {
        const bool branch_taken_0x33c530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c530) {
            ctx->pc = 0x33C63Cu;
            goto label_33c63c;
        }
    }
    ctx->pc = 0x33C538u;
    // 0x33c538: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x33c538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x33c53c: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x33C53Cu;
    {
        const bool branch_taken_0x33c53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c53c) {
            ctx->pc = 0x33C630u;
            goto label_33c630;
        }
    }
    ctx->pc = 0x33C544u;
    // 0x33c544: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x33c544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x33c548: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x33C548u;
    {
        const bool branch_taken_0x33c548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c548) {
            ctx->pc = 0x33C624u;
            goto label_33c624;
        }
    }
    ctx->pc = 0x33C550u;
    // 0x33c550: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x33c550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33c554: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x33C554u;
    {
        const bool branch_taken_0x33c554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c554) {
            ctx->pc = 0x33C618u;
            goto label_33c618;
        }
    }
    ctx->pc = 0x33C55Cu;
    // 0x33c55c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x33c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x33c560: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x33C560u;
    {
        const bool branch_taken_0x33c560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c560) {
            ctx->pc = 0x33C60Cu;
            goto label_33c60c;
        }
    }
    ctx->pc = 0x33C568u;
    // 0x33c568: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x33c568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x33c56c: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x33C56Cu;
    {
        const bool branch_taken_0x33c56c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c56c) {
            ctx->pc = 0x33C600u;
            goto label_33c600;
        }
    }
    ctx->pc = 0x33C574u;
    // 0x33c574: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x33c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x33c578: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x33C578u;
    {
        const bool branch_taken_0x33c578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c578) {
            ctx->pc = 0x33C5F4u;
            goto label_33c5f4;
        }
    }
    ctx->pc = 0x33C580u;
    // 0x33c580: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x33c580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33c584: 0x10620030  beq         $v1, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x33C584u;
    {
        const bool branch_taken_0x33c584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c584) {
            ctx->pc = 0x33C648u;
            goto label_33c648;
        }
    }
    ctx->pc = 0x33C58Cu;
    // 0x33c58c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x33c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33c590: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x33C590u;
    {
        const bool branch_taken_0x33c590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c590) {
            ctx->pc = 0x33C5E8u;
            goto label_33c5e8;
        }
    }
    ctx->pc = 0x33C598u;
    // 0x33c598: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x33c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33c59c: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x33C59Cu;
    {
        const bool branch_taken_0x33c59c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c59c) {
            ctx->pc = 0x33C5DCu;
            goto label_33c5dc;
        }
    }
    ctx->pc = 0x33C5A4u;
    // 0x33c5a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x33c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33c5a8: 0x10620027  beq         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x33C5A8u;
    {
        const bool branch_taken_0x33c5a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c5a8) {
            ctx->pc = 0x33C648u;
            goto label_33c648;
        }
    }
    ctx->pc = 0x33C5B0u;
    // 0x33c5b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c5b4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33C5B4u;
    {
        const bool branch_taken_0x33c5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x33c5b4) {
            ctx->pc = 0x33C5C4u;
            goto label_33c5c4;
        }
    }
    ctx->pc = 0x33C5BCu;
    // 0x33c5bc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x33C5BCu;
    {
        const bool branch_taken_0x33c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5bc) {
            ctx->pc = 0x33C648u;
            goto label_33c648;
        }
    }
    ctx->pc = 0x33C5C4u;
label_33c5c4:
    // 0x33c5c4: 0xc62111e4  lwc1        $f1, 0x11E4($s1)
    ctx->pc = 0x33c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c5c8: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x33c5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c5cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33c5ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33c5d0: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x33c5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
    // 0x33c5d4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x33C5D4u;
    {
        const bool branch_taken_0x33c5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5d4) {
            ctx->pc = 0x33C648u;
            goto label_33c648;
        }
    }
    ctx->pc = 0x33C5DCu;
label_33c5dc:
    // 0x33c5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c5e0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33C5E0u;
    {
        const bool branch_taken_0x33c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5e0) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C5E8u;
label_33c5e8:
    // 0x33c5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c5ec: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x33C5ECu;
    {
        const bool branch_taken_0x33c5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5ec) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C5F4u;
label_33c5f4:
    // 0x33c5f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c5f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x33C5F8u;
    {
        const bool branch_taken_0x33c5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c5f8) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C600u;
label_33c600:
    // 0x33c600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c604: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x33C604u;
    {
        const bool branch_taken_0x33c604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c604) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C60Cu;
label_33c60c:
    // 0x33c60c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c610: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x33C610u;
    {
        const bool branch_taken_0x33c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c610) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C618u;
label_33c618:
    // 0x33c618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c61c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33C61Cu;
    {
        const bool branch_taken_0x33c61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c61c) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C624u;
label_33c624:
    // 0x33c624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c628: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C628u;
    {
        const bool branch_taken_0x33c628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c628) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C630u;
label_33c630:
    // 0x33c630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c634: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33C634u;
    {
        const bool branch_taken_0x33c634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c634) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C63Cu;
label_33c63c:
    // 0x33c63c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33c640: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33C640u;
    {
        const bool branch_taken_0x33c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c640) {
            ctx->pc = 0x33C64Cu;
            goto label_33c64c;
        }
    }
    ctx->pc = 0x33C648u;
label_33c648:
    // 0x33c648: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x33c648u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_33c64c:
    // 0x33c64c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33c64cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c650: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33c650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c654: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x33c654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x33c658: 0x3e00008  jr          $ra
    ctx->pc = 0x33C658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C660u;
}
