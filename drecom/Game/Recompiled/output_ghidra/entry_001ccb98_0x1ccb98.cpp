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

// Function: entry_001ccb98
// Address: 0x1ccb98 - 0x1ccc48
void entry_001ccb98_0x1ccb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb98_0x1ccb98");
#endif

    switch (ctx->pc) {
        case 0x1ccc14u: goto label_1ccc14;
        default: break;
    }

    ctx->pc = 0x1ccb98u;

    // 0x1ccb98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ccb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccb9c: 0x908309df  lbu         $v1, 0x9DF($a0)
    ctx->pc = 0x1ccb9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2527)));
    // 0x1ccba0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ccba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ccba4: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1ccba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1ccba8: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x1CCBA8u;
    {
        const bool branch_taken_0x1ccba8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccba8) {
            ctx->pc = 0x1CCCE0u;
            return;
        }
    }
    ctx->pc = 0x1CCBB0u;
    // 0x1ccbb0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccbb4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ccbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1ccbb8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1ccbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1ccbbc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x1ccbbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ccbc0: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1CCBC0u;
    {
        const bool branch_taken_0x1ccbc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbc0) {
            ctx->pc = 0x1CCCCCu;
            return;
        }
    }
    ctx->pc = 0x1CCBC8u;
    // 0x1ccbc8: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x1ccbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1ccbcc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ccbccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ccbd0: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x1CCBD0u;
    {
        const bool branch_taken_0x1ccbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccbd0) {
            ctx->pc = 0x1CCCB4u;
            return;
        }
    }
    ctx->pc = 0x1CCBD8u;
    // 0x1ccbd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccbdc: 0xc4611388  lwc1        $f1, 0x1388($v1)
    ctx->pc = 0x1ccbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccbe0: 0x3c044240  lui         $a0, 0x4240
    ctx->pc = 0x1ccbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16960 << 16));
    // 0x1ccbe4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ccbe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccbe8: 0x0  nop
    ctx->pc = 0x1ccbe8u;
    // NOP
    // 0x1ccbec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ccbecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccbf0: 0x0  nop
    ctx->pc = 0x1ccbf0u;
    // NOP
    // 0x1ccbf4: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
    ctx->pc = 0x1CCBF4u;
    {
        const bool branch_taken_0x1ccbf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccbf4) {
            ctx->pc = 0x1CCCB4u;
            return;
        }
    }
    ctx->pc = 0x1CCBFCu;
    // 0x1ccbfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ccbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc00: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ccc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ccc04: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x1ccc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ccc08: 0xc4ad1380  lwc1        $f13, 0x1380($a1)
    ctx->pc = 0x1ccc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ccc0c: 0xc058f20  jal         func_163C80
    ctx->pc = 0x1CCC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC14u);
    ctx->pc = 0x163C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163C80u, 0x1CCC0Cu, 0x1CCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCC14u;
label_1ccc14:
    // 0x1ccc14: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ccc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ccc18: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ccc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ccc1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ccc1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ccc20: 0x0  nop
    ctx->pc = 0x1ccc20u;
    // NOP
    // 0x1ccc24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ccc24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ccc28: 0x0  nop
    ctx->pc = 0x1ccc28u;
    // NOP
    // 0x1ccc2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1CCC2Cu;
    {
        const bool branch_taken_0x1ccc2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ccc2c) {
            ctx->pc = 0x1CCC48u;
            return;
        }
    }
    ctx->pc = 0x1CCC34u;
    // 0x1ccc34: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x1ccc34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
    // 0x1ccc38: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1ccc38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ccc3c: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ccc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ccc40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ccc40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ccc44: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x1ccc44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x1ccc48u;
}
