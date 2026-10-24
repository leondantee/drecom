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

// Function: entry_001ef724
// Address: 0x1ef724 - 0x1ef818
void entry_001ef724_0x1ef724(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ef724_0x1ef724");
#endif

    switch (ctx->pc) {
        case 0x1ef750u: goto label_1ef750;
        case 0x1ef7d4u: goto label_1ef7d4;
        case 0x1ef7e4u: goto label_1ef7e4;
        default: break;
    }

    ctx->pc = 0x1ef724u;

    // 0x1ef724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef728: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef72c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1ef72cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ef730: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef734: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1ef734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef738: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1ef738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1ef73c: 0x24063c1e  addiu       $a2, $zero, 0x3C1E
    ctx->pc = 0x1ef73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15390));
    // 0x1ef740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef744: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1ef744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ef748: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1EF748u;
    SET_GPR_U32(ctx, 31, 0x1EF750u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1EF748u, 0x1EF750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF750u;
label_1ef750:
    // 0x1ef750: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef754: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef758: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef75c: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ef75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1ef760: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ef760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x1ef764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef768: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef76c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef770: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ef770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ef774: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ef774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1ef778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef77c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef780: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef784: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ef784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ef788: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x1ef78c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef790: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef794: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef798: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ef798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ef79c: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
    // 0x1ef7a0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef7a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef7a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef7ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef7b0: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1ef7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ef7b4: 0x3c023cc9  lui         $v0, 0x3CC9
    ctx->pc = 0x1ef7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15561 << 16));
    // 0x1ef7b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1ef7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1ef7bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef7bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef7c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef7c4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ef7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ef7c8: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x1ef7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x1ef7cc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF7CCu;
    SET_GPR_U32(ctx, 31, 0x1EF7D4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF7CCu, 0x1EF7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7D4u;
label_1ef7d4:
    // 0x1ef7d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef7d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef7dc: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1EF7DCu;
    SET_GPR_U32(ctx, 31, 0x1EF7E4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1EF7DCu, 0x1EF7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF7E4u;
label_1ef7e4:
    // 0x1ef7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef7e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ef7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ef7ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EF7ECu;
    {
        const bool branch_taken_0x1ef7ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef7ec) {
            ctx->pc = 0x1EF818u;
            return;
        }
    }
    ctx->pc = 0x1EF7F4u;
    // 0x1ef7f4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1ef7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ef7f8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x1ef7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x1ef7fc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1ef7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1ef800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ef800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef804: 0x24040503  addiu       $a0, $zero, 0x503
    ctx->pc = 0x1ef804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1283));
    // 0x1ef808: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1ef808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1ef80c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1ef80cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1ef810: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1EF810u;
    SET_GPR_U32(ctx, 31, 0x1EF818u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1EF810u, 0x1EF818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF818u;
}
