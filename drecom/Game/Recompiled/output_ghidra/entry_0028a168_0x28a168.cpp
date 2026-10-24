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

// Function: entry_0028a168
// Address: 0x28a168 - 0x28a1c0
void entry_0028a168_0x28a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a168_0x28a168");
#endif

    switch (ctx->pc) {
        case 0x28a1a8u: goto label_28a1a8;
        default: break;
    }

    ctx->pc = 0x28a168u;

    // 0x28a168: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28a168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x28a16c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x28a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x28a170: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x28a170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28a174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28a178: 0xc64c5e00  lwc1        $f12, 0x5E00($s2)
    ctx->pc = 0x28a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28a17c: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x28a17cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x28a180: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x28a180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x28a184: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x28a184u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28a188: 0x0  nop
    ctx->pc = 0x28a188u;
    // NOP
    // 0x28a18c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28a18cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x28a190: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x28a190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x28a194: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x28a194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a198: 0x0  nop
    ctx->pc = 0x28a198u;
    // NOP
    // 0x28a19c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x28a19cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x28a1a0: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x28A1A0u;
    SET_GPR_U32(ctx, 31, 0x28A1A8u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x28A1A0u, 0x28A1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A1A8u;
label_28a1a8:
    // 0x28a1a8: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x28a1a8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28a1ac: 0x173880  sll         $a3, $s7, 2
    ctx->pc = 0x28a1acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x28a1b0: 0xfd3021  addu        $a2, $a3, $sp
    ctx->pc = 0x28a1b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 29)));
    // 0x28a1b4: 0xacd600d0  sw          $s6, 0xD0($a2)
    ctx->pc = 0x28a1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 208), GPR_U32(ctx, 22));
    // 0x28a1b8: 0x26e30001  addiu       $v1, $s7, 0x1
    ctx->pc = 0x28a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28a1bc: 0x7060be28  paddub      $s7, $v1, $zero
    ctx->pc = 0x28a1bcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    ctx->pc = 0x28a1c0u;
}
