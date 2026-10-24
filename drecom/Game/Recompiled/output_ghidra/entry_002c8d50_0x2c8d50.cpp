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

// Function: entry_002c8d50
// Address: 0x2c8d50 - 0x2c8e10
void entry_002c8d50_0x2c8d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c8d50_0x2c8d50");
#endif

    switch (ctx->pc) {
        case 0x2c8d78u: goto label_2c8d78;
        case 0x2c8da4u: goto label_2c8da4;
        case 0x2c8dd0u: goto label_2c8dd0;
        default: break;
    }

    ctx->pc = 0x2c8d50u;

    // 0x2c8d50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d54: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x2c8d54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x2c8d58: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2c8d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c8d5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c8d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c8d60: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2c8d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2c8d64: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2C8D64u;
    {
        const bool branch_taken_0x2c8d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d64) {
            ctx->pc = 0x2C8E10u;
            return;
        }
    }
    ctx->pc = 0x2C8D6Cu;
    // 0x2c8d6c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8d70: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2C8D70u;
    SET_GPR_U32(ctx, 31, 0x2C8D78u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2C8D70u, 0x2C8D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D78u;
label_2c8d78:
    // 0x2c8d78: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d7c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c8d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8d80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8d84: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8d88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2c8d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2c8d8c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2c8d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8d90: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2c8d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8d94: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c8d94u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8d98: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2c8d98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c8d9c: 0xc0c4988  jal         func_312620
    ctx->pc = 0x2C8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C8DA4u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x2C8D9Cu, 0x2C8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DA4u;
label_2c8da4:
    // 0x2c8da4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x2c8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8da8: 0x24621330  addiu       $v0, $v1, 0x1330
    ctx->pc = 0x2c8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c8dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8db0: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2c8db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c8db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8db8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x2c8db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c8dbc: 0xc44c0024  lwc1        $f12, 0x24($v0)
    ctx->pc = 0x2c8dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2c8dc0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2c8dc0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2c8dc4: 0x24090014  addiu       $t1, $zero, 0x14
    ctx->pc = 0x2c8dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2c8dc8: 0xc0c4988  jal         func_312620
    ctx->pc = 0x2C8DC8u;
    SET_GPR_U32(ctx, 31, 0x2C8DD0u);
    ctx->pc = 0x312620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312620u, 0x2C8DC8u, 0x2C8DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DD0u;
label_2c8dd0:
    // 0x2c8dd0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2c8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8dd4: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x2c8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c8dd8: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x2c8dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8ddc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c8de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8de4: 0x0  nop
    ctx->pc = 0x2c8de4u;
    // NOP
    // 0x2c8de8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8de8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8dec: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2c8decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2c8df0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2c8df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2c8df4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x2c8df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x2c8df8: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2c8df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c8dfc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2c8dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2c8e00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c8e04: 0x0  nop
    ctx->pc = 0x2c8e04u;
    // NOP
    // 0x2c8e08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2c8e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2c8e0c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2c8e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->pc = 0x2c8e10u;
}
