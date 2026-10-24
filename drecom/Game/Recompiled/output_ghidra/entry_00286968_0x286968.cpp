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

// Function: entry_00286968
// Address: 0x286968 - 0x2869b8
void entry_00286968_0x286968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286968_0x286968");
#endif

    switch (ctx->pc) {
        case 0x2869a0u: goto label_2869a0;
        default: break;
    }

    ctx->pc = 0x286968u;

    // 0x286968: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x286968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x28696c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28696cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286970: 0xc6415e00  lwc1        $f1, 0x5E00($s2)
    ctx->pc = 0x286970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x286974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x286974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286978: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x28697c: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x28697cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x286980: 0x0  nop
    ctx->pc = 0x286980u;
    // NOP
    // 0x286984: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x286984u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x286988: 0x3c084300  lui         $t0, 0x4300
    ctx->pc = 0x286988u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17152 << 16));
    // 0x28698c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x28698cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286990: 0x0  nop
    ctx->pc = 0x286990u;
    // NOP
    // 0x286994: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x286994u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x286998: 0xc047f7e  jal         func_11FDF8
    ctx->pc = 0x286998u;
    SET_GPR_U32(ctx, 31, 0x2869A0u);
    ctx->pc = 0x11FDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FDF8u, 0x286998u, 0x2869A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869A0u;
label_2869a0:
    // 0x2869a0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2869a0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2869a4: 0x173080  sll         $a2, $s7, 2
    ctx->pc = 0x2869a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2869a8: 0xdd4821  addu        $t1, $a2, $sp
    ctx->pc = 0x2869a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
    // 0x2869ac: 0xad2300d0  sw          $v1, 0xD0($t1)
    ctx->pc = 0x2869acu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 208), GPR_U32(ctx, 3));
    // 0x2869b0: 0x26e70001  addiu       $a3, $s7, 0x1
    ctx->pc = 0x2869b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x2869b4: 0x70e0be28  paddub      $s7, $a3, $zero
    ctx->pc = 0x2869b4u;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    ctx->pc = 0x2869b8u;
}
