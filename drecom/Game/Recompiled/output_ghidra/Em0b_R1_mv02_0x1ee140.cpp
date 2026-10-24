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

// Function: Em0b_R1_mv02
// Address: 0x1ee140 - 0x1eed2c
void Em0b_R1_mv02_0x1ee140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_R1_mv02_0x1ee140");
#endif

    switch (ctx->pc) {
        case 0x1ee394u: goto label_1ee394;
        case 0x1ee3bcu: goto label_1ee3bc;
        case 0x1ee3c4u: goto label_1ee3c4;
        case 0x1ee42cu: goto label_1ee42c;
        case 0x1ee454u: goto label_1ee454;
        case 0x1ee45cu: goto label_1ee45c;
        case 0x1ee514u: goto label_1ee514;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee57cu: goto label_1ee57c;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee5a4u: goto label_1ee5a4;
        case 0x1ee618u: goto label_1ee618;
        case 0x1ee640u: goto label_1ee640;
        case 0x1ee680u: goto label_1ee680;
        case 0x1ee6a8u: goto label_1ee6a8;
        case 0x1ee6bcu: goto label_1ee6bc;
        case 0x1ee808u: goto label_1ee808;
        case 0x1ee854u: goto label_1ee854;
        case 0x1ee870u: goto label_1ee870;
        case 0x1ee884u: goto label_1ee884;
        case 0x1ee8a8u: goto label_1ee8a8;
        case 0x1ee99cu: goto label_1ee99c;
        case 0x1ee9b0u: goto label_1ee9b0;
        case 0x1eeb20u: goto label_1eeb20;
        case 0x1eeb6cu: goto label_1eeb6c;
        case 0x1eeb88u: goto label_1eeb88;
        case 0x1eeba0u: goto label_1eeba0;
        case 0x1eebacu: goto label_1eebac;
        case 0x1eecb4u: goto label_1eecb4;
        case 0x1eecd8u: goto label_1eecd8;
        case 0x1eed18u: goto label_1eed18;
        default: break;
    }

    ctx->pc = 0x1ee140u;

    // 0x1ee140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ee140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ee144: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x1ee144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1ee148: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1ee148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1ee14c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee150: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1ee150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ee154: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ee154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ee158: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee15c: 0x1083024a  beq         $a0, $v1, . + 4 + (0x24A << 2)
    ctx->pc = 0x1EE15Cu;
    {
        const bool branch_taken_0x1ee15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee15c) {
            ctx->pc = 0x1EEA88u;
            goto label_1eea88;
        }
    }
    ctx->pc = 0x1EE164u;
    // 0x1ee164: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1ee164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee168: 0x108301c8  beq         $a0, $v1, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x1EE168u;
    {
        const bool branch_taken_0x1ee168 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee168) {
            ctx->pc = 0x1EE88Cu;
            goto label_1ee88c;
        }
    }
    ctx->pc = 0x1EE170u;
    // 0x1ee170: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ee170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee174: 0x1083017e  beq         $a0, $v1, . + 4 + (0x17E << 2)
    ctx->pc = 0x1EE174u;
    {
        const bool branch_taken_0x1ee174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee174) {
            ctx->pc = 0x1EE770u;
            goto label_1ee770;
        }
    }
    ctx->pc = 0x1EE17Cu;
    // 0x1ee17c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee180: 0x108300be  beq         $a0, $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x1EE180u;
    {
        const bool branch_taken_0x1ee180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ee180) {
            ctx->pc = 0x1EE47Cu;
            goto label_1ee47c;
        }
    }
    ctx->pc = 0x1EE188u;
    // 0x1ee188: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE188u;
    {
        const bool branch_taken_0x1ee188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee188) {
            ctx->pc = 0x1EE198u;
            goto label_1ee198;
        }
    }
    ctx->pc = 0x1EE190u;
    // 0x1ee190: 0x10000286  b           . + 4 + (0x286 << 2)
    ctx->pc = 0x1EE190u;
    {
        const bool branch_taken_0x1ee190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee190) {
            ctx->pc = 0x1EEBACu;
            goto label_1eebac;
        }
    }
    ctx->pc = 0x1EE198u;
label_1ee198:
    // 0x1ee198: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee19c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1a0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ee1a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee1a4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1a8: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1ee1a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1ac: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1b0: 0xa480127c  sh          $zero, 0x127C($a0)
    ctx->pc = 0x1ee1b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1ee1b4: 0x3c05c100  lui         $a1, 0xC100
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49408 << 16));
    // 0x1ee1b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee1b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1bc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1c0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee1c4: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee1c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ee1c8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1ee1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee1cc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee1ccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1d4: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x1ee1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee1d8: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x1ee1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x1ee1dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee1e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee1e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee1e8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee1ec: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee1ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee1f0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1ee1f4: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x1ee1f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ee1f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee1f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee1fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee200: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ee200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee204: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ee204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1ee208: 0x3c053d49  lui         $a1, 0x3D49
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee20c: 0x34a20fdb  ori         $v0, $a1, 0xFDB
    ctx->pc = 0x1ee20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1ee210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee214: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee218: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee21c: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ee220: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee224: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1ee224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee228: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee228u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee22c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee230: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee234: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ee238: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee23c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ee23cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee240: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee244: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ee244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ee248: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE2B4u;
            goto label_1ee2b4;
        }
    }
    ctx->pc = 0x1EE250u;
    // 0x1ee250: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee254: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee258: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1ee258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee25c: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x1ee25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x1ee260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee264: 0x0  nop
    ctx->pc = 0x1ee264u;
    // NOP
    // 0x1ee268: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee26c: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee26cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee270: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee27c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee280: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ee280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ee284: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1ee288: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee28c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee28cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee290: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee294: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee298: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ee298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x1ee29c: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ee29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee2a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee2a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee2a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee2a8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2ac: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2b0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x1ee2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_1ee2b4:
    // 0x1ee2b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2bc: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ee2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ee2c0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ee2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ee2c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1ee2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1ee2c8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EE2C8u;
    {
        const bool branch_taken_0x1ee2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2c8) {
            ctx->pc = 0x1EE35Cu;
            goto label_1ee35c;
        }
    }
    ctx->pc = 0x1EE2D0u;
    // 0x1ee2d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2d4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ee2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee2e0: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee2e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee2e8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee2e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ee2ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee2f0: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee2f4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ee2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee2f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee2fc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee300: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee304: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee308: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee30c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee310: 0x3c043fc0  lui         $a0, 0x3FC0
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16320 << 16));
    // 0x1ee314: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ee314u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee318: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee31c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee320: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee324: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee328: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1ee32c: 0x3c073fc0  lui         $a3, 0x3FC0
    ctx->pc = 0x1ee32cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16320 << 16));
    // 0x1ee330: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1ee330u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee334: 0xc4c00024  lwc1        $f0, 0x24($a2)
    ctx->pc = 0x1ee334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee338: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee338u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee33c: 0xe4c00024  swc1        $f0, 0x24($a2)
    ctx->pc = 0x1ee33cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x1ee340: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1ee340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee344: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x1ee344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1ee348: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ee348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee34c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee34cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee350: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee354: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee358: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1ee35c:
    // 0x1ee35c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee360: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee364: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ee364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee368: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee36c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE36Cu;
    {
        const bool branch_taken_0x1ee36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee36c) {
            ctx->pc = 0x1EE39Cu;
            goto label_1ee39c;
        }
    }
    ctx->pc = 0x1EE374u;
    // 0x1ee374: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee378: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee37c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee380: 0x24067808  addiu       $a2, $zero, 0x7808
    ctx->pc = 0x1ee380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30728));
    // 0x1ee384: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee388: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee38c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE38Cu;
    SET_GPR_U32(ctx, 31, 0x1EE394u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE38Cu, 0x1EE394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE394u;
label_1ee394:
    // 0x1ee394: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE394u;
    {
        const bool branch_taken_0x1ee394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee394) {
            ctx->pc = 0x1EE3BCu;
            goto label_1ee3bc;
        }
    }
    ctx->pc = 0x1EE39Cu;
label_1ee39c:
    // 0x1ee39c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3a4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee3a8: 0x2406780a  addiu       $a2, $zero, 0x780A
    ctx->pc = 0x1ee3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x1ee3ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee3acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee3b0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee3b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee3b4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE3B4u;
    SET_GPR_U32(ctx, 31, 0x1EE3BCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE3B4u, 0x1EE3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3BCu;
label_1ee3bc:
    // 0x1ee3bc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EE3BCu;
    SET_GPR_U32(ctx, 31, 0x1EE3C4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EE3BCu, 0x1EE3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE3C4u;
label_1ee3c4:
    // 0x1ee3c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ee3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ee3c8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ee3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ee3cc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EE3CCu;
    {
        const bool branch_taken_0x1ee3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3cc) {
            ctx->pc = 0x1EE454u;
            goto label_1ee454;
        }
    }
    ctx->pc = 0x1EE3D4u;
    // 0x1ee3d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee3d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3dc: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x1ee3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee3e0: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ee3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x1ee3e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee3e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee3e8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3ec: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ee3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee3f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ee3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ee3f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee3f8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee3fc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ee400: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee404: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE404u;
    {
        const bool branch_taken_0x1ee404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee404) {
            ctx->pc = 0x1EE434u;
            goto label_1ee434;
        }
    }
    ctx->pc = 0x1EE40Cu;
    // 0x1ee40c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee410: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee414: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee418: 0x2406780a  addiu       $a2, $zero, 0x780A
    ctx->pc = 0x1ee418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30730));
    // 0x1ee41c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee420: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee424: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE424u;
    SET_GPR_U32(ctx, 31, 0x1EE42Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE424u, 0x1EE42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE42Cu;
label_1ee42c:
    // 0x1ee42c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE42Cu;
    {
        const bool branch_taken_0x1ee42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee42c) {
            ctx->pc = 0x1EE454u;
            goto label_1ee454;
        }
    }
    ctx->pc = 0x1EE434u;
label_1ee434:
    // 0x1ee434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee438: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee43c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee440: 0x24067808  addiu       $a2, $zero, 0x7808
    ctx->pc = 0x1ee440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30728));
    // 0x1ee444: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee448: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee44c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE44Cu;
    SET_GPR_U32(ctx, 31, 0x1EE454u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE44Cu, 0x1EE454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE454u;
label_1ee454:
    // 0x1ee454: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EE454u;
    SET_GPR_U32(ctx, 31, 0x1EE45Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EE454u, 0x1EE45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE45Cu;
label_1ee45c:
    // 0x1ee45c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1ee45cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee460: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1ee460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ee464: 0x246300f0  addiu       $v1, $v1, 0xF0
    ctx->pc = 0x1ee464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1ee468: 0x3064007f  andi        $a0, $v1, 0x7F
    ctx->pc = 0x1ee468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x1ee46c: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x1ee46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ee470: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ee470u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ee474: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee478: 0xa4a2127e  sh          $v0, 0x127E($a1)
    ctx->pc = 0x1ee478u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 2));
label_1ee47c:
    // 0x1ee47c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ee47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee480: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee488: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee48c: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ee48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee490: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1ee490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1ee494: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee498: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x1ee498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee49c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1ee49cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1ee4a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee4a4: 0x0  nop
    ctx->pc = 0x1ee4a4u;
    // NOP
    // 0x1ee4a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee4a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee4ac: 0x0  nop
    ctx->pc = 0x1ee4acu;
    // NOP
    // 0x1ee4b0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE4B0u;
    {
        const bool branch_taken_0x1ee4b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee4b0) {
            ctx->pc = 0x1EE4D0u;
            goto label_1ee4d0;
        }
    }
    ctx->pc = 0x1EE4B8u;
    // 0x1ee4b8: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ee4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee4bc: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x1ee4bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee4c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee4c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee4c4: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4c8: 0x24a21330  addiu       $v0, $a1, 0x1330
    ctx->pc = 0x1ee4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1ee4cc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
label_1ee4d0:
    // 0x1ee4d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4d4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee4d8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ee4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ee4dc: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x1ee4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
    // 0x1ee4e0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EE4E0u;
    {
        const bool branch_taken_0x1ee4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4e0) {
            ctx->pc = 0x1EE520u;
            goto label_1ee520;
        }
    }
    ctx->pc = 0x1EE4E8u;
    // 0x1ee4e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4ec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee4f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee4f8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee4fc: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1ee4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee500: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1ee500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1ee504: 0x24c5dce0  addiu       $a1, $a2, -0x2320
    ctx->pc = 0x1ee504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958304));
    // 0x1ee508: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ee508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee50c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE50Cu;
    SET_GPR_U32(ctx, 31, 0x1EE514u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE50Cu, 0x1EE514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE514u;
label_1ee514:
    // 0x1ee514: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ee518: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE518u;
    {
        const bool branch_taken_0x1ee518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee518) {
            ctx->pc = 0x1EE564u;
            goto label_1ee564;
        }
    }
    ctx->pc = 0x1EE520u;
label_1ee520:
    // 0x1ee520: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee524: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1ee524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee528: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1ee528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1ee52c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1ee52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ee530: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee534: 0x0  nop
    ctx->pc = 0x1ee534u;
    // NOP
    // 0x1ee538: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ee538u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee53c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee544: 0x24661330  addiu       $a2, $v1, 0x1330
    ctx->pc = 0x1ee544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee548: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee54c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1ee54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1ee550: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x1ee550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x1ee554: 0xc4cd003c  lwc1        $f13, 0x3C($a2)
    ctx->pc = 0x1ee554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee558: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE558u;
    SET_GPR_U32(ctx, 31, 0x1EE560u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE558u, 0x1EE560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE560u;
label_1ee560:
    // 0x1ee560: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ee564:
    // 0x1ee564: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee568: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x1ee568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee56c: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee570: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ee570u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee574: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EE574u;
    SET_GPR_U32(ctx, 31, 0x1EE57Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EE574u, 0x1EE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE57Cu;
label_1ee57c:
    // 0x1ee57c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee580: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1ee580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1ee584: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee588: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ee58c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EE58Cu;
    SET_GPR_U32(ctx, 31, 0x1EE594u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EE58Cu, 0x1EE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE594u;
label_1ee594:
    // 0x1ee594: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ee594u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee598: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee59c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EE59Cu;
    SET_GPR_U32(ctx, 31, 0x1EE5A4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EE59Cu, 0x1EE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5A4u;
label_1ee5a4:
    // 0x1ee5a4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ee5a4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ee5a8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5ac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1ee5acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1ee5b0: 0x1060017e  beqz        $v1, . + 4 + (0x17E << 2)
    ctx->pc = 0x1EE5B0u;
    {
        const bool branch_taken_0x1ee5b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5b0) {
            ctx->pc = 0x1EEBACu;
            goto label_1eebac;
        }
    }
    ctx->pc = 0x1EE5B8u;
    // 0x1ee5b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5bc: 0x8463127c  lh          $v1, 0x127C($v1)
    ctx->pc = 0x1ee5bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4732)));
    // 0x1ee5c0: 0x1460017a  bnez        $v1, . + 4 + (0x17A << 2)
    ctx->pc = 0x1EE5C0u;
    {
        const bool branch_taken_0x1ee5c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5c0) {
            ctx->pc = 0x1EEBACu;
            goto label_1eebac;
        }
    }
    ctx->pc = 0x1EE5C8u;
    // 0x1ee5c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5cc: 0x8465127a  lh          $a1, 0x127A($v1)
    ctx->pc = 0x1ee5ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1ee5d0: 0x5243c  dsll32      $a0, $a1, 16
    ctx->pc = 0x1ee5d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1ee5d4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ee5d8: 0x1480001b  bnez        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EE5D8u;
    {
        const bool branch_taken_0x1ee5d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5d8) {
            ctx->pc = 0x1EE648u;
            goto label_1ee648;
        }
    }
    ctx->pc = 0x1EE5E0u;
    // 0x1ee5e0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5e4: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee5e8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ee5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee5ec: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee5f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE5F0u;
    {
        const bool branch_taken_0x1ee5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5f0) {
            ctx->pc = 0x1EE620u;
            goto label_1ee620;
        }
    }
    ctx->pc = 0x1EE5F8u;
    // 0x1ee5f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee5fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee600: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee604: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1ee608: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee60c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee610: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE610u;
    SET_GPR_U32(ctx, 31, 0x1EE618u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE610u, 0x1EE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE618u;
label_1ee618:
    // 0x1ee618: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1EE618u;
    {
        const bool branch_taken_0x1ee618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee618) {
            ctx->pc = 0x1EE6A8u;
            goto label_1ee6a8;
        }
    }
    ctx->pc = 0x1EE620u;
label_1ee620:
    // 0x1ee620: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee624: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee628: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ee628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ee62c: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1ee62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1ee630: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee634: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee634u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee638: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE638u;
    SET_GPR_U32(ctx, 31, 0x1EE640u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE638u, 0x1EE640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE640u;
label_1ee640:
    // 0x1ee640: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1EE640u;
    {
        const bool branch_taken_0x1ee640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee640) {
            ctx->pc = 0x1EE6A8u;
            goto label_1ee6a8;
        }
    }
    ctx->pc = 0x1EE648u;
label_1ee648:
    // 0x1ee648: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee64c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee650: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1ee650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee654: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee658: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1EE658u;
    {
        const bool branch_taken_0x1ee658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee658) {
            ctx->pc = 0x1EE688u;
            goto label_1ee688;
        }
    }
    ctx->pc = 0x1EE660u;
    // 0x1ee660: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee664: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee668: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee66c: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1ee66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1ee670: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee670u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee674: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee678: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE678u;
    SET_GPR_U32(ctx, 31, 0x1EE680u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE678u, 0x1EE680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE680u;
label_1ee680:
    // 0x1ee680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE680u;
    {
        const bool branch_taken_0x1ee680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee680) {
            ctx->pc = 0x1EE6A8u;
            goto label_1ee6a8;
        }
    }
    ctx->pc = 0x1EE688u;
label_1ee688:
    // 0x1ee688: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee68c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee690: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee694: 0x24067809  addiu       $a2, $zero, 0x7809
    ctx->pc = 0x1ee694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30729));
    // 0x1ee698: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee698u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee69c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee69cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee6a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE6A0u;
    SET_GPR_U32(ctx, 31, 0x1EE6A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE6A0u, 0x1EE6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6A8u;
label_1ee6a8:
    // 0x1ee6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee6ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee6b0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1ee6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee6b4: 0xc067654  jal         func_19D950
    ctx->pc = 0x1EE6B4u;
    SET_GPR_U32(ctx, 31, 0x1EE6BCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x1EE6B4u, 0x1EE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6BCu;
label_1ee6bc:
    // 0x1ee6bc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1ee6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee6c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee6c4: 0x0  nop
    ctx->pc = 0x1ee6c4u;
    // NOP
    // 0x1ee6c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee6cc: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1ee6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1ee6d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee6d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6d4: 0x0  nop
    ctx->pc = 0x1ee6d4u;
    // NOP
    // 0x1ee6d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee6dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee6e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee6e4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee6e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee6f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee6f8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ee6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ee6fc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ee6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1ee700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee704: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee708: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee70c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ee70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1ee710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee718: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ee718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee720: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee724: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ee724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ee72c: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x1EE72Cu;
    {
        const bool branch_taken_0x1ee72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee72c) {
            ctx->pc = 0x1EEBACu;
            goto label_1eebac;
        }
    }
    ctx->pc = 0x1EE734u;
    // 0x1ee734: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee738: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee73c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1ee73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee740: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1ee744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee748: 0x0  nop
    ctx->pc = 0x1ee748u;
    // NOP
    // 0x1ee74c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee750: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1ee750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1ee754: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ee754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee75c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee760: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee764: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ee764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ee768: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x1EE768u;
    {
        const bool branch_taken_0x1ee768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee768) {
            ctx->pc = 0x1EEBACu;
            goto label_1eebac;
        }
    }
    ctx->pc = 0x1EE770u;
label_1ee770:
    // 0x1ee770: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x1ee770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x1ee774: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee77c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee784: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ee788: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee78c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1ee78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee790: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1ee790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1ee794: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee794u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee798: 0x0  nop
    ctx->pc = 0x1ee798u;
    // NOP
    // 0x1ee79c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ee79cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ee7a0: 0x0  nop
    ctx->pc = 0x1ee7a0u;
    // NOP
    // 0x1ee7a4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EE7A4u;
    {
        const bool branch_taken_0x1ee7a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ee7a4) {
            ctx->pc = 0x1EE7C4u;
            goto label_1ee7c4;
        }
    }
    ctx->pc = 0x1EE7ACu;
    // 0x1ee7ac: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x1ee7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee7b0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1ee7b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ee7b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee7b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee7b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee7bc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee7c0: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1ee7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1ee7c4:
    // 0x1ee7c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee7c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee7cc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1ee7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ee7d0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ee7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ee7d4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EE7D4u;
    {
        const bool branch_taken_0x1ee7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee7d4) {
            ctx->pc = 0x1EE814u;
            goto label_1ee814;
        }
    }
    ctx->pc = 0x1EE7DCu;
    // 0x1ee7dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee7dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee7e0: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1ee7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee7e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee7e8: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee7ec: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee7f0: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ee7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ee7f4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ee7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ee7f8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ee7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ee7fc: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ee7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee800: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE800u;
    SET_GPR_U32(ctx, 31, 0x1EE808u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE800u, 0x1EE808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE808u;
label_1ee808:
    // 0x1ee808: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ee80c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EE80Cu;
    {
        const bool branch_taken_0x1ee80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee80c) {
            ctx->pc = 0x1EE858u;
            goto label_1ee858;
        }
    }
    ctx->pc = 0x1EE814u;
label_1ee814:
    // 0x1ee814: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee818: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ee818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee81c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1ee81cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1ee820: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee828: 0x0  nop
    ctx->pc = 0x1ee828u;
    // NOP
    // 0x1ee82c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1ee82cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee830: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee834: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee838: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee83c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ee83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ee840: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1ee840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1ee844: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1ee844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1ee848: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1ee848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ee84c: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EE84Cu;
    SET_GPR_U32(ctx, 31, 0x1EE854u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EE84Cu, 0x1EE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE854u;
label_1ee854:
    // 0x1ee854: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1ee858:
    // 0x1ee858: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee85c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1ee85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee860: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1ee860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee864: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1ee864u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee868: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EE868u;
    SET_GPR_U32(ctx, 31, 0x1EE870u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EE868u, 0x1EE870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE870u;
label_1ee870:
    // 0x1ee870: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee874: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1ee874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1ee878: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee87c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EE87Cu;
    SET_GPR_U32(ctx, 31, 0x1EE884u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EE87Cu, 0x1EE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE884u;
label_1ee884:
    // 0x1ee884: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x1EE884u;
    {
        const bool branch_taken_0x1ee884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee884) {
            ctx->pc = 0x1EEBACu;
            goto label_1eebac;
        }
    }
    ctx->pc = 0x1EE88Cu;
label_1ee88c:
    // 0x1ee88c: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x1ee88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x1ee890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee898: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee89c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ee8a0: 0xc067654  jal         func_19D950
    ctx->pc = 0x1EE8A0u;
    SET_GPR_U32(ctx, 31, 0x1EE8A8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x1EE8A0u, 0x1EE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8A8u;
label_1ee8a8:
    // 0x1ee8a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ee8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee8ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee8b0: 0x0  nop
    ctx->pc = 0x1ee8b0u;
    // NOP
    // 0x1ee8b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee8b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8c0: 0x0  nop
    ctx->pc = 0x1ee8c0u;
    // NOP
    // 0x1ee8c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee8cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee8d0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee8d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee8e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee8e4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee8e8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1ee8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1ee8ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ee8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ee8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee8f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee8fc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ee8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ee900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee904: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ee904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee90c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ee90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ee910: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE910u;
    {
        const bool branch_taken_0x1ee910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee910) {
            ctx->pc = 0x1EE94Cu;
            goto label_1ee94c;
        }
    }
    ctx->pc = 0x1EE918u;
    // 0x1ee918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee91c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee920: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1ee920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee924: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ee924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ee928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee92c: 0x0  nop
    ctx->pc = 0x1ee92cu;
    // NOP
    // 0x1ee930: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee934: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee93c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee944: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee948: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ee948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1ee94c:
    // 0x1ee94c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ee94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ee950: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ee950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ee954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee958: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee95c: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x1ee95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee960: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ee960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ee964: 0x3c033cc9  lui         $v1, 0x3CC9
    ctx->pc = 0x1ee964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15561 << 16));
    // 0x1ee968: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x1ee968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1ee96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee970: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee974: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee978: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ee978u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ee97c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee980: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee984: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1ee984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1ee988: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x1ee988u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1ee98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ee98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee990: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ee990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ee994: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EE994u;
    SET_GPR_U32(ctx, 31, 0x1EE99Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EE994u, 0x1EE99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE99Cu;
label_1ee99c:
    // 0x1ee99c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ee99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ee9a0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9a4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x1ee9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ee9a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EE9A8u;
    SET_GPR_U32(ctx, 31, 0x1EE9B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EE9A8u, 0x1EE9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE9B0u;
label_1ee9b0:
    // 0x1ee9b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ee9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ee9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee9b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE9B8u;
    {
        const bool branch_taken_0x1ee9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9b8) {
            ctx->pc = 0x1EE9E0u;
            goto label_1ee9e0;
        }
    }
    ctx->pc = 0x1EE9C0u;
    // 0x1ee9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ee9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee9c4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1ee9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9c8: 0xa482127a  sh          $v0, 0x127A($a0)
    ctx->pc = 0x1ee9c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ee9cc: 0x3c054100  lui         $a1, 0x4100
    ctx->pc = 0x1ee9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16640 << 16));
    // 0x1ee9d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee9d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee9d4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1ee9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9d8: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x1ee9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1ee9dc: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1ee9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_1ee9e0:
    // 0x1ee9e0: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x1ee9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee9e4: 0x25021330  addiu       $v0, $t0, 0x1330
    ctx->pc = 0x1ee9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4912));
    // 0x1ee9e8: 0x944200aa  lhu         $v0, 0xAA($v0)
    ctx->pc = 0x1ee9e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 170)));
    // 0x1ee9ec: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x1ee9ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ee9f0: 0x30850004  andi        $a1, $a0, 0x4
    ctx->pc = 0x1ee9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1ee9f4: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1EE9F4u;
    {
        const bool branch_taken_0x1ee9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee9f4) {
            ctx->pc = 0x1EEA88u;
            goto label_1eea88;
        }
    }
    ctx->pc = 0x1EE9FCu;
    // 0x1ee9fc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1ee9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea00: 0x24c71330  addiu       $a3, $a2, 0x1330
    ctx->pc = 0x1eea00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4912));
    // 0x1eea04: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x1eea04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea08: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1eea08u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea0c: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x1eea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea14: 0xe4e00014  swc1        $f0, 0x14($a3)
    ctx->pc = 0x1eea14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
    // 0x1eea18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1eea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea20: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1eea20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea24: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1eea24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea28: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1eea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea30: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1eea30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1eea34: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea38: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea3c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1eea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1eea40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea44: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1eea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea4c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1eea4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1eea50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea54: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eea54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea58: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1eea58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1eea5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea60: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x1eea60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea68: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1eea68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1eea6c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea70: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eea70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eea74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1eea74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1eea78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1eea78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eea7c: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x1eea7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eea80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eea80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eea84: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x1eea84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_1eea88:
    // 0x1eea88: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1eea88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1eea8c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1eea8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1eea90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eea90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eea94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eea94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eea98: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1eea98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eea9c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x1eea9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x1eeaa0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1eeaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeaa4: 0xc4c11288  lwc1        $f1, 0x1288($a2)
    ctx->pc = 0x1eeaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeaa8: 0x3c0744fa  lui         $a3, 0x44FA
    ctx->pc = 0x1eeaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17658 << 16));
    // 0x1eeaac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1eeaacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeab0: 0x0  nop
    ctx->pc = 0x1eeab0u;
    // NOP
    // 0x1eeab4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1eeab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eeab8: 0x0  nop
    ctx->pc = 0x1eeab8u;
    // NOP
    // 0x1eeabc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEABCu;
    {
        const bool branch_taken_0x1eeabc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eeabc) {
            ctx->pc = 0x1EEADCu;
            goto label_1eeadc;
        }
    }
    ctx->pc = 0x1EEAC4u;
    // 0x1eeac4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1eeac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1eeac8: 0x34480fdb  ori         $t0, $v0, 0xFDB
    ctx->pc = 0x1eeac8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1eeacc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1eeaccu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eead0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eead4: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1eead4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eead8: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1eead8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
label_1eeadc:
    // 0x1eeadc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eeadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeae0: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x1eeae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x1eeae4: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x1eeae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1eeae8: 0x30e81000  andi        $t0, $a3, 0x1000
    ctx->pc = 0x1eeae8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4096);
    // 0x1eeaec: 0x1500000f  bnez        $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EEAECu;
    {
        const bool branch_taken_0x1eeaec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeaec) {
            ctx->pc = 0x1EEB2Cu;
            goto label_1eeb2c;
        }
    }
    ctx->pc = 0x1EEAF4u;
    // 0x1eeaf4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeaf8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eeaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeafc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eeafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb00: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eeb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eeb04: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x1eeb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1eeb08: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1eeb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1eeb0c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1eeb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1eeb10: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1eeb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1eeb14: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1eeb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eeb18: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EEB18u;
    SET_GPR_U32(ctx, 31, 0x1EEB20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EEB18u, 0x1EEB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB20u;
label_1eeb20:
    // 0x1eeb20: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1eeb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1eeb24: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1EEB24u;
    {
        const bool branch_taken_0x1eeb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eeb24) {
            ctx->pc = 0x1EEB70u;
            goto label_1eeb70;
        }
    }
    ctx->pc = 0x1EEB2Cu;
label_1eeb2c:
    // 0x1eeb2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb30: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1eeb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeb34: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1eeb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1eeb38: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1eeb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1eeb3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eeb3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eeb40: 0x0  nop
    ctx->pc = 0x1eeb40u;
    // NOP
    // 0x1eeb44: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1eeb44u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eeb48: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eeb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb4c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb50: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1eeb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1eeb54: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1eeb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1eeb58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1eeb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1eeb5c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x1eeb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x1eeb60: 0xc46d003c  lwc1        $f13, 0x3C($v1)
    ctx->pc = 0x1eeb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1eeb64: 0xc05c848  jal         func_172120
    ctx->pc = 0x1EEB64u;
    SET_GPR_U32(ctx, 31, 0x1EEB6Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x1EEB64u, 0x1EEB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB6Cu;
label_1eeb6c:
    // 0x1eeb6c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1eeb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1eeb70:
    // 0x1eeb70: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb74: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1eeb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eeb78: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1eeb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eeb7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1eeb7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eeb80: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x1EEB80u;
    SET_GPR_U32(ctx, 31, 0x1EEB88u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x1EEB80u, 0x1EEB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEB88u;
label_1eeb88:
    // 0x1eeb88: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eeb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb8c: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1eeb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1eeb90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eeb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeb94: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1eeb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1eeb98: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1EEB98u;
    SET_GPR_U32(ctx, 31, 0x1EEBA0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1EEB98u, 0x1EEBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBA0u;
label_1eeba0:
    // 0x1eeba0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eeba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeba4: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1EEBA4u;
    SET_GPR_U32(ctx, 31, 0x1EEBACu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1EEBA4u, 0x1EEBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EEBACu;
label_1eebac:
    // 0x1eebac: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eebb0: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x1eebb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x1eebb4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EEBB4u;
    {
        const bool branch_taken_0x1eebb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eebb4) {
            ctx->pc = 0x1EEC2Cu;
            goto label_1eec2c;
        }
    }
    ctx->pc = 0x1EEBBCu;
    // 0x1eebbc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1eebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eebc0: 0x24861330  addiu       $a2, $a0, 0x1330
    ctx->pc = 0x1eebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1eebc4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x1eebc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eebc8: 0x3c033c49  lui         $v1, 0x3C49
    ctx->pc = 0x1eebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15433 << 16));
    // 0x1eebcc: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1eebccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eebd0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1eebd0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebd4: 0x0  nop
    ctx->pc = 0x1eebd4u;
    // NOP
    // 0x1eebd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1eebd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1eebdc: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x1eebdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x1eebe0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eebe4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eebe8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1eebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eebec: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x1eebecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x1eebf0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x1eebf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eebf4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1eebf4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eebf8: 0x0  nop
    ctx->pc = 0x1eebf8u;
    // NOP
    // 0x1eebfc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1eebfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eec00: 0x0  nop
    ctx->pc = 0x1eec00u;
    // NOP
    // 0x1eec04: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x1EEC04u;
    {
        const bool branch_taken_0x1eec04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eec04) {
            ctx->pc = 0x1EEC94u;
            goto label_1eec94;
        }
    }
    ctx->pc = 0x1EEC0Cu;
    // 0x1eec0c: 0x3c043fc9  lui         $a0, 0x3FC9
    ctx->pc = 0x1eec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16329 << 16));
    // 0x1eec10: 0x34860fdb  ori         $a2, $a0, 0xFDB
    ctx->pc = 0x1eec10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1eec14: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1eec14u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec18: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec1c: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x1eec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec20: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x1eec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x1eec24: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1EEC24u;
    {
        const bool branch_taken_0x1eec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eec24) {
            ctx->pc = 0x1EEC94u;
            goto label_1eec94;
        }
    }
    ctx->pc = 0x1EEC2Cu;
label_1eec2c:
    // 0x1eec2c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec30: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec34: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x1eec34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eec38: 0x3c053c49  lui         $a1, 0x3C49
    ctx->pc = 0x1eec38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15433 << 16));
    // 0x1eec3c: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x1eec3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x1eec40: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1eec40u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec44: 0x0  nop
    ctx->pc = 0x1eec44u;
    // NOP
    // 0x1eec48: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1eec48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1eec4c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1eec4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1eec50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec54: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1eec54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec58: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1eec58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1eec5c: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x1eec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x1eec60: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1eec60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eec64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eec64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec68: 0x0  nop
    ctx->pc = 0x1eec68u;
    // NOP
    // 0x1eec6c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1eec6cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eec70: 0x0  nop
    ctx->pc = 0x1eec70u;
    // NOP
    // 0x1eec74: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1EEC74u;
    {
        const bool branch_taken_0x1eec74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1eec74) {
            ctx->pc = 0x1EEC94u;
            goto label_1eec94;
        }
    }
    ctx->pc = 0x1EEC7Cu;
    // 0x1eec7c: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x1eec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
    // 0x1eec80: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x1eec80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1eec84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eec84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eec88: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1eec88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec8c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1eec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1eec90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1eec90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_1eec94:
    // 0x1eec94: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eec94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eec98: 0x84a4127e  lh          $a0, 0x127E($a1)
    ctx->pc = 0x1eec98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4734)));
    // 0x1eec9c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x1eec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1eeca0: 0xa4a3127e  sh          $v1, 0x127E($a1)
    ctx->pc = 0x1eeca0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x1eeca4: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1EECA4u;
    {
        const bool branch_taken_0x1eeca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eeca4) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EECACu;
    // 0x1eecac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EECACu;
    SET_GPR_U32(ctx, 31, 0x1EECB4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EECACu, 0x1EECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECB4u;
label_1eecb4:
    // 0x1eecb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1eecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eecb8: 0x24420258  addiu       $v0, $v0, 0x258
    ctx->pc = 0x1eecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
    // 0x1eecbc: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1eecbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x1eecc0: 0x2243c  dsll32      $a0, $v0, 16
    ctx->pc = 0x1eecc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1eecc4: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1eecc4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1eecc8: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x1eecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eeccc: 0xa4a4127e  sh          $a0, 0x127E($a1)
    ctx->pc = 0x1eecccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4734), (uint16_t)GPR_U32(ctx, 4));
    // 0x1eecd0: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EECD0u;
    SET_GPR_U32(ctx, 31, 0x1EECD8u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EECD0u, 0x1EECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EECD8u;
label_1eecd8:
    // 0x1eecd8: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1eecd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1eecdc: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1eecdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1eece0: 0x30e8000f  andi        $t0, $a3, 0xF
    ctx->pc = 0x1eece0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x1eece4: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EECE4u;
    {
        const bool branch_taken_0x1eece4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eece4) {
            ctx->pc = 0x1EED1Cu;
            goto label_1eed1c;
        }
    }
    ctx->pc = 0x1EECECu;
    // 0x1eecec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1eececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1eecf0: 0x3c04461c  lui         $a0, 0x461C
    ctx->pc = 0x1eecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17948 << 16));
    // 0x1eecf4: 0x34834000  ori         $v1, $a0, 0x4000
    ctx->pc = 0x1eecf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x1eecf8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1eecf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1eecfc: 0x24050520  addiu       $a1, $zero, 0x520
    ctx->pc = 0x1eecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x1eed00: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1eed00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1eed04: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1eed04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1eed08: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x1eed08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1eed0c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1eed0cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1eed10: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EED10u;
    SET_GPR_U32(ctx, 31, 0x1EED18u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EED10u, 0x1EED18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EED18u;
label_1eed18:
    // 0x1eed18: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x1eed18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_1eed1c:
    // 0x1eed1c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x1eed1cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eed20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1eed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1eed24: 0x3e00008  jr          $ra
    ctx->pc = 0x1EED24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EED24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EED2Cu;
}
