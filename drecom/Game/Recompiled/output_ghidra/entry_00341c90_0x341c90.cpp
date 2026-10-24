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

// Function: entry_00341c90
// Address: 0x341c90 - 0x341d54
void entry_00341c90_0x341c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341c90_0x341c90");
#endif

    switch (ctx->pc) {
        case 0x341cb8u: goto label_341cb8;
        case 0x341cccu: goto label_341ccc;
        case 0x341d14u: goto label_341d14;
        default: break;
    }

    ctx->pc = 0x341c90u;

    // 0x341c90: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x341c90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x341c94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x341c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x341c98: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x341c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x341c9c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x341C9Cu;
    {
        const bool branch_taken_0x341c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x341c9c) {
            ctx->pc = 0x341D6Cu;
            return;
        }
    }
    ctx->pc = 0x341CA4u;
    // 0x341ca4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341ca8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x341ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341cac: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x341cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x341cb0: 0xc040c9e  jal         func_103278
    ctx->pc = 0x341CB0u;
    SET_GPR_U32(ctx, 31, 0x341CB8u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x341CB8u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341CB8u) { return; }
    ctx->pc = 0x341CB8u;
label_341cb8:
    // 0x341cb8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341cbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x341cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x341cc0: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x341cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x341cc4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x341CC4u;
    SET_GPR_U32(ctx, 31, 0x341CCCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x341CCCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x341CCCu) { return; }
    ctx->pc = 0x341CCCu;
label_341ccc:
    // 0x341ccc: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x341cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341cd0: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x341cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x341cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341cd8: 0x0  nop
    ctx->pc = 0x341cd8u;
    // NOP
    // 0x341cdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x341cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x341ce0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x341ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x341ce4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x341ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x341ce8: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x341ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x341cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341cf0: 0x0  nop
    ctx->pc = 0x341cf0u;
    // NOP
    // 0x341cf4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x341cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x341cf8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x341cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x341cfc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x341cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x341d00: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x341d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x341d04: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x341d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x341d08: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x341d08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x341d0c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x341D0Cu;
    SET_GPR_U32(ctx, 31, 0x341D14u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x341D0Cu, 0x341D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x341D14u;
label_341d14:
    // 0x341d14: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x341d14u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x341d18: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x341d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x341d1c: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x341d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x341d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x341d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x341d24: 0x0  nop
    ctx->pc = 0x341d24u;
    // NOP
    // 0x341d28: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x341d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x341d2c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x341D2Cu;
    {
        const bool branch_taken_0x341d2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x341d2c) {
            ctx->pc = 0x341D54u;
            return;
        }
    }
    ctx->pc = 0x341D34u;
    // 0x341d34: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x341d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d38: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x341d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x341d3c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x341d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x341d40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x341d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x341d44: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x341d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x341d48: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x341d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x341d4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x341D4Cu;
    {
        const bool branch_taken_0x341d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341d4c) {
            ctx->pc = 0x341D6Cu;
            return;
        }
    }
    ctx->pc = 0x341D54u;
}
