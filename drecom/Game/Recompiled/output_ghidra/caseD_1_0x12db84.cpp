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

// Function: caseD_1
// Address: 0x12db84 - 0x12dce0
void caseD_1_0x12db84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x12db84");
#endif

    switch (ctx->pc) {
        case 0x12db9cu: goto label_12db9c;
        case 0x12dbc8u: goto label_12dbc8;
        case 0x12dbe0u: goto label_12dbe0;
        case 0x12dbecu: goto label_12dbec;
        case 0x12dbfcu: goto label_12dbfc;
        case 0x12dc08u: goto label_12dc08;
        case 0x12dc2cu: goto label_12dc2c;
        case 0x12dc60u: goto label_12dc60;
        case 0x12dc74u: goto label_12dc74;
        case 0x12dcb8u: goto label_12dcb8;
        default: break;
    }

    ctx->pc = 0x12db84u;

    // 0x12db84: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x12db84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12db88: 0x24a40120  addiu       $a0, $a1, 0x120
    ctx->pc = 0x12db88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 288));
    // 0x12db8c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x12db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x12db90: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x12db90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x12db94: 0xc05ccfc  jal         func_1733F0
    ctx->pc = 0x12DB94u;
    SET_GPR_U32(ctx, 31, 0x12DB9Cu);
    ctx->pc = 0x1733F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1733F0u, 0x12DB94u, 0x12DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DB9Cu;
label_12db9c:
    // 0x12db9c: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dba0: 0xe4801290  swc1        $f0, 0x1290($a0)
    ctx->pc = 0x12dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4752), bits); }
    // 0x12dba4: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x12dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x12dba8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12dba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12dbac: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x12dbacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x12dbb0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbb8: 0xc48c1290  lwc1        $f12, 0x1290($a0)
    ctx->pc = 0x12dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12dbbc: 0xc46d00d4  lwc1        $f13, 0xD4($v1)
    ctx->pc = 0x12dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x12dbc0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x12DBC0u;
    SET_GPR_U32(ctx, 31, 0x12DBC8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x12DBC0u, 0x12DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBC8u;
label_12dbc8:
    // 0x12dbc8: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbcc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x12dbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x12dbd0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12dbd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dbd8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x12DBD8u;
    SET_GPR_U32(ctx, 31, 0x12DBE0u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x12DBD8u, 0x12DBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBE0u;
label_12dbe0:
    // 0x12dbe0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbe4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x12DBE4u;
    SET_GPR_U32(ctx, 31, 0x12DBECu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x12DBE4u, 0x12DBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBECu;
label_12dbec:
    // 0x12dbec: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dbf0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x12dbf0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dbf4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x12DBF4u;
    SET_GPR_U32(ctx, 31, 0x12DBFCu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x12DBF4u, 0x12DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DBFCu;
label_12dbfc:
    // 0x12dbfc: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dc00: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x12DC00u;
    SET_GPR_U32(ctx, 31, 0x12DC08u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x12DC00u, 0x12DC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC08u;
label_12dc08:
    // 0x12dc08: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dc0c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x12dc0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x12dc10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x12dc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12dc14: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x12dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x12dc18: 0x1060005a  beqz        $v1, . + 4 + (0x5A << 2)
    ctx->pc = 0x12DC18u;
    {
        const bool branch_taken_0x12dc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc18) {
            ctx->pc = 0x12DD84u;
            return;
        }
    }
    ctx->pc = 0x12DC20u;
    // 0x12dc20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x12dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12dc24: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12DC24u;
    SET_GPR_U32(ctx, 31, 0x12DC2Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DC24u, 0x12DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC2Cu;
label_12dc2c:
    // 0x12dc2c: 0x3c02c2c8  lui         $v0, 0xC2C8
    ctx->pc = 0x12dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49864 << 16));
    // 0x12dc30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12dc30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12dc34: 0x0  nop
    ctx->pc = 0x12dc34u;
    // NOP
    // 0x12dc38: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x12dc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12dc3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dc40: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dc44: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dc48: 0x24450540  addiu       $a1, $v0, 0x540
    ctx->pc = 0x12dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12dc4c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12dc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12dc50: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x12dc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x12dc54: 0x24478d80  addiu       $a3, $v0, -0x7280
    ctx->pc = 0x12dc54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937984));
    // 0x12dc58: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x12DC58u;
    SET_GPR_U32(ctx, 31, 0x12DC60u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x12DC58u, 0x12DC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC60u;
label_12dc60:
    // 0x12dc60: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12DC60u;
    {
        const bool branch_taken_0x12dc60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dc60) {
            ctx->pc = 0x12DCE0u;
            return;
        }
    }
    ctx->pc = 0x12DC68u;
    // 0x12dc68: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12dc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12dc6c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x12DC6Cu;
    SET_GPR_U32(ctx, 31, 0x12DC74u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x12DC6Cu, 0x12DC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DC74u;
label_12dc74:
    // 0x12dc74: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dc78: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x12dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dc7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12dc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12dc80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12dc84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x12dc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x12dc88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12dc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12dc8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x12dc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12dc90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12dc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12dc94: 0x34440106  ori         $a0, $v0, 0x106
    ctx->pc = 0x12dc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)262);
    // 0x12dc98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dc9c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dca0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x12dca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12dca4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dca4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dca8: 0x24470540  addiu       $a3, $v0, 0x540
    ctx->pc = 0x12dca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x12dcac: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x12dcacu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dcb0: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x12DCB0u;
    SET_GPR_U32(ctx, 31, 0x12DCB8u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x12DCB0u, 0x12DCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCB8u;
label_12dcb8:
    // 0x12dcb8: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x12dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x12dcbc: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x12dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12dcc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12dcc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12dcc4: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dcc8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x12dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x12dccc: 0x24040515  addiu       $a0, $zero, 0x515
    ctx->pc = 0x12dcccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1301));
    // 0x12dcd0: 0x24450570  addiu       $a1, $v0, 0x570
    ctx->pc = 0x12dcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x12dcd4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x12dcd4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x12dcd8: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x12DCD8u;
    SET_GPR_U32(ctx, 31, 0x12DCE0u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x12DCD8u, 0x12DCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCE0u;
}
