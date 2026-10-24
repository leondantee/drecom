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

// Function: entry_001fcb08
// Address: 0x1fcb08 - 0x1fcbc8
void entry_001fcb08_0x1fcb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fcb08_0x1fcb08");
#endif

    switch (ctx->pc) {
        case 0x1fcb18u: goto label_1fcb18;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb64u: goto label_1fcb64;
        case 0x1fcb94u: goto label_1fcb94;
        default: break;
    }

    ctx->pc = 0x1fcb08u;

    // 0x1fcb08: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fcb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcb0c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fcb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fcb10: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FCB10u;
    SET_GPR_U32(ctx, 31, 0x1FCB18u);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FCB18u;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FCB18u) { return; }
    ctx->pc = 0x1FCB18u;
label_1fcb18:
    // 0x1fcb18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1fcb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1fcb1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fcb1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fcb20: 0x0  nop
    ctx->pc = 0x1fcb20u;
    // NOP
    // 0x1fcb24: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fcb24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fcb28: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fcb28u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fcb2c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB34u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FCB2Cu, 0x1FCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB34u;
label_1fcb34:
    // 0x1fcb34: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb38: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1fcb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fcb3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fcb40: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb44: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1fcb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb48: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fcb48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fcb4c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fcb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fcb50: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcb58: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1fcb58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1fcb5c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FCB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB64u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FCB5Cu, 0x1FCB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB64u;
label_1fcb64:
    // 0x1fcb64: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb68: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1fcb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fcb6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fcb70: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb74: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1fcb74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcb78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fcb78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fcb7c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fcb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fcb80: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fcb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fcb88: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1fcb88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1fcb8c: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FCB8Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB94u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FCB8Cu, 0x1FCB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB94u;
label_1fcb94:
    // 0x1fcb94: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcb98: 0xc4610278  lwc1        $f1, 0x278($v1)
    ctx->pc = 0x1fcb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fcb9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fcb9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fcba0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcba4: 0xc4600288  lwc1        $f0, 0x288($v1)
    ctx->pc = 0x1fcba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fcba8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fcba8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fcbac: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fcbb0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fcbb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1fcbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1fcbb8: 0xe4600148  swc1        $f0, 0x148($v1)
    ctx->pc = 0x1fcbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 328), bits); }
    // 0x1fcbbc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fcbbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcbc0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1FCBC0u;
    {
        const bool branch_taken_0x1fcbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcbc0) {
            ctx->pc = 0x1FCC98u;
            return;
        }
    }
    ctx->pc = 0x1FCBC8u;
}
