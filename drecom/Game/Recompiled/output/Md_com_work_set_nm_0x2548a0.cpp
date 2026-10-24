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

// Function: Md_com_work_set_nm
// Address: 0x2548a0 - 0x254a2c
void Md_com_work_set_nm_0x2548a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Md_com_work_set_nm_0x2548a0");
#endif

    switch (ctx->pc) {
        case 0x2549c0u: goto label_2549c0;
        default: break;
    }

    ctx->pc = 0x2548a0u;

    // 0x2548a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2548a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2548a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2548a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2548a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2548a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2548ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2548acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2548b0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x2548b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x2548b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2548b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548b8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2548b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2548bc: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x2548bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2548c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2548c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2548c4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2548c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2548c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2548c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548cc: 0xac430344  sw          $v1, 0x344($v0)
    ctx->pc = 0x2548ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 836), GPR_U32(ctx, 3));
    // 0x2548d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2548d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2548d4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2548d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2548d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2548d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548dc: 0xac43034c  sw          $v1, 0x34C($v0)
    ctx->pc = 0x2548dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 844), GPR_U32(ctx, 3));
    // 0x2548e0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2548e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2548e4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2548e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2548e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2548e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2548ec: 0xac430330  sw          $v1, 0x330($v0)
    ctx->pc = 0x2548ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 816), GPR_U32(ctx, 3));
    // 0x2548f0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2548f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2548f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2548f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2548f8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2548f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2548fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2548fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254900: 0xa4430050  sh          $v1, 0x50($v0)
    ctx->pc = 0x254900u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 3));
    // 0x254904: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254908: 0xac400354  sw          $zero, 0x354($v0)
    ctx->pc = 0x254908u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 852), GPR_U32(ctx, 0));
    // 0x25490c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254910: 0xac400204  sw          $zero, 0x204($v0)
    ctx->pc = 0x254910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 516), GPR_U32(ctx, 0));
    // 0x254914: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254918: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x254918u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    // 0x25491c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25491cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254920: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x254920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
    // 0x254924: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254928: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x254928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
    // 0x25492c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25492cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254930: 0xa0401218  sb          $zero, 0x1218($v0)
    ctx->pc = 0x254930u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4632), (uint8_t)GPR_U32(ctx, 0));
    // 0x254934: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254938: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x254938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x25493c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x25493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x254940: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x254940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x254944: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x254944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x254948: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x254948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25494c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254950: 0xac430130  sw          $v1, 0x130($v0)
    ctx->pc = 0x254950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 3));
    // 0x254954: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254958: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x254958u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x25495c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254960: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x254960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x254964: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254968: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25496c: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x25496cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x254970: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x254970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254974: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x254974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254978: 0xac4302d0  sw          $v1, 0x2D0($v0)
    ctx->pc = 0x254978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 3));
    // 0x25497c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254980: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x254980u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254984: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x254984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254988: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x254988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25498c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x25498cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254990: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x254990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x254994: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x254994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x254998: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x254998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25499c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x25499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2549a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2549a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2549a4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2549a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x2549a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2549a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2549ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549b0: 0xac4302d4  sw          $v1, 0x2D4($v0)
    ctx->pc = 0x2549b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 724), GPR_U32(ctx, 3));
    // 0x2549b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2549b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2549b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2549B8u;
    {
        const bool branch_taken_0x2549b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2549b8) {
            ctx->pc = 0x2549E0u;
            goto label_2549e0;
        }
    }
    ctx->pc = 0x2549C0u;
label_2549c0:
    // 0x2549c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2549c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2549c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549c8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2549c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2549cc: 0x8c4202d4  lw          $v0, 0x2D4($v0)
    ctx->pc = 0x2549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 724)));
    // 0x2549d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2549d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2549d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2549d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2549d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2549d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2549dc: 0x0  nop
    ctx->pc = 0x2549dcu;
    // NOP
label_2549e0:
    // 0x2549e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549e4: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x2549e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2549e8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2549e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2549ec: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2549ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2549f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2549F0u;
    {
        const bool branch_taken_0x2549f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2549f0) {
            ctx->pc = 0x2549C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2549c0;
        }
    }
    ctx->pc = 0x2549F8u;
    // 0x2549f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2549f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2549fc: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x2549fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254a00: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254a04: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x254a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254a08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254a0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x254a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254a10: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x254a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x254a14: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x254a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x254a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254a20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254a24: 0x3e00008  jr          $ra
    ctx->pc = 0x254A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254A2Cu;
}
