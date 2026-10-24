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

// Function: Em10_R1_br_wait_air
// Address: 0x124e00 - 0x124fc0
void Em10_R1_br_wait_air_0x124e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em10_R1_br_wait_air_0x124e00");
#endif

    switch (ctx->pc) {
        case 0x124e48u: goto label_124e48;
        case 0x124f14u: goto label_124f14;
        case 0x124f38u: goto label_124f38;
        case 0x124f6cu: goto label_124f6c;
        default: break;
    }

    ctx->pc = 0x124e00u;

    // 0x124e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x124e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x124e04: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x124e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x124e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x124e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x124e0c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x124e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x124e10: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e14: 0x24701330  addiu       $s0, $v1, 0x1330
    ctx->pc = 0x124e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x124e18: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e1c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124e20: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x124e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x124e24: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124e28: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x124E28u;
    {
        const bool branch_taken_0x124e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124e28) {
            ctx->pc = 0x124E80u;
            goto label_124e80;
        }
    }
    ctx->pc = 0x124E30u;
    // 0x124e30: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x124e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e34: 0x244412b0  addiu       $a0, $v0, 0x12B0
    ctx->pc = 0x124e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4784));
    // 0x124e38: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124e3c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x124e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124e40: 0xc040c9e  jal         func_103278
    ctx->pc = 0x124E40u;
    SET_GPR_U32(ctx, 31, 0x124E48u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x124E48u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x124E48u) { return; }
    ctx->pc = 0x124E48u;
label_124e48:
    // 0x124e48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124e4c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e50: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124e50u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124e54: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x124e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124e58: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e5c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124e60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e64: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124e64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124e68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e6c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124e70: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e74: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124e78: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x124E78u;
    {
        const bool branch_taken_0x124e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124e78) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124E80u;
label_124e80:
    // 0x124e80: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e84: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x124e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x124e88: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x124e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x124e8c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x124e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x124e90: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x124E90u;
    {
        const bool branch_taken_0x124e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124e90) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124E98u;
    // 0x124e98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124e9c: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x124e9cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x124ea0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x124ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x124ea4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x124ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x124ea8: 0x14600040  bnez        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x124EA8u;
    {
        const bool branch_taken_0x124ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x124ea8) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124EB0u;
    // 0x124eb0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x124eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x124eb4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x124eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x124eb8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x124EB8u;
    {
        const bool branch_taken_0x124eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x124eb8) {
            ctx->pc = 0x124EF8u;
            goto label_124ef8;
        }
    }
    ctx->pc = 0x124EC0u;
    // 0x124ec0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124ec4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ec8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124ecc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x124eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124ed0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ed4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124ed8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124edc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124edcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124ee0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124ee4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124ee8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124eec: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124eecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124ef0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x124EF0u;
    {
        const bool branch_taken_0x124ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124ef0) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124EF8u;
label_124ef8:
    // 0x124ef8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x124ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124efc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x124efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x124f00: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x124f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x124f04: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x124f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x124f08: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x124f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x124f0c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x124F0Cu;
    SET_GPR_U32(ctx, 31, 0x124F14u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x124F0Cu, 0x124F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F14u;
label_124f14:
    // 0x124f14: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x124f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124f18: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x124f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124f1c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x124f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124f20: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x124f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124f24: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x124f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124f28: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x124f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x124f2c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x124f2cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x124f30: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x124F30u;
    SET_GPR_U32(ctx, 31, 0x124F38u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x124F30u, 0x124F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F38u;
label_124f38:
    // 0x124f38: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x124f38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x124f3c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x124f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124f40: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x124f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x124f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x124f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124f48: 0x0  nop
    ctx->pc = 0x124f48u;
    // NOP
    // 0x124f4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x124f4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124f50: 0x0  nop
    ctx->pc = 0x124f50u;
    // NOP
    // 0x124f54: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x124F54u;
    {
        const bool branch_taken_0x124f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124f54) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124F5Cu;
    // 0x124f5c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x124f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124f64: 0xc05d25c  jal         func_174970
    ctx->pc = 0x124F64u;
    SET_GPR_U32(ctx, 31, 0x124F6Cu);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x124F64u, 0x124F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124F6Cu;
label_124f6c:
    // 0x124f6c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x124F6Cu;
    {
        const bool branch_taken_0x124f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124f6c) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124F74u;
    // 0x124f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x124f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124f78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x124f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x124f80: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x124f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x124f84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f88: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x124f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x124f8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f90: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x124f90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x124f94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124f98: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x124f98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x124f9c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x124f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x124fa0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x124fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x124fa4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x124FA4u;
    {
        const bool branch_taken_0x124fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124fa4) {
            ctx->pc = 0x124FACu;
            goto label_124fac;
        }
    }
    ctx->pc = 0x124FACu;
label_124fac:
    // 0x124fac: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x124facu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x124fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124fb4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x124fb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x124fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x124FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124FC0u;
}
