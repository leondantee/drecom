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

// Function: Em10_R1_guard
// Address: 0x1306b0 - 0x130a08
void Em10_R1_guard_0x1306b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_guard_0x1306b0");
#endif

    switch (ctx->pc) {
        case 0x130754u: goto label_130754;
        case 0x13078cu: goto label_13078c;
        case 0x130818u: goto label_130818;
        case 0x13086cu: goto label_13086c;
        case 0x130884u: goto label_130884;
        case 0x130898u: goto label_130898;
        case 0x1308a8u: goto label_1308a8;
        case 0x1308b4u: goto label_1308b4;
        case 0x1308fcu: goto label_1308fc;
        case 0x13093cu: goto label_13093c;
        case 0x130954u: goto label_130954;
        case 0x130968u: goto label_130968;
        case 0x130978u: goto label_130978;
        case 0x130984u: goto label_130984;
        default: break;
    }

    ctx->pc = 0x1306b0u;

    // 0x1306b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1306b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1306b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1306b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1306b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1306b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1306bc: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x1306bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x1306c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1306c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1306c4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x1306c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1306c8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1306c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1306cc: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x1306ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x1306d0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1306d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1306d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1306d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1306d8: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x1306d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x1306dc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1306dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1306e0: 0x8ca4121c  lw          $a0, 0x121C($a1)
    ctx->pc = 0x1306e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4636)));
    // 0x1306e4: 0x3c03f3ff  lui         $v1, 0xF3FF
    ctx->pc = 0x1306e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62463 << 16));
    // 0x1306e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1306e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1306ec: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1306ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1306f0: 0xaca3121c  sw          $v1, 0x121C($a1)
    ctx->pc = 0x1306f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4636), GPR_U32(ctx, 3));
    // 0x1306f4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1306f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1306f8: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x1306f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1306fc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1306fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x130700: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x130700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130704: 0x10830084  beq         $a0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x130704u;
    {
        const bool branch_taken_0x130704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130704) {
            ctx->pc = 0x130918u;
            goto label_130918;
        }
    }
    ctx->pc = 0x13070Cu;
    // 0x13070c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x13070cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130710: 0x10830072  beq         $a0, $v1, . + 4 + (0x72 << 2)
    ctx->pc = 0x130710u;
    {
        const bool branch_taken_0x130710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130710) {
            ctx->pc = 0x1308DCu;
            goto label_1308dc;
        }
    }
    ctx->pc = 0x130718u;
    // 0x130718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13071c: 0x1083004a  beq         $a0, $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x13071Cu;
    {
        const bool branch_taken_0x13071c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13071c) {
            ctx->pc = 0x130848u;
            goto label_130848;
        }
    }
    ctx->pc = 0x130724u;
    // 0x130724: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130724u;
    {
        const bool branch_taken_0x130724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130724) {
            ctx->pc = 0x130734u;
            goto label_130734;
        }
    }
    ctx->pc = 0x13072Cu;
    // 0x13072c: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x13072Cu;
    {
        const bool branch_taken_0x13072c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13072c) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x130734u;
label_130734:
    // 0x130734: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130738: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13073c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x13073cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130740: 0x2406054d  addiu       $a2, $zero, 0x54D
    ctx->pc = 0x130740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1357));
    // 0x130744: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130748: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x13074c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x13074Cu;
    SET_GPR_U32(ctx, 31, 0x130754u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x13074Cu, 0x130754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130754u;
label_130754:
    // 0x130754: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130758: 0x904311ef  lbu         $v1, 0x11EF($v0)
    ctx->pc = 0x130758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4591)));
    // 0x13075c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130760: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x130760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x130764: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130768: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x130768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13076c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x13076Cu;
    {
        const bool branch_taken_0x13076c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13076c) {
            ctx->pc = 0x130828u;
            goto label_130828;
        }
    }
    ctx->pc = 0x130774u;
    // 0x130774: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130778: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13077c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x13077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130780: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x130780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130784: 0xc058f20  jal         func_163C80
    ctx->pc = 0x130784u;
    SET_GPR_U32(ctx, 31, 0x13078Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x130784u, 0x13078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13078Cu;
label_13078c:
    // 0x13078c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x13078cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130790: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130798: 0x0  nop
    ctx->pc = 0x130798u;
    // NOP
    // 0x13079c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13079cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1307a0: 0x0  nop
    ctx->pc = 0x1307a0u;
    // NOP
    // 0x1307a4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1307A4u;
    {
        const bool branch_taken_0x1307a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1307a4) {
            ctx->pc = 0x1307B8u;
            goto label_1307b8;
        }
    }
    ctx->pc = 0x1307ACu;
    // 0x1307ac: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1307acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1307b0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1307b0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1307b4: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x1307b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1307b8:
    // 0x1307b8: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x1307b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1307bc: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1307bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1307c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1307c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1307c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1307c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1307c8: 0x0  nop
    ctx->pc = 0x1307c8u;
    // NOP
    // 0x1307cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1307ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1307d0: 0x0  nop
    ctx->pc = 0x1307d0u;
    // NOP
    // 0x1307d4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1307D4u;
    {
        const bool branch_taken_0x1307d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1307d4) {
            ctx->pc = 0x1307F4u;
            goto label_1307f4;
        }
    }
    ctx->pc = 0x1307DCu;
    // 0x1307dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1307dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1307e0: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x1307e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1307e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1307e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1307e8: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x1307e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x1307ec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1307ECu;
    {
        const bool branch_taken_0x1307ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1307ec) {
            ctx->pc = 0x130838u;
            goto label_130838;
        }
    }
    ctx->pc = 0x1307F4u;
label_1307f4:
    // 0x1307f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1307f8: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x1307f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1307fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1307fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130808: 0x0  nop
    ctx->pc = 0x130808u;
    // NOP
    // 0x13080c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x13080cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130810: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x130810u;
    SET_GPR_U32(ctx, 31, 0x130818u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x130810u, 0x130818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130818u;
label_130818:
    // 0x130818: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13081c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x13081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x130820: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x130820u;
    {
        const bool branch_taken_0x130820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130820) {
            ctx->pc = 0x130838u;
            goto label_130838;
        }
    }
    ctx->pc = 0x130828u;
label_130828:
    // 0x130828: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13082c: 0xc44000d4  lwc1        $f0, 0xD4($v0)
    ctx->pc = 0x13082cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130830: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130834: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_130838:
    // 0x130838: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13083c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13083cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130840: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130844: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130844u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_130848:
    // 0x130848: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x13084c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x13084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130850: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130854: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130858: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13085c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x13085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130860: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x130860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130864: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130864u;
    SET_GPR_U32(ctx, 31, 0x13086Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130864u, 0x13086Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13086Cu;
label_13086c:
    // 0x13086c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13086cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130870: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130874: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130878: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130878u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13087c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13087Cu;
    SET_GPR_U32(ctx, 31, 0x130884u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13087Cu, 0x130884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130884u;
label_130884:
    // 0x130884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130888: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13088c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x13088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130890: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130890u;
    SET_GPR_U32(ctx, 31, 0x130898u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130890u, 0x130898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130898u;
label_130898:
    // 0x130898: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13089c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13089cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1308a0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x1308A0u;
    SET_GPR_U32(ctx, 31, 0x1308A8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x1308A0u, 0x1308A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308A8u;
label_1308a8:
    // 0x1308a8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1308a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308ac: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x1308ACu;
    SET_GPR_U32(ctx, 31, 0x1308B4u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x1308ACu, 0x1308B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308B4u;
label_1308b4:
    // 0x1308b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1308b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308b8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1308b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1308bc: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1308BCu;
    {
        const bool branch_taken_0x1308bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308bc) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x1308C4u;
    // 0x1308c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1308c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308c8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1308c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1308cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1308ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1308d0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1308d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1308d4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1308D4u;
    {
        const bool branch_taken_0x1308d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1308d4) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x1308DCu;
label_1308dc:
    // 0x1308dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308e0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1308e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1308e4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1308e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1308e8: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x1308e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x1308ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1308ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1308f0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1308f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1308f4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1308F4u;
    SET_GPR_U32(ctx, 31, 0x1308FCu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1308F4u, 0x1308FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1308FCu;
label_1308fc:
    // 0x1308fc: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1308fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x130900: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130904: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x130904u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x130908: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13090c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13090cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130914: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_130918:
    // 0x130918: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13091c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x13091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130920: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x130924: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130928: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x13092c: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x13092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130930: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x130930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130934: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130934u;
    SET_GPR_U32(ctx, 31, 0x13093Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130934u, 0x13093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13093Cu;
label_13093c:
    // 0x13093c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x13093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130940: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130944: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130948: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x13094c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x13094Cu;
    SET_GPR_U32(ctx, 31, 0x130954u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x13094Cu, 0x130954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130954u;
label_130954:
    // 0x130954: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130958: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13095c: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x13095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130960: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130960u;
    SET_GPR_U32(ctx, 31, 0x130968u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130960u, 0x130968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130968u;
label_130968:
    // 0x130968: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13096c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x13096cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130970: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130970u;
    SET_GPR_U32(ctx, 31, 0x130978u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130970u, 0x130978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130978u;
label_130978:
    // 0x130978: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13097c: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x13097Cu;
    SET_GPR_U32(ctx, 31, 0x130984u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x13097Cu, 0x130984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130984u;
label_130984:
    // 0x130984: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130988: 0x84631278  lh          $v1, 0x1278($v1)
    ctx->pc = 0x130988u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x13098c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13098Cu;
    {
        const bool branch_taken_0x13098c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13098c) {
            ctx->pc = 0x1309ACu;
            goto label_1309ac;
        }
    }
    ctx->pc = 0x130994u;
    // 0x130994: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130998: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x130998u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x13099c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1309a0: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x1309a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1309a4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1309A4u;
    {
        const bool branch_taken_0x1309a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1309a4) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x1309ACu;
label_1309ac:
    // 0x1309ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1309acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1309b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1309b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1309b8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1309b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1309bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309c0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1309c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1309c4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309c8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1309c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309cc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309d0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1309d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1309d4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1309d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1309d8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1309d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1309dc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1309dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1309e0: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x1309e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x1309e4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x1309e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x1309e8: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x1309e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x1309ec: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1309ECu;
    {
        const bool branch_taken_0x1309ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1309ec) {
            ctx->pc = 0x1309F4u;
            goto label_1309f4;
        }
    }
    ctx->pc = 0x1309F4u;
label_1309f4:
    // 0x1309f4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1309f4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1309f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1309f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1309fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1309fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x130a00: 0x3e00008  jr          $ra
    ctx->pc = 0x130A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130A08u;
}
