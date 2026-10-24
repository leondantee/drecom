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

// Function: Em05_R1_up
// Address: 0x205ca0 - 0x205e4c
void Em05_R1_up_0x205ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em05_R1_up_0x205ca0");
#endif

    switch (ctx->pc) {
        case 0x205d20u: goto label_205d20;
        case 0x205d34u: goto label_205d34;
        case 0x205da4u: goto label_205da4;
        case 0x205df0u: goto label_205df0;
        case 0x205e3cu: goto label_205e3c;
        default: break;
    }

    ctx->pc = 0x205ca0u;

    // 0x205ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205ca4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x205ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x205ca8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x205ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x205cac: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cb0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x205cb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x205cb4: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x205cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x205cb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x205cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x205cbc: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x205CBCu;
    {
        const bool branch_taken_0x205cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x205cbc) {
            ctx->pc = 0x205CF4u;
            goto label_205cf4;
        }
    }
    ctx->pc = 0x205CC4u;
    // 0x205cc4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x205CC4u;
    {
        const bool branch_taken_0x205cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cc4) {
            ctx->pc = 0x205CD4u;
            goto label_205cd4;
        }
    }
    ctx->pc = 0x205CCCu;
    // 0x205ccc: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x205CCCu;
    {
        const bool branch_taken_0x205ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ccc) {
            ctx->pc = 0x205E3Cu;
            goto label_205e3c;
        }
    }
    ctx->pc = 0x205CD4u;
label_205cd4:
    // 0x205cd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cd8: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x205cd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x205cdc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205ce0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x205ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x205ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x205ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x205ce8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x205ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x205cec: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x205CECu;
    {
        const bool branch_taken_0x205cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x205cec) {
            ctx->pc = 0x205E3Cu;
            goto label_205e3c;
        }
    }
    ctx->pc = 0x205CF4u;
label_205cf4:
    // 0x205cf4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cf8: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x205cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205cfc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d00: 0x3c023d03  lui         $v0, 0x3D03
    ctx->pc = 0x205d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15619 << 16));
    // 0x205d04: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x205d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x205d08: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x205d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x205d0c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x205d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x205d10: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x205d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205d14: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x205d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x205d18: 0xc05c848  jal         func_172120
    ctx->pc = 0x205D18u;
    SET_GPR_U32(ctx, 31, 0x205D20u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x205D18u, 0x205D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D20u;
label_205d20:
    // 0x205d20: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d24: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x205d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205d28: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x205d28u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205d2c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x205D2Cu;
    SET_GPR_U32(ctx, 31, 0x205D34u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x205D2Cu, 0x205D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205D34u;
label_205d34:
    // 0x205d34: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d38: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x205d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x205d3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d40: 0xc4410184  lwc1        $f1, 0x184($v0)
    ctx->pc = 0x205d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205d44: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x205d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x205d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d4c: 0x0  nop
    ctx->pc = 0x205d4cu;
    // NOP
    // 0x205d50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x205d50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205d54: 0x0  nop
    ctx->pc = 0x205d54u;
    // NOP
    // 0x205d58: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x205D58u;
    {
        const bool branch_taken_0x205d58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x205d58) {
            ctx->pc = 0x205D7Cu;
            goto label_205d7c;
        }
    }
    ctx->pc = 0x205D60u;
    // 0x205d60: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d64: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x205d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x205d68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x205d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x205d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d70: 0x0  nop
    ctx->pc = 0x205d70u;
    // NOP
    // 0x205d74: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x205d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x205d78: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x205d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
label_205d7c:
    // 0x205d7c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x205d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x205d80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x205d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205d84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d88: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x205d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x205d8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x205d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205d94: 0xc46c0188  lwc1        $f12, 0x188($v1)
    ctx->pc = 0x205d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205d98: 0xc44d0184  lwc1        $f13, 0x184($v0)
    ctx->pc = 0x205d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205d9c: 0xc0455e6  jal         func_115798
    ctx->pc = 0x205D9Cu;
    SET_GPR_U32(ctx, 31, 0x205DA4u);
    ctx->pc = 0x115798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115798u, 0x205D9Cu, 0x205DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DA4u;
label_205da4:
    // 0x205da4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x205da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x205da8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x205da8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205dac: 0x0  nop
    ctx->pc = 0x205dacu;
    // NOP
    // 0x205db0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x205db0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x205db4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x205db4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x205db8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dbc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x205dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205dc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x205dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x205dc4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dc8: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x205dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x205dcc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205dd0: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x205dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205dd4: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x205dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x205dd8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x205dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x205ddc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x205ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x205de0: 0xc48c0000  lwc1        $f12, 0x0($a0)
    ctx->pc = 0x205de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x205de4: 0xc46d011c  lwc1        $f13, 0x11C($v1)
    ctx->pc = 0x205de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x205de8: 0xc058f50  jal         func_163D40
    ctx->pc = 0x205DE8u;
    SET_GPR_U32(ctx, 31, 0x205DF0u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x205DE8u, 0x205DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205DF0u;
label_205df0:
    // 0x205df0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205df4: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x205df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205df8: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x205df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x205dfc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205dfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205e00: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e04: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x205e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205e08: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x205e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x205e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x205e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x205e10: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e14: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x205e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205e18: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x205e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x205e1c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x205e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e20: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x205e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x205e24: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x205e24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x205e28: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x205e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x205e2c: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x205e2cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x205e30: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x205e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205e34: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x205E34u;
    SET_GPR_U32(ctx, 31, 0x205E3Cu);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x205E34u, 0x205E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205E3Cu;
label_205e3c:
    // 0x205e3c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x205e3cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205e40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x205e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x205e44: 0x3e00008  jr          $ra
    ctx->pc = 0x205E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205E4Cu;
}
