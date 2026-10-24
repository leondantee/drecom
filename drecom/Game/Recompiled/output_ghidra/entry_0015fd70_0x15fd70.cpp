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

// Function: entry_0015fd70
// Address: 0x15fd70 - 0x15fe38
void entry_0015fd70_0x15fd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fd70_0x15fd70");
#endif

    switch (ctx->pc) {
        case 0x15fdd4u: goto label_15fdd4;
        case 0x15fe18u: goto label_15fe18;
        default: break;
    }

    ctx->pc = 0x15fd70u;

    // 0x15fd70: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15fd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd74: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x15fd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x15fd78: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fd7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15fd7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15fd80: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15fd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15fd84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fd84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fd88: 0x0  nop
    ctx->pc = 0x15fd88u;
    // NOP
    // 0x15fd8c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fd90: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15fd94: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15fd94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15fd98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15fd9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15fd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15fda0: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fda4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15fda4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15fda8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15fda8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15fdac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15fdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fdb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fdb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fdb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdb8: 0x0  nop
    ctx->pc = 0x15fdb8u;
    // NOP
    // 0x15fdbc: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15fdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fdc0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fdc4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fdc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fdc8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fdcc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FDCCu;
    SET_GPR_U32(ctx, 31, 0x15FDD4u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FDD4u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FDD4u) { return; }
    ctx->pc = 0x15FDD4u;
label_15fdd4:
    // 0x15fdd4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fdd8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15fdd8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fddc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fde0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15fde4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x15fde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15fde8: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x15fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x15fdec: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15fdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15fdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fdf4: 0x0  nop
    ctx->pc = 0x15fdf4u;
    // NOP
    // 0x15fdf8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15fdf8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15fdfc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fdfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15fe00: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15fe04: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fe08: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fe0c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15fe0cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15fe10: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FE10u;
    SET_GPR_U32(ctx, 31, 0x15FE18u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FE10u, 0x15FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FE18u;
label_15fe18:
    // 0x15fe18: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15fe18u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15fe1c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FE1Cu;
    {
        const bool branch_taken_0x15fe1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15fe1c) {
            ctx->pc = 0x15FE38u;
            return;
        }
    }
    ctx->pc = 0x15FE24u;
    // 0x15fe24: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15fe28: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15fe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15fe2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fe2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fe30: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x15FE30u;
    {
        const bool branch_taken_0x15fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15fe30) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x15FE38u;
}
