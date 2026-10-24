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

// Function: entry_0031fae0
// Address: 0x31fae0 - 0x31fbe8
void entry_0031fae0_0x31fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031fae0_0x31fae0");
#endif

    switch (ctx->pc) {
        case 0x31fb30u: goto label_31fb30;
        case 0x31fb50u: goto label_31fb50;
        case 0x31fb68u: goto label_31fb68;
        case 0x31fb84u: goto label_31fb84;
        default: break;
    }

    ctx->pc = 0x31fae0u;

    // 0x31fae0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fae4: 0x90630343  lbu         $v1, 0x343($v1)
    ctx->pc = 0x31fae4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 835)));
    // 0x31fae8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x31fae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x31faec: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x31faecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x31faf0: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
    ctx->pc = 0x31FAF0u;
    {
        const bool branch_taken_0x31faf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31faf0) {
            ctx->pc = 0x31FD70u;
            return;
        }
    }
    ctx->pc = 0x31FAF8u;
    // 0x31faf8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31faf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fafc: 0x94630340  lhu         $v1, 0x340($v1)
    ctx->pc = 0x31fafcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 832)));
    // 0x31fb00: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x31fb00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x31fb04: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31fb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31fb08: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x31FB08u;
    {
        const bool branch_taken_0x31fb08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb08) {
            ctx->pc = 0x31FC30u;
            return;
        }
    }
    ctx->pc = 0x31FB10u;
    // 0x31fb10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb14: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb1c: 0x248402f0  addiu       $a0, $a0, 0x2F0
    ctx->pc = 0x31fb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 752));
    // 0x31fb20: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fb24: 0x24460300  addiu       $a2, $v0, 0x300
    ctx->pc = 0x31fb24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x31fb28: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FB28u;
    SET_GPR_U32(ctx, 31, 0x31FB30u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FB28u, 0x31FB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB30u;
label_31fb30:
    // 0x31fb30: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x31fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb34: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb3c: 0x248402b0  addiu       $a0, $a0, 0x2B0
    ctx->pc = 0x31fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 688));
    // 0x31fb40: 0x246502f0  addiu       $a1, $v1, 0x2F0
    ctx->pc = 0x31fb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
    // 0x31fb44: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fb48: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x31FB48u;
    SET_GPR_U32(ctx, 31, 0x31FB50u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x31FB48u, 0x31FB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FB50u;
label_31fb50:
    // 0x31fb50: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb54: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb58: 0x24640380  addiu       $a0, $v1, 0x380
    ctx->pc = 0x31fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x31fb5c: 0x8c450320  lw          $a1, 0x320($v0)
    ctx->pc = 0x31fb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 800)));
    // 0x31fb60: 0xc040ca2  jal         func_103288
    ctx->pc = 0x31FB60u;
    SET_GPR_U32(ctx, 31, 0x31FB68u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x31FB68u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FB68u) { return; }
    ctx->pc = 0x31FB68u;
label_31fb68:
    // 0x31fb68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb6c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x31fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb70: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x31fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31fb74: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x31fb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x31fb78: 0x244602b0  addiu       $a2, $v0, 0x2B0
    ctx->pc = 0x31fb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 688));
    // 0x31fb7c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x31FB7Cu;
    SET_GPR_U32(ctx, 31, 0x31FB84u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x31FB84u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x31FB84u) { return; }
    ctx->pc = 0x31FB84u;
label_31fb84:
    // 0x31fb84: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x31fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x31fb88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31fb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31fb8c: 0x0  nop
    ctx->pc = 0x31fb8cu;
    // NOP
    // 0x31fb90: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x31fb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x31fb94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fb98: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x31fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fb9c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x31fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fba0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fba0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fba4: 0x0  nop
    ctx->pc = 0x31fba4u;
    // NOP
    // 0x31fba8: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x31FBA8u;
    {
        const bool branch_taken_0x31fba8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fba8) {
            ctx->pc = 0x31FBE8u;
            return;
        }
    }
    ctx->pc = 0x31FBB0u;
    // 0x31fbb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbb4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x31fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fbb8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x31fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fbbc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fbbcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fbc0: 0x0  nop
    ctx->pc = 0x31fbc0u;
    // NOP
    // 0x31fbc4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x31FBC4u;
    {
        const bool branch_taken_0x31fbc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fbc4) {
            ctx->pc = 0x31FBE8u;
            return;
        }
    }
    ctx->pc = 0x31FBCCu;
    // 0x31fbcc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31fbd0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x31fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fbd4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x31fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fbd8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x31fbd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31fbdc: 0x0  nop
    ctx->pc = 0x31fbdcu;
    // NOP
    // 0x31fbe0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x31FBE0u;
    {
        const bool branch_taken_0x31fbe0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31fbe0) {
            ctx->pc = 0x31FC20u;
            return;
        }
    }
    ctx->pc = 0x31FBE8u;
}
