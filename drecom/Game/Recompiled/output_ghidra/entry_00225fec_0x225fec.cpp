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

// Function: entry_00225fec
// Address: 0x225fec - 0x22613c
void entry_00225fec_0x225fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00225fec_0x225fec");
#endif

    switch (ctx->pc) {
        case 0x226050u: goto label_226050;
        case 0x2260f8u: goto label_2260f8;
        case 0x22610cu: goto label_22610c;
        default: break;
    }

    ctx->pc = 0x225fecu;

    // 0x225fec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225fecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225ff0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x225ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x225ff4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x225ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x225ff8: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x225ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x225ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226000: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226004: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226008: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x226008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22600c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x22600cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226014: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226018: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22601c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22601cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226020: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x226020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x226024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226028: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x22602c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x22602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226030: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x226030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x226034: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x226034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x226038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22603c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22603cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226040: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226044: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x226044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x226048: 0xc067654  jal         func_19D950
    ctx->pc = 0x226048u;
    SET_GPR_U32(ctx, 31, 0x226050u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x226048u, 0x226050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226050u;
label_226050:
    // 0x226050: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x226050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x226054: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x226054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x226058: 0x0  nop
    ctx->pc = 0x226058u;
    // NOP
    // 0x22605c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x22605cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x226060: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x226060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x226064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226068: 0x0  nop
    ctx->pc = 0x226068u;
    // NOP
    // 0x22606c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x22606cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x226070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226074: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226078: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x226078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x22607c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x226080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226084: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226088: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x22608c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x226090: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x226090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x226094: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x226094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x226098: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x226098u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22609c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x22609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2260a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2260a4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2260a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2260a8: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x2260a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x2260ac: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2260acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2260b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2260b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2260b4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260b8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2260bc: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x2260bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x2260c0: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x2260c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x2260c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2260c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x2260c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2260c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2260cc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260d0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2260d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2260d4: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x2260d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x2260d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260dc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2260dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2260e0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2260e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2260e4: 0x24067802  addiu       $a2, $zero, 0x7802
    ctx->pc = 0x2260e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30722));
    // 0x2260e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2260e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2260ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2260ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2260f0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2260F0u;
    SET_GPR_U32(ctx, 31, 0x2260F8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2260F0u, 0x2260F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2260F8u;
label_2260f8:
    // 0x2260f8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2260f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2260fc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2260fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226100: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x226100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x226104: 0xc067694  jal         func_19DA50
    ctx->pc = 0x226104u;
    SET_GPR_U32(ctx, 31, 0x22610Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x226104u, 0x22610Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22610Cu;
label_22610c:
    // 0x22610c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226110: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x226110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x226114: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x226114u;
    {
        const bool branch_taken_0x226114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226114) {
            ctx->pc = 0x22613Cu;
            return;
        }
    }
    ctx->pc = 0x22611Cu;
    // 0x22611c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22611cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226120: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226124: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x226124u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x226128: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x226128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x22612c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22612cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x226130: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x226130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x226134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x226134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x226138: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x226138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x22613cu;
}
