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

// Function: entry_00156a34
// Address: 0x156a34 - 0x156b38
void entry_00156a34_0x156a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156a34_0x156a34");
#endif

    ctx->pc = 0x156a34u;

    // 0x156a34: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x156a34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156a38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x156a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156a3c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156a40: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156a44: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x156a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x156a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156a4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156a50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156a54: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156a58: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156a5c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156a60: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156a64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156a64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156a68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a6c: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156a6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156a70: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x156a74: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156a78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156a80: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156a84: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156a84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156a88: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156a8c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156a94: 0x0  nop
    ctx->pc = 0x156a94u;
    // NOP
    // 0x156a98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156a98u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156a9c: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156aa4: 0x0  nop
    ctx->pc = 0x156aa4u;
    // NOP
    // 0x156aa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156aac: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156ab0: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x156ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x156ab4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x156ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156ab8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ac0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156ac4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156ac8: 0x8c225520  lw          $v0, 0x5520($at)
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385520u));
    // 0x156acc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156ad4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156ad8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156adc: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156ae0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ae4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156ae8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156aec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156af0: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156af0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156af4: 0x3c024400  lui         $v0, 0x4400
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17408 << 16));
    // 0x156af8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156afc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156b00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156b04: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x156b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156b08: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156b0c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156b0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156b10: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156b14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b18: 0x0  nop
    ctx->pc = 0x156b18u;
    // NOP
    // 0x156b1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156b1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156b20: 0x3c0244e0  lui         $v0, 0x44E0
    ctx->pc = 0x156b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17632 << 16));
    // 0x156b24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156b28: 0x0  nop
    ctx->pc = 0x156b28u;
    // NOP
    // 0x156b2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156b30: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156b30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156b34: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x156b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x156b38u;
}
