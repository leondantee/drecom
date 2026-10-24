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

// Function: Hot_blur
// Address: 0x157140 - 0x15863c
void Hot_blur_0x157140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Hot_blur_0x157140");
#endif

    switch (ctx->pc) {
        case 0x157194u: goto label_157194;
        case 0x15719cu: goto label_15719c;
        case 0x1571c8u: goto label_1571c8;
        case 0x15723cu: goto label_15723c;
        case 0x157268u: goto label_157268;
        case 0x157464u: goto label_157464;
        case 0x1574e4u: goto label_1574e4;
        case 0x15755cu: goto label_15755c;
        case 0x157598u: goto label_157598;
        case 0x1575e4u: goto label_1575e4;
        case 0x157744u: goto label_157744;
        case 0x15774cu: goto label_15774c;
        case 0x1577b4u: goto label_1577b4;
        case 0x15781cu: goto label_15781c;
        case 0x157884u: goto label_157884;
        case 0x15791cu: goto label_15791c;
        case 0x157924u: goto label_157924;
        case 0x1579b0u: goto label_1579b0;
        case 0x157a3cu: goto label_157a3c;
        case 0x157ac8u: goto label_157ac8;
        case 0x157c5cu: goto label_157c5c;
        case 0x157d08u: goto label_157d08;
        case 0x157e28u: goto label_157e28;
        case 0x157f48u: goto label_157f48;
        case 0x158068u: goto label_158068;
        case 0x15810cu: goto label_15810c;
        case 0x158118u: goto label_158118;
        case 0x15830cu: goto label_15830c;
        case 0x15831cu: goto label_15831c;
        case 0x1583a8u: goto label_1583a8;
        case 0x158418u: goto label_158418;
        case 0x1584fcu: goto label_1584fc;
        case 0x158518u: goto label_158518;
        case 0x15855cu: goto label_15855c;
        case 0x158598u: goto label_158598;
        case 0x1585d8u: goto label_1585d8;
        case 0x158608u: goto label_158608;
        default: break;
    }

    ctx->pc = 0x157140u;

    // 0x157140: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x157140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x157144: 0x7fbf0090  sq          $ra, 0x90($sp)
    ctx->pc = 0x157144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x157148: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x157148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x15714c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15714cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x157150: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x157150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x157154: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x157154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x157158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x157158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15715c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x157160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x157160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x157164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x157164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x157168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x157168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15716c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15716cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157170: 0x2444f9e0  addiu       $a0, $v0, -0x620
    ctx->pc = 0x157170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x157174: 0x7080a628  paddub      $s4, $a0, $zero
    ctx->pc = 0x157174u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x157178: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x15717c: 0x8c23f750  lw          $v1, -0x8B0($at)
    ctx->pc = 0x15717cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EF750u));
    // 0x157180: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x157180u;
    {
        const bool branch_taken_0x157180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x157180) {
            ctx->pc = 0x157208u;
            goto label_157208;
        }
    }
    ctx->pc = 0x157188u;
    // 0x157188: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x157188u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15718c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x15718Cu;
    {
        const bool branch_taken_0x15718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15718c) {
            ctx->pc = 0x1571F8u;
            goto label_1571f8;
        }
    }
    ctx->pc = 0x157194u;
label_157194:
    // 0x157194: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x157194u;
    SET_GPR_U32(ctx, 31, 0x15719Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x157194u, 0x15719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15719Cu;
label_15719c:
    // 0x15719c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15719cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1571a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1571a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1571a4: 0x0  nop
    ctx->pc = 0x1571a4u;
    // NOP
    // 0x1571a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1571a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1571ac: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x1571acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1571b0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1571b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1571b4: 0x2462f760  addiu       $v0, $v1, -0x8A0
    ctx->pc = 0x1571b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965088));
    // 0x1571b8: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1571b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1571bc: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1571bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1571c0: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x1571C0u;
    SET_GPR_U32(ctx, 31, 0x1571C8u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x1571C0u, 0x1571C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571C8u;
label_1571c8:
    // 0x1571c8: 0x3c0243f0  lui         $v0, 0x43F0
    ctx->pc = 0x1571c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
    // 0x1571cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1571ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1571d0: 0x0  nop
    ctx->pc = 0x1571d0u;
    // NOP
    // 0x1571d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1571d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1571d8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1571d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1571dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1571e0: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x1571e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x1571e4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1571e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1571e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1571e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1571ec: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1571ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1571f0: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1571f0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1571f4: 0x0  nop
    ctx->pc = 0x1571f4u;
    // NOP
label_1571f8:
    // 0x1571f8: 0x2e620019  sltiu       $v0, $s3, 0x19
    ctx->pc = 0x1571f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1571fc: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1571FCu;
    {
        const bool branch_taken_0x1571fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1571fc) {
            ctx->pc = 0x157194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157194;
        }
    }
    ctx->pc = 0x157204u;
    // 0x157204: 0x0  nop
    ctx->pc = 0x157204u;
    // NOP
label_157208:
    // 0x157208: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15720c: 0xae820050  sw          $v0, 0x50($s4)
    ctx->pc = 0x15720cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 80), GPR_U32(ctx, 2));
    // 0x157210: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x157210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x157214: 0x3462104f  ori         $v0, $v1, 0x104F
    ctx->pc = 0x157214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4175);
    // 0x157218: 0xae820054  sw          $v0, 0x54($s4)
    ctx->pc = 0x157218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 2));
    // 0x15721c: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x15721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x157220: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x157220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x157224: 0xfe820058  sd          $v0, 0x58($s4)
    ctx->pc = 0x157224u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 88), GPR_U64(ctx, 2));
    // 0x157228: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15722c: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x15722cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x157230: 0x26850050  addiu       $a1, $s4, 0x50
    ctx->pc = 0x157230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x157234: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157234u;
    SET_GPR_U32(ctx, 31, 0x15723Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157234u, 0x15723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15723Cu;
label_15723c:
    // 0x15723c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x15723cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x157240: 0xae830030  sw          $v1, 0x30($s4)
    ctx->pc = 0x157240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 3));
    // 0x157244: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x157244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x157248: 0x34421015  ori         $v0, $v0, 0x1015
    ctx->pc = 0x157248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x15724c: 0xae820034  sw          $v0, 0x34($s4)
    ctx->pc = 0x15724cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
    // 0x157250: 0xfe800038  sd          $zero, 0x38($s4)
    ctx->pc = 0x157250u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 56), GPR_U64(ctx, 0));
    // 0x157254: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157258: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15725c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x15725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x157260: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x157260u;
    SET_GPR_U32(ctx, 31, 0x157268u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x157260u, 0x157268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157268u;
label_157268:
    // 0x157268: 0x269700b0  addiu       $s7, $s4, 0xB0
    ctx->pc = 0x157268u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x15726c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x15726cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x157270: 0xaee40000  sw          $a0, 0x0($s7)
    ctx->pc = 0x157270u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 4));
    // 0x157274: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x157274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x157278: 0x34432b16  ori         $v1, $v0, 0x2B16
    ctx->pc = 0x157278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x15727c: 0xaee30004  sw          $v1, 0x4($s7)
    ctx->pc = 0x15727cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 3));
    // 0x157280: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x157280u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
    // 0x157284: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x157284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x157288: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x157288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x15728c: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x15728cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x157290: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157294: 0x90234f10  lbu         $v1, 0x4F10($at)
    ctx->pc = 0x157294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F4F10u));
    // 0x157298: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x157298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15729c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x15729cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1572a0: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1572a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1572a4: 0x34838080  ori         $v1, $a0, 0x8080
    ctx->pc = 0x1572a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x1572a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1572a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1572ac: 0x26e30010  addiu       $v1, $s7, 0x10
    ctx->pc = 0x1572acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x1572b0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1572b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1572b4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1572b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1572b8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1572b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1572bc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x1572bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1572c0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1572c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1572c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1572c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1572c8: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1572c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1572cc: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x1572ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1572d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1572d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1572d4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x1572d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x1572d8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1572d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1572dc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1572dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1572e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1572e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1572e4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x1572e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x1572e8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x1572e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1572ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1572ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1572f0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1572f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1572f4: 0xac247508  sw          $a0, 0x7508($at)
    ctx->pc = 0x1572f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x1572f8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x1572f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1572fc: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x1572fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x157300: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x157300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x157304: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x157304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x157308: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15730c: 0x9422fd64  lhu         $v0, -0x29C($at)
    ctx->pc = 0x15730cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5CFD64u));
    // 0x157310: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x157310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x157314: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x157318: 0xa422fd64  sh          $v0, -0x29C($at)
    ctx->pc = 0x157318u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
    // 0x15731c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15731cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x157320: 0x9422fd64  lhu         $v0, -0x29C($at)
    ctx->pc = 0x157320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x5CFD64u));
    // 0x157324: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x157324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x157328: 0x28410059  slti        $at, $v0, 0x59
    ctx->pc = 0x157328u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)89) ? 1 : 0);
    // 0x15732c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x15732Cu;
    {
        const bool branch_taken_0x15732c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x15732c) {
            ctx->pc = 0x157340u;
            goto label_157340;
        }
    }
    ctx->pc = 0x157334u;
    // 0x157334: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x157334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x157338: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15733c: 0xa424fd64  sh          $a0, -0x29C($at)
    ctx->pc = 0x15733cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5CFD64u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x5CFD64u, _value); } while (0);
label_157340:
    // 0x157340: 0x26e20014  addiu       $v0, $s7, 0x14
    ctx->pc = 0x157340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x157344: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x157344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x157348: 0x3c030df0  lui         $v1, 0xDF0
    ctx->pc = 0x157348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3568 << 16));
    // 0x15734c: 0x34631ff0  ori         $v1, $v1, 0x1FF0
    ctx->pc = 0x15734cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8176);
    // 0x157350: 0x26e20020  addiu       $v0, $s7, 0x20
    ctx->pc = 0x157350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x157354: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157354u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157358: 0x3c0278fb  lui         $v0, 0x78FB
    ctx->pc = 0x157358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30971 << 16));
    // 0x15735c: 0x34426ff7  ori         $v0, $v0, 0x6FF7
    ctx->pc = 0x15735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28663);
    // 0x157360: 0x26e40018  addiu       $a0, $s7, 0x18
    ctx->pc = 0x157360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x157364: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x157364u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x157368: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x157368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x15736c: 0x26e2001c  addiu       $v0, $s7, 0x1C
    ctx->pc = 0x15736cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 28));
    // 0x157370: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157374: 0x3c0286eb  lui         $v0, 0x86EB
    ctx->pc = 0x157374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34539 << 16));
    // 0x157378: 0x34438fe7  ori         $v1, $v0, 0x8FE7
    ctx->pc = 0x157378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36839);
    // 0x15737c: 0x26e20024  addiu       $v0, $s7, 0x24
    ctx->pc = 0x15737cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 36));
    // 0x157380: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x157380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157384: 0x3403fff8  ori         $v1, $zero, 0xFFF8
    ctx->pc = 0x157384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x157388: 0x26e20028  addiu       $v0, $s7, 0x28
    ctx->pc = 0x157388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 40));
    // 0x15738c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x15738cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x157390: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x157390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x157394: 0x8c240140  lw          $a0, 0x140($at)
    ctx->pc = 0x157394u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D0140u));
    // 0x157398: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x157398u;
    {
        const bool branch_taken_0x157398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x157398) {
            ctx->pc = 0x1573DCu;
            goto label_1573dc;
        }
    }
    ctx->pc = 0x1573A0u;
    // 0x1573a0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1573a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1573a4: 0x2445ec58  addiu       $a1, $v0, -0x13A8
    ctx->pc = 0x1573a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1573a8: 0x26915508  addiu       $s1, $s4, 0x5508
    ctx->pc = 0x1573a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 21768));
    // 0x1573ac: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x1573acu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC58u));
    // 0x1573b0: 0xdcb20008  ld          $s2, 0x8($a1)
    ctx->pc = 0x1573b0u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x47EC60u));
    // 0x1573b4: 0xdca30010  ld          $v1, 0x10($a1)
    ctx->pc = 0x1573b4u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC68u));
    // 0x1573b8: 0xdca20018  ld          $v0, 0x18($a1)
    ctx->pc = 0x1573b8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC70u));
    // 0x1573bc: 0xfe240000  sd          $a0, 0x0($s1)
    ctx->pc = 0x1573bcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 4));
    // 0x1573c0: 0xfe320008  sd          $s2, 0x8($s1)
    ctx->pc = 0x1573c0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 18));
    // 0x1573c4: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x1573c4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x1573c8: 0xfe220018  sd          $v0, 0x18($s1)
    ctx->pc = 0x1573c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
    // 0x1573cc: 0xdca30020  ld          $v1, 0x20($a1)
    ctx->pc = 0x1573ccu;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC78u));
    // 0x1573d0: 0xfe230020  sd          $v1, 0x20($s1)
    ctx->pc = 0x1573d0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 3));
    // 0x1573d4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1573D4u;
    {
        const bool branch_taken_0x1573d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1573d4) {
            ctx->pc = 0x157410u;
            goto label_157410;
        }
    }
    ctx->pc = 0x1573DCu;
label_1573dc:
    // 0x1573dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1573dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1573e0: 0x2447ec80  addiu       $a3, $v0, -0x1380
    ctx->pc = 0x1573e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962304));
    // 0x1573e4: 0x26865508  addiu       $a2, $s4, 0x5508
    ctx->pc = 0x1573e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 21768));
    // 0x1573e8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x1573e8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47EC80u));
    // 0x1573ec: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x1573ecu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47EC88u));
    // 0x1573f0: 0xdce50010  ld          $a1, 0x10($a3)
    ctx->pc = 0x1573f0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47EC90u));
    // 0x1573f4: 0xdce20018  ld          $v0, 0x18($a3)
    ctx->pc = 0x1573f4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47EC98u));
    // 0x1573f8: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1573f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1573fc: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x1573fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x157400: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x157400u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x157404: 0xfcc20018  sd          $v0, 0x18($a2)
    ctx->pc = 0x157404u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 2));
    // 0x157408: 0xdcf20020  ld          $s2, 0x20($a3)
    ctx->pc = 0x157408u;
    SET_GPR_U64(ctx, 18, FAST_READ64(0x47ECA0u));
    // 0x15740c: 0xfcd20020  sd          $s2, 0x20($a2)
    ctx->pc = 0x15740cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 18));
label_157410:
    // 0x157410: 0x92835524  lbu         $v1, 0x5524($s4)
    ctx->pc = 0x157410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21796)));
    // 0x157414: 0x301e0001  andi        $fp, $zero, 0x1
    ctx->pc = 0x157414u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x157418: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x157418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x15741c: 0x241efffb  addiu       $fp, $zero, -0x5
    ctx->pc = 0x15741cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x157420: 0x7eb024  and         $s6, $v1, $fp
    ctx->pc = 0x157420u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x157424: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x157424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x157428: 0xa2825524  sb          $v0, 0x5524($s4)
    ctx->pc = 0x157428u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21796), (uint8_t)GPR_U32(ctx, 2));
    // 0x15742c: 0x92855524  lbu         $a1, 0x5524($s4)
    ctx->pc = 0x15742cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21796)));
    // 0x157430: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x157430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x157434: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x157434u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x157438: 0x2403ffe7  addiu       $v1, $zero, -0x19
    ctx->pc = 0x157438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x15743c: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x15743cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x157440: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x157440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x157444: 0xa2835524  sb          $v1, 0x5524($s4)
    ctx->pc = 0x157444u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21796), (uint8_t)GPR_U32(ctx, 3));
    // 0x157448: 0x26825508  addiu       $v0, $s4, 0x5508
    ctx->pc = 0x157448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 21768));
    // 0x15744c: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x15744cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
    // 0x157450: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x157450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x157454: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x157454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x157458: 0x72e02e28  paddub      $a1, $s7, $zero
    ctx->pc = 0x157458u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 23), GPR_VEC(ctx, 0)));
    // 0x15745c: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x15745Cu;
    SET_GPR_U32(ctx, 31, 0x157464u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x15745Cu, 0x157464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157464u;
label_157464:
    // 0x157464: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x157464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x157468: 0x2446ecd0  addiu       $a2, $v0, -0x1330
    ctx->pc = 0x157468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962384));
    // 0x15746c: 0x269654e0  addiu       $s6, $s4, 0x54E0
    ctx->pc = 0x15746cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 21728));
    // 0x157470: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x157470u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x47ECD0u));
    // 0x157474: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x157474u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47ECD8u));
    // 0x157478: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x157478u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47ECE0u));
    // 0x15747c: 0xdcc20018  ld          $v0, 0x18($a2)
    ctx->pc = 0x15747cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECE8u));
    // 0x157480: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x157480u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x157484: 0xfec40008  sd          $a0, 0x8($s6)
    ctx->pc = 0x157484u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 4));
    // 0x157488: 0xfec30010  sd          $v1, 0x10($s6)
    ctx->pc = 0x157488u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 16), GPR_U64(ctx, 3));
    // 0x15748c: 0xfec20018  sd          $v0, 0x18($s6)
    ctx->pc = 0x15748cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 24), GPR_U64(ctx, 2));
    // 0x157490: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x157490u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x47ECF0u));
    // 0x157494: 0xfec20020  sd          $v0, 0x20($s6)
    ctx->pc = 0x157494u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 32), GPR_U64(ctx, 2));
    // 0x157498: 0x928354fc  lbu         $v1, 0x54FC($s4)
    ctx->pc = 0x157498u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21756)));
    // 0x15749c: 0x30020001  andi        $v0, $zero, 0x1
    ctx->pc = 0x15749cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x1574a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1574a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1574a4: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1574a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1574a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1574a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1574ac: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x1574acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1574b0: 0xa28254fc  sb          $v0, 0x54FC($s4)
    ctx->pc = 0x1574b0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1574b4: 0x929654fc  lbu         $s6, 0x54FC($s4)
    ctx->pc = 0x1574b4u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 21756)));
    // 0x1574b8: 0x30020003  andi        $v0, $zero, 0x3
    ctx->pc = 0x1574b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)3);
    // 0x1574bc: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1574bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1574c0: 0x2402ffe7  addiu       $v0, $zero, -0x19
    ctx->pc = 0x1574c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
    // 0x1574c4: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x1574c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x1574c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1574c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1574cc: 0xa28254fc  sb          $v0, 0x54FC($s4)
    ctx->pc = 0x1574ccu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 21756), (uint8_t)GPR_U32(ctx, 2));
    // 0x1574d0: 0x268300dc  addiu       $v1, $s4, 0xDC
    ctx->pc = 0x1574d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 220));
    // 0x1574d4: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1574d4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1574d8: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x1574d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1574dc: 0x100003c0  b           . + 4 + (0x3C0 << 2)
    ctx->pc = 0x1574DCu;
    {
        const bool branch_taken_0x1574dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1574dc) {
            ctx->pc = 0x1583E0u;
            goto label_1583e0;
        }
    }
    ctx->pc = 0x1574E4u;
label_1574e4:
    // 0x1574e4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1574e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1574e8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1574e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1574ec: 0x2485f760  addiu       $a1, $a0, -0x8A0
    ctx->pc = 0x1574ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x1574f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1574f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1574f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1574f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1574f8: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x1574f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x1574fc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1574fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157500: 0x0  nop
    ctx->pc = 0x157500u;
    // NOP
    // 0x157504: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157504u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157508: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x157508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15750c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15750cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157510: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157514: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15751c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157524: 0x0  nop
    ctx->pc = 0x157524u;
    // NOP
    // 0x157528: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157528u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15752c: 0x0  nop
    ctx->pc = 0x15752cu;
    // NOP
    // 0x157530: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x157530u;
    {
        const bool branch_taken_0x157530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157530) {
            ctx->pc = 0x157580u;
            goto label_157580;
        }
    }
    ctx->pc = 0x157538u;
    // 0x157538: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x15753c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15753cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157540: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157540u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157544: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157548: 0x2482f760  addiu       $v0, $a0, -0x8A0
    ctx->pc = 0x157548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x15754c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157550: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x157550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x157554: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x157554u;
    SET_GPR_U32(ctx, 31, 0x15755Cu);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x157554u, 0x15755Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15755Cu;
label_15755c:
    // 0x15755c: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x15755cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x157560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157564: 0x0  nop
    ctx->pc = 0x157564u;
    // NOP
    // 0x157568: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x157568u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15756c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x15756cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157570: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157574: 0x2443f7d0  addiu       $v1, $v0, -0x830
    ctx->pc = 0x157574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157578: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15757c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x15757cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_157580:
    // 0x157580: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157584: 0x0  nop
    ctx->pc = 0x157584u;
    // NOP
    // 0x157588: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x157588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x15758c: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x15758cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x157590: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x157590u;
    {
        const bool branch_taken_0x157590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157590) {
            ctx->pc = 0x1576F8u;
            goto label_1576f8;
        }
    }
    ctx->pc = 0x157598u;
label_157598:
    // 0x157598: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x157598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
    // 0x15759c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x15759cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1575a0: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x1575a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1575a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1575a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1575a8: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x1575a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1575ac: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1575acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1575b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1575b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1575b4: 0x2485f760  addiu       $a1, $a0, -0x8A0
    ctx->pc = 0x1575b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x1575b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1575b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1575bc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1575bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1575c0: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x1575c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1575c4: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1575c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1575c8: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x1575c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x1575cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1575ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1575d0: 0x0  nop
    ctx->pc = 0x1575d0u;
    // NOP
    // 0x1575d4: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1575d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x1575d8: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1575d8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1575dc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1575DCu;
    {
        const bool branch_taken_0x1575dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1575dc) {
            ctx->pc = 0x1576C8u;
            goto label_1576c8;
        }
    }
    ctx->pc = 0x1575E4u;
label_1575e4:
    // 0x1575e4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x1575e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x1575e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1575e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1575ec: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1575ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1575f0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1575f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1575f4: 0xe7a201f4  swc1        $f2, 0x1F4($sp)
    ctx->pc = 0x1575f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x1575f8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1575f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1575fc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1575fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157600: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157604: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x157604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157608: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x157608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15760c: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x15760cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157610: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157614: 0xe7a001f4  swc1        $f0, 0x1F4($sp)
    ctx->pc = 0x157614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
    // 0x157618: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x157618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x15761c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15761cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157620: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x157620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157624: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157624u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157628: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15762c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x15762cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157630: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x157630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x157634: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x157634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157638: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x157638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x15763c: 0x3c054380  lui         $a1, 0x4380
    ctx->pc = 0x15763cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17280 << 16));
    // 0x157640: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x157640u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157644: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x157644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157648: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157648u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x15764c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15764cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157650: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x157650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157654: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x157654u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x157658: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15765c: 0xe4410120  swc1        $f1, 0x120($v0)
    ctx->pc = 0x15765cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x157660: 0x3c0344e0  lui         $v1, 0x44E0
    ctx->pc = 0x157660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17632 << 16));
    // 0x157664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157668: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x157668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15766c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15766cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157670: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157674: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x157674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157678: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x157678u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15767c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x15767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x157680: 0xe4400160  swc1        $f0, 0x160($v0)
    ctx->pc = 0x157680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x157684: 0x3c0344f2  lui         $v1, 0x44F2
    ctx->pc = 0x157684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17650 << 16));
    // 0x157688: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157688u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15768c: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x15768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157690: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157694: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x157694u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157698: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x157698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x15769c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15769cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1576a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1576a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1576a4: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1576a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1576a8: 0xc7a101ec  lwc1        $f1, 0x1EC($sp)
    ctx->pc = 0x1576a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1576ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1576acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1576b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1576b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576b4: 0x0  nop
    ctx->pc = 0x1576b4u;
    // NOP
    // 0x1576b8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1576b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1576bc: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x1576bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x1576c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1576c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1576c4: 0x0  nop
    ctx->pc = 0x1576c4u;
    // NOP
label_1576c8:
    // 0x1576c8: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x1576c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1576cc: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x1576CCu;
    {
        const bool branch_taken_0x1576cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1576cc) {
            ctx->pc = 0x1575E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1575e4;
        }
    }
    ctx->pc = 0x1576D4u;
    // 0x1576d4: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x1576d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1576d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1576d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1576dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1576dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1576e0: 0x0  nop
    ctx->pc = 0x1576e0u;
    // NOP
    // 0x1576e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1576e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1576e8: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x1576e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x1576ec: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1576ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1576f0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1576f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1576f4: 0x0  nop
    ctx->pc = 0x1576f4u;
    // NOP
label_1576f8:
    // 0x1576f8: 0x2e420004  sltiu       $v0, $s2, 0x4
    ctx->pc = 0x1576f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1576fc: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x1576FCu;
    {
        const bool branch_taken_0x1576fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1576fc) {
            ctx->pc = 0x157598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157598;
        }
    }
    ctx->pc = 0x157704u;
    // 0x157704: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157708: 0x90224f12  lbu         $v0, 0x4F12($at)
    ctx->pc = 0x157708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F4F12u));
    // 0x15770c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x15770cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x157710: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x157710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157714: 0x10620117  beq         $v1, $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x157714u;
    {
        const bool branch_taken_0x157714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157714) {
            ctx->pc = 0x157B74u;
            goto label_157b74;
        }
    }
    ctx->pc = 0x15771Cu;
    // 0x15771c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15771cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157720: 0x1062007a  beq         $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x157720u;
    {
        const bool branch_taken_0x157720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x157720) {
            ctx->pc = 0x15790Cu;
            goto label_15790c;
        }
    }
    ctx->pc = 0x157728u;
    // 0x157728: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157728u;
    {
        const bool branch_taken_0x157728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157728) {
            ctx->pc = 0x157738u;
            goto label_157738;
        }
    }
    ctx->pc = 0x157730u;
    // 0x157730: 0x10000273  b           . + 4 + (0x273 << 2)
    ctx->pc = 0x157730u;
    {
        const bool branch_taken_0x157730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157730) {
            ctx->pc = 0x158100u;
            goto label_158100;
        }
    }
    ctx->pc = 0x157738u;
label_157738:
    // 0x157738: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157738u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15773c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x15773Cu;
    {
        const bool branch_taken_0x15773c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15773c) {
            ctx->pc = 0x1578F0u;
            goto label_1578f0;
        }
    }
    ctx->pc = 0x157744u;
label_157744:
    // 0x157744: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157744u;
    SET_GPR_U32(ctx, 31, 0x15774Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157744u, 0x15774Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15774Cu;
label_15774c:
    // 0x15774c: 0x3c153c83  lui         $s5, 0x3C83
    ctx->pc = 0x15774cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)15491 << 16));
    // 0x157750: 0x36a2126f  ori         $v0, $s5, 0x126F
    ctx->pc = 0x157750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4719);
    // 0x157754: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157758: 0x0  nop
    ctx->pc = 0x157758u;
    // NOP
    // 0x15775c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15775cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157760: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157764: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157768: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x15776c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15776cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157770: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157774: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157778: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x157778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15777c: 0x46011883  div.s       $f2, $f3, $f1
    ctx->pc = 0x15777cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
    // 0x157780: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157784: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157788: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15778c: 0x0  nop
    ctx->pc = 0x15778cu;
    // NOP
    // 0x157790: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x157790u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x157794: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157798: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x157798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15779c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x15779cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1577a0: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x1577a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1577a4: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x1577a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1577a8: 0xe44300e4  swc1        $f3, 0xE4($v0)
    ctx->pc = 0x1577a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1577ac: 0xc06765c  jal         func_19D970
    ctx->pc = 0x1577ACu;
    SET_GPR_U32(ctx, 31, 0x1577B4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x1577ACu, 0x1577B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1577B4u;
label_1577b4:
    // 0x1577b4: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x1577b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x1577b8: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1577b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1577bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1577bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1577c0: 0x0  nop
    ctx->pc = 0x1577c0u;
    // NOP
    // 0x1577c4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1577c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1577c8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1577c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1577cc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1577ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1577d0: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x1577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1577d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1577d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1577d8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1577d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1577dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1577dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1577e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1577e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1577e4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1577e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1577e8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x1577e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x1577ec: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x1577ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1577f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1577f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1577f4: 0x0  nop
    ctx->pc = 0x1577f4u;
    // NOP
    // 0x1577f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1577f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1577fc: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1577fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157800: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157804: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x157804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157808: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x157808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15780c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15780cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157810: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x157810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x157814: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157814u;
    SET_GPR_U32(ctx, 31, 0x15781Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157814u, 0x15781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15781Cu;
label_15781c:
    // 0x15781c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x15781cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157820: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157828: 0x0  nop
    ctx->pc = 0x157828u;
    // NOP
    // 0x15782c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x15782cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157830: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157834: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157838: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x15783c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x15783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157840: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157844: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157848: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15784c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x15784cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157850: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157854: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x157854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x157858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15785c: 0x0  nop
    ctx->pc = 0x15785cu;
    // NOP
    // 0x157860: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157864: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157868: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15786c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x15786cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157870: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x157870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157874: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157878: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x157878u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x15787c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x15787Cu;
    SET_GPR_U32(ctx, 31, 0x157884u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x15787Cu, 0x157884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157884u;
label_157884:
    // 0x157884: 0x3c043c03  lui         $a0, 0x3C03
    ctx->pc = 0x157884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15363 << 16));
    // 0x157888: 0x3482126f  ori         $v0, $a0, 0x126F
    ctx->pc = 0x157888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x15788c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15788cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157890: 0x0  nop
    ctx->pc = 0x157890u;
    // NOP
    // 0x157894: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157898: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15789c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1578a0: 0x2444f760  addiu       $a0, $v0, -0x8A0
    ctx->pc = 0x1578a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1578a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1578a8: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x1578ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1578acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1578b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1578b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578b4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1578b4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1578b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1578b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1578bc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1578bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1578c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1578c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1578c4: 0x0  nop
    ctx->pc = 0x1578c4u;
    // NOP
    // 0x1578c8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1578c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1578cc: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1578ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1578d0: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1578d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1578d4: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1578d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1578d8: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1578d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1578dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1578dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1578e0: 0xe4400128  swc1        $f0, 0x128($v0)
    ctx->pc = 0x1578e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1578e4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1578e8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1578e8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1578ec: 0x0  nop
    ctx->pc = 0x1578ecu;
    // NOP
label_1578f0:
    // 0x1578f0: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x1578f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1578f4: 0x1460ff93  bnez        $v1, . + 4 + (-0x6D << 2)
    ctx->pc = 0x1578F4u;
    {
        const bool branch_taken_0x1578f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1578f4) {
            ctx->pc = 0x157744u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157744;
        }
    }
    ctx->pc = 0x1578FCu;
    // 0x1578fc: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x1578fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x157900: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x157900u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157904: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x157904u;
    {
        const bool branch_taken_0x157904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157904) {
            ctx->pc = 0x158100u;
            goto label_158100;
        }
    }
    ctx->pc = 0x15790Cu;
label_15790c:
    // 0x15790c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157910: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x157910u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157914: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x157914u;
    {
        const bool branch_taken_0x157914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157914) {
            ctx->pc = 0x157B58u;
            goto label_157b58;
        }
    }
    ctx->pc = 0x15791Cu;
label_15791c:
    // 0x15791c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x15791Cu;
    SET_GPR_U32(ctx, 31, 0x157924u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x15791Cu, 0x157924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157924u;
label_157924:
    // 0x157924: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157928: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x15792c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15792cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157930: 0x0  nop
    ctx->pc = 0x157930u;
    // NOP
    // 0x157934: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157938: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15793c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157940: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157948: 0x3c044370  lui         $a0, 0x4370
    ctx->pc = 0x157948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17264 << 16));
    // 0x15794c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15794cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157950: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x157950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157954: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157954u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157958: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x15795c: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x15795cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157960: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157960u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157964: 0x0  nop
    ctx->pc = 0x157964u;
    // NOP
    // 0x157968: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15796c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x15796cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157970: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157974: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157978: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x15797c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15797cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157980: 0x3c0443f1  lui         $a0, 0x43F1
    ctx->pc = 0x157980u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17393 << 16));
    // 0x157984: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x157984u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157988: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x157988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15798c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15798cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157990: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157994: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x157994u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157998: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x157998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
    // 0x15799c: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x15799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1579a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1579a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1579a4: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x1579a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x1579a8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x1579A8u;
    SET_GPR_U32(ctx, 31, 0x1579B0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x1579A8u, 0x1579B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1579B0u;
label_1579b0:
    // 0x1579b0: 0x3c043c03  lui         $a0, 0x3C03
    ctx->pc = 0x1579b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15363 << 16));
    // 0x1579b4: 0x3497126f  ori         $s7, $a0, 0x126F
    ctx->pc = 0x1579b4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4719);
    // 0x1579b8: 0x44970800  mtc1        $s7, $f1
    ctx->pc = 0x1579b8u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1579bc: 0x0  nop
    ctx->pc = 0x1579bcu;
    // NOP
    // 0x1579c0: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1579c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1579c4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1579c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1579c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1579c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x1579cc: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x1579ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x1579d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1579d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1579d4: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x1579d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x1579d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1579d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1579dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1579dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1579e0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1579e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1579e4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x1579e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1579e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1579e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1579ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1579ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1579f0: 0x0  nop
    ctx->pc = 0x1579f0u;
    // NOP
    // 0x1579f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1579f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1579f8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1579f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1579fc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1579fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157a00: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157a04: 0x2482f7d0  addiu       $v0, $a0, -0x830
    ctx->pc = 0x157a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x157a08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x157a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157a0c: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x157a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x157a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157a14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a18: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157a18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157a1c: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157a1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157a20: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x157a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157a24: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x157a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x157a28: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x157a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157a2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157a30: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x157a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x157a34: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157A34u;
    SET_GPR_U32(ctx, 31, 0x157A3Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157A34u, 0x157A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157A3Cu;
label_157a3c:
    // 0x157a3c: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157a40: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x157a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157a44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157a48: 0x0  nop
    ctx->pc = 0x157a48u;
    // NOP
    // 0x157a4c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157a4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157a50: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157a54: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157a58: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157a5c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x157a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157a60: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157a6c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157a6cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157a70: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157a74: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157a7c: 0x0  nop
    ctx->pc = 0x157a7cu;
    // NOP
    // 0x157a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157a84: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157a88: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157a8c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x157a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x157a90: 0x24a2f7d0  addiu       $v0, $a1, -0x830
    ctx->pc = 0x157a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965200));
    // 0x157a94: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x157a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157a98: 0x3c0543f1  lui         $a1, 0x43F1
    ctx->pc = 0x157a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17393 << 16));
    // 0x157a9c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x157a9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157aa0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157aa4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157aa4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157aa8: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157aac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157ab0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x157ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157ab4: 0xc44000e8  lwc1        $f0, 0xE8($v0)
    ctx->pc = 0x157ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ab8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157abc: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x157abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
    // 0x157ac0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157AC0u;
    SET_GPR_U32(ctx, 31, 0x157AC8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157AC0u, 0x157AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157AC8u;
label_157ac8:
    // 0x157ac8: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x157ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x157acc: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157ad0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157ad4: 0x0  nop
    ctx->pc = 0x157ad4u;
    // NOP
    // 0x157ad8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157ad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157adc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ae0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ae4: 0x2443f760  addiu       $v1, $v0, -0x8A0
    ctx->pc = 0x157ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157ae8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x157ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157aec: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157af0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157af4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157af8: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157af8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157afc: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157b00: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157b04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157b08: 0x0  nop
    ctx->pc = 0x157b08u;
    // NOP
    // 0x157b0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157b0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157b10: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157b10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157b14: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157b14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157b18: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x157b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x157b1c: 0x2462f7d0  addiu       $v0, $v1, -0x830
    ctx->pc = 0x157b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x157b20: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157b24: 0x3c0243f1  lui         $v0, 0x43F1
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17393 << 16));
    // 0x157b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157b2c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157b30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157b34: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x157b34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157b38: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157b3c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x157b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157b40: 0xc4600128  lwc1        $f0, 0x128($v1)
    ctx->pc = 0x157b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157b48: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x157b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x157b4c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x157b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x157b50: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x157b50u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157b54: 0x0  nop
    ctx->pc = 0x157b54u;
    // NOP
label_157b58:
    // 0x157b58: 0x2e440003  sltiu       $a0, $s2, 0x3
    ctx->pc = 0x157b58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x157b5c: 0x1480ff6f  bnez        $a0, . + 4 + (-0x91 << 2)
    ctx->pc = 0x157B5Cu;
    {
        const bool branch_taken_0x157b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x157b5c) {
            ctx->pc = 0x15791Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15791c;
        }
    }
    ctx->pc = 0x157B64u;
    // 0x157b64: 0x3402fff8  ori         $v0, $zero, 0xFFF8
    ctx->pc = 0x157b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x157b68: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x157b68u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x157b6c: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x157B6Cu;
    {
        const bool branch_taken_0x157b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157b6c) {
            ctx->pc = 0x158100u;
            goto label_158100;
        }
    }
    ctx->pc = 0x157B74u;
label_157b74:
    // 0x157b74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157b78: 0xc4214f1c  lwc1        $f1, 0x4F1C($at)
    ctx->pc = 0x157b78u;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157b7c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157b80: 0xc4204f18  lwc1        $f0, 0x4F18($at)
    ctx->pc = 0x157b80u;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157b88: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x157b8c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
    // 0x157b90: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x157b90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157b94: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157b98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157b9c: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
    // 0x157ba0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157ba4: 0xc4214f1c  lwc1        $f1, 0x4F1C($at)
    ctx->pc = 0x157ba4u;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ba8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157bac: 0xc4204f18  lwc1        $f0, 0x4F18($at)
    ctx->pc = 0x157bacu;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157bb0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157bb0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157bb4: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x157bb8: 0x3c113f00  lui         $s1, 0x3F00
    ctx->pc = 0x157bb8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)16128 << 16));
    // 0x157bbc: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x157bbcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157bc0: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157bc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157bc8: 0xe7a001fc  swc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
    // 0x157bcc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157bd0: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x157bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x157bd4: 0x2643f7d0  addiu       $v1, $s2, -0x830
    ctx->pc = 0x157bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294965200));
    // 0x157bd8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157bdc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157be0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157be0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157be4: 0xc4204f18  lwc1        $f0, 0x4F18($at)
    ctx->pc = 0x157be4u;
    { uint32_t bits = FAST_READ32(0x3F4F18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157be8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x157be8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157bec: 0x0  nop
    ctx->pc = 0x157becu;
    // NOP
    // 0x157bf0: 0x4501013f  bc1t        . + 4 + (0x13F << 2)
    ctx->pc = 0x157BF0u;
    {
        const bool branch_taken_0x157bf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157bf0) {
            ctx->pc = 0x1580F0u;
            goto label_1580f0;
        }
    }
    ctx->pc = 0x157BF8u;
    // 0x157bf8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157bfc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157c00: 0x2447f7d0  addiu       $a3, $v0, -0x830
    ctx->pc = 0x157c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157c04: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x157c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x157c08: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x157c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c0c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157c10: 0xc4204f1c  lwc1        $f0, 0x4F1C($at)
    ctx->pc = 0x157c10u;
    { uint32_t bits = FAST_READ32(0x3F4F1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157c14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c18: 0x0  nop
    ctx->pc = 0x157c18u;
    // NOP
    // 0x157c1c: 0x45000134  bc1f        . + 4 + (0x134 << 2)
    ctx->pc = 0x157C1Cu;
    {
        const bool branch_taken_0x157c1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157c1c) {
            ctx->pc = 0x1580F0u;
            goto label_1580f0;
        }
    }
    ctx->pc = 0x157C24u;
    // 0x157c24: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157c28: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157c2c: 0x2485f760  addiu       $a1, $a0, -0x8A0
    ctx->pc = 0x157c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
    // 0x157c30: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x157c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x157c34: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c38: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x157c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x157c3c: 0xc4204f20  lwc1        $f0, 0x4F20($at)
    ctx->pc = 0x157c3cu;
    { uint32_t bits = FAST_READ32(0x3F4F20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c40: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157c40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c44: 0x0  nop
    ctx->pc = 0x157c44u;
    // NOP
    // 0x157c48: 0x45000129  bc1f        . + 4 + (0x129 << 2)
    ctx->pc = 0x157C48u;
    {
        const bool branch_taken_0x157c48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157c48) {
            ctx->pc = 0x1580F0u;
            goto label_1580f0;
        }
    }
    ctx->pc = 0x157C50u;
    // 0x157c50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c54: 0x10000122  b           . + 4 + (0x122 << 2)
    ctx->pc = 0x157C54u;
    {
        const bool branch_taken_0x157c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c54) {
            ctx->pc = 0x1580E0u;
            goto label_1580e0;
        }
    }
    ctx->pc = 0x157C5Cu;
label_157c5c:
    // 0x157c5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157c60: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x157c60u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
    // 0x157c64: 0x27c2f7d0  addiu       $v0, $fp, -0x830
    ctx->pc = 0x157c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965200));
    // 0x157c68: 0x43f021  addu        $fp, $v0, $v1
    ctx->pc = 0x157c68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157c6c: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x157c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157c70: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c74: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157c78: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157c7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157c7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157c80: 0x0  nop
    ctx->pc = 0x157c80u;
    // NOP
    // 0x157c84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c88: 0x0  nop
    ctx->pc = 0x157c88u;
    // NOP
    // 0x157c8c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157c8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157c90: 0x0  nop
    ctx->pc = 0x157c90u;
    // NOP
    // 0x157c94: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157C94u;
    {
        const bool branch_taken_0x157c94 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157c94) {
            ctx->pc = 0x157CD4u;
            goto label_157cd4;
        }
    }
    ctx->pc = 0x157C9Cu;
    // 0x157c9c: 0x13b080  sll         $s6, $s3, 2
    ctx->pc = 0x157c9cu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ca0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ca4: 0x2445f7d0  addiu       $a1, $v0, -0x830
    ctx->pc = 0x157ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157ca8: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x157ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x157cac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157cb0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cb4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157cb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157cb8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cbc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157cbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157cc0: 0x0  nop
    ctx->pc = 0x157cc0u;
    // NOP
    // 0x157cc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157cc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157cc8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x157cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x157ccc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157CCCu;
    {
        const bool branch_taken_0x157ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ccc) {
            ctx->pc = 0x157D00u;
            goto label_157d00;
        }
    }
    ctx->pc = 0x157CD4u;
label_157cd4:
    // 0x157cd4: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157cd8: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x157cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x157cdc: 0x2462f7d0  addiu       $v0, $v1, -0x830
    ctx->pc = 0x157cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x157ce0: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x157ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157ce4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x157ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ce8: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157cecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157cf0: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157cf4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157cf4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157cf8: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x157cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x157cfc: 0x0  nop
    ctx->pc = 0x157cfcu;
    // NOP
label_157d00:
    // 0x157d00: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157D00u;
    SET_GPR_U32(ctx, 31, 0x157D08u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157D00u, 0x157D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D08u;
label_157d08:
    // 0x157d08: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157d0c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d14: 0x0  nop
    ctx->pc = 0x157d14u;
    // NOP
    // 0x157d18: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157d1c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157d20: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157d24: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157d28: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x157d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157d2c: 0x3c164370  lui         $s6, 0x4370
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)17264 << 16));
    // 0x157d30: 0x44960800  mtc1        $s6, $f1
    ctx->pc = 0x157d30u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d34: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x157d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d38: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157d38u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157d3c: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x157d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
    // 0x157d40: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x157d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x157d44: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157d44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157d48: 0x0  nop
    ctx->pc = 0x157d48u;
    // NOP
    // 0x157d4c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157d4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157d50: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157d50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157d54: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x157d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x157d58: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157d5c: 0xc7a00200  lwc1        $f0, 0x200($sp)
    ctx->pc = 0x157d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157d60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157d64: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157d64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157d68: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157d6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x157d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157d70: 0xc44000e4  lwc1        $f0, 0xE4($v0)
    ctx->pc = 0x157d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157d78: 0xe44000e4  swc1        $f0, 0xE4($v0)
    ctx->pc = 0x157d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 228), bits); }
    // 0x157d7c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157d80: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157d84: 0x2444f7d0  addiu       $a0, $v0, -0x830
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157d88: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x157d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x157d8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157d90: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d94: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157d94u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157d98: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d9c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157d9cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157da0: 0x0  nop
    ctx->pc = 0x157da0u;
    // NOP
    // 0x157da4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157da8: 0x0  nop
    ctx->pc = 0x157da8u;
    // NOP
    // 0x157dac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157db0: 0x0  nop
    ctx->pc = 0x157db0u;
    // NOP
    // 0x157db4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157DB4u;
    {
        const bool branch_taken_0x157db4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157db4) {
            ctx->pc = 0x157DF4u;
            goto label_157df4;
        }
    }
    ctx->pc = 0x157DBCu;
    // 0x157dbc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157dc0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157dc4: 0x2456f7d0  addiu       $s6, $v0, -0x830
    ctx->pc = 0x157dc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157dc8: 0x2c31021  addu        $v0, $s6, $v1
    ctx->pc = 0x157dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x157dcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157dd0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157dd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157dd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157dd8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ddc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157ddcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157de0: 0x0  nop
    ctx->pc = 0x157de0u;
    // NOP
    // 0x157de4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157de4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157de8: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x157de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x157dec: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157DECu;
    {
        const bool branch_taken_0x157dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157dec) {
            ctx->pc = 0x157E20u;
            goto label_157e20;
        }
    }
    ctx->pc = 0x157DF4u;
label_157df4:
    // 0x157df4: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157df8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157dfc: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157e00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157e04: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e08: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157e0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157e10: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e14: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x157e14u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157e18: 0xe7a00204  swc1        $f0, 0x204($sp)
    ctx->pc = 0x157e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
    // 0x157e1c: 0x0  nop
    ctx->pc = 0x157e1cu;
    // NOP
label_157e20:
    // 0x157e20: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157E20u;
    SET_GPR_U32(ctx, 31, 0x157E28u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157E20u, 0x157E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E28u;
label_157e28:
    // 0x157e28: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x157e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x157e2c: 0x3443126f  ori         $v1, $v0, 0x126F
    ctx->pc = 0x157e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157e30: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157e34: 0x0  nop
    ctx->pc = 0x157e34u;
    // NOP
    // 0x157e38: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157e38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157e3c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157e40: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x157e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x157e44: 0x24a2f760  addiu       $v0, $a1, -0x8A0
    ctx->pc = 0x157e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965088));
    // 0x157e48: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x157e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157e4c: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x157e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
    // 0x157e50: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x157e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157e54: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x157e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e58: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x157e58u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157e5c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x157e60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x157e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x157e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157e68: 0x0  nop
    ctx->pc = 0x157e68u;
    // NOP
    // 0x157e6c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157e6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157e70: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157e74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x157e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x157e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157e7c: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x157e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e80: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157e80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157e84: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157e88: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x157e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157e8c: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x157e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x157e90: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x157e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157e94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157e98: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x157e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x157e9c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ea0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ea4: 0x2442f7d0  addiu       $v0, $v0, -0x830
    ctx->pc = 0x157ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157ea8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157eac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x157eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157eb0: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x157eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157eb4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x157eb4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x157eb8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ebc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157ebcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157ec0: 0x0  nop
    ctx->pc = 0x157ec0u;
    // NOP
    // 0x157ec4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157ec8: 0x0  nop
    ctx->pc = 0x157ec8u;
    // NOP
    // 0x157ecc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157eccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157ed0: 0x0  nop
    ctx->pc = 0x157ed0u;
    // NOP
    // 0x157ed4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157ED4u;
    {
        const bool branch_taken_0x157ed4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ed4) {
            ctx->pc = 0x157F14u;
            goto label_157f14;
        }
    }
    ctx->pc = 0x157EDCu;
    // 0x157edc: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x157edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157ee0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157ee4: 0x2443f7d0  addiu       $v1, $v0, -0x830
    ctx->pc = 0x157ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157ee8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x157ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x157eec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157ef0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157ef4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157ef4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157ef8: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x157ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157efc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157efcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157f00: 0x0  nop
    ctx->pc = 0x157f00u;
    // NOP
    // 0x157f04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x157f04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x157f08: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x157f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x157f0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157F0Cu;
    {
        const bool branch_taken_0x157f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157f0c) {
            ctx->pc = 0x157F40u;
            goto label_157f40;
        }
    }
    ctx->pc = 0x157F14u;
label_157f14:
    // 0x157f14: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157f18: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157f1c: 0x2444f7d0  addiu       $a0, $v0, -0x830
    ctx->pc = 0x157f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x157f20: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x157f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x157f24: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x157f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f28: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x157f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157f2c: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x157f2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x157f30: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f34: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157f34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157f38: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x157f38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x157f3c: 0x0  nop
    ctx->pc = 0x157f3cu;
    // NOP
label_157f40:
    // 0x157f40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x157F40u;
    SET_GPR_U32(ctx, 31, 0x157F48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x157F40u, 0x157F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157F48u;
label_157f48:
    // 0x157f48: 0x3c023c83  lui         $v0, 0x3C83
    ctx->pc = 0x157f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15491 << 16));
    // 0x157f4c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x157f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x157f50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f54: 0x0  nop
    ctx->pc = 0x157f54u;
    // NOP
    // 0x157f58: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x157f58u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x157f5c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157f60: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x157f64: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x157f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x157f68: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x157f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157f6c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x157f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x157f70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f74: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x157f78u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x157f7c: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x157f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
    // 0x157f80: 0x3462cccd  ori         $v0, $v1, 0xCCCD
    ctx->pc = 0x157f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x157f84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f88: 0x0  nop
    ctx->pc = 0x157f88u;
    // NOP
    // 0x157f8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x157f8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x157f90: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x157f90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x157f94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x157f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x157f98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x157f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x157f9c: 0xc7a00208  lwc1        $f0, 0x208($sp)
    ctx->pc = 0x157f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fa0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x157fa0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157fa4: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x157fa4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x157fa8: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x157fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x157fac: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x157facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
    // 0x157fb0: 0xc4a000e8  lwc1        $f0, 0xE8($a1)
    ctx->pc = 0x157fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fb4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x157fb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x157fb8: 0xe4a000e8  swc1        $f0, 0xE8($a1)
    ctx->pc = 0x157fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 232), bits); }
    // 0x157fbc: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x157fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x157fc0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x157fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x157fc4: 0x2483f7d0  addiu       $v1, $a0, -0x830
    ctx->pc = 0x157fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965200));
    // 0x157fc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x157fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157fcc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x157fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157fd0: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x157fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fd4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x157fd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x157fd8: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x157fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157fdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x157fdcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x157fe0: 0x0  nop
    ctx->pc = 0x157fe0u;
    // NOP
    // 0x157fe4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x157fe4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157fe8: 0x0  nop
    ctx->pc = 0x157fe8u;
    // NOP
    // 0x157fec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x157fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157ff0: 0x0  nop
    ctx->pc = 0x157ff0u;
    // NOP
    // 0x157ff4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x157FF4u;
    {
        const bool branch_taken_0x157ff4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x157ff4) {
            ctx->pc = 0x158034u;
            goto label_158034;
        }
    }
    ctx->pc = 0x157FFCu;
    // 0x157ffc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x157ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158000: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x158000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x158004: 0x2444f7d0  addiu       $a0, $v0, -0x830
    ctx->pc = 0x158004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965200));
    // 0x158008: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x158008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15800c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x15800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158010: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x158010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158014: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x158014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x158018: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x158018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15801c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15801cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x158020: 0x0  nop
    ctx->pc = 0x158020u;
    // NOP
    // 0x158024: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x158024u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x158028: 0xe7a0020c  swc1        $f0, 0x20C($sp)
    ctx->pc = 0x158028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x15802c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15802Cu;
    {
        const bool branch_taken_0x15802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15802c) {
            ctx->pc = 0x158060u;
            goto label_158060;
        }
    }
    ctx->pc = 0x158034u;
label_158034:
    // 0x158034: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x158034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158038: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x158038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x15803c: 0x2463f7d0  addiu       $v1, $v1, -0x830
    ctx->pc = 0x15803cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965200));
    // 0x158040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158044: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x158044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158048: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x158048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15804c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15804cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x158050: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x158050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158054: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x158054u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x158058: 0xe7a1020c  swc1        $f1, 0x20C($sp)
    ctx->pc = 0x158058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
    // 0x15805c: 0x0  nop
    ctx->pc = 0x15805cu;
    // NOP
label_158060:
    // 0x158060: 0xc06765c  jal         func_19D970
    ctx->pc = 0x158060u;
    SET_GPR_U32(ctx, 31, 0x158068u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x158060u, 0x158068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158068u;
label_158068:
    // 0x158068: 0x3c023c03  lui         $v0, 0x3C03
    ctx->pc = 0x158068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15363 << 16));
    // 0x15806c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x15806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x158070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158074: 0x0  nop
    ctx->pc = 0x158074u;
    // NOP
    // 0x158078: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x158078u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15807c: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15807cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158080: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x158080u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
    // 0x158084: 0x2622f760  addiu       $v0, $s1, -0x8A0
    ctx->pc = 0x158084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294965088));
    // 0x158088: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x158088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15808c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x15808cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x158090: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x158090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x158094: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x158094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158098: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x158098u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x15809c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x15809cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
    // 0x1580a0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1580a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1580a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1580a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1580a8: 0x0  nop
    ctx->pc = 0x1580a8u;
    // NOP
    // 0x1580ac: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x1580acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1580b0: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1580b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1580b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1580b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1580b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1580b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1580bc: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x1580bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1580c0: 0x46010081  sub.s       $f2, $f0, $f1
    ctx->pc = 0x1580c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1580c4: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1580c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1580c8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1580c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1580cc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1580ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1580d0: 0xc4400128  lwc1        $f0, 0x128($v0)
    ctx->pc = 0x1580d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1580d4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1580d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1580d8: 0xe4410128  swc1        $f1, 0x128($v0)
    ctx->pc = 0x1580d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 296), bits); }
    // 0x1580dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1580dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1580e0:
    // 0x1580e0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1580e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1580e4: 0x1440fedd  bnez        $v0, . + 4 + (-0x123 << 2)
    ctx->pc = 0x1580E4u;
    {
        const bool branch_taken_0x1580e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1580e4) {
            ctx->pc = 0x157C5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_157c5c;
        }
    }
    ctx->pc = 0x1580ECu;
    // 0x1580ec: 0x0  nop
    ctx->pc = 0x1580ecu;
    // NOP
label_1580f0:
    // 0x1580f0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1580f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x1580f4: 0x8c354f14  lw          $s5, 0x4F14($at)
    ctx->pc = 0x1580f4u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3F4F14u));
    // 0x1580f8: 0x0  nop
    ctx->pc = 0x1580f8u;
    // NOP
    // 0x1580fc: 0x0  nop
    ctx->pc = 0x1580fcu;
    // NOP
label_158100:
    // 0x158100: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x158100u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158104: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x158104u;
    {
        const bool branch_taken_0x158104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158104) {
            ctx->pc = 0x1583C8u;
            goto label_1583c8;
        }
    }
    ctx->pc = 0x15810Cu;
label_15810c:
    // 0x15810c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x15810cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x158110: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x158110u;
    {
        const bool branch_taken_0x158110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158110) {
            ctx->pc = 0x1583B8u;
            goto label_1583b8;
        }
    }
    ctx->pc = 0x158118u;
label_158118:
    // 0x158118: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x158118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x15811c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x15811cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x158120: 0x3c027400  lui         $v0, 0x7400
    ctx->pc = 0x158120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29696 << 16));
    // 0x158124: 0x34423a14  ori         $v0, $v0, 0x3A14
    ctx->pc = 0x158124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)14868);
    // 0x158128: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x158128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x15812c: 0x3c028080  lui         $v0, 0x8080
    ctx->pc = 0x15812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32896 << 16));
    // 0x158130: 0x34438080  ori         $v1, $v0, 0x8080
    ctx->pc = 0x158130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x158134: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x158134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x158138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x158138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x15813c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15813cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158140: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158144: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x158144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15814c: 0xc44000e0  lwc1        $f0, 0xE0($v0)
    ctx->pc = 0x15814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158150: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x158150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x158154: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x158154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158158: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15815c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158160: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158164: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x158164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158168: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x158168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15816c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x15816cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x158170: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x158170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158174: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158178: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15817c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15817cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158184: 0xc44100e0  lwc1        $f1, 0xE0($v0)
    ctx->pc = 0x158184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158188: 0xe6010034  swc1        $f1, 0x34($s0)
    ctx->pc = 0x158188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x15818c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158190: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158194: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158198: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x158198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15819c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1581a0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1581a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581a4: 0xc46000e0  lwc1        $f0, 0xE0($v1)
    ctx->pc = 0x1581a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581a8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1581a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x1581ac: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1581acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1581b0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1581b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1581b4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1581b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1581b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1581b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581bc: 0xc4400120  lwc1        $f0, 0x120($v0)
    ctx->pc = 0x1581bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581c0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x1581c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x1581c4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1581c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1581c8: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x1581c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1581cc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1581ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1581d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1581d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1581d4: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1581d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1581d8: 0xc4800120  lwc1        $f0, 0x120($a0)
    ctx->pc = 0x1581d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1581dc: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1581dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1581e0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1581e4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1581e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1581e8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1581e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1581ec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1581ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1581f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1581f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1581f4: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1581f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1581f8: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x1581f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x1581fc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158200: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158200u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158204: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158208: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x158208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15820c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15820cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158214: 0xc4420120  lwc1        $f2, 0x120($v0)
    ctx->pc = 0x158214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x158218: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x158218u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x15821c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15821cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158220: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158224: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x158224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15822c: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x15822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158230: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x158230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x158234: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x158234u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158238: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x158238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15823c: 0x26250001  addiu       $a1, $s1, 0x1
    ctx->pc = 0x15823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158240: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x158240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x158244: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x158244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158248: 0xc4600160  lwc1        $f0, 0x160($v1)
    ctx->pc = 0x158248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15824c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x15824cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x158250: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x158250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158254: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x158254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158258: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x158258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x15825c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x15825cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158260: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x158260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158264: 0xc4a10160  lwc1        $f1, 0x160($a1)
    ctx->pc = 0x158264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158268: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x158268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x15826c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x15826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x158270: 0x2b900  sll         $s7, $v0, 4
    ctx->pc = 0x158270u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x158274: 0x2fd2021  addu        $a0, $s7, $sp
    ctx->pc = 0x158274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 29)));
    // 0x158278: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x158278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15827c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15827cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x158280: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x158280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x158284: 0xc4400160  lwc1        $f0, 0x160($v0)
    ctx->pc = 0x158284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158288: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x158288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x15828c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x15828cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158290: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x158290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x158294: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x158294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15829c: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x15829cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582a0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1582a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1582a4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x1582a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x1582a8: 0x7d2021  addu        $a0, $v1, $sp
    ctx->pc = 0x1582a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x1582ac: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1582acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1582b0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1582b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1582b4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1582b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1582b8: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1582b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1582bc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1582bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1582c0: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x1582c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1582c4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x1582c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1582c8: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1582c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1582cc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1582ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1582d0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1582d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1582d4: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x1582d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582d8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1582d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1582dc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1582dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1582e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1582e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1582e4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1582e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1582e8: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x1582e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1582ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1582f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1582f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1582f4: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1582f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1582f8: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1582f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x1582fc: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1582fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x158300: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x158300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x158304: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x158304u;
    SET_GPR_U32(ctx, 31, 0x15830Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x15830Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15830Cu) { return; }
    ctx->pc = 0x15830Cu;
label_15830c:
    // 0x15830c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x15830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x158310: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x158310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x158314: 0xc040cac  jal         func_1032B0
    ctx->pc = 0x158314u;
    SET_GPR_U32(ctx, 31, 0x15831Cu);
    ctx->pc = 0x1032B0u;
    {
        ctx->pc = 0x15831Cu;
        ps2_stubs::sceVu0FTOI4Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15831Cu) { return; }
    ctx->pc = 0x15831Cu;
label_15831c:
    // 0x15831c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x15831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x158320: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158324: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x158324u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x158328: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x158328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x15832c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x15832cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158330: 0xa604002c  sh          $a0, 0x2C($s0)
    ctx->pc = 0x158330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 44), (uint16_t)GPR_U32(ctx, 4));
    // 0x158334: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x158334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x158338: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x158338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15833c: 0xa603003c  sh          $v1, 0x3C($s0)
    ctx->pc = 0x15833cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 60), (uint16_t)GPR_U32(ctx, 3));
    // 0x158340: 0x8fa300cc  lw          $v1, 0xCC($sp)
    ctx->pc = 0x158340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x158344: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x158344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x158348: 0xa602004c  sh          $v0, 0x4C($s0)
    ctx->pc = 0x158348u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 76), (uint16_t)GPR_U32(ctx, 2));
    // 0x15834c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x15834cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x158350: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158354: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x158354u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x158358: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x158358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x15835c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x15835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x158360: 0xa603002e  sh          $v1, 0x2E($s0)
    ctx->pc = 0x158360u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 3));
    // 0x158364: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x158364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x158368: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x158368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x15836c: 0xa603003e  sh          $v1, 0x3E($s0)
    ctx->pc = 0x15836cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 62), (uint16_t)GPR_U32(ctx, 3));
    // 0x158370: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x158374: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x158374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x158378: 0xa602004e  sh          $v0, 0x4E($s0)
    ctx->pc = 0x158378u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x15837c: 0xae150050  sw          $s5, 0x50($s0)
    ctx->pc = 0x15837cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 21));
    // 0x158380: 0xae150040  sw          $s5, 0x40($s0)
    ctx->pc = 0x158380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 21));
    // 0x158384: 0xae150030  sw          $s5, 0x30($s0)
    ctx->pc = 0x158384u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 21));
    // 0x158388: 0xae150020  sw          $s5, 0x20($s0)
    ctx->pc = 0x158388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 21));
    // 0x15838c: 0x268354e0  addiu       $v1, $s4, 0x54E0
    ctx->pc = 0x15838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 21728));
    // 0x158390: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x158390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x158394: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x158394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x158398: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x158398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15839c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x15839cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1583a0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1583A0u;
    SET_GPR_U32(ctx, 31, 0x1583A8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1583A0u, 0x1583A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A8u;
label_1583a8:
    // 0x1583a8: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x1583a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x1583ac: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x1583acu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1583b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1583b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1583b4: 0x0  nop
    ctx->pc = 0x1583b4u;
    // NOP
label_1583b8:
    // 0x1583b8: 0x2e240003  sltiu       $a0, $s1, 0x3
    ctx->pc = 0x1583b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1583bc: 0x1480ff56  bnez        $a0, . + 4 + (-0xAA << 2)
    ctx->pc = 0x1583BCu;
    {
        const bool branch_taken_0x1583bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583bc) {
            ctx->pc = 0x158118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158118;
        }
    }
    ctx->pc = 0x1583C4u;
    // 0x1583c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1583c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1583c8:
    // 0x1583c8: 0x2e430003  sltiu       $v1, $s2, 0x3
    ctx->pc = 0x1583c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1583cc: 0x1460ff4f  bnez        $v1, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x1583CCu;
    {
        const bool branch_taken_0x1583cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583cc) {
            ctx->pc = 0x15810Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15810c;
        }
    }
    ctx->pc = 0x1583D4u;
    // 0x1583d4: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1583d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1583d8: 0x70409e28  paddub      $s3, $v0, $zero
    ctx->pc = 0x1583d8u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1583dc: 0x0  nop
    ctx->pc = 0x1583dcu;
    // NOP
label_1583e0:
    // 0x1583e0: 0x2e630019  sltiu       $v1, $s3, 0x19
    ctx->pc = 0x1583e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1583e4: 0x1460fc3f  bnez        $v1, . + 4 + (-0x3C1 << 2)
    ctx->pc = 0x1583E4u;
    {
        const bool branch_taken_0x1583e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1583e4) {
            ctx->pc = 0x1574E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1574e4;
        }
    }
    ctx->pc = 0x1583ECu;
    // 0x1583ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1583ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1583f0: 0xae8200a0  sw          $v0, 0xA0($s4)
    ctx->pc = 0x1583f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 2));
    // 0x1583f4: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x1583f8: 0x34c7103f  ori         $a3, $a2, 0x103F
    ctx->pc = 0x1583f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4159);
    // 0x1583fc: 0xae8700a4  sw          $a3, 0xA4($s4)
    ctx->pc = 0x1583fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 7));
    // 0x158400: 0xfe8000a8  sd          $zero, 0xA8($s4)
    ctx->pc = 0x158400u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 0));
    // 0x158404: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x158404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x158408: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x158408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x15840c: 0x268500a0  addiu       $a1, $s4, 0xA0
    ctx->pc = 0x15840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x158410: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158410u;
    SET_GPR_U32(ctx, 31, 0x158418u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158410u, 0x158418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158418u;
label_158418:
    // 0x158418: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15841c: 0x8c320140  lw          $s2, 0x140($at)
    ctx->pc = 0x15841cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x5D0140u));
    // 0x158420: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x158420u;
    {
        const bool branch_taken_0x158420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x158420) {
            ctx->pc = 0x158438u;
            goto label_158438;
        }
    }
    ctx->pc = 0x158428u;
    // 0x158428: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x158428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x15842c: 0x247eec80  addiu       $fp, $v1, -0x1380
    ctx->pc = 0x15842cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962304));
    // 0x158430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x158430u;
    {
        const bool branch_taken_0x158430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x158430) {
            ctx->pc = 0x158440u;
            goto label_158440;
        }
    }
    ctx->pc = 0x158438u;
label_158438:
    // 0x158438: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x158438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x15843c: 0x245eec58  addiu       $fp, $v0, -0x13A8
    ctx->pc = 0x15843cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
label_158440:
    // 0x158440: 0x26960090  addiu       $s6, $s4, 0x90
    ctx->pc = 0x158440u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x158444: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x158444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158448: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x158448u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x15844c: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x15844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x158450: 0x34451050  ori         $a1, $v0, 0x1050
    ctx->pc = 0x158450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4176);
    // 0x158454: 0xaec50004  sw          $a1, 0x4($s6)
    ctx->pc = 0x158454u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 5));
    // 0x158458: 0x97c40018  lhu         $a0, 0x18($fp)
    ctx->pc = 0x158458u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x15845c: 0x30833fff  andi        $v1, $a0, 0x3FFF
    ctx->pc = 0x15845cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    // 0x158460: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x158460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x158464: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x158464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x158468: 0x24021400  addiu       $v0, $zero, 0x1400
    ctx->pc = 0x158468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
    // 0x15846c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x15846cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x158470: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x158470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x158474: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x158474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x158478: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x158478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x15847c: 0x823025  or          $a2, $a0, $v0
    ctx->pc = 0x15847cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x158480: 0xfec60008  sd          $a2, 0x8($s6)
    ctx->pc = 0x158480u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 6));
    // 0x158484: 0x26d6fff0  addiu       $s6, $s6, -0x10
    ctx->pc = 0x158484u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x158488: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x158488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x15848c: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x15848cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x158490: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x158490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x158494: 0x34641051  ori         $a0, $v1, 0x1051
    ctx->pc = 0x158494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4177);
    // 0x158498: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x158498u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
    // 0x15849c: 0xfec00008  sd          $zero, 0x8($s6)
    ctx->pc = 0x15849cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 0));
    // 0x1584a0: 0x26c2fff0  addiu       $v0, $s6, -0x10
    ctx->pc = 0x1584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x1584a4: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1584a4u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1584a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1584a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1584ac: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1584acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1584b0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1584b4: 0x34431052  ori         $v1, $v0, 0x1052
    ctx->pc = 0x1584b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4178);
    // 0x1584b8: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x1584b8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x1584bc: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1584bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1584c0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1584c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1584c4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x1584c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1584c8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1584c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1584cc: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1584ccu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1584d0: 0x26d6fff0  addiu       $s6, $s6, -0x10
    ctx->pc = 0x1584d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967280));
    // 0x1584d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1584d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1584d8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1584d8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1584dc: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1584dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1584e0: 0x34431053  ori         $v1, $v0, 0x1053
    ctx->pc = 0x1584e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4179);
    // 0x1584e4: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x1584e4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
    // 0x1584e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1584e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1584ec: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x1584ecu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x1584f0: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x1584f0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1584f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1584F4u;
    {
        const bool branch_taken_0x1584f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584f4) {
            ctx->pc = 0x158520u;
            goto label_158520;
        }
    }
    ctx->pc = 0x1584FCu;
label_1584fc:
    // 0x1584fc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1584fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x158500: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x158500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x158504: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x158504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x158508: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x158508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15850c: 0x24650060  addiu       $a1, $v1, 0x60
    ctx->pc = 0x15850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x158510: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158510u;
    SET_GPR_U32(ctx, 31, 0x158518u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158510u, 0x158518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158518u;
label_158518:
    // 0x158518: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x158518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15851c: 0x70809628  paddub      $s2, $a0, $zero
    ctx->pc = 0x15851cu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
label_158520:
    // 0x158520: 0x2e430004  sltiu       $v1, $s2, 0x4
    ctx->pc = 0x158520u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x158524: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x158524u;
    {
        const bool branch_taken_0x158524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158524) {
            ctx->pc = 0x1584FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1584fc;
        }
    }
    ctx->pc = 0x15852Cu;
    // 0x15852c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15852cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158530: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x158530u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x158534: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x158534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x158538: 0x34421048  ori         $v0, $v0, 0x1048
    ctx->pc = 0x158538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4168);
    // 0x15853c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x15853cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x158540: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x158540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x158544: 0xfe820008  sd          $v0, 0x8($s4)
    ctx->pc = 0x158544u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 2));
    // 0x158548: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x158548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x15854c: 0x24641614  addiu       $a0, $v1, 0x1614
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5652));
    // 0x158550: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x158550u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x158554: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158554u;
    SET_GPR_U32(ctx, 31, 0x15855Cu);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158554u, 0x15855Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15855Cu;
label_15855c:
    // 0x15855c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x15855cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x158560: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x158560u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x158564: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x158564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x158568: 0x34821043  ori         $v0, $a0, 0x1043
    ctx->pc = 0x158568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4163);
    // 0x15856c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x15856cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x158570: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x158574: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x158574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x158578: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x158578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x15857c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x15857cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x158580: 0xfe830018  sd          $v1, 0x18($s4)
    ctx->pc = 0x158580u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 3));
    // 0x158584: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x158584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x158588: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x158588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x15858c: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x15858cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x158590: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158590u;
    SET_GPR_U32(ctx, 31, 0x158598u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158590u, 0x158598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158598u;
label_158598:
    // 0x158598: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x158598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x15859c: 0xae820040  sw          $v0, 0x40($s4)
    ctx->pc = 0x15859cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
    // 0x1585a0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1585a4: 0x3443104f  ori         $v1, $v0, 0x104F
    ctx->pc = 0x1585a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4175);
    // 0x1585a8: 0xae830044  sw          $v1, 0x44($s4)
    ctx->pc = 0x1585a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
    // 0x1585ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1585acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1585b0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1585b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1585b4: 0x3c020a00  lui         $v0, 0xA00
    ctx->pc = 0x1585b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2560 << 16));
    // 0x1585b8: 0x34420070  ori         $v0, $v0, 0x70
    ctx->pc = 0x1585b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)112);
    // 0x1585bc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1585bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1585c0: 0xfe830048  sd          $v1, 0x48($s4)
    ctx->pc = 0x1585c0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 72), GPR_U64(ctx, 3));
    // 0x1585c4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1585c8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1585cc: 0x26850040  addiu       $a1, $s4, 0x40
    ctx->pc = 0x1585ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1585d0: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x1585D0u;
    SET_GPR_U32(ctx, 31, 0x1585D8u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x1585D0u, 0x1585D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585D8u;
label_1585d8:
    // 0x1585d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1585d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1585dc: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x1585dcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
    // 0x1585e0: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x1585e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x1585e4: 0x34431015  ori         $v1, $v0, 0x1015
    ctx->pc = 0x1585e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4117);
    // 0x1585e8: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x1585e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x1585ec: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x1585ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1585f0: 0xfe830028  sd          $v1, 0x28($s4)
    ctx->pc = 0x1585f0u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 40), GPR_U64(ctx, 3));
    // 0x1585f4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1585f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1585f8: 0x24441614  addiu       $a0, $v0, 0x1614
    ctx->pc = 0x1585f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5652));
    // 0x1585fc: 0x26850020  addiu       $a1, $s4, 0x20
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
    // 0x158600: 0xc05dbd8  jal         func_176F60
    ctx->pc = 0x158600u;
    SET_GPR_U32(ctx, 31, 0x158608u);
    ctx->pc = 0x176F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F60u, 0x158600u, 0x158608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158608u;
label_158608:
    // 0x158608: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x158608u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x15860c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x15860cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x158610: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x158610u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158614: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x158614u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158618: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x158618u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15861c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15861cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158620: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x158620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158624: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x158624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15862c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158630: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x158630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x158634: 0x3e00008  jr          $ra
    ctx->pc = 0x158634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15863Cu;
}
