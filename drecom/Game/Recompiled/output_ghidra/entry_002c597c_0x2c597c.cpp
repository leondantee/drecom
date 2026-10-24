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

// Function: entry_002c597c
// Address: 0x2c597c - 0x2c5ab8
void entry_002c597c_0x2c597c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c597c_0x2c597c");
#endif

    switch (ctx->pc) {
        case 0x2c59a8u: goto label_2c59a8;
        case 0x2c59b0u: goto label_2c59b0;
        case 0x2c59d4u: goto label_2c59d4;
        case 0x2c5a64u: goto label_2c5a64;
        case 0x2c5ab0u: goto label_2c5ab0;
        default: break;
    }

    ctx->pc = 0x2c597cu;

    // 0x2c597c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5980: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5984: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2c5984u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c5988: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c598c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5990: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5994: 0x24061e00  addiu       $a2, $zero, 0x1E00
    ctx->pc = 0x2c5994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7680));
    // 0x2c5998: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c599c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c599cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c59a0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C59A0u;
    SET_GPR_U32(ctx, 31, 0x2C59A8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C59A0u, 0x2C59A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59A8u;
label_2c59a8:
    // 0x2c59a8: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2C59A8u;
    SET_GPR_U32(ctx, 31, 0x2C59B0u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2C59A8u, 0x2C59B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59B0u;
label_2c59b0:
    // 0x2c59b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c59b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c59b4: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x2c59b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x2c59b8: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x2c59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x2c59bc: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2c59bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2c59c0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c59c0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c59c4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c59c8: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c59c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c59cc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C59CCu;
    SET_GPR_U32(ctx, 31, 0x2C59D4u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C59CCu, 0x2C59D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C59D4u;
label_2c59d4:
    // 0x2c59d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c59d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c59d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c59d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c59dc: 0x0  nop
    ctx->pc = 0x2c59dcu;
    // NOP
    // 0x2c59e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c59e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c59e4: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x2c59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
    // 0x2c59e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c59e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c59ec: 0x0  nop
    ctx->pc = 0x2c59ecu;
    // NOP
    // 0x2c59f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c59f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c59f4: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c59f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c59f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c59fc: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c59fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c5a00: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a04: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a08: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2c5a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2c5a0c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2c5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2c5a10: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2c5a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2c5a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a18: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a1c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a20: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x2c5a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x2c5a24: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a28: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x2c5a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a2c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x2c5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2c5a30: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x2c5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x2c5a34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2c5a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c5a38: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x2c5a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x2c5a3c: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a40: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a44: 0x80420039  lb          $v0, 0x39($v0)
    ctx->pc = 0x2c5a44u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 57)));
    // 0x2c5a48: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x2c5a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x2c5a4c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2c5a4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x2c5a50: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x2c5a50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2c5a54: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2C5A54u;
    {
        const bool branch_taken_0x2c5a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c5a54) {
            ctx->pc = 0x2C5AB8u;
            return;
        }
    }
    ctx->pc = 0x2C5A5Cu;
    // 0x2c5a5c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2C5A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C5A64u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2C5A5Cu, 0x2C5A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5A64u;
label_2c5a64:
    // 0x2c5a64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2c5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2c5a68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c5a68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c5a6c: 0x0  nop
    ctx->pc = 0x2c5a6cu;
    // NOP
    // 0x2c5a70: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c5a70u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2c5a74: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x2c5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x2c5a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c5a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5a7c: 0x0  nop
    ctx->pc = 0x2c5a7cu;
    // NOP
    // 0x2c5a80: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2c5a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5a84: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a88: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2c5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2c5a8c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2c5a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x2c5a90: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a94: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2c5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c5a98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2c5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2c5a9c: 0x24061e0a  addiu       $a2, $zero, 0x1E0A
    ctx->pc = 0x2c5a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7690));
    // 0x2c5aa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2c5aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c5aa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2c5aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2c5aa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2C5AA8u;
    SET_GPR_U32(ctx, 31, 0x2C5AB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2C5AA8u, 0x2C5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5AB0u;
label_2c5ab0:
    // 0x2c5ab0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C5AB0u;
    {
        const bool branch_taken_0x2c5ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5ab0) {
            ctx->pc = 0x2C5AD8u;
            return;
        }
    }
    ctx->pc = 0x2C5AB8u;
}
