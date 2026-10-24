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

// Function: entry_00378e44
// Address: 0x378e44 - 0x378f64
void entry_00378e44_0x378e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378e44_0x378e44");
#endif

    switch (ctx->pc) {
        case 0x378e50u: goto label_378e50;
        case 0x378e5cu: goto label_378e5c;
        case 0x378ee8u: goto label_378ee8;
        case 0x378f00u: goto label_378f00;
        default: break;
    }

    ctx->pc = 0x378e44u;

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
            return;
        }
    }
    ctx->pc = 0x378F64u;
}
