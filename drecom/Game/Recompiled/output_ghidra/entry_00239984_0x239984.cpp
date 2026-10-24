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

// Function: entry_00239984
// Address: 0x239984 - 0x239a90
void entry_00239984_0x239984(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00239984_0x239984");
#endif

    switch (ctx->pc) {
        case 0x2399a0u: goto label_2399a0;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a60u: goto label_239a60;
        default: break;
    }

    ctx->pc = 0x239984u;

    // 0x239984: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x239988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23998c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239990: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239994: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x239998: 0xc067654  jal         func_19D950
    ctx->pc = 0x239998u;
    SET_GPR_U32(ctx, 31, 0x2399A0u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x239998u, 0x2399A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2399A0u;
label_2399a0:
    // 0x2399a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2399a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2399a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2399a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2399a8: 0x0  nop
    ctx->pc = 0x2399a8u;
    // NOP
    // 0x2399ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2399acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2399b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2399b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2399b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2399b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2399b8: 0x0  nop
    ctx->pc = 0x2399b8u;
    // NOP
    // 0x2399bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2399bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2399c0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2399c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2399c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2399c8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x2399c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x2399cc: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2399ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2399d0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2399d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2399d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2399d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2399d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399dc: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2399dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2399e0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2399e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2399e4: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x2399e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x2399e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2399e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2399ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2399ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2399f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2399f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2399f4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2399f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2399f8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x2399f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x2399fc: 0x3c023dc9  lui         $v0, 0x3DC9
    ctx->pc = 0x2399fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15817 << 16));
    // 0x239a00: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239a04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a0c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239a10: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x239a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x239a14: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x239a18: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x239a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x239a1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a24: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239a28: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x239a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x239a2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a30: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x239a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a34: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x239a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x239a38: 0x3406be00  ori         $a2, $zero, 0xBE00
    ctx->pc = 0x239a38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x239a3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x239a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a40: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x239a40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x239a44: 0xc0965d0  jal         func_259740
    ctx->pc = 0x239A44u;
    SET_GPR_U32(ctx, 31, 0x239A4Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x239A44u, 0x239A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A4Cu;
label_239a4c:
    // 0x239a4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x239a50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a54: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x239a54u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x239a58: 0xc067694  jal         func_19DA50
    ctx->pc = 0x239A58u;
    SET_GPR_U32(ctx, 31, 0x239A60u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x239A58u, 0x239A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239A60u;
label_239a60:
    // 0x239a60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x239a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x239a64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x239a68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x239A68u;
    {
        const bool branch_taken_0x239a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239a68) {
            ctx->pc = 0x239A90u;
            return;
        }
    }
    ctx->pc = 0x239A70u;
    // 0x239a70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x239a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239a74: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a78: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x239a78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x239a7c: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x239a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
    // 0x239a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x239a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239a84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x239a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x239a88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x239a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x239a8c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x239a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x239a90u;
}
