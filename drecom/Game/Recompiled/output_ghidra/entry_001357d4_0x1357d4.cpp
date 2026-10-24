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

// Function: entry_001357d4
// Address: 0x1357d4 - 0x13589c
void entry_001357d4_0x1357d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001357d4_0x1357d4");
#endif

    switch (ctx->pc) {
        case 0x1357e8u: goto label_1357e8;
        case 0x13581cu: goto label_13581c;
        case 0x135878u: goto label_135878;
        default: break;
    }

    ctx->pc = 0x1357d4u;

    // 0x1357d4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1357d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1357d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1357d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1357dc: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1357dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1357e0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1357E0u;
    SET_GPR_U32(ctx, 31, 0x1357E8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1357E8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1357E8u) { return; }
    ctx->pc = 0x1357E8u;
label_1357e8:
    // 0x1357e8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1357e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1357ec: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x1357ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1357f0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1357f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1357f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1357f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1357f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1357fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1357fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135800: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135804: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13580c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x13580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135810: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x135810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x135814: 0xc040c9e  jal         func_103278
    ctx->pc = 0x135814u;
    SET_GPR_U32(ctx, 31, 0x13581Cu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x13581Cu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x13581Cu) { return; }
    ctx->pc = 0x13581Cu;
label_13581c:
    // 0x13581c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x13581cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135820: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135824: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135828: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x135828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13582c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13582cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135830: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135834: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x135838: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x13583c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x13583cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135840: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x135840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x135844: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x135844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x135848: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13584c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135850: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135850u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135854: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x135854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135858: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x135858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13585c: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x13585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x135860: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135864: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x135864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x135868: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x135868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x13586c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x13586cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x135870: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x135870u;
    SET_GPR_U32(ctx, 31, 0x135878u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x135870u, 0x135878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135878u;
label_135878:
    // 0x135878: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x135878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13587c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x13587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135880: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x135880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x135884: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135888: 0x0  nop
    ctx->pc = 0x135888u;
    // NOP
    // 0x13588c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13588cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x135890: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x135890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x135894: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x135894u;
    {
        const bool branch_taken_0x135894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x135894) {
            ctx->pc = 0x135948u;
            return;
        }
    }
    ctx->pc = 0x13589Cu;
}
