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

// Function: entry_00234d84
// Address: 0x234d84 - 0x234ea4
void entry_00234d84_0x234d84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00234d84_0x234d84");
#endif

    switch (ctx->pc) {
        case 0x234d90u: goto label_234d90;
        case 0x234ddcu: goto label_234ddc;
        case 0x234de8u: goto label_234de8;
        case 0x234e00u: goto label_234e00;
        case 0x234e0cu: goto label_234e0c;
        case 0x234e24u: goto label_234e24;
        case 0x234e30u: goto label_234e30;
        case 0x234e48u: goto label_234e48;
        case 0x234e54u: goto label_234e54;
        case 0x234e6cu: goto label_234e6c;
        case 0x234e78u: goto label_234e78;
        case 0x234e90u: goto label_234e90;
        case 0x234e9cu: goto label_234e9c;
        default: break;
    }

    ctx->pc = 0x234d84u;

    // 0x234d84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x234d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x234d88: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x234D88u;
    SET_GPR_U32(ctx, 31, 0x234D90u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x234D90u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x234D90u) { return; }
    ctx->pc = 0x234D90u;
label_234d90:
    // 0x234d90: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234d94: 0xc4401200  lwc1        $f0, 0x1200($v0)
    ctx->pc = 0x234d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234d98: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x234d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x234d9c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234da0: 0xc4401204  lwc1        $f0, 0x1204($v0)
    ctx->pc = 0x234da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234da4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x234da4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x234da8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x234da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x234dac: 0xc4401208  lwc1        $f0, 0x1208($v0)
    ctx->pc = 0x234dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234db0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x234db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x234db4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x234db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x234db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x234db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x234dbc: 0x0  nop
    ctx->pc = 0x234dbcu;
    // NOP
    // 0x234dc0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x234dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x234dc4: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234dc8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234dc8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234dcc: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234dd0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234dd0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234dd4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234DD4u;
    SET_GPR_U32(ctx, 31, 0x234DDCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234DD4u, 0x234DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DDCu;
label_234ddc:
    // 0x234ddc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234de0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234DE0u;
    SET_GPR_U32(ctx, 31, 0x234DE8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234DE0u, 0x234DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234DE8u;
label_234de8:
    // 0x234de8: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234dec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234df0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234df4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234df4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234df8: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234DF8u;
    SET_GPR_U32(ctx, 31, 0x234E00u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234DF8u, 0x234E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E00u;
label_234e00:
    // 0x234e00: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e00u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e04: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E04u;
    SET_GPR_U32(ctx, 31, 0x234E0Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E04u, 0x234E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E0Cu;
label_234e0c:
    // 0x234e0c: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e14: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e18: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E1Cu;
    SET_GPR_U32(ctx, 31, 0x234E24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E1Cu, 0x234E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E24u;
label_234e24:
    // 0x234e24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e28: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E28u;
    SET_GPR_U32(ctx, 31, 0x234E30u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E28u, 0x234E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E30u;
label_234e30:
    // 0x234e30: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e38: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e3c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e3cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e40: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E40u;
    SET_GPR_U32(ctx, 31, 0x234E48u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E40u, 0x234E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E48u;
label_234e48:
    // 0x234e48: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e48u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e4c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E4Cu;
    SET_GPR_U32(ctx, 31, 0x234E54u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E4Cu, 0x234E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E54u;
label_234e54:
    // 0x234e54: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e5c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e60: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e60u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e64: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E64u;
    SET_GPR_U32(ctx, 31, 0x234E6Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E64u, 0x234E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E6Cu;
label_234e6c:
    // 0x234e6c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e70: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E70u;
    SET_GPR_U32(ctx, 31, 0x234E78u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E70u, 0x234E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E78u;
label_234e78:
    // 0x234e78: 0x24040e0e  addiu       $a0, $zero, 0xE0E
    ctx->pc = 0x234e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3598));
    // 0x234e7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x234e7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e80: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x234e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x234e84: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x234e84u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x234e88: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x234E88u;
    SET_GPR_U32(ctx, 31, 0x234E90u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x234E88u, 0x234E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E90u;
label_234e90:
    // 0x234e90: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x234e90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x234e94: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x234E94u;
    SET_GPR_U32(ctx, 31, 0x234E9Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x234E94u, 0x234E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234E9Cu;
label_234e9c:
    // 0x234e9c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x234E9Cu;
    {
        const bool branch_taken_0x234e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e9c) {
            ctx->pc = 0x234FDCu;
            return;
        }
    }
    ctx->pc = 0x234EA4u;
}
