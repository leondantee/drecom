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

// Function: entry_001faca0
// Address: 0x1faca0 - 0x1fad38
void entry_001faca0_0x1faca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001faca0_0x1faca0");
#endif

    switch (ctx->pc) {
        case 0x1facb0u: goto label_1facb0;
        case 0x1face0u: goto label_1face0;
        case 0x1fad10u: goto label_1fad10;
        default: break;
    }

    ctx->pc = 0x1faca0u;

    // 0x1faca0: 0x12c00025  beqz        $s6, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FACA0u;
    {
        const bool branch_taken_0x1faca0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1faca0) {
            ctx->pc = 0x1FAD38u;
            return;
        }
    }
    ctx->pc = 0x1FACA8u;
    // 0x1faca8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FACA8u;
    SET_GPR_U32(ctx, 31, 0x1FACB0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FACA8u, 0x1FACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACB0u;
label_1facb0:
    // 0x1facb0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facb4: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1facb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1facb8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1facb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1facbc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facc0: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1facc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1facc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1facc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1facc8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1facc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1faccc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1facd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1facd4: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1facd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1facd8: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FACD8u;
    SET_GPR_U32(ctx, 31, 0x1FACE0u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FACD8u, 0x1FACE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FACE0u;
label_1face0:
    // 0x1face0: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1face0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1face4: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1face4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1face8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1face8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1facec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1facf0: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1facf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1facf4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1facf4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1facf8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1facf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1facfc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1facfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad04: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1fad04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1fad08: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FAD08u;
    SET_GPR_U32(ctx, 31, 0x1FAD10u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FAD08u, 0x1FAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAD10u;
label_1fad10:
    // 0x1fad10: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad14: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1fad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fad18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fad18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fad1c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad20: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1fad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fad24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fad24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fad28: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fad28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fad2c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1fad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1fad30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fad30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fad34: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x1fad34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    ctx->pc = 0x1fad38u;
}
