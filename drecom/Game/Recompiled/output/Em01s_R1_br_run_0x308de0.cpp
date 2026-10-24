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

// Function: Em01s_R1_br_run
// Address: 0x308de0 - 0x309184
void Em01s_R1_br_run_0x308de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em01s_R1_br_run_0x308de0");
#endif

    switch (ctx->pc) {
        case 0x308eb4u: goto label_308eb4;
        case 0x308f4cu: goto label_308f4c;
        case 0x308fb4u: goto label_308fb4;
        case 0x309024u: goto label_309024;
        default: break;
    }

    ctx->pc = 0x308de0u;

    // 0x308de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308de4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x308de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x308de8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x308de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x308dec: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308df0: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x308df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x308df4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x308df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x308df8: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x308df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x308dfc: 0x102000dd  beqz        $at, . + 4 + (0xDD << 2)
    ctx->pc = 0x308DFCu;
    {
        const bool branch_taken_0x308dfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x308dfc) {
            ctx->pc = 0x309174u;
            goto label_309174;
        }
    }
    ctx->pc = 0x308E04u;
    // 0x308e04: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e08: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x308e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308e0c: 0x3c0244bb  lui         $v0, 0x44BB
    ctx->pc = 0x308e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17595 << 16));
    // 0x308e10: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x308e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x308e14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308e18: 0x0  nop
    ctx->pc = 0x308e18u;
    // NOP
    // 0x308e1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308e20: 0x0  nop
    ctx->pc = 0x308e20u;
    // NOP
    // 0x308e24: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x308E24u;
    {
        const bool branch_taken_0x308e24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308e24) {
            ctx->pc = 0x308E5Cu;
            goto label_308e5c;
        }
    }
    ctx->pc = 0x308E2Cu;
    // 0x308e2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308e30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e34: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x308e34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308e38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308e3c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e40: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x308e40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308e44: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e48: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308e48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308e4c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x308e50u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308e54: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e58: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_308e5c:
    // 0x308e5c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e60: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x308e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308e64: 0x3c02455a  lui         $v0, 0x455A
    ctx->pc = 0x308e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17754 << 16));
    // 0x308e68: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x308e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x308e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308e70: 0x0  nop
    ctx->pc = 0x308e70u;
    // NOP
    // 0x308e74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308e74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308e78: 0x0  nop
    ctx->pc = 0x308e78u;
    // NOP
    // 0x308e7c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x308E7Cu;
    {
        const bool branch_taken_0x308e7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308e7c) {
            ctx->pc = 0x308EF4u;
            goto label_308ef4;
        }
    }
    ctx->pc = 0x308E84u;
    // 0x308e84: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x308e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x308e88: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x308e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x308e8c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308e90: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e94: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x308e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308e98: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308e9c: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x308e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x308ea0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x308ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308ea4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x308ea8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x308ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308eac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308EACu;
    SET_GPR_U32(ctx, 31, 0x308EB4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308EACu, 0x308EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308EB4u;
label_308eb4:
    // 0x308eb4: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x308EB4u;
    {
        const bool branch_taken_0x308eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308eb4) {
            ctx->pc = 0x308F84u;
            goto label_308f84;
        }
    }
    ctx->pc = 0x308EBCu;
    // 0x308ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308ec0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ec4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x308ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308ec8: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x308ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x308ecc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ed0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x308ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308ed4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ed8: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308edc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ee0: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x308ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308ee4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ee8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x308eec: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x308EECu;
    {
        const bool branch_taken_0x308eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308eec) {
            ctx->pc = 0x308F84u;
            goto label_308f84;
        }
    }
    ctx->pc = 0x308EF4u;
label_308ef4:
    // 0x308ef4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ef8: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x308ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308efc: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x308efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x308f00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x308f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x308f04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308f04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f08: 0x0  nop
    ctx->pc = 0x308f08u;
    // NOP
    // 0x308f0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x308f0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x308f10: 0x0  nop
    ctx->pc = 0x308f10u;
    // NOP
    // 0x308f14: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x308F14u;
    {
        const bool branch_taken_0x308f14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x308f14) {
            ctx->pc = 0x308F84u;
            goto label_308f84;
        }
    }
    ctx->pc = 0x308F1Cu;
    // 0x308f1c: 0x3c023ea0  lui         $v0, 0x3EA0
    ctx->pc = 0x308f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16032 << 16));
    // 0x308f20: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x308f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
    // 0x308f24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308f24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308f28: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f2c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x308f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308f30: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f34: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x308f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x308f38: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x308f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308f3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x308f40: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308f44: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308F44u;
    SET_GPR_U32(ctx, 31, 0x308F4Cu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308F44u, 0x308F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F4Cu;
label_308f4c:
    // 0x308f4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x308F4Cu;
    {
        const bool branch_taken_0x308f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308f4c) {
            ctx->pc = 0x308F84u;
            goto label_308f84;
        }
    }
    ctx->pc = 0x308F54u;
    // 0x308f54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x308f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f5c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x308f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x308f60: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x308f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x308f64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f68: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x308f68u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x308f6c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f70: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x308f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308f74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f78: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x308f78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308f7c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x308f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_308f84:
    // 0x308f84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f88: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x308f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308f8c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308f90: 0x3c024006  lui         $v0, 0x4006
    ctx->pc = 0x308f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16390 << 16));
    // 0x308f94: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x308f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x308f98: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x308f98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x308f9c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x308f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x308fa0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x308fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x308fa4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x308fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x308fa8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x308fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x308fac: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x308FACu;
    SET_GPR_U32(ctx, 31, 0x308FB4u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x308FACu, 0x308FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308FB4u;
label_308fb4:
    // 0x308fb4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x308FB4u;
    {
        const bool branch_taken_0x308fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308fb4) {
            ctx->pc = 0x308FF4u;
            goto label_308ff4;
        }
    }
    ctx->pc = 0x308FBCu;
    // 0x308fbc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x308fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x308fc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x308fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308fcc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fd0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x308fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x308fd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fd8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x308fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x308fdc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fe0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x308fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x308fe4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308fe8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x308fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x308fec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x308FECu;
    {
        const bool branch_taken_0x308fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x308fec) {
            ctx->pc = 0x30905Cu;
            goto label_30905c;
        }
    }
    ctx->pc = 0x308FF4u;
label_308ff4:
    // 0x308ff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ff8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x308ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309000: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x309000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x309004: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x309004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x309008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30900c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x309010: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x309010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309014: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x309014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x309018: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x309018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30901c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30901Cu;
    SET_GPR_U32(ctx, 31, 0x309024u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30901Cu, 0x309024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309024u;
label_309024:
    // 0x309024: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309024u;
    {
        const bool branch_taken_0x309024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309024) {
            ctx->pc = 0x30905Cu;
            goto label_30905c;
        }
    }
    ctx->pc = 0x30902Cu;
    // 0x30902c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309034: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309038: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x309038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30903c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309040: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309044: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309048: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30904c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309050: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309058: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_30905c:
    // 0x30905c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309060: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x309060u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x309064: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x309064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x309068: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x309068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30906c: 0x14830030  bne         $a0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x30906Cu;
    {
        const bool branch_taken_0x30906c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x30906c) {
            ctx->pc = 0x309130u;
            goto label_309130;
        }
    }
    ctx->pc = 0x309074u;
    // 0x309074: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309078: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x309078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30907c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x30907cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x309080: 0xc421dce4  lwc1        $f1, -0x231C($at)
    ctx->pc = 0x309080u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x309084: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x309084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x309088: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x309088u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30908c: 0x0  nop
    ctx->pc = 0x30908cu;
    // NOP
    // 0x309090: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x309090u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x309094: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x309094u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x309098: 0x0  nop
    ctx->pc = 0x309098u;
    // NOP
    // 0x30909c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x30909Cu;
    {
        const bool branch_taken_0x30909c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30909c) {
            ctx->pc = 0x3090D4u;
            goto label_3090d4;
        }
    }
    ctx->pc = 0x3090A4u;
    // 0x3090a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3090a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3090a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090ac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3090acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3090b0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3090b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3090b4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090b8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3090b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3090bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090c0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3090c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3090c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090c8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3090c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3090cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090d0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3090d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_3090d4:
    // 0x3090d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3090d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3090d8: 0xc4620124  lwc1        $f2, 0x124($v1)
    ctx->pc = 0x3090d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3090dc: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x3090dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x3090e0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3090e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3090e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3090e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x3090e8: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x3090e8u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3090ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3090ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3090f0: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x3090f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3090f4: 0x0  nop
    ctx->pc = 0x3090f4u;
    // NOP
    // 0x3090f8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x3090F8u;
    {
        const bool branch_taken_0x3090f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3090f8) {
            ctx->pc = 0x309130u;
            goto label_309130;
        }
    }
    ctx->pc = 0x309100u;
    // 0x309100: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309104: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309108: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309108u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x30910c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x30910cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x309110: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309114: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309114u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309118: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30911c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x30911cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309120: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309124: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309128: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30912c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30912cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_309130:
    // 0x309130: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309134: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x309134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x309138: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x309138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x30913c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x30913Cu;
    {
        const bool branch_taken_0x30913c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30913c) {
            ctx->pc = 0x309174u;
            goto label_309174;
        }
    }
    ctx->pc = 0x309144u;
    // 0x309144: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309148: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30914c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x30914cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309150: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x309150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x309154: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309158: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309158u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x30915c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30915cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309160: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x309164: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309168: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309168u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30916c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309170: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_309174:
    // 0x309174: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x309174u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309178: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x309178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x30917c: 0x3e00008  jr          $ra
    ctx->pc = 0x30917Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30917Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309184u;
}
