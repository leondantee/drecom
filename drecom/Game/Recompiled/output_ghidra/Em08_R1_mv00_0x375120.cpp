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

// Function: Em08_R1_mv00
// Address: 0x375120 - 0x37560c
void Em08_R1_mv00_0x375120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_mv00_0x375120");
#endif

    switch (ctx->pc) {
        case 0x375198u: goto label_375198;
        case 0x3751a0u: goto label_3751a0;
        case 0x375254u: goto label_375254;
        case 0x37528cu: goto label_37528c;
        case 0x3752acu: goto label_3752ac;
        case 0x37533cu: goto label_37533c;
        case 0x375348u: goto label_375348;
        case 0x375358u: goto label_375358;
        case 0x375364u: goto label_375364;
        case 0x3753e8u: goto label_3753e8;
        case 0x3753f0u: goto label_3753f0;
        case 0x375480u: goto label_375480;
        case 0x3754b8u: goto label_3754b8;
        case 0x3754d8u: goto label_3754d8;
        case 0x375568u: goto label_375568;
        case 0x375574u: goto label_375574;
        case 0x375584u: goto label_375584;
        case 0x375590u: goto label_375590;
        case 0x3755d4u: goto label_3755d4;
        case 0x3755dcu: goto label_3755dc;
        default: break;
    }

    ctx->pc = 0x375120u;

    // 0x375120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x375120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x375124: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x375124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x375128: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x375128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37512c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x37512cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x375130: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375134: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x375134u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x375138: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37513c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x37513cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x375140: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x375140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x375144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x375144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x375148: 0x108300b2  beq         $a0, $v1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x375148u;
    {
        const bool branch_taken_0x375148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375148) {
            ctx->pc = 0x375414u;
            goto label_375414;
        }
    }
    ctx->pc = 0x375150u;
    // 0x375150: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x375150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375154: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x375154u;
    {
        const bool branch_taken_0x375154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x375154) {
            ctx->pc = 0x3751E8u;
            goto label_3751e8;
        }
    }
    ctx->pc = 0x37515Cu;
    // 0x37515c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37515Cu;
    {
        const bool branch_taken_0x37515c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37515c) {
            ctx->pc = 0x37516Cu;
            goto label_37516c;
        }
    }
    ctx->pc = 0x375164u;
    // 0x375164: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x375164u;
    {
        const bool branch_taken_0x375164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x375164) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x37516Cu;
label_37516c:
    // 0x37516c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37516cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375170: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375174: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x375174u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x375178: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37517c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375180: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x375180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x375184: 0x3406b403  ori         $a2, $zero, 0xB403
    ctx->pc = 0x375184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46083);
    // 0x375188: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x375188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37518c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x37518cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x375190: 0xc0965d0  jal         func_259740
    ctx->pc = 0x375190u;
    SET_GPR_U32(ctx, 31, 0x375198u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x375190u, 0x375198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375198u;
label_375198:
    // 0x375198: 0xc067694  jal         func_19DA50
    ctx->pc = 0x375198u;
    SET_GPR_U32(ctx, 31, 0x3751A0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x375198u, 0x3751A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3751A0u;
label_3751a0:
    // 0x3751a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3751a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3751a4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x3751a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x3751a8: 0x244201a4  addiu       $v0, $v0, 0x1A4
    ctx->pc = 0x3751a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    // 0x3751ac: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x3751acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3751b0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3751b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x3751b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3751b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3751b8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x3751b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3751bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3751bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3751c0: 0x8c5002d0  lw          $s0, 0x2D0($v0)
    ctx->pc = 0x3751c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x3751c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3751c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751c8: 0x0  nop
    ctx->pc = 0x3751c8u;
    // NOP
    // 0x3751cc: 0xe600011c  swc1        $f0, 0x11C($s0)
    ctx->pc = 0x3751ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x3751d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3751d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751d4: 0x0  nop
    ctx->pc = 0x3751d4u;
    // NOP
    // 0x3751d8: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x3751d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x3751dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3751dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751e0: 0x0  nop
    ctx->pc = 0x3751e0u;
    // NOP
    // 0x3751e4: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x3751e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
label_3751e8:
    // 0x3751e8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3751e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3751ec: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x3751ecu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3751f0: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x3751f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x3751f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3751f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3751f8: 0x0  nop
    ctx->pc = 0x3751f8u;
    // NOP
    // 0x3751fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3751fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375200: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375204: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375208: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x37520c: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x37520cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375210: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x375214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375218: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x37521c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x37521cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375220: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375224: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375228: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x37522c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37522cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375230: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x375230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375234: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375238: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x37523c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37523cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x375240: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x375240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375244: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375248: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x37524c: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x37524Cu;
    SET_GPR_U32(ctx, 31, 0x375254u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x37524Cu, 0x375254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375254u;
label_375254:
    // 0x375254: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375258: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375258u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37525c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375264: 0x0  nop
    ctx->pc = 0x375264u;
    // NOP
    // 0x375268: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x37526c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37526cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375270: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375274: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375278: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x375278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37527c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x375280: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x375280u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375284: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x375284u;
    SET_GPR_U32(ctx, 31, 0x37528Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x375284u, 0x37528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37528Cu;
label_37528c:
    // 0x37528c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375290: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x375290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x375294: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375298: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37529c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x37529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3752a0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3752a0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3752a4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3752A4u;
    SET_GPR_U32(ctx, 31, 0x3752ACu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3752A4u, 0x3752ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752ACu;
label_3752ac:
    // 0x3752ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752b0: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3752b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3752b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752b8: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3752b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3752bc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3752bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3752c0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3752c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3752c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3752c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3752c8: 0x0  nop
    ctx->pc = 0x3752c8u;
    // NOP
    // 0x3752cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3752ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3752d0: 0x0  nop
    ctx->pc = 0x3752d0u;
    // NOP
    // 0x3752d4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3752D4u;
    {
        const bool branch_taken_0x3752d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3752d4) {
            ctx->pc = 0x3752F0u;
            goto label_3752f0;
        }
    }
    ctx->pc = 0x3752DCu;
    // 0x3752dc: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3752dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3752e0: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3752e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3752e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3752e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3752e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752ec: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3752ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_3752f0:
    // 0x3752f0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3752f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3752f4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3752f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3752f8: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x3752f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x3752fc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3752fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375300: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375300u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375304: 0x0  nop
    ctx->pc = 0x375304u;
    // NOP
    // 0x375308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37530c: 0x0  nop
    ctx->pc = 0x37530cu;
    // NOP
    // 0x375310: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x375310u;
    {
        const bool branch_taken_0x375310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375310) {
            ctx->pc = 0x37532Cu;
            goto label_37532c;
        }
    }
    ctx->pc = 0x375318u;
    // 0x375318: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x37531c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x37531cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375328: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_37532c:
    // 0x37532c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37532cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375330: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375330u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375334: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375334u;
    SET_GPR_U32(ctx, 31, 0x37533Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375334u, 0x37533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37533Cu;
label_37533c:
    // 0x37533c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x37533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375340: 0xc05cd10  jal         func_173440
    ctx->pc = 0x375340u;
    SET_GPR_U32(ctx, 31, 0x375348u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x375340u, 0x375348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375348u;
label_375348:
    // 0x375348: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37534c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37534cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375350: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x375350u;
    SET_GPR_U32(ctx, 31, 0x375358u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x375350u, 0x375358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375358u;
label_375358:
    // 0x375358: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37535c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x37535Cu;
    SET_GPR_U32(ctx, 31, 0x375364u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x37535Cu, 0x375364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375364u;
label_375364:
    // 0x375364: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375368: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37536c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37536Cu;
    {
        const bool branch_taken_0x37536c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37536c) {
            ctx->pc = 0x375384u;
            goto label_375384;
        }
    }
    ctx->pc = 0x375374u;
    // 0x375374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375378: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x375378u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x37537c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x37537cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x375380: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x375380u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
label_375384:
    // 0x375384: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375388: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x375388u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x37538c: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x37538Cu;
    {
        const bool branch_taken_0x37538c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37538c) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x375394u;
    // 0x375394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375398: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37539c: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x37539cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x3753a0: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3753a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3753a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3753a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3753a8: 0x0  nop
    ctx->pc = 0x3753a8u;
    // NOP
    // 0x3753ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3753acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3753b0: 0x0  nop
    ctx->pc = 0x3753b0u;
    // NOP
    // 0x3753b4: 0x45000090  bc1f        . + 4 + (0x90 << 2)
    ctx->pc = 0x3753B4u;
    {
        const bool branch_taken_0x3753b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3753b4) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x3753BCu;
    // 0x3753bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3753bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3753c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3753c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3753c4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3753c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3753c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3753c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3753cc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3753ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3753d0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3753d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3753d4: 0x24061e04  addiu       $a2, $zero, 0x1E04
    ctx->pc = 0x3753d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7684));
    // 0x3753d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3753d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3753dc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3753dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3753e0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3753E0u;
    SET_GPR_U32(ctx, 31, 0x3753E8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3753E0u, 0x3753E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753E8u;
label_3753e8:
    // 0x3753e8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3753E8u;
    SET_GPR_U32(ctx, 31, 0x3753F0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3753E8u, 0x3753F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3753F0u;
label_3753f0:
    // 0x3753f0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3753f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3753f4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3753f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3753f8: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3753f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3753fc: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3753fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x375400: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x375400u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x375404: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x375404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375408: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x375408u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
    // 0x37540c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x37540Cu;
    {
        const bool branch_taken_0x37540c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37540c) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x375414u;
label_375414:
    // 0x375414: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375418: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375418u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37541c: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x37541cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x375420: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375424: 0x0  nop
    ctx->pc = 0x375424u;
    // NOP
    // 0x375428: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375428u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37542c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x37542cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375430: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x375430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x375434: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x375434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x375438: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x375438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x37543c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x37543cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x375440: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375444: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x375444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x375448: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375448u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37544c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37544cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375450: 0x3c023bab  lui         $v0, 0x3BAB
    ctx->pc = 0x375450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15275 << 16));
    // 0x375454: 0x344292a6  ori         $v0, $v0, 0x92A6
    ctx->pc = 0x375454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37542);
    // 0x375458: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x375458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x37545c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x37545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x375460: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x375460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x375464: 0xc46d00d0  lwc1        $f13, 0xD0($v1)
    ctx->pc = 0x375464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x375468: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x375468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37546c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x37546cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x375470: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x375470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x375474: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x375474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x375478: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x375478u;
    SET_GPR_U32(ctx, 31, 0x375480u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x375478u, 0x375480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375480u;
label_375480:
    // 0x375480: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x375484: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x375484u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375488: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x375488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x37548c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37548cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375490: 0x0  nop
    ctx->pc = 0x375490u;
    // NOP
    // 0x375494: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x375494u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x375498: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x375498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x37549c: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x37549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x3754a0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754a4: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x3754a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3754a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3754a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3754ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3754acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3754b0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3754B0u;
    SET_GPR_U32(ctx, 31, 0x3754B8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3754B0u, 0x3754B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754B8u;
label_3754b8:
    // 0x3754b8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754bc: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x3754bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x3754c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754c4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3754c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3754c8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3754c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3754cc: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x3754ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3754d0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x3754D0u;
    SET_GPR_U32(ctx, 31, 0x3754D8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x3754D0u, 0x3754D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3754D8u;
label_3754d8:
    // 0x3754d8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754dc: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x3754dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
    // 0x3754e0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3754e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3754e4: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x3754e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3754e8: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x3754e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x3754ec: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x3754ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x3754f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3754f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3754f4: 0x0  nop
    ctx->pc = 0x3754f4u;
    // NOP
    // 0x3754f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3754f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3754fc: 0x0  nop
    ctx->pc = 0x3754fcu;
    // NOP
    // 0x375500: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x375500u;
    {
        const bool branch_taken_0x375500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x375500) {
            ctx->pc = 0x37551Cu;
            goto label_37551c;
        }
    }
    ctx->pc = 0x375508u;
    // 0x375508: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x375508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
    // 0x37550c: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x37550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x375510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x375510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375514: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375518: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_37551c:
    // 0x37551c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x37551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375520: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x375520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375524: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375528: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x37552c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37552cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375530: 0x0  nop
    ctx->pc = 0x375530u;
    // NOP
    // 0x375534: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375538: 0x0  nop
    ctx->pc = 0x375538u;
    // NOP
    // 0x37553c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x37553Cu;
    {
        const bool branch_taken_0x37553c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x37553c) {
            ctx->pc = 0x375558u;
            goto label_375558;
        }
    }
    ctx->pc = 0x375544u;
    // 0x375544: 0x3c02be86  lui         $v0, 0xBE86
    ctx->pc = 0x375544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48774 << 16));
    // 0x375548: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x375548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x37554c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375550: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x375550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375554: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x375554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_375558:
    // 0x375558: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37555c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x37555cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x375560: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x375560u;
    SET_GPR_U32(ctx, 31, 0x375568u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x375560u, 0x375568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375568u;
label_375568:
    // 0x375568: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37556c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x37556Cu;
    SET_GPR_U32(ctx, 31, 0x375574u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x37556Cu, 0x375574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375574u;
label_375574:
    // 0x375574: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375578: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x375578u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x37557c: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x37557Cu;
    SET_GPR_U32(ctx, 31, 0x375584u);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x37557Cu, 0x375584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375584u;
label_375584:
    // 0x375584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x375584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375588: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x375588u;
    SET_GPR_U32(ctx, 31, 0x375590u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x375588u, 0x375590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375590u;
label_375590:
    // 0x375590: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x375590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x375594: 0x84a41278  lh          $a0, 0x1278($a1)
    ctx->pc = 0x375594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4728)));
    // 0x375598: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x375598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x37559c: 0xa4a31278  sh          $v1, 0x1278($a1)
    ctx->pc = 0x37559cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x3755a0: 0x14800015  bnez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3755A0u;
    {
        const bool branch_taken_0x3755a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3755a0) {
            ctx->pc = 0x3755F8u;
            goto label_3755f8;
        }
    }
    ctx->pc = 0x3755A8u;
    // 0x3755a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3755a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3755ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3755acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755b0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x3755b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3755b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3755b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755b8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3755b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755bc: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3755bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3755c0: 0x24061e03  addiu       $a2, $zero, 0x1E03
    ctx->pc = 0x3755c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7683));
    // 0x3755c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3755c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3755c8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3755c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3755cc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3755CCu;
    SET_GPR_U32(ctx, 31, 0x3755D4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3755CCu, 0x3755D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755D4u;
label_3755d4:
    // 0x3755d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x3755D4u;
    SET_GPR_U32(ctx, 31, 0x3755DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x3755D4u, 0x3755DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3755DCu;
label_3755dc:
    // 0x3755dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3755dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3755e0: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x3755e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x3755e4: 0x24630078  addiu       $v1, $v1, 0x78
    ctx->pc = 0x3755e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x3755e8: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x3755e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x3755ec: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x3755ecu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x3755f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3755f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3755f4: 0xa4641278  sh          $a0, 0x1278($v1)
    ctx->pc = 0x3755f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 4));
label_3755f8:
    // 0x3755f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3755f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3755fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3755fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375600: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x375600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x375604: 0x3e00008  jr          $ra
    ctx->pc = 0x375604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37560Cu;
}
