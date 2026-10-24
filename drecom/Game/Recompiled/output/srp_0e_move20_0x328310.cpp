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

// Function: srp_0e_move20
// Address: 0x328310 - 0x3284b0
void srp_0e_move20_0x328310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("srp_0e_move20_0x328310");
#endif

    switch (ctx->pc) {
        case 0x32832cu: goto label_32832c;
        case 0x3283c8u: goto label_3283c8;
        case 0x3283d0u: goto label_3283d0;
        case 0x32840cu: goto label_32840c;
        case 0x328448u: goto label_328448;
        default: break;
    }

    ctx->pc = 0x328310u;

    // 0x328310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x328314: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x328314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x328318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x328318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x32831c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x32831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x328320: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x328320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328324: 0xc0ca294  jal         func_328A50
    ctx->pc = 0x328324u;
    SET_GPR_U32(ctx, 31, 0x32832Cu);
    ctx->pc = 0x328A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A50u, 0x328324u, 0x32832Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32832Cu;
label_32832c:
    // 0x32832c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x32832cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x328330: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x328330u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x328334: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x328334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x328338: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x328338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32833c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32833cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328340: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328344: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x328344u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x328348: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x328348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32834c: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x32834cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x328350: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x328350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x328354: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x328354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x328358: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32835c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x32835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x328360: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x328360u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x328364: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x328364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x328368: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x328368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x32836c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x32836cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x328370: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x328374: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x328374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x328378: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x328378u;
    {
        const bool branch_taken_0x328378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328378) {
            ctx->pc = 0x3283BCu;
            goto label_3283bc;
        }
    }
    ctx->pc = 0x328380u;
    // 0x328380: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x328380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328384: 0x8c830b18  lw          $v1, 0xB18($a0)
    ctx->pc = 0x328384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2840)));
    // 0x328388: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x328388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x32838c: 0xac830b18  sw          $v1, 0xB18($a0)
    ctx->pc = 0x32838cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2840), GPR_U32(ctx, 3));
    // 0x328390: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x328390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328394: 0xa0600b1c  sb          $zero, 0xB1C($v1)
    ctx->pc = 0x328394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2844), (uint8_t)GPR_U32(ctx, 0));
    // 0x328398: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x328398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32839c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x32839cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283a0: 0xac640358  sw          $a0, 0x358($v1)
    ctx->pc = 0x3283a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 856), GPR_U32(ctx, 4));
    // 0x3283a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3283a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283a8: 0xac600274  sw          $zero, 0x274($v1)
    ctx->pc = 0x3283a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 628), GPR_U32(ctx, 0));
    // 0x3283ac: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x3283acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x3283b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3283b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3283b4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3283b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283b8: 0xe46002dc  swc1        $f0, 0x2DC($v1)
    ctx->pc = 0x3283b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 732), bits); }
label_3283bc:
    // 0x3283bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3283bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3283c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3283C0u;
    {
        const bool branch_taken_0x3283c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3283c0) {
            ctx->pc = 0x328480u;
            goto label_328480;
        }
    }
    ctx->pc = 0x3283C8u;
label_3283c8:
    // 0x3283c8: 0xc067648  jal         func_19D920
    ctx->pc = 0x3283C8u;
    SET_GPR_U32(ctx, 31, 0x3283D0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x3283C8u, 0x3283D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3283D0u;
label_3283d0:
    // 0x3283d0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x3283d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x3283d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3283d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3283d8: 0x0  nop
    ctx->pc = 0x3283d8u;
    // NOP
    // 0x3283dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3283dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3283e0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3283e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3283e4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3283e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3283e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3283ec: 0xc4400480  lwc1        $f0, 0x480($v0)
    ctx->pc = 0x3283ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3283f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3283f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3283f4: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3283f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3283f8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x3283f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3283fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3283fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328400: 0xe4400480  swc1        $f0, 0x480($v0)
    ctx->pc = 0x328400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1152), bits); }
    // 0x328404: 0xc067648  jal         func_19D920
    ctx->pc = 0x328404u;
    SET_GPR_U32(ctx, 31, 0x32840Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328404u, 0x32840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32840Cu;
label_32840c:
    // 0x32840c: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x32840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x328410: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x328410u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x328414: 0x0  nop
    ctx->pc = 0x328414u;
    // NOP
    // 0x328418: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328418u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32841c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x32841cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328420: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x328420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x328428: 0xc4400484  lwc1        $f0, 0x484($v0)
    ctx->pc = 0x328428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32842c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x32842cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x328430: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x328430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328434: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x328434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x328438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x32843c: 0xe4400484  swc1        $f0, 0x484($v0)
    ctx->pc = 0x32843cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1156), bits); }
    // 0x328440: 0xc067648  jal         func_19D920
    ctx->pc = 0x328440u;
    SET_GPR_U32(ctx, 31, 0x328448u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x328440u, 0x328448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328448u;
label_328448:
    // 0x328448: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x328448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x32844c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x32844cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x328450: 0x0  nop
    ctx->pc = 0x328450u;
    // NOP
    // 0x328454: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x328454u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x328458: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x328458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x32845c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x32845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328464: 0xc4600488  lwc1        $f0, 0x488($v1)
    ctx->pc = 0x328464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x328468: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x328468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x32846c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x32846cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x328470: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x328470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328474: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x328474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x328478: 0xe4600488  swc1        $f0, 0x488($v1)
    ctx->pc = 0x328478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1160), bits); }
    // 0x32847c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32847cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_328480:
    // 0x328480: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x328480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x328484: 0x90630348  lbu         $v1, 0x348($v1)
    ctx->pc = 0x328484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 840)));
    // 0x328488: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x328488u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32848c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x328490: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x328490u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x328494: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x328494u;
    {
        const bool branch_taken_0x328494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x328494) {
            ctx->pc = 0x3283C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3283c8;
        }
    }
    ctx->pc = 0x32849Cu;
    // 0x32849c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x32849cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3284a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3284a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3284a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3284a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3284a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3284A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3284A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3284B0u;
}
