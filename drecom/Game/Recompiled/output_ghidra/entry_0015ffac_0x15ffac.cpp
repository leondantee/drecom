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

// Function: entry_0015ffac
// Address: 0x15ffac - 0x160068
void entry_0015ffac_0x15ffac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ffac_0x15ffac");
#endif

    switch (ctx->pc) {
        case 0x160004u: goto label_160004;
        case 0x160048u: goto label_160048;
        default: break;
    }

    ctx->pc = 0x15ffacu;

    // 0x15ffac: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x15ffacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ffb0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x15ffb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x15ffb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ffb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffb8: 0x0  nop
    ctx->pc = 0x15ffb8u;
    // NOP
    // 0x15ffbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x15ffbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x15ffc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15ffc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffc4: 0x0  nop
    ctx->pc = 0x15ffc4u;
    // NOP
    // 0x15ffc8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x15ffc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x15ffcc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x15ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x15ffd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ffd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15ffd4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x15ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ffd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x15ffd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15ffdc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x15ffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x15ffe0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15ffe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15ffe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ffe8: 0x0  nop
    ctx->pc = 0x15ffe8u;
    // NOP
    // 0x15ffec: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x15ffecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x15fff0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fff4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x15fff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15fff8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x15fff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15fffc: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15FFFCu;
    SET_GPR_U32(ctx, 31, 0x160004u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x160004u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x160004u) { return; }
    ctx->pc = 0x160004u;
label_160004:
    // 0x160004: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x160004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160008: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x160008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16000c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x16000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x160010: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x160010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x160014: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x160014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160018: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x160018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x16001c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x16001cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x160020: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160024: 0x0  nop
    ctx->pc = 0x160024u;
    // NOP
    // 0x160028: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x16002c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x16002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160030: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x160030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x160034: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x160034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x160038: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x160038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16003c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x16003cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x160040: 0xc059e1c  jal         func_167870
    ctx->pc = 0x160040u;
    SET_GPR_U32(ctx, 31, 0x160048u);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x160040u, 0x160048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160048u;
label_160048:
    // 0x160048: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x160048u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x16004c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16004Cu;
    {
        const bool branch_taken_0x16004c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16004c) {
            ctx->pc = 0x160068u;
            return;
        }
    }
    ctx->pc = 0x160054u;
    // 0x160054: 0x3c02c974  lui         $v0, 0xC974
    ctx->pc = 0x160054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51572 << 16));
    // 0x160058: 0x34422400  ori         $v0, $v0, 0x2400
    ctx->pc = 0x160058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9216);
    // 0x16005c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16005cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160060: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x160060u;
    {
        const bool branch_taken_0x160060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160060) {
            ctx->pc = 0x160484u;
            return;
        }
    }
    ctx->pc = 0x160068u;
}
