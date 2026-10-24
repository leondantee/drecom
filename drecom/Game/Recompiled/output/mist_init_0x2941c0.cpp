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

// Function: mist_init
// Address: 0x2941c0 - 0x2946dc
void mist_init_0x2941c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mist_init_0x2941c0");
#endif

    switch (ctx->pc) {
        case 0x2941f0u: goto label_2941f0;
        case 0x294510u: goto label_294510;
        default: break;
    }

    ctx->pc = 0x2941c0u;

    // 0x2941c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2941c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2941c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2941c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2941c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2941c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2941cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2941ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2941d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2941d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2941d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2941d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2941d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2941d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2941dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2941dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2941e0: 0x24705c80  addiu       $s0, $v1, 0x5C80
    ctx->pc = 0x2941e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23680));
    // 0x2941e4: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x2941e4u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2941e8: 0x100000c3  b           . + 4 + (0xC3 << 2)
    ctx->pc = 0x2941E8u;
    {
        const bool branch_taken_0x2941e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2941e8) {
            ctx->pc = 0x2944F8u;
            goto label_2944f8;
        }
    }
    ctx->pc = 0x2941F0u;
label_2941f0:
    // 0x2941f0: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x2941f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x2941f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2941f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2941f8: 0x12830022  beq         $s4, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2941F8u;
    {
        const bool branch_taken_0x2941f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2941f8) {
            ctx->pc = 0x294284u;
            goto label_294284;
        }
    }
    ctx->pc = 0x294200u;
    // 0x294200: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294204: 0x12830012  beq         $s4, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x294204u;
    {
        const bool branch_taken_0x294204 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x294204) {
            ctx->pc = 0x294250u;
            goto label_294250;
        }
    }
    ctx->pc = 0x29420Cu;
    // 0x29420c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x29420Cu;
    {
        const bool branch_taken_0x29420c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x29420c) {
            ctx->pc = 0x29421Cu;
            goto label_29421c;
        }
    }
    ctx->pc = 0x294214u;
    // 0x294214: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x294214u;
    {
        const bool branch_taken_0x294214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294214) {
            ctx->pc = 0x2942B0u;
            goto label_2942b0;
        }
    }
    ctx->pc = 0x29421Cu;
label_29421c:
    // 0x29421c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x29421cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294220: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x294220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x294224: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x294224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x294228: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x294228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x29422c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29422cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294230: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294234: 0x3c03b8d1  lui         $v1, 0xB8D1
    ctx->pc = 0x294234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)47313 << 16));
    // 0x294238: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x294238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x29423c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29423cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294240: 0x0  nop
    ctx->pc = 0x294240u;
    // NOP
    // 0x294244: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x294244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x294248: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x294248u;
    {
        const bool branch_taken_0x294248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294248) {
            ctx->pc = 0x2942B0u;
            goto label_2942b0;
        }
    }
    ctx->pc = 0x294250u;
label_294250:
    // 0x294250: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x294250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x294254: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x294254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x294258: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x294258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x29425c: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x29425cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x294260: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294264: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x294268: 0x3c033951  lui         $v1, 0x3951
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14673 << 16));
    // 0x29426c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x29426cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x294270: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294270u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294274: 0x0  nop
    ctx->pc = 0x294274u;
    // NOP
    // 0x294278: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x294278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x29427c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29427Cu;
    {
        const bool branch_taken_0x29427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29427c) {
            ctx->pc = 0x2942B0u;
            goto label_2942b0;
        }
    }
    ctx->pc = 0x294284u;
label_294284:
    // 0x294284: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x294284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x294288: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x294288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
    // 0x29428c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x29428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x294290: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x294290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x294294: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x294298: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x294298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    // 0x29429c: 0x3c03399d  lui         $v1, 0x399D
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14749 << 16));
    // 0x2942a0: 0x34634952  ori         $v1, $v1, 0x4952
    ctx->pc = 0x2942a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18770);
    // 0x2942a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942a8: 0x0  nop
    ctx->pc = 0x2942a8u;
    // NOP
    // 0x2942ac: 0xe6000128  swc1        $f0, 0x128($s0)
    ctx->pc = 0x2942acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
label_2942b0:
    // 0x2942b0: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2942b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2942b4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x2942b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x2942b8: 0x26150090  addiu       $s5, $s0, 0x90
    ctx->pc = 0x2942b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2942bc: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x2942bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2942c0: 0x261200e0  addiu       $s2, $s0, 0xE0
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x2942c4: 0x8e130078  lw          $s3, 0x78($s0)
    ctx->pc = 0x2942c4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x2942c8: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x2942c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x2942cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942d0: 0x0  nop
    ctx->pc = 0x2942d0u;
    // NOP
    // 0x2942d4: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2942d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x2942d8: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x2942dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942e0: 0x0  nop
    ctx->pc = 0x2942e0u;
    // NOP
    // 0x2942e4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x2942e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2942e8: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x2942e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x2942ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2942f0: 0x0  nop
    ctx->pc = 0x2942f0u;
    // NOP
    // 0x2942f4: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2942f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2942f8: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x2942f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x2942fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2942fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294300: 0x0  nop
    ctx->pc = 0x294300u;
    // NOP
    // 0x294304: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x294304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x294308: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x294308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x29430c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29430cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294310: 0x0  nop
    ctx->pc = 0x294310u;
    // NOP
    // 0x294314: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294318: 0x3c03c360  lui         $v1, 0xC360
    ctx->pc = 0x294318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50016 << 16));
    // 0x29431c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29431cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294320: 0x0  nop
    ctx->pc = 0x294320u;
    // NOP
    // 0x294324: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x294324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x294328: 0x3c03c3a0  lui         $v1, 0xC3A0
    ctx->pc = 0x294328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50080 << 16));
    // 0x29432c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29432cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294330: 0x0  nop
    ctx->pc = 0x294330u;
    // NOP
    // 0x294334: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x294334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x294338: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x294338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x29433c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29433cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294340: 0x0  nop
    ctx->pc = 0x294340u;
    // NOP
    // 0x294344: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x294344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x294348: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x294348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x29434c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29434cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294350: 0x0  nop
    ctx->pc = 0x294350u;
    // NOP
    // 0x294354: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x294354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x294358: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x294358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x29435c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29435cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294360: 0x0  nop
    ctx->pc = 0x294360u;
    // NOP
    // 0x294364: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x294364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x294368: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29436c: 0x1283001a  beq         $s4, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x29436Cu;
    {
        const bool branch_taken_0x29436c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x29436c) {
            ctx->pc = 0x2943D8u;
            goto label_2943d8;
        }
    }
    ctx->pc = 0x294374u;
    // 0x294374: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294378: 0x1283000d  beq         $s4, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x294378u;
    {
        const bool branch_taken_0x294378 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x294378) {
            ctx->pc = 0x2943B0u;
            goto label_2943b0;
        }
    }
    ctx->pc = 0x294380u;
    // 0x294380: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x294380u;
    {
        const bool branch_taken_0x294380 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x294380) {
            ctx->pc = 0x294390u;
            goto label_294390;
        }
    }
    ctx->pc = 0x294388u;
    // 0x294388: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x294388u;
    {
        const bool branch_taken_0x294388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294388) {
            ctx->pc = 0x294400u;
            goto label_294400;
        }
    }
    ctx->pc = 0x294390u;
label_294390:
    // 0x294390: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x294394: 0x0  nop
    ctx->pc = 0x294394u;
    // NOP
    // 0x294398: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x294398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x29439c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29439cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943a0: 0x0  nop
    ctx->pc = 0x2943a0u;
    // NOP
    // 0x2943a4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2943a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2943a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2943A8u;
    {
        const bool branch_taken_0x2943a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2943a8) {
            ctx->pc = 0x294400u;
            goto label_294400;
        }
    }
    ctx->pc = 0x2943B0u;
label_2943b0:
    // 0x2943b0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2943b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2943b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943b8: 0x0  nop
    ctx->pc = 0x2943b8u;
    // NOP
    // 0x2943bc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2943bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2943c0: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x2943c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
    // 0x2943c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943c8: 0x0  nop
    ctx->pc = 0x2943c8u;
    // NOP
    // 0x2943cc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2943ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2943d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2943D0u;
    {
        const bool branch_taken_0x2943d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2943d0) {
            ctx->pc = 0x294400u;
            goto label_294400;
        }
    }
    ctx->pc = 0x2943D8u;
label_2943d8:
    // 0x2943d8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x2943d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x2943dc: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2943dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2943e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943e4: 0x0  nop
    ctx->pc = 0x2943e4u;
    // NOP
    // 0x2943e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2943e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2943ec: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x2943ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x2943f0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2943f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2943f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2943f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2943f8: 0x0  nop
    ctx->pc = 0x2943f8u;
    // NOP
    // 0x2943fc: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2943fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_294400:
    // 0x294400: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294404: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294408: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29440c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294410: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x294410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294414: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x294414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x294418: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x29441c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29441cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294420: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294428: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x294428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29442c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x29442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294430: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294430u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x294434: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x294434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x294438: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294438u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x29443c: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x29443cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294440: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294448: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29444c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x29444cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x294450: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294450u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294454: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294458: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29445c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294460: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x294460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294464: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x294464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29446c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x29446cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x294470: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294470u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294474: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294478: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29447c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29447cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294480: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x294480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x294484: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x294484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294488: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294488u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29448c: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x29448cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x294490: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294490u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294494: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294498: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x29449c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29449cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2944a0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2944a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2944a4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2944a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2944a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2944ac: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x2944acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x2944b0: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2944b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2944b4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2944b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2944b8: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2944b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2944bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2944bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2944c0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x2944c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2944c4: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x2944c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2944c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2944cc: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2944ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2944d0: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2944d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2944d4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2944d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2944d8: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2944d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2944dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2944dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2944e0: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x2944e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2944e4: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2944e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2944e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2944e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2944ec: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x2944ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2944f0: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2944f4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2944f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2944f8:
    // 0x2944f8: 0x2a830003  slti        $v1, $s4, 0x3
    ctx->pc = 0x2944f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2944fc: 0x1460ff3c  bnez        $v1, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x2944FCu;
    {
        const bool branch_taken_0x2944fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2944fc) {
            ctx->pc = 0x2941F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2941f0;
        }
    }
    ctx->pc = 0x294504u;
    // 0x294504: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x294504u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x294508: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x294508u;
    {
        const bool branch_taken_0x294508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294508) {
            ctx->pc = 0x2946A0u;
            goto label_2946a0;
        }
    }
    ctx->pc = 0x294510u;
label_294510:
    // 0x294510: 0xae140078  sw          $s4, 0x78($s0)
    ctx->pc = 0x294510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 20));
    // 0x294514: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294518: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x294518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x29451c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x29451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x294520: 0xae030084  sw          $v1, 0x84($s0)
    ctx->pc = 0x294520u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
    // 0x294524: 0x26150090  addiu       $s5, $s0, 0x90
    ctx->pc = 0x294524u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x294528: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x294528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x29452c: 0x261200e0  addiu       $s2, $s0, 0xE0
    ctx->pc = 0x29452cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x294530: 0x8e130078  lw          $s3, 0x78($s0)
    ctx->pc = 0x294530u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x294534: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x294534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x294538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29453c: 0x0  nop
    ctx->pc = 0x29453cu;
    // NOP
    // 0x294540: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x294540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x294544: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x294544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x294548: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294548u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29454c: 0x0  nop
    ctx->pc = 0x29454cu;
    // NOP
    // 0x294550: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x294550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x294554: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294558: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294558u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29455c: 0x0  nop
    ctx->pc = 0x29455cu;
    // NOP
    // 0x294560: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x294560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x294564: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294568: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294568u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29456c: 0x0  nop
    ctx->pc = 0x29456cu;
    // NOP
    // 0x294570: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x294570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x294574: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x294574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x294578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29457c: 0x0  nop
    ctx->pc = 0x29457cu;
    // NOP
    // 0x294580: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x294580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x294584: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294588: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29458c: 0x0  nop
    ctx->pc = 0x29458cu;
    // NOP
    // 0x294590: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x294590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x294594: 0x3c03c280  lui         $v1, 0xC280
    ctx->pc = 0x294594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49792 << 16));
    // 0x294598: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x294598u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29459c: 0x0  nop
    ctx->pc = 0x29459cu;
    // NOP
    // 0x2945a0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x2945a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x2945a4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2945a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2945a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2945a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2945ac: 0x0  nop
    ctx->pc = 0x2945acu;
    // NOP
    // 0x2945b0: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x2945b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x2945b4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2945b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2945b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2945b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2945bc: 0x0  nop
    ctx->pc = 0x2945bcu;
    // NOP
    // 0x2945c0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x2945c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x2945c4: 0x3c034280  lui         $v1, 0x4280
    ctx->pc = 0x2945c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17024 << 16));
    // 0x2945c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2945c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2945cc: 0x0  nop
    ctx->pc = 0x2945ccu;
    // NOP
    // 0x2945d0: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x2945d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x2945d4: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2945d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2945d8: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2945d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2945dc: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2945dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2945e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2945e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2945e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2945e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2945e8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2945e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2945ec: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x2945ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x2945f0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2945f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2945f4: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x2945f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x2945f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2945f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2945fc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2945fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294600: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x294600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x294604: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294608: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29460c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294610: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294614: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x294614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294618: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x294618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x29461c: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x29461cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294620: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294624: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294628: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29462c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x29462cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294630: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x294630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x294634: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294634u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294638: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29463c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29463cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294640: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294644: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x294644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294648: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x294648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x29464c: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x29464cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294650: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294654: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294658: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29465c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x29465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294660: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x294660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x294664: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x294664u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294668: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x29466c: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x29466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294670: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x294674: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x294674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294678: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x294678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x29467c: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x29467cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x294680: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x294680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x294684: 0x24636580  addiu       $v1, $v1, 0x6580
    ctx->pc = 0x294684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25984));
    // 0x294688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29468c: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x29468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x294690: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x294690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x294694: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x294694u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x294698: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x294698u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x29469c: 0x0  nop
    ctx->pc = 0x29469cu;
    // NOP
label_2946a0:
    // 0x2946a0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x2946a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x2946a4: 0x8c236880  lw          $v1, 0x6880($at)
    ctx->pc = 0x2946a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x396880u));
    // 0x2946a8: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x2946a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x2946ac: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x2946acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2946b0: 0x1460ff97  bnez        $v1, . + 4 + (-0x69 << 2)
    ctx->pc = 0x2946B0u;
    {
        const bool branch_taken_0x2946b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2946b0) {
            ctx->pc = 0x294510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294510;
        }
    }
    ctx->pc = 0x2946B8u;
    // 0x2946b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2946b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2946bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2946bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2946c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2946c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2946c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2946c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2946c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2946c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2946cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2946ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2946d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2946d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2946d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2946D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2946D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2946DCu;
}
