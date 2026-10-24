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

// Function: entry_001c8920
// Address: 0x1c8920 - 0x1c89c0
void entry_001c8920_0x1c8920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8920_0x1c8920");
#endif

    switch (ctx->pc) {
        case 0x1c893cu: goto label_1c893c;
        case 0x1c8960u: goto label_1c8960;
        default: break;
    }

    ctx->pc = 0x1c8920u;

    // 0x1c8920: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8924: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c8924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8928: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1c8928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c892c: 0x24650120  addiu       $a1, $v1, 0x120
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c8930: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x1c8934: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1C8934u;
    SET_GPR_U32(ctx, 31, 0x1C893Cu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1C8934u, 0x1C893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C893Cu;
label_1c893c:
    // 0x1c893c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1c893cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8940: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1c8940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8944: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1c8944u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c8948: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1c8948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c894c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1c894cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8950: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c8950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c8954: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1c8954u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1c8958: 0xc06757c  jal         func_19D5F0
    ctx->pc = 0x1C8958u;
    SET_GPR_U32(ctx, 31, 0x1C8960u);
    ctx->pc = 0x19D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D5F0u, 0x1C8958u, 0x1C8960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8960u;
label_1c8960:
    // 0x1c8960: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c8960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c8964: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1c8964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8968: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x1c8968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x1c896c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c896cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8970: 0x0  nop
    ctx->pc = 0x1c8970u;
    // NOP
    // 0x1c8974: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c8974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c8978: 0x0  nop
    ctx->pc = 0x1c8978u;
    // NOP
    // 0x1c897c: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x1C897Cu;
    {
        const bool branch_taken_0x1c897c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c897c) {
            ctx->pc = 0x1C8A04u;
            return;
        }
    }
    ctx->pc = 0x1C8984u;
    // 0x1c8984: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c8984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8988: 0x8c831b60  lw          $v1, 0x1B60($a0)
    ctx->pc = 0x1c8988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7008)));
    // 0x1c898c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c898cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c8990: 0xac831b60  sw          $v1, 0x1B60($a0)
    ctx->pc = 0x1c8990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7008), GPR_U32(ctx, 3));
    // 0x1c8994: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c8994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c8998: 0x8c631b60  lw          $v1, 0x1B60($v1)
    ctx->pc = 0x1c8998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1c899c: 0x2c610006  sltiu       $at, $v1, 0x6
    ctx->pc = 0x1c899cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1c89a0: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C89A0u;
    {
        const bool branch_taken_0x1c89a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c89a0) {
            ctx->pc = 0x1C89C0u;
            return;
        }
    }
    ctx->pc = 0x1C89A8u;
    // 0x1c89a8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c89a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c89ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1c89acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1c89b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c89b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c89b4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1c89b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c89b8: 0x10000173  b           . + 4 + (0x173 << 2)
    ctx->pc = 0x1C89B8u;
    {
        const bool branch_taken_0x1c89b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c89b8) {
            ctx->pc = 0x1C8F88u;
            return;
        }
    }
    ctx->pc = 0x1C89C0u;
}
