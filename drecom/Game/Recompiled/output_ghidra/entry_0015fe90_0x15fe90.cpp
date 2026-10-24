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

// Function: entry_0015fe90
// Address: 0x15fe90 - 0x15ff54
void entry_0015fe90_0x15fe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fe90_0x15fe90");
#endif

    switch (ctx->pc) {
        case 0x15fef0u: goto label_15fef0;
        case 0x15ff34u: goto label_15ff34;
        default: break;
    }

    ctx->pc = 0x15fe90u;

    // 0x15fe90: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fe94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x15fe94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x15fe98: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15fe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fe9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15fe9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15fea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15fea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fea4: 0x0  nop
    ctx->pc = 0x15fea4u;
    // NOP
    // 0x15fea8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15fea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15feac: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15feb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x15feb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15feb4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x15feb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x15feb8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15feb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15febc: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15fec0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x15fec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15fec4: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15fec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x15fec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15fec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15fecc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15feccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15fed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15fed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15fed4: 0x0  nop
    ctx->pc = 0x15fed4u;
    // NOP
    // 0x15fed8: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15fed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fedc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fee0: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fee4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fee8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FEE8u;
    SET_GPR_U32(ctx, 31, 0x15FEF0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15FEF0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15FEF0u) { return; }
    ctx->pc = 0x15FEF0u;
label_15fef0:
    // 0x15fef0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x15fef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fef4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x15fef4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fef8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x15fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15fefc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x15fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x15ff00: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x15ff00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ff04: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x15ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x15ff08: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x15ff08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x15ff0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff10: 0x0  nop
    ctx->pc = 0x15ff10u;
    // NOP
    // 0x15ff14: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15ff14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ff18: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ff18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ff1c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15ff20: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x15ff20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15ff24: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x15ff24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15ff28: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x15ff28u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15ff2c: 0xc059e1c  jal         func_167870
    ctx->pc = 0x15FF2Cu;
    SET_GPR_U32(ctx, 31, 0x15FF34u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x15FF2Cu, 0x15FF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF34u;
label_15ff34:
    // 0x15ff34: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x15ff34u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x15ff38: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF38u;
    {
        const bool branch_taken_0x15ff38 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff38) {
            ctx->pc = 0x15FF54u;
            return;
        }
    }
    ctx->pc = 0x15FF40u;
    // 0x15ff40: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x15ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x15ff44: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x15ff44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x15ff48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ff48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ff4c: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x15FF54u;
}
