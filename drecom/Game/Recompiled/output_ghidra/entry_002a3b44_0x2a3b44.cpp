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

// Function: entry_002a3b44
// Address: 0x2a3b44 - 0x2a4034
void entry_002a3b44_0x2a3b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a3b44_0x2a3b44");
#endif

    switch (ctx->pc) {
        case 0x2a3b70u: goto label_2a3b70;
        case 0x2a3b9cu: goto label_2a3b9c;
        case 0x2a3bb8u: goto label_2a3bb8;
        case 0x2a3c24u: goto label_2a3c24;
        case 0x2a3c7cu: goto label_2a3c7c;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3cfcu: goto label_2a3cfc;
        case 0x2a3d30u: goto label_2a3d30;
        case 0x2a3d80u: goto label_2a3d80;
        case 0x2a3d88u: goto label_2a3d88;
        case 0x2a3dbcu: goto label_2a3dbc;
        case 0x2a3e00u: goto label_2a3e00;
        case 0x2a3e30u: goto label_2a3e30;
        case 0x2a3e3cu: goto label_2a3e3c;
        case 0x2a3e48u: goto label_2a3e48;
        case 0x2a3f04u: goto label_2a3f04;
        case 0x2a3f44u: goto label_2a3f44;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a3ff4u: goto label_2a3ff4;
        case 0x2a402cu: goto label_2a402c;
        default: break;
    }

    ctx->pc = 0x2a3b44u;

    // 0x2a3b44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a3b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3b48: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a3b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b4c: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x2a3b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a3b50: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b54: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b58: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2a3b58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2a3b5c: 0x24060409  addiu       $a2, $zero, 0x409
    ctx->pc = 0x2a3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x2a3b60: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2a3b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a3b64: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2a3b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a3b68: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2A3B68u;
    SET_GPR_U32(ctx, 31, 0x2A3B70u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2A3B68u, 0x2A3B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B70u;
label_2a3b70:
    // 0x2a3b70: 0x3c043e0e  lui         $a0, 0x3E0E
    ctx->pc = 0x2a3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15886 << 16));
    // 0x2a3b74: 0x3482fa35  ori         $v0, $a0, 0xFA35
    ctx->pc = 0x2a3b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2a3b78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3b78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3b7c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b80: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3b84: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x2a3b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x2a3b88: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2a3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a3b8c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x2a3b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x2a3b90: 0x2465dce0  addiu       $a1, $v1, -0x2320
    ctx->pc = 0x2a3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958304));
    // 0x2a3b94: 0xc05c848  jal         func_172120
    ctx->pc = 0x2A3B94u;
    SET_GPR_U32(ctx, 31, 0x2A3B9Cu);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x2A3B94u, 0x2A3B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3B9Cu;
label_2a3b9c:
    // 0x2a3b9c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a3b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2a3ba0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3ba4: 0xc46100d4  lwc1        $f1, 0xD4($v1)
    ctx->pc = 0x2a3ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3ba8: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x2a3ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3bac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x2a3bacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a3bb0: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3BB0u;
    SET_GPR_U32(ctx, 31, 0x2A3BB8u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3BB0u, 0x2A3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3BB8u;
label_2a3bb8:
    // 0x2a3bb8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3bbc: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x2a3bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x2a3bc0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3bc4: 0xc4410120  lwc1        $f1, 0x120($v0)
    ctx->pc = 0x2a3bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3bc8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3bcc: 0xc420dce0  lwc1        $f0, -0x2320($at)
    ctx->pc = 0x2a3bccu;
    { uint32_t bits = FAST_READ32(0x3EDCE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3bd0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3bd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3bd4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2a3bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a3bd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3bd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3bdc: 0x0  nop
    ctx->pc = 0x2a3bdcu;
    // NOP
    // 0x2a3be0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2a3be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2a3be4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3be8: 0xc4410128  lwc1        $f1, 0x128($v0)
    ctx->pc = 0x2a3be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a3bec: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2a3becu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2a3bf0: 0xc420dce8  lwc1        $f0, -0x2318($at)
    ctx->pc = 0x2a3bf0u;
    { uint32_t bits = FAST_READ32(0x3EDCE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3bf4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2a3bf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a3bf8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2a3bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a3bfc: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2a3bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3c00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a3c00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3c04: 0x0  nop
    ctx->pc = 0x2a3c04u;
    // NOP
    // 0x2a3c08: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x2a3c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2a3c0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2a3c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3c10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a3c10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a3c14: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2a3c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2a3c18: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x2a3c18u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2a3c1c: 0xc040c24  jal         func_103090
    ctx->pc = 0x2A3C1Cu;
    SET_GPR_U32(ctx, 31, 0x2A3C24u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2A3C24u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2A3C24u) { return; }
    ctx->pc = 0x2A3C24u;
label_2a3c24:
    // 0x2a3c24: 0x3c08c302  lui         $t0, 0xC302
    ctx->pc = 0x2a3c24u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49922 << 16));
    // 0x2a3c28: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2a3c28u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3c2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2a3c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3c30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3c34: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c38: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x2a3c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x2a3c3c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3c3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3c40: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c44: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2a3c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x2a3c48: 0x3c02c302  lui         $v0, 0xC302
    ctx->pc = 0x2a3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49922 << 16));
    // 0x2a3c4c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3c50: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2a3c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3c54: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2a3c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3c58: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c5c: 0xe4800188  swc1        $f0, 0x188($a0)
    ctx->pc = 0x2a3c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x2a3c60: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3c64: 0x244400d0  addiu       $a0, $v0, 0xD0
    ctx->pc = 0x2a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x2a3c68: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x2a3c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a3c6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a3c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3c70: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2a3c70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2a3c74: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3C74u;
    SET_GPR_U32(ctx, 31, 0x2A3C7Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3C74u, 0x2A3C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3C7Cu;
label_2a3c7c:
    // 0x2a3c7c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3c80: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a3c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a3c84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3c88: 0x0  nop
    ctx->pc = 0x2a3c88u;
    // NOP
    // 0x2a3c8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3c90: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a3c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3c94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3c98: 0x0  nop
    ctx->pc = 0x2a3c98u;
    // NOP
    // 0x2a3c9c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3ca0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3ca4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3ca4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3ca8: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3CA8u;
    SET_GPR_U32(ctx, 31, 0x2A3CB0u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3CA8u, 0x2A3CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CB0u;
label_2a3cb0:
    // 0x2a3cb0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3cb4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3cb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a3cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3cbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a3cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a3cc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a3cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3cc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a3cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3ccc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2a3cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2a3cd0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3cd4: 0x34440008  ori         $a0, $v0, 0x8
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2a3cd8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3cdc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3cdcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3ce0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a3ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3ce4: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a3ce8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3ce8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3cec: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3CECu;
    SET_GPR_U32(ctx, 31, 0x2A3CF4u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3CECu, 0x2A3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CF4u;
label_2a3cf4:
    // 0x2a3cf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3CF4u;
    SET_GPR_U32(ctx, 31, 0x2A3CFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3CF4u, 0x2A3CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3CFCu;
label_2a3cfc:
    // 0x2a3cfc: 0x3c093c8e  lui         $t1, 0x3C8E
    ctx->pc = 0x2a3cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3d00: 0x3528fa35  ori         $t0, $t1, 0xFA35
    ctx->pc = 0x2a3d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64053);
    // 0x2a3d04: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x2a3d04u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3d08: 0x0  nop
    ctx->pc = 0x2a3d08u;
    // NOP
    // 0x2a3d0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3d0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3d10: 0x3c0a42b4  lui         $t2, 0x42B4
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3d14: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x2a3d14u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3d18: 0x0  nop
    ctx->pc = 0x2a3d18u;
    // NOP
    // 0x2a3d1c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3d1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3d20: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3d24: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3d24u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3d28: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3D28u;
    SET_GPR_U32(ctx, 31, 0x2A3D30u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3D28u, 0x2A3D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D30u;
label_2a3d30:
    // 0x2a3d30: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3d34: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3d38: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2a3d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a3d3c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2a3d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2a3d40: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a3d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3d44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2a3d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2a3d48: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x2a3d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3d4c: 0x642824  and         $a1, $v1, $a0
    ctx->pc = 0x2a3d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a3d50: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x2a3d50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a3d54: 0x34c70008  ori         $a3, $a2, 0x8
    ctx->pc = 0x2a3d54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x2a3d58: 0x8fa80108  lw          $t0, 0x108($sp)
    ctx->pc = 0x2a3d58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3d5c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a3d5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a3d60: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3d60u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3d64: 0x27a90020  addiu       $t1, $sp, 0x20
    ctx->pc = 0x2a3d64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3d68: 0x71203628  paddub      $a2, $t1, $zero
    ctx->pc = 0x2a3d68u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a3d6c: 0x8d0a0130  lw          $t2, 0x130($t0)
    ctx->pc = 0x2a3d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 304)));
    // 0x2a3d70: 0x71403e28  paddub      $a3, $t2, $zero
    ctx->pc = 0x2a3d70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2a3d74: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3d74u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3d78: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3D78u;
    SET_GPR_U32(ctx, 31, 0x2A3D80u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3D78u, 0x2A3D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D80u;
label_2a3d80:
    // 0x2a3d80: 0xc067648  jal         func_19D920
    ctx->pc = 0x2A3D80u;
    SET_GPR_U32(ctx, 31, 0x2A3D88u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2A3D80u, 0x2A3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3D88u;
label_2a3d88:
    // 0x2a3d88: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x2a3d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x2a3d8c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x2a3d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x2a3d90: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2a3d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a3d94: 0x0  nop
    ctx->pc = 0x2a3d94u;
    // NOP
    // 0x2a3d98: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2a3d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a3d9c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x2a3da0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3da0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3da4: 0x0  nop
    ctx->pc = 0x2a3da4u;
    // NOP
    // 0x2a3da8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2a3da8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a3dac: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3db0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x2a3db0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a3db4: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x2A3DB4u;
    SET_GPR_U32(ctx, 31, 0x2A3DBCu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x2A3DB4u, 0x2A3DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3DBCu;
label_2a3dbc:
    // 0x2a3dbc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2a3dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2a3dc0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3dc4: 0x4283c  dsll32      $a1, $a0, 0
    ctx->pc = 0x2a3dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2a3dc8: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x2a3dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x2a3dcc: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x2a3dccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a3dd0: 0x63c38  dsll        $a3, $a2, 16
    ctx->pc = 0x2a3dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << 16);
    // 0x2a3dd4: 0x34e8ffff  ori         $t0, $a3, 0xFFFF
    ctx->pc = 0x2a3dd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a3dd8: 0xa84824  and         $t1, $a1, $t0
    ctx->pc = 0x2a3dd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x2a3ddc: 0x9503c  dsll32      $t2, $t1, 0
    ctx->pc = 0x2a3ddcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) << (32 + 0));
    // 0x2a3de0: 0x35440008  ori         $a0, $t2, 0x8
    ctx->pc = 0x2a3de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)8);
    // 0x2a3de4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2a3de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3de8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2a3de8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3dec: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a3decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a3df0: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x2a3df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2a3df4: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2a3df4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2a3df8: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2A3DF8u;
    SET_GPR_U32(ctx, 31, 0x2A3E00u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2A3DF8u, 0x2A3E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E00u;
label_2a3e00:
    // 0x2a3e00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2a3e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e04: 0x8fa50108  lw          $a1, 0x108($sp)
    ctx->pc = 0x2a3e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3e08: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2a3e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2a3e0c: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2a3e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x2a3e10: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a3e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3e14: 0x8ce80030  lw          $t0, 0x30($a3)
    ctx->pc = 0x2a3e14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2a3e18: 0x15000086  bnez        $t0, . + 4 + (0x86 << 2)
    ctx->pc = 0x2A3E18u;
    {
        const bool branch_taken_0x2a3e18 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a3e18) {
            ctx->pc = 0x2A4034u;
            return;
        }
    }
    ctx->pc = 0x2A3E20u;
    // 0x2a3e20: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2a3e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3e24: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x2a3e24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x2a3e28: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3E28u;
    SET_GPR_U32(ctx, 31, 0x2A3E30u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3E28u, 0x2A3E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E30u;
label_2a3e30:
    // 0x2a3e30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a3e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3e34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3E34u;
    SET_GPR_U32(ctx, 31, 0x2A3E3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3E34u, 0x2A3E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E3Cu;
label_2a3e3c:
    // 0x2a3e3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2a3e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3e40: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2A3E40u;
    SET_GPR_U32(ctx, 31, 0x2A3E48u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2A3E40u, 0x2A3E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3E48u;
label_2a3e48:
    // 0x2a3e48: 0x3c064200  lui         $a2, 0x4200
    ctx->pc = 0x2a3e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16896 << 16));
    // 0x2a3e4c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3e4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e50: 0x0  nop
    ctx->pc = 0x2a3e50u;
    // NOP
    // 0x2a3e54: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2a3e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2a3e58: 0x3c0741c0  lui         $a3, 0x41C0
    ctx->pc = 0x2a3e58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16832 << 16));
    // 0x2a3e5c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a3e5cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e60: 0x0  nop
    ctx->pc = 0x2a3e60u;
    // NOP
    // 0x2a3e64: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2a3e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2a3e68: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x2a3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x2a3e6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e70: 0x0  nop
    ctx->pc = 0x2a3e70u;
    // NOP
    // 0x2a3e74: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2a3e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2a3e78: 0x3c044300  lui         $a0, 0x4300
    ctx->pc = 0x2a3e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17152 << 16));
    // 0x2a3e7c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2a3e7cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e80: 0x0  nop
    ctx->pc = 0x2a3e80u;
    // NOP
    // 0x2a3e84: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2a3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2a3e88: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2a3e88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3e8c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2a3e8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3e90: 0x0  nop
    ctx->pc = 0x2a3e90u;
    // NOP
    // 0x2a3e94: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2a3e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2a3e98: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x2a3e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3e9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2a3e9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3ea0: 0x0  nop
    ctx->pc = 0x2a3ea0u;
    // NOP
    // 0x2a3ea4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x2a3ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2a3ea8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2a3ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3eac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2a3eacu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3eb0: 0x0  nop
    ctx->pc = 0x2a3eb0u;
    // NOP
    // 0x2a3eb4: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x2a3eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2a3eb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2a3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3ebc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a3ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a3ec0: 0x0  nop
    ctx->pc = 0x2a3ec0u;
    // NOP
    // 0x2a3ec4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x2a3ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2a3ec8: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a3ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3ecc: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3eccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3ed0: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a3ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3ed4: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a3ed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a3ed8: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a3ed8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3edc: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3ee0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a3ee0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a3ee4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a3ee8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3eec: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3ef0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3ef4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3ef8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3ef8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3efc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3EFCu;
    SET_GPR_U32(ctx, 31, 0x2A3F04u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3EFCu, 0x2A3F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F04u;
label_2a3f04:
    // 0x2a3f04: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3f08: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a3f08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3f0c: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3f10: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a3f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a3f14: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3f14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3f18: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2a3f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3f1c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2a3f1cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2a3f20: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2a3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2a3f24: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2a3f24u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2a3f28: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3f2c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3f30: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3f34: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3f38: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3f38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3f3c: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3F3Cu;
    SET_GPR_U32(ctx, 31, 0x2A3F44u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3F3Cu, 0x2A3F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F44u;
label_2a3f44:
    // 0x2a3f44: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a3f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3f48: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3f48u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3f4c: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3f50: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2a3f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a3f54: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a3f54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3f58: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3f5c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2a3f60: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3f64: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3f68: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3f6c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3f70: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3f70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3f74: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3F74u;
    SET_GPR_U32(ctx, 31, 0x2A3F7Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3F74u, 0x2A3F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F7Cu;
label_2a3f7c:
    // 0x2a3f7c: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x2a3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3f80: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a3f80u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3f84: 0x3c063c23  lui         $a2, 0x3C23
    ctx->pc = 0x2a3f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3f88: 0x34c5d70a  ori         $a1, $a2, 0xD70A
    ctx->pc = 0x2a3f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x2a3f8c: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x2a3f8cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3f90: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x2a3f90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3f94: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x2a3f94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x2a3f98: 0x24080016  addiu       $t0, $zero, 0x16
    ctx->pc = 0x2a3f98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a3f9c: 0x71002e28  paddub      $a1, $t0, $zero
    ctx->pc = 0x2a3f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x2a3fa0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3fa4: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3fa8: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3fa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3fac: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3facu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3fb0: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3fb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3fb4: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3FB4u;
    SET_GPR_U32(ctx, 31, 0x2A3FBCu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3FB4u, 0x2A3FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FBCu;
label_2a3fbc:
    // 0x2a3fbc: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a3fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3fc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3fc4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a3fc8: 0x3444d70a  ori         $a0, $v0, 0xD70A
    ctx->pc = 0x2a3fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a3fcc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x2a3fccu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a3fd0: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a3fd4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a3fd8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a3fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a3fdc: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a3fdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a3fe0: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a3fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a3fe4: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a3fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a3fe8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a3fe8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a3fec: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A3FECu;
    SET_GPR_U32(ctx, 31, 0x2A3FF4u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A3FECu, 0x2A3FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3FF4u;
label_2a3ff4:
    // 0x2a3ff4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2a3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2a3ff8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a3ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a3ffc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2a3ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x2a4000: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2a4000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2a4004: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a4004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a4008: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x2a4008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2a400c: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a4010: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x2a4010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a4014: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2a4014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a4018: 0x27a80050  addiu       $t0, $sp, 0x50
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a401c: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x2a401cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a4020: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a4024: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A4024u;
    SET_GPR_U32(ctx, 31, 0x2A402Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A4024u, 0x2A402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A402Cu;
label_2a402c:
    // 0x2a402c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A402Cu;
    {
        const bool branch_taken_0x2a402c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a402c) {
            ctx->pc = 0x2A40A4u;
            return;
        }
    }
    ctx->pc = 0x2A4034u;
}
