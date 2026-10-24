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

// Function: entry_00274e90
// Address: 0x274e90 - 0x274f38
void entry_00274e90_0x274e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00274e90_0x274e90");
#endif

    switch (ctx->pc) {
        case 0x274ee4u: goto label_274ee4;
        case 0x274ef0u: goto label_274ef0;
        default: break;
    }

    ctx->pc = 0x274e90u;

    // 0x274e90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x274e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x274e94: 0x2464a610  addiu       $a0, $v1, -0x59F0
    ctx->pc = 0x274e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x274e98: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x274e98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x274e9c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x274e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x274ea0: 0x8c730000  lw          $s3, 0x0($v1)
    ctx->pc = 0x274ea0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x274ea4: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x274ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x274ea8: 0x34830011  ori         $v1, $a0, 0x11
    ctx->pc = 0x274ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
    // 0x274eac: 0x12630022  beq         $s3, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x274EACu;
    {
        const bool branch_taken_0x274eac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x274eac) {
            ctx->pc = 0x274F38u;
            return;
        }
    }
    ctx->pc = 0x274EB4u;
    // 0x274eb4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x274eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x274eb8: 0xae620100  sw          $v0, 0x100($s3)
    ctx->pc = 0x274eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 256), GPR_U32(ctx, 2));
    // 0x274ebc: 0x3c023f78  lui         $v0, 0x3F78
    ctx->pc = 0x274ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16248 << 16));
    // 0x274ec0: 0x344351ec  ori         $v1, $v0, 0x51EC
    ctx->pc = 0x274ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20972);
    // 0x274ec4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274ec8: 0x0  nop
    ctx->pc = 0x274ec8u;
    // NOP
    // 0x274ecc: 0xe66000ac  swc1        $f0, 0xAC($s3)
    ctx->pc = 0x274eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 172), bits); }
    // 0x274ed0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x274ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274ed4: 0x0  nop
    ctx->pc = 0x274ed4u;
    // NOP
    // 0x274ed8: 0xe6600054  swc1        $f0, 0x54($s3)
    ctx->pc = 0x274ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 84), bits); }
    // 0x274edc: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274EDCu;
    SET_GPR_U32(ctx, 31, 0x274EE4u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274EDCu, 0x274EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EE4u;
label_274ee4:
    // 0x274ee4: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274ee8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x274EE8u;
    SET_GPR_U32(ctx, 31, 0x274EF0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x274EE8u, 0x274EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274EF0u;
label_274ef0:
    // 0x274ef0: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274ef4: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x274ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274ef8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x274ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x274efc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274efcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f00: 0x0  nop
    ctx->pc = 0x274f00u;
    // NOP
    // 0x274f04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x274f04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x274f08: 0xe6600050  swc1        $f0, 0x50($s3)
    ctx->pc = 0x274f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 80), bits); }
    // 0x274f0c: 0xc6610058  lwc1        $f1, 0x58($s3)
    ctx->pc = 0x274f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274f10: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x274f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x274f14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274f14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f18: 0x0  nop
    ctx->pc = 0x274f18u;
    // NOP
    // 0x274f1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x274f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x274f20: 0xe6600058  swc1        $f0, 0x58($s3)
    ctx->pc = 0x274f20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 88), bits); }
    // 0x274f24: 0x3c03bfae  lui         $v1, 0xBFAE
    ctx->pc = 0x274f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49070 << 16));
    // 0x274f28: 0x3463147b  ori         $v1, $v1, 0x147B
    ctx->pc = 0x274f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5243);
    // 0x274f2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274f2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274f30: 0x0  nop
    ctx->pc = 0x274f30u;
    // NOP
    // 0x274f34: 0xe6600084  swc1        $f0, 0x84($s3)
    ctx->pc = 0x274f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 132), bits); }
    ctx->pc = 0x274f38u;
}
