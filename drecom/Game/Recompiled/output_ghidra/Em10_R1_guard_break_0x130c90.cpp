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

// Function: Em10_R1_guard_break
// Address: 0x130c90 - 0x131010
void Em10_R1_guard_break_0x130c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_guard_break_0x130c90");
#endif

    switch (ctx->pc) {
        case 0x130cf0u: goto label_130cf0;
        case 0x130d1cu: goto label_130d1c;
        case 0x130da8u: goto label_130da8;
        case 0x130de4u: goto label_130de4;
        case 0x130dfcu: goto label_130dfc;
        case 0x130e10u: goto label_130e10;
        case 0x130e20u: goto label_130e20;
        case 0x130e2cu: goto label_130e2c;
        case 0x130e74u: goto label_130e74;
        case 0x130f38u: goto label_130f38;
        default: break;
    }

    ctx->pc = 0x130c90u;

    // 0x130c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130c94: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x130c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x130c98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130c9c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x130c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x130ca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ca4: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x130ca4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x130ca8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cac: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x130cacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130cb0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x130cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x130cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130cb8: 0x10830041  beq         $a0, $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x130CB8u;
    {
        const bool branch_taken_0x130cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130cb8) {
            ctx->pc = 0x130DC0u;
            goto label_130dc0;
        }
    }
    ctx->pc = 0x130CC0u;
    // 0x130cc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130CC0u;
    {
        const bool branch_taken_0x130cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130cc0) {
            ctx->pc = 0x130CD0u;
            goto label_130cd0;
        }
    }
    ctx->pc = 0x130CC8u;
    // 0x130cc8: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x130CC8u;
    {
        const bool branch_taken_0x130cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130cc8) {
            ctx->pc = 0x130FFCu;
            goto label_130ffc;
        }
    }
    ctx->pc = 0x130CD0u;
label_130cd0:
    // 0x130cd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cd8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x130cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x130cdc: 0x2406054e  addiu       $a2, $zero, 0x54E
    ctx->pc = 0x130cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1358));
    // 0x130ce0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x130ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ce4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x130ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x130ce8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x130CE8u;
    SET_GPR_U32(ctx, 31, 0x130CF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x130CE8u, 0x130CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130CF0u;
label_130cf0:
    // 0x130cf0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x130cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x130cf4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130cf8: 0xa04310a8  sb          $v1, 0x10A8($v0)
    ctx->pc = 0x130cf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 3));
    // 0x130cfc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x130cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x130d00: 0xa6020092  sh          $v0, 0x92($s0)
    ctx->pc = 0x130d00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 146), (uint16_t)GPR_U32(ctx, 2));
    // 0x130d04: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d0c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x130d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130d10: 0xc44d11f8  lwc1        $f13, 0x11F8($v0)
    ctx->pc = 0x130d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130d14: 0xc058f20  jal         func_163C80
    ctx->pc = 0x130D14u;
    SET_GPR_U32(ctx, 31, 0x130D1Cu);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x130D14u, 0x130D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130D1Cu;
label_130d1c:
    // 0x130d1c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x130d20: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130d24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d28: 0x0  nop
    ctx->pc = 0x130d28u;
    // NOP
    // 0x130d2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130d2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d30: 0x0  nop
    ctx->pc = 0x130d30u;
    // NOP
    // 0x130d34: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130D34u;
    {
        const bool branch_taken_0x130d34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130d34) {
            ctx->pc = 0x130D48u;
            goto label_130d48;
        }
    }
    ctx->pc = 0x130D3Cu;
    // 0x130d3c: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x130d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130d40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x130d44: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x130d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_130d48:
    // 0x130d48: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x130d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d4c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x130d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x130d50: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d58: 0x0  nop
    ctx->pc = 0x130d58u;
    // NOP
    // 0x130d5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x130d5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130d60: 0x0  nop
    ctx->pc = 0x130d60u;
    // NOP
    // 0x130d64: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x130D64u;
    {
        const bool branch_taken_0x130d64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130d64) {
            ctx->pc = 0x130D84u;
            goto label_130d84;
        }
    }
    ctx->pc = 0x130D6Cu;
    // 0x130d6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d70: 0xc44011f8  lwc1        $f0, 0x11F8($v0)
    ctx->pc = 0x130d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130d74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d78: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x130d7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x130D7Cu;
    {
        const bool branch_taken_0x130d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130d7c) {
            ctx->pc = 0x130DB0u;
            goto label_130db0;
        }
    }
    ctx->pc = 0x130D84u;
label_130d84:
    // 0x130d84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130d88: 0xc44111f8  lwc1        $f1, 0x11F8($v0)
    ctx->pc = 0x130d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130d8c: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x130d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x130d90: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130d94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x130d94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130d98: 0x0  nop
    ctx->pc = 0x130d98u;
    // NOP
    // 0x130d9c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x130d9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x130da0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x130DA0u;
    SET_GPR_U32(ctx, 31, 0x130DA8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x130DA0u, 0x130DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DA8u;
label_130da8:
    // 0x130da8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130dac: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x130dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
label_130db0:
    // 0x130db0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130db4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x130db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x130db8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x130db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x130dbc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x130dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_130dc0:
    // 0x130dc0: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x130dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x130dc4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x130dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x130dc8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x130dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x130dcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130dd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130dd4: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x130dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130dd8: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x130dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x130ddc: 0xc058f50  jal         func_163D40
    ctx->pc = 0x130DDCu;
    SET_GPR_U32(ctx, 31, 0x130DE4u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x130DDCu, 0x130DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DE4u;
label_130de4:
    // 0x130de4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130de8: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x130de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x130dec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130df0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130df0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130df4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x130DF4u;
    SET_GPR_U32(ctx, 31, 0x130DFCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x130DF4u, 0x130DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130DFCu;
label_130dfc:
    // 0x130dfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e00: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e04: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x130e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130e08: 0xc05cd58  jal         func_173560
    ctx->pc = 0x130E08u;
    SET_GPR_U32(ctx, 31, 0x130E10u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x130E08u, 0x130E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E10u;
label_130e10:
    // 0x130e10: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e14: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x130e14u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x130e18: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x130E18u;
    SET_GPR_U32(ctx, 31, 0x130E20u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x130E18u, 0x130E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E20u;
label_130e20:
    // 0x130e20: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e24: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x130E24u;
    SET_GPR_U32(ctx, 31, 0x130E2Cu);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x130E24u, 0x130E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E2Cu;
label_130e2c:
    // 0x130e2c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e30: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x130e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x130e34: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x130E34u;
    {
        const bool branch_taken_0x130e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x130e34) {
            ctx->pc = 0x130FFCu;
            goto label_130ffc;
        }
    }
    ctx->pc = 0x130E3Cu;
    // 0x130e3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e44: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x130e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x130e48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x130e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130e4c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e50: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x130e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x130e54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e58: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x130e58u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130e5c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e60: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x130e60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130e64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x130e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130e68: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x130e68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x130e6c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x130E6Cu;
    SET_GPR_U32(ctx, 31, 0x130E74u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x130E6Cu, 0x130E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E74u;
label_130e74:
    // 0x130e74: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x130e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x130e78: 0x30640003  andi        $a0, $v1, 0x3
    ctx->pc = 0x130e78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x130e7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x130e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x130e80: 0x1083004c  beq         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x130E80u;
    {
        const bool branch_taken_0x130e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130e80) {
            ctx->pc = 0x130FB4u;
            goto label_130fb4;
        }
    }
    ctx->pc = 0x130E88u;
    // 0x130e88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x130e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130e8c: 0x1083003a  beq         $a0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x130E8Cu;
    {
        const bool branch_taken_0x130e8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130e8c) {
            ctx->pc = 0x130F78u;
            goto label_130f78;
        }
    }
    ctx->pc = 0x130E94u;
    // 0x130e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x130e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130e98: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x130E98u;
    {
        const bool branch_taken_0x130e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x130e98) {
            ctx->pc = 0x130EE8u;
            goto label_130ee8;
        }
    }
    ctx->pc = 0x130EA0u;
    // 0x130ea0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x130EA0u;
    {
        const bool branch_taken_0x130ea0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ea0) {
            ctx->pc = 0x130EB0u;
            goto label_130eb0;
        }
    }
    ctx->pc = 0x130EA8u;
    // 0x130ea8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x130EA8u;
    {
        const bool branch_taken_0x130ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ea8) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130EB0u;
label_130eb0:
    // 0x130eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130eb4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130eb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130ebc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x130ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x130ec0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ec4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130ec8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ecc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130eccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ed0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130ed4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130ed8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130edc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x130edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x130ee0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x130EE0u;
    {
        const bool branch_taken_0x130ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ee0) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130EE8u;
label_130ee8:
    // 0x130ee8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130eec: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x130eecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x130ef0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x130ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x130ef4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x130ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x130ef8: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x130EF8u;
    {
        const bool branch_taken_0x130ef8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x130ef8) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130F00u;
    // 0x130f00: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f04: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x130f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130f08: 0x3c0345ab  lui         $v1, 0x45AB
    ctx->pc = 0x130f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17835 << 16));
    // 0x130f0c: 0x3463e000  ori         $v1, $v1, 0xE000
    ctx->pc = 0x130f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57344);
    // 0x130f10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x130f10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130f14: 0x0  nop
    ctx->pc = 0x130f14u;
    // NOP
    // 0x130f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x130f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130f1c: 0x0  nop
    ctx->pc = 0x130f1cu;
    // NOP
    // 0x130f20: 0x45000030  bc1f        . + 4 + (0x30 << 2)
    ctx->pc = 0x130F20u;
    {
        const bool branch_taken_0x130f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x130f20) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130F28u;
    // 0x130f28: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x130f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x130f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f30: 0xc05d25c  jal         func_174970
    ctx->pc = 0x130F30u;
    SET_GPR_U32(ctx, 31, 0x130F38u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x130F30u, 0x130F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130F38u;
label_130f38:
    // 0x130f38: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x130F38u;
    {
        const bool branch_taken_0x130f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f38) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130F40u;
    // 0x130f40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f4c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x130f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x130f50: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f54: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f58: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f5c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f60: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f64: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f6c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x130f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x130f70: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x130F70u;
    {
        const bool branch_taken_0x130f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130f70) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130F78u;
label_130f78:
    // 0x130f78: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130f7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f80: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f84: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x130f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x130f88: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f8c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130f90: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f94: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130f94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130f98: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130f9c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130fa0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x130fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x130fa4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fa8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x130fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x130fac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x130FACu;
    {
        const bool branch_taken_0x130fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130fac) {
            ctx->pc = 0x130FE4u;
            goto label_130fe4;
        }
    }
    ctx->pc = 0x130FB4u;
label_130fb4:
    // 0x130fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x130fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fbc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x130fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x130fc0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x130fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x130fc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fc8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x130fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x130fcc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fd0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x130fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x130fd4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fd8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x130fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x130fdc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x130fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x130fe0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x130fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_130fe4:
    // 0x130fe4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x130fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x130fe8: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x130fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x130fec: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x130fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x130ff0: 0xa600007c  sh          $zero, 0x7C($s0)
    ctx->pc = 0x130ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 0));
    // 0x130ff4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x130FF4u;
    {
        const bool branch_taken_0x130ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130ff4) {
            ctx->pc = 0x130FFCu;
            goto label_130ffc;
        }
    }
    ctx->pc = 0x130FFCu;
label_130ffc:
    // 0x130ffc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x130ffcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131004: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x131004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x131008: 0x3e00008  jr          $ra
    ctx->pc = 0x131008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131010u;
}
