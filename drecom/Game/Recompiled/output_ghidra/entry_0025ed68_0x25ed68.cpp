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

// Function: entry_0025ed68
// Address: 0x25ed68 - 0x25edd8
void entry_0025ed68_0x25ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025ed68_0x25ed68");
#endif

    switch (ctx->pc) {
        case 0x25ed88u: goto label_25ed88;
        case 0x25edb0u: goto label_25edb0;
        case 0x25edc4u: goto label_25edc4;
        case 0x25edd4u: goto label_25edd4;
        default: break;
    }

    ctx->pc = 0x25ed68u;

    // 0x25ed68: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x25ed68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x25ed6c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25ed6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25ed70: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25ed70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25ed74: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x25ED74u;
    {
        const bool branch_taken_0x25ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25ed74) {
            ctx->pc = 0x25EDD8u;
            return;
        }
    }
    ctx->pc = 0x25ED7Cu;
    // 0x25ed7c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25ed7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ed80: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25ED80u;
    SET_GPR_U32(ctx, 31, 0x25ED88u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25ED88u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25ED88u) { return; }
    ctx->pc = 0x25ED88u;
label_25ed88:
    // 0x25ed88: 0xc6000128  lwc1        $f0, 0x128($s0)
    ctx->pc = 0x25ed88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed8c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ed8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ed90: 0xc600012c  lwc1        $f0, 0x12C($s0)
    ctx->pc = 0x25ed90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed94: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x25ed94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x25ed98: 0xc6000130  lwc1        $f0, 0x130($s0)
    ctx->pc = 0x25ed98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ed9c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x25ed9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x25eda0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x25eda0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25eda4: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x25eda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x25eda8: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25EDA8u;
    SET_GPR_U32(ctx, 31, 0x25EDB0u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25EDB0u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EDB0u) { return; }
    ctx->pc = 0x25EDB0u;
label_25edb0:
    // 0x25edb0: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x25edb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25edb4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25edb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25edb8: 0x72403628  paddub      $a2, $s2, $zero
    ctx->pc = 0x25edb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x25edbc: 0xc040c00  jal         func_103000
    ctx->pc = 0x25EDBCu;
    SET_GPR_U32(ctx, 31, 0x25EDC4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25EDC4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EDC4u) { return; }
    ctx->pc = 0x25EDC4u;
label_25edc4:
    // 0x25edc4: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x25edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x25edc8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x25edc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25edcc: 0xc040c9e  jal         func_103278
    ctx->pc = 0x25EDCCu;
    SET_GPR_U32(ctx, 31, 0x25EDD4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x25EDD4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25EDD4u) { return; }
    ctx->pc = 0x25EDD4u;
label_25edd4:
    // 0x25edd4: 0x0  nop
    ctx->pc = 0x25edd4u;
    // NOP
    ctx->pc = 0x25edd8u;
}
