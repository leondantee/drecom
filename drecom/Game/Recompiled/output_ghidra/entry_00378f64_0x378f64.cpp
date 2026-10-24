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

// Function: entry_00378f64
// Address: 0x378f64 - 0x379094
void entry_00378f64_0x378f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00378f64_0x378f64");
#endif

    switch (ctx->pc) {
        case 0x378f70u: goto label_378f70;
        case 0x378f7cu: goto label_378f7c;
        case 0x379018u: goto label_379018;
        case 0x379030u: goto label_379030;
        default: break;
    }

    ctx->pc = 0x378f64u;

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
            return;
        }
    }
    ctx->pc = 0x379094u;
}
