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

// Function: Em0a_R1_lariat
// Address: 0x365180 - 0x3654a4
void Em0a_R1_lariat_0x365180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_R1_lariat_0x365180");
#endif

    switch (ctx->pc) {
        case 0x3651e0u: goto label_3651e0;
        case 0x36522cu: goto label_36522c;
        case 0x365248u: goto label_365248;
        case 0x365334u: goto label_365334;
        case 0x365374u: goto label_365374;
        case 0x365398u: goto label_365398;
        case 0x3653acu: goto label_3653ac;
        case 0x3653d0u: goto label_3653d0;
        case 0x3653e4u: goto label_3653e4;
        case 0x365408u: goto label_365408;
        case 0x36541cu: goto label_36541c;
        case 0x36542cu: goto label_36542c;
        case 0x365438u: goto label_365438;
        case 0x365448u: goto label_365448;
        case 0x365454u: goto label_365454;
        default: break;
    }

    ctx->pc = 0x365180u;

    // 0x365180: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x365180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x365184: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x365184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x365188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x365188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36518c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x36518cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x365190: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365194: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x365194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x365198: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36519c: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x36519cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3651a0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3651a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3651a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3651a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3651a8: 0x10830014  beq         $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3651A8u;
    {
        const bool branch_taken_0x3651a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3651a8) {
            ctx->pc = 0x3651FCu;
            goto label_3651fc;
        }
    }
    ctx->pc = 0x3651B0u;
    // 0x3651b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3651B0u;
    {
        const bool branch_taken_0x3651b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3651b0) {
            ctx->pc = 0x3651C0u;
            goto label_3651c0;
        }
    }
    ctx->pc = 0x3651B8u;
    // 0x3651b8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x3651B8u;
    {
        const bool branch_taken_0x3651b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3651b8) {
            ctx->pc = 0x365490u;
            goto label_365490;
        }
    }
    ctx->pc = 0x3651C0u;
label_3651c0:
    // 0x3651c0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3651c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3651c4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3651c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3651c8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3651c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3651cc: 0x24061e21  addiu       $a2, $zero, 0x1E21
    ctx->pc = 0x3651ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7713));
    // 0x3651d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3651d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3651d4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3651d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3651d8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3651D8u;
    SET_GPR_U32(ctx, 31, 0x3651E0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3651D8u, 0x3651E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3651E0u;
label_3651e0:
    // 0x3651e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3651e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3651e4: 0x0  nop
    ctx->pc = 0x3651e4u;
    // NOP
    // 0x3651e8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3651e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3651ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3651ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3651f0: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x3651f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x3651f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3651f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3651f8: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x3651f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_3651fc:
    // 0x3651fc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3651fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365200: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365200u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365204: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x365208: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x365208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x36520c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x36520Cu;
    {
        const bool branch_taken_0x36520c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36520c) {
            ctx->pc = 0x365344u;
            goto label_365344;
        }
    }
    ctx->pc = 0x365214u;
    // 0x365214: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365218: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x365218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x36521c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x36521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x365220: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x365220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x365224: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x365224u;
    SET_GPR_U32(ctx, 31, 0x36522Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x365224u, 0x36522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36522Cu;
label_36522c:
    // 0x36522c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x36522cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x365230: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x365230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365234: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x365234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x365238: 0x0  nop
    ctx->pc = 0x365238u;
    // NOP
    // 0x36523c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x36523cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x365240: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x365240u;
    SET_GPR_U32(ctx, 31, 0x365248u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x365240u, 0x365248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365248u;
label_365248:
    // 0x365248: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36524c: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x36524cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x365250: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365254: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365258: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36525c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x36525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x365260: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x365260u;
    {
        const bool branch_taken_0x365260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365260) {
            ctx->pc = 0x3652BCu;
            goto label_3652bc;
        }
    }
    ctx->pc = 0x365268u;
    // 0x365268: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x365268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36526c: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x36526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x365270: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x365270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365274: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x365274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365278: 0x0  nop
    ctx->pc = 0x365278u;
    // NOP
    // 0x36527c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36527cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x365280: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x365280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x365284: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x365284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365288: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x365288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x36528c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x36528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x365290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x365290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365294: 0x0  nop
    ctx->pc = 0x365294u;
    // NOP
    // 0x365298: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x365298u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36529c: 0x0  nop
    ctx->pc = 0x36529cu;
    // NOP
    // 0x3652a0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x3652A0u;
    {
        const bool branch_taken_0x3652a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3652a0) {
            ctx->pc = 0x3652BCu;
            goto label_3652bc;
        }
    }
    ctx->pc = 0x3652A8u;
    // 0x3652a8: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x3652a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x3652ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3652acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3652b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3652b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3652b4: 0x0  nop
    ctx->pc = 0x3652b4u;
    // NOP
    // 0x3652b8: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3652b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_3652bc:
    // 0x3652bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3652bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3652c0: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x3652c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x3652c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3652c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3652c8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3652c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3652cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3652CCu;
    {
        const bool branch_taken_0x3652cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3652cc) {
            ctx->pc = 0x365318u;
            goto label_365318;
        }
    }
    ctx->pc = 0x3652D4u;
    // 0x3652d4: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3652d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3652d8: 0x3c023c49  lui         $v0, 0x3C49
    ctx->pc = 0x3652d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15433 << 16));
    // 0x3652dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x3652dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x3652e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3652e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3652e4: 0x0  nop
    ctx->pc = 0x3652e4u;
    // NOP
    // 0x3652e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3652e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3652ec: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x3652ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
    // 0x3652f0: 0xc6010064  lwc1        $f1, 0x64($s0)
    ctx->pc = 0x3652f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3652f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3652f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3652f8: 0x0  nop
    ctx->pc = 0x3652f8u;
    // NOP
    // 0x3652fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3652fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x365300: 0x0  nop
    ctx->pc = 0x365300u;
    // NOP
    // 0x365304: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x365304u;
    {
        const bool branch_taken_0x365304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x365304) {
            ctx->pc = 0x365318u;
            goto label_365318;
        }
    }
    ctx->pc = 0x36530Cu;
    // 0x36530c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x36530cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365310: 0x0  nop
    ctx->pc = 0x365310u;
    // NOP
    // 0x365314: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x365314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_365318:
    // 0x365318: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36531c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365320: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x365320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x365324: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x365324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x365328: 0xc60e0064  lwc1        $f14, 0x64($s0)
    ctx->pc = 0x365328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36532c: 0xc058f50  jal         func_163D40
    ctx->pc = 0x36532Cu;
    SET_GPR_U32(ctx, 31, 0x365334u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x36532Cu, 0x365334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365334u;
label_365334:
    // 0x365334: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365338: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x365338u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x36533c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36533Cu;
    {
        const bool branch_taken_0x36533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36533c) {
            ctx->pc = 0x365350u;
            goto label_365350;
        }
    }
    ctx->pc = 0x365344u;
label_365344:
    // 0x365344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x365344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365348: 0x0  nop
    ctx->pc = 0x365348u;
    // NOP
    // 0x36534c: 0xe6000064  swc1        $f0, 0x64($s0)
    ctx->pc = 0x36534cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_365350:
    // 0x365350: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365354: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x365354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x365358: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x365358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36535c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x36535cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x365360: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x365360u;
    {
        const bool branch_taken_0x365360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365360) {
            ctx->pc = 0x36541Cu;
            goto label_36541c;
        }
    }
    ctx->pc = 0x365368u;
    // 0x365368: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36536c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x36536Cu;
    SET_GPR_U32(ctx, 31, 0x365374u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x36536Cu, 0x365374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365374u;
label_365374:
    // 0x365374: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365378: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36537c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x36537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x365380: 0x244501c0  addiu       $a1, $v0, 0x1C0
    ctx->pc = 0x365380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
    // 0x365384: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365388: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x36538c: 0x24478d18  addiu       $a3, $v0, -0x72E8
    ctx->pc = 0x36538cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x365390: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365390u;
    SET_GPR_U32(ctx, 31, 0x365398u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365390u, 0x365398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365398u;
label_365398:
    // 0x365398: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365398u;
    {
        const bool branch_taken_0x365398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365398) {
            ctx->pc = 0x3653ACu;
            goto label_3653ac;
        }
    }
    ctx->pc = 0x3653A0u;
    // 0x3653a0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653a4: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x3653A4u;
    SET_GPR_U32(ctx, 31, 0x3653ACu);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x3653A4u, 0x3653ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653ACu;
label_3653ac:
    // 0x3653ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3653b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3653b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3653b8: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x3653b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x3653bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3653bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3653c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3653c4: 0x24478d18  addiu       $a3, $v0, -0x72E8
    ctx->pc = 0x3653c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x3653c8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3653C8u;
    SET_GPR_U32(ctx, 31, 0x3653D0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3653C8u, 0x3653D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653D0u;
label_3653d0:
    // 0x3653d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3653D0u;
    {
        const bool branch_taken_0x3653d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3653d0) {
            ctx->pc = 0x3653E4u;
            goto label_3653e4;
        }
    }
    ctx->pc = 0x3653D8u;
    // 0x3653d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653dc: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x3653DCu;
    SET_GPR_U32(ctx, 31, 0x3653E4u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x3653DCu, 0x3653E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653E4u;
label_3653e4:
    // 0x3653e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3653e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3653f0: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x3653f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3653f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3653f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3653f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3653f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3653fc: 0x24478d18  addiu       $a3, $v0, -0x72E8
    ctx->pc = 0x3653fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x365400: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365400u;
    SET_GPR_U32(ctx, 31, 0x365408u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365400u, 0x365408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365408u;
label_365408:
    // 0x365408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365408u;
    {
        const bool branch_taken_0x365408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365408) {
            ctx->pc = 0x36541Cu;
            goto label_36541c;
        }
    }
    ctx->pc = 0x365410u;
    // 0x365410: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365414: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365414u;
    SET_GPR_U32(ctx, 31, 0x36541Cu);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365414u, 0x36541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36541Cu;
label_36541c:
    // 0x36541c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36541cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365420: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x365420u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365424: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x365424u;
    SET_GPR_U32(ctx, 31, 0x36542Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x365424u, 0x36542Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36542Cu;
label_36542c:
    // 0x36542c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365430: 0xc05cd10  jal         func_173440
    ctx->pc = 0x365430u;
    SET_GPR_U32(ctx, 31, 0x365438u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x365430u, 0x365438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365438u;
label_365438:
    // 0x365438: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36543c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36543cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x365440: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x365440u;
    SET_GPR_U32(ctx, 31, 0x365448u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x365440u, 0x365448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365448u;
label_365448:
    // 0x365448: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36544c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36544Cu;
    SET_GPR_U32(ctx, 31, 0x365454u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36544Cu, 0x365454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365454u;
label_365454:
    // 0x365454: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365458: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x365458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36545c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x36545Cu;
    {
        const bool branch_taken_0x36545c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36545c) {
            ctx->pc = 0x365490u;
            goto label_365490;
        }
    }
    ctx->pc = 0x365464u;
    // 0x365464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x365464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365468: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36546c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36546cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x365470: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365474: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x365474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x365478: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36547c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36547cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x365480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365484: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x365484u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x365488: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x365488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36548c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36548cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_365490:
    // 0x365490: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x365490u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x365494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x365494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365498: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x365498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x36549c: 0x3e00008  jr          $ra
    ctx->pc = 0x36549Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36549Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3654A4u;
}
