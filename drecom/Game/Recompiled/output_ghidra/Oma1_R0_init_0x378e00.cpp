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

// Function: Oma1_R0_init
// Address: 0x378e00 - 0x3791e8
void Oma1_R0_init_0x378e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Oma1_R0_init_0x378e00");
#endif

    switch (ctx->pc) {
        case 0x378e50u: goto label_378e50;
        case 0x378e5cu: goto label_378e5c;
        case 0x378ee8u: goto label_378ee8;
        case 0x378f00u: goto label_378f00;
        case 0x378f70u: goto label_378f70;
        case 0x378f7cu: goto label_378f7c;
        case 0x379018u: goto label_379018;
        case 0x379030u: goto label_379030;
        case 0x3790a0u: goto label_3790a0;
        case 0x3790acu: goto label_3790ac;
        case 0x379138u: goto label_379138;
        case 0x379150u: goto label_379150;
        default: break;
    }

    ctx->pc = 0x378e00u;

    // 0x378e00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x378e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x378e04: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x378e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x378e08: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x378e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x378e0c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378e10: 0x9463000e  lhu         $v1, 0xE($v1)
    ctx->pc = 0x378e10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x378e14: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x378e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x378e18: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x378e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x378e1c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x378e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x378e20: 0x1083009c  beq         $a0, $v1, . + 4 + (0x9C << 2)
    ctx->pc = 0x378E20u;
    {
        const bool branch_taken_0x378e20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x378e20) {
            ctx->pc = 0x379094u;
            goto label_379094;
        }
    }
    ctx->pc = 0x378E28u;
    // 0x378e28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378e2c: 0x1083004d  beq         $a0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x378E2Cu;
    {
        const bool branch_taken_0x378e2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x378e2c) {
            ctx->pc = 0x378F64u;
            goto label_378f64;
        }
    }
    ctx->pc = 0x378E34u;
    // 0x378e34: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x378E34u;
    {
        const bool branch_taken_0x378e34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e34) {
            ctx->pc = 0x378E44u;
            goto label_378e44;
        }
    }
    ctx->pc = 0x378E3Cu;
    // 0x378e3c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x378E3Cu;
    {
        const bool branch_taken_0x378e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378e3c) {
            ctx->pc = 0x3791ACu;
            goto label_3791ac;
        }
    }
    ctx->pc = 0x378E44u;
label_378e44:
    // 0x378e44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x378e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x378e48: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378E48u;
    SET_GPR_U32(ctx, 31, 0x378E50u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378E48u, 0x378E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E50u;
label_378e50:
    // 0x378e50: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x378e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x378e54: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378E54u;
    SET_GPR_U32(ctx, 31, 0x378E5Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378E54u, 0x378E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378E5Cu;
label_378e5c:
    // 0x378e5c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x378e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x378e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378e64: 0x0  nop
    ctx->pc = 0x378e64u;
    // NOP
    // 0x378e68: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x378e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x378e6c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378e70: 0x0  nop
    ctx->pc = 0x378e70u;
    // NOP
    // 0x378e74: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x378e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x378e78: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x378e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x378e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378e80: 0x0  nop
    ctx->pc = 0x378e80u;
    // NOP
    // 0x378e84: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x378e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x378e88: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x378e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x378e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378e90: 0x0  nop
    ctx->pc = 0x378e90u;
    // NOP
    // 0x378e94: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x378e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x378e98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378e98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378e9c: 0x0  nop
    ctx->pc = 0x378e9cu;
    // NOP
    // 0x378ea0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x378ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x378ea4: 0x3c02c4fa  lui         $v0, 0xC4FA
    ctx->pc = 0x378ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50426 << 16));
    // 0x378ea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378eac: 0x0  nop
    ctx->pc = 0x378eacu;
    // NOP
    // 0x378eb0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x378eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x378eb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378eb8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x378eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378ebc: 0xa0431340  sb          $v1, 0x1340($v0)
    ctx->pc = 0x378ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4928), (uint8_t)GPR_U32(ctx, 3));
    // 0x378ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378ec4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x378ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378ec8: 0xac431344  sw          $v1, 0x1344($v0)
    ctx->pc = 0x378ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 3));
    // 0x378ecc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x378eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x378ed0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x378ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x378ed4: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x378ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x378ed8: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x378ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x378edc: 0x244704f0  addiu       $a3, $v0, 0x4F0
    ctx->pc = 0x378edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1264));
    // 0x378ee0: 0xc0d87b0  jal         func_361EC0
    ctx->pc = 0x378EE0u;
    SET_GPR_U32(ctx, 31, 0x378EE8u);
    ctx->pc = 0x361EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361EC0u, 0x378EE0u, 0x378EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378EE8u;
label_378ee8:
    // 0x378ee8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x378ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x378eec: 0xa02004e0  sb          $zero, 0x4E0($at)
    ctx->pc = 0x378eecu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A04E0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A04E0u, _value); } while (0);
    // 0x378ef0: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x378ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x378ef4: 0x24440570  addiu       $a0, $v0, 0x570
    ctx->pc = 0x378ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x378ef8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378EF8u;
    SET_GPR_U32(ctx, 31, 0x378F00u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378EF8u, 0x378F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F00u;
label_378f00:
    // 0x378f00: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x378f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x378f04: 0x246404e0  addiu       $a0, $v1, 0x4E0
    ctx->pc = 0x378f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1248));
    // 0x378f08: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f0c: 0xac641348  sw          $a0, 0x1348($v1)
    ctx->pc = 0x378f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 4));
    // 0x378f10: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x378f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x378f14: 0x2464b720  addiu       $a0, $v1, -0x48E0
    ctx->pc = 0x378f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948640));
    // 0x378f18: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f1c: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x378f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x378f20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x378f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378f24: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f28: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x378f28u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x378f2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x378f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x378f30: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f34: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x378f34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x378f38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x378f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378f3c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f40: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x378f40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x378f44: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f48: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x378f48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x378f4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x378f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x378f50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378f50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378f54: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x378f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378f58: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x378f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x378f5c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x378F5Cu;
    {
        const bool branch_taken_0x378f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378f5c) {
            ctx->pc = 0x3791ACu;
            goto label_3791ac;
        }
    }
    ctx->pc = 0x378F64u;
label_378f64:
    // 0x378f64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x378f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x378f68: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378F68u;
    SET_GPR_U32(ctx, 31, 0x378F70u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378F68u, 0x378F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F70u;
label_378f70:
    // 0x378f70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x378f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x378f74: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x378F74u;
    SET_GPR_U32(ctx, 31, 0x378F7Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x378F74u, 0x378F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x378F7Cu;
label_378f7c:
    // 0x378f7c: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x378f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x378f80: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x378f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x378f84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378f88: 0x0  nop
    ctx->pc = 0x378f88u;
    // NOP
    // 0x378f8c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x378f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x378f90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378f94: 0x0  nop
    ctx->pc = 0x378f94u;
    // NOP
    // 0x378f98: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x378f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x378f9c: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x378f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x378fa0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x378fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x378fa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378fa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378fa8: 0x0  nop
    ctx->pc = 0x378fa8u;
    // NOP
    // 0x378fac: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x378facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x378fb0: 0x3c02c43b  lui         $v0, 0xC43B
    ctx->pc = 0x378fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50235 << 16));
    // 0x378fb4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x378fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x378fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378fbc: 0x0  nop
    ctx->pc = 0x378fbcu;
    // NOP
    // 0x378fc0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x378fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x378fc4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x378fc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378fc8: 0x0  nop
    ctx->pc = 0x378fc8u;
    // NOP
    // 0x378fcc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x378fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x378fd0: 0x3c02c43b  lui         $v0, 0xC43B
    ctx->pc = 0x378fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50235 << 16));
    // 0x378fd4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x378fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x378fd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x378fdc: 0x0  nop
    ctx->pc = 0x378fdcu;
    // NOP
    // 0x378fe0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x378fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x378fe4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378fe8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x378fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378fec: 0xa0431340  sb          $v1, 0x1340($v0)
    ctx->pc = 0x378fecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4928), (uint8_t)GPR_U32(ctx, 3));
    // 0x378ff0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x378ff4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x378ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x378ff8: 0xac431344  sw          $v1, 0x1344($v0)
    ctx->pc = 0x378ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 3));
    // 0x378ffc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x378ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379000: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x379000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379004: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x379004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x379008: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x379008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x37900c: 0x24470450  addiu       $a3, $v0, 0x450
    ctx->pc = 0x37900cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1104));
    // 0x379010: 0xc0d87b0  jal         func_361EC0
    ctx->pc = 0x379010u;
    SET_GPR_U32(ctx, 31, 0x379018u);
    ctx->pc = 0x361EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361EC0u, 0x379010u, 0x379018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379018u;
label_379018:
    // 0x379018: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37901c: 0xa0200440  sb          $zero, 0x440($at)
    ctx->pc = 0x37901cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A0440u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A0440u, _value); } while (0);
    // 0x379020: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x379020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x379024: 0x244404d0  addiu       $a0, $v0, 0x4D0
    ctx->pc = 0x379024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1232));
    // 0x379028: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x379028u;
    SET_GPR_U32(ctx, 31, 0x379030u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x379028u, 0x379030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379030u;
label_379030:
    // 0x379030: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x379030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x379034: 0x24640440  addiu       $a0, $v1, 0x440
    ctx->pc = 0x379034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x379038: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37903c: 0xac641348  sw          $a0, 0x1348($v1)
    ctx->pc = 0x37903cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 4));
    // 0x379040: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x379040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x379044: 0x2464b740  addiu       $a0, $v1, -0x48C0
    ctx->pc = 0x379044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948672));
    // 0x379048: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37904c: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x37904cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x379050: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379054: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379058: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x379058u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x37905c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37905cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x379060: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379064: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x379064u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x379068: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37906c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37906cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379070: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x379070u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x379074: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379078: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x379078u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x37907c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37907cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x379080: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x379080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379084: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379088: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x379088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
    // 0x37908c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x37908Cu;
    {
        const bool branch_taken_0x37908c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37908c) {
            ctx->pc = 0x3791ACu;
            goto label_3791ac;
        }
    }
    ctx->pc = 0x379094u;
label_379094:
    // 0x379094: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x379094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379098: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x379098u;
    SET_GPR_U32(ctx, 31, 0x3790A0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x379098u, 0x3790A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790A0u;
label_3790a0:
    // 0x3790a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3790a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3790a4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x3790A4u;
    SET_GPR_U32(ctx, 31, 0x3790ACu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x3790A4u, 0x3790ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3790ACu;
label_3790ac:
    // 0x3790ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3790acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3790b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790b4: 0x0  nop
    ctx->pc = 0x3790b4u;
    // NOP
    // 0x3790b8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3790b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3790bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3790bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790c0: 0x0  nop
    ctx->pc = 0x3790c0u;
    // NOP
    // 0x3790c4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3790c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3790c8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x3790c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x3790cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790d0: 0x0  nop
    ctx->pc = 0x3790d0u;
    // NOP
    // 0x3790d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x3790d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3790d8: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3790d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3790dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790e0: 0x0  nop
    ctx->pc = 0x3790e0u;
    // NOP
    // 0x3790e4: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3790e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3790e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3790e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790ec: 0x0  nop
    ctx->pc = 0x3790ecu;
    // NOP
    // 0x3790f0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x3790f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x3790f4: 0x3c02c3fa  lui         $v0, 0xC3FA
    ctx->pc = 0x3790f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50170 << 16));
    // 0x3790f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3790f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3790fc: 0x0  nop
    ctx->pc = 0x3790fcu;
    // NOP
    // 0x379100: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x379100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x379104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379108: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37910c: 0xa0431340  sb          $v1, 0x1340($v0)
    ctx->pc = 0x37910cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4928), (uint8_t)GPR_U32(ctx, 3));
    // 0x379110: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x379110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379114: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x379114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379118: 0xac431344  sw          $v1, 0x1344($v0)
    ctx->pc = 0x379118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4932), GPR_U32(ctx, 3));
    // 0x37911c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x37911cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x379120: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x379120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x379124: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x379124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
    // 0x379128: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x379128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x37912c: 0x244703b0  addiu       $a3, $v0, 0x3B0
    ctx->pc = 0x37912cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x379130: 0xc0d87b0  jal         func_361EC0
    ctx->pc = 0x379130u;
    SET_GPR_U32(ctx, 31, 0x379138u);
    ctx->pc = 0x361EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361EC0u, 0x379130u, 0x379138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379138u;
label_379138:
    // 0x379138: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x379138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x37913c: 0xa02003a0  sb          $zero, 0x3A0($at)
    ctx->pc = 0x37913cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x9A03A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x9A03A0u, _value); } while (0);
    // 0x379140: 0x3c02009a  lui         $v0, 0x9A
    ctx->pc = 0x379140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)154 << 16));
    // 0x379144: 0x24440430  addiu       $a0, $v0, 0x430
    ctx->pc = 0x379144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x379148: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x379148u;
    SET_GPR_U32(ctx, 31, 0x379150u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x379148u, 0x379150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379150u;
label_379150:
    // 0x379150: 0x3c03009a  lui         $v1, 0x9A
    ctx->pc = 0x379150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)154 << 16));
    // 0x379154: 0x246403a0  addiu       $a0, $v1, 0x3A0
    ctx->pc = 0x379154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
    // 0x379158: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37915c: 0xac641348  sw          $a0, 0x1348($v1)
    ctx->pc = 0x37915cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 4));
    // 0x379160: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x379160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x379164: 0x2464b760  addiu       $a0, $v1, -0x48A0
    ctx->pc = 0x379164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948704));
    // 0x379168: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37916c: 0xac641228  sw          $a0, 0x1228($v1)
    ctx->pc = 0x37916cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 4));
    // 0x379170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379174: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379178: 0xa46410a6  sh          $a0, 0x10A6($v1)
    ctx->pc = 0x379178u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 4));
    // 0x37917c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x37917cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x379180: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379184: 0xac64121c  sw          $a0, 0x121C($v1)
    ctx->pc = 0x379184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4636), GPR_U32(ctx, 4));
    // 0x379188: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x379188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37918c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x37918cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379190: 0xa0641219  sb          $a0, 0x1219($v1)
    ctx->pc = 0x379190u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4633), (uint8_t)GPR_U32(ctx, 4));
    // 0x379194: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x379194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x379198: 0xa06011ee  sb          $zero, 0x11EE($v1)
    ctx->pc = 0x379198u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x37919c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x37919cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3791a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3791a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3791a4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791a8: 0xe46011e8  swc1        $f0, 0x11E8($v1)
    ctx->pc = 0x3791a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4584), bits); }
label_3791ac:
    // 0x3791ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3791acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3791b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3791b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3791b8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791bc: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3791bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3791c0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791c4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3791c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3791c8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791cc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3791ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3791d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3791d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3791d4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3791d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3791d8: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3791d8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3791dc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3791dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3791e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3791E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3791E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3791E8u;
}
