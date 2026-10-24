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

// Function: entry_002a4da8
// Address: 0x2a4da8 - 0x2a4f38
void entry_002a4da8_0x2a4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a4da8_0x2a4da8");
#endif

    switch (ctx->pc) {
        case 0x2a4dccu: goto label_2a4dcc;
        case 0x2a4e00u: goto label_2a4e00;
        case 0x2a4e1cu: goto label_2a4e1c;
        case 0x2a4e48u: goto label_2a4e48;
        case 0x2a4e60u: goto label_2a4e60;
        case 0x2a4e84u: goto label_2a4e84;
        case 0x2a4e94u: goto label_2a4e94;
        case 0x2a4ea4u: goto label_2a4ea4;
        case 0x2a4eb4u: goto label_2a4eb4;
        case 0x2a4f30u: goto label_2a4f30;
        default: break;
    }

    ctx->pc = 0x2a4da8u;

    // 0x2a4da8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4dac: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a4dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4db0: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2a4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2a4db4: 0x34620fdb  ori         $v0, $v1, 0xFDB
    ctx->pc = 0x2a4db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2a4db8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a4db8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4dbc: 0x0  nop
    ctx->pc = 0x2a4dbcu;
    // NOP
    // 0x2a4dc0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a4dc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a4dc4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4DC4u;
    SET_GPR_U32(ctx, 31, 0x2A4DCCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4DC4u, 0x2A4DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DCCu;
label_2a4dcc:
    // 0x2a4dcc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4dd0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x2a4dd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x2a4dd4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4dd8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ddc: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x2a4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
    // 0x2a4de0: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a4de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a4de4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4de8: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4dec: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a4decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a4df0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a4df4: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a4df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a4df8: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A4DF8u;
    SET_GPR_U32(ctx, 31, 0x2A4E00u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A4DF8u, 0x2A4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E00u;
label_2a4e00:
    // 0x2a4e00: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a4e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a4e04: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e08: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a4e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4e0c: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a4e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4e10: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a4e10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a4e14: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4E14u;
    SET_GPR_U32(ctx, 31, 0x2A4E1Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4E14u, 0x2A4E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E1Cu;
label_2a4e1c:
    // 0x2a4e1c: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e20: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a4e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a4e24: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e28: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4e2c: 0x3c044049  lui         $a0, 0x4049
    ctx->pc = 0x2a4e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16457 << 16));
    // 0x2a4e30: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2a4e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2a4e34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2a4e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a4e38: 0x0  nop
    ctx->pc = 0x2a4e38u;
    // NOP
    // 0x2a4e3c: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2a4e3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2a4e40: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A4E40u;
    SET_GPR_U32(ctx, 31, 0x2A4E48u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A4E40u, 0x2A4E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E48u;
label_2a4e48:
    // 0x2a4e48: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e4c: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a4e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a4e50: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e54: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2a4e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2a4e58: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2A4E58u;
    SET_GPR_U32(ctx, 31, 0x2A4E60u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2A4E58u, 0x2A4E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E60u;
label_2a4e60:
    // 0x2a4e60: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4e60u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4e64: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e68: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e6c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e70: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x2a4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x2a4e74: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x2a4e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x2a4e78: 0x24460180  addiu       $a2, $v0, 0x180
    ctx->pc = 0x2a4e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2a4e7c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2A4E7Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E84u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2A4E7Cu, 0x2A4E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E84u;
label_2a4e84:
    // 0x2a4e84: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e88: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a4e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a4e8c: 0xc0a748c  jal         func_29D230
    ctx->pc = 0x2A4E8Cu;
    SET_GPR_U32(ctx, 31, 0x2A4E94u);
    ctx->pc = 0x29D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D230u, 0x2A4E8Cu, 0x2A4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4E94u;
label_2a4e94:
    // 0x2a4e94: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4e94u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4e98: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4e9c: 0xc0b3764  jal         func_2CDD90
    ctx->pc = 0x2A4E9Cu;
    SET_GPR_U32(ctx, 31, 0x2A4EA4u);
    ctx->pc = 0x2CDD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDD90u, 0x2A4E9Cu, 0x2A4EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EA4u;
label_2a4ea4:
    // 0x2a4ea4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4ea4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4ea8: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4eac: 0xc0aa354  jal         func_2A8D50
    ctx->pc = 0x2A4EACu;
    SET_GPR_U32(ctx, 31, 0x2A4EB4u);
    ctx->pc = 0x2A8D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8D50u, 0x2A4EACu, 0x2A4EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4EB4u;
label_2a4eb4:
    // 0x2a4eb4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2a4eb4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4eb8: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a4eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ebc: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a4ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4ec0: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4ec4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4ec8: 0xc4a00180  lwc1        $f0, 0x180($a1)
    ctx->pc = 0x2a4ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4ecc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4eccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4ed0: 0xe4a00180  swc1        $f0, 0x180($a1)
    ctx->pc = 0x2a4ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 384), bits); }
    // 0x2a4ed4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ed8: 0x3c033f73  lui         $v1, 0x3F73
    ctx->pc = 0x2a4ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16243 << 16));
    // 0x2a4edc: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x2a4edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x2a4ee0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2a4ee0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a4ee4: 0xc4800188  lwc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4ee8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a4ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a4eec: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a4eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a4ef0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4ef4: 0x908509e7  lbu         $a1, 0x9E7($a0)
    ctx->pc = 0x2a4ef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x2a4ef8: 0x10a00183  beqz        $a1, . + 4 + (0x183 << 2)
    ctx->pc = 0x2A4EF8u;
    {
        const bool branch_taken_0x2a4ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4ef8) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A4F00u;
    // 0x2a4f00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a4f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a4f04: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a4f04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f08: 0xa0e60002  sb          $a2, 0x2($a3)
    ctx->pc = 0x2a4f08u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 6));
    // 0x2a4f0c: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a4f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f10: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a4f14: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2a4f14u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a4f18: 0x8d050368  lw          $a1, 0x368($t0)
    ctx->pc = 0x2a4f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 872)));
    // 0x2a4f1c: 0x24060411  addiu       $a2, $zero, 0x411
    ctx->pc = 0x2a4f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1041));
    // 0x2a4f20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a4f20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4f24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a4f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a4f28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A4F28u;
    SET_GPR_U32(ctx, 31, 0x2A4F30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A4F28u, 0x2A4F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4F30u;
label_2a4f30:
    // 0x2a4f30: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x2A4F30u;
    {
        const bool branch_taken_0x2a4f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4f30) {
            ctx->pc = 0x2A5508u;
            return;
        }
    }
    ctx->pc = 0x2A4F38u;
}
