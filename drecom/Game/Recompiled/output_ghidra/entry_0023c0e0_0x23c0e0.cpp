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

// Function: entry_0023c0e0
// Address: 0x23c0e0 - 0x23c1d0
void entry_0023c0e0_0x23c0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023c0e0_0x23c0e0");
#endif

    switch (ctx->pc) {
        case 0x23c15cu: goto label_23c15c;
        case 0x23c194u: goto label_23c194;
        case 0x23c1c8u: goto label_23c1c8;
        default: break;
    }

    ctx->pc = 0x23c0e0u;

    // 0x23c0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23c0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c0e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c0e8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x23c0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x23c0ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c0ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c0f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c0f4: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x23c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c0f8: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x23c0f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x23c0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23c0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c100: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c104: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c108: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x23c108u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x23c10c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x23c10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x23c110: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x23c110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23c114: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23c114u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c118: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x23c118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c11c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x23c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x23c120: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23c120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x23c124: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x23c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x23c128: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x23c128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x23c12c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c12cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c130: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c134: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c138: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x23c138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x23c13c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c140: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x23c140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c144: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x23c144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x23c148: 0x24065a00  addiu       $a2, $zero, 0x5A00
    ctx->pc = 0x23c148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23040));
    // 0x23c14c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x23c14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c150: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x23c150u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x23c154: 0xc0965d0  jal         func_259740
    ctx->pc = 0x23C154u;
    SET_GPR_U32(ctx, 31, 0x23C15Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x23C154u, 0x23C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C15Cu;
label_23c15c:
    // 0x23c15c: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x23c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x23c160: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x23c160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x23c164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c168: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c16c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c170: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x23c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x23c174: 0x3c023ae4  lui         $v0, 0x3AE4
    ctx->pc = 0x23c174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15076 << 16));
    // 0x23c178: 0x3442c388  ori         $v0, $v0, 0xC388
    ctx->pc = 0x23c178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50056);
    // 0x23c17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23c17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23c180: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c184: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23c184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23c188: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x23c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x23c18c: 0xc067694  jal         func_19DA50
    ctx->pc = 0x23C18Cu;
    SET_GPR_U32(ctx, 31, 0x23C194u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x23C18Cu, 0x23C194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C194u;
label_23c194:
    // 0x23c194: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23c194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x23c198: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23c19c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23C19Cu;
    {
        const bool branch_taken_0x23c19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c19c) {
            ctx->pc = 0x23C1D0u;
            return;
        }
    }
    ctx->pc = 0x23C1A4u;
    // 0x23c1a4: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x23c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x23c1a8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x23c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x23c1ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x23c1acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23c1b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x23c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x23c1b4: 0x24040520  addiu       $a0, $zero, 0x520
    ctx->pc = 0x23c1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1312));
    // 0x23c1b8: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x23c1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x23c1bc: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x23c1bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x23c1c0: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x23C1C0u;
    SET_GPR_U32(ctx, 31, 0x23C1C8u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x23C1C0u, 0x23C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C1C8u;
label_23c1c8:
    // 0x23c1c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23C1C8u;
    {
        const bool branch_taken_0x23c1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23c1c8) {
            ctx->pc = 0x23C1F4u;
            return;
        }
    }
    ctx->pc = 0x23C1D0u;
}
