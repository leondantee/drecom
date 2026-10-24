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

// Function: entry_00156bb0
// Address: 0x156bb0 - 0x156c98
void entry_00156bb0_0x156bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156bb0_0x156bb0");
#endif

    ctx->pc = 0x156bb0u;

    // 0x156bb0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x156bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156bb4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x156bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156bb8: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156bbc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156bc0: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156bc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156bc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x156bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156bcc: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x156bccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x156bd0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156bd4: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156bd8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x156bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x156bdc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156be0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156be4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156be8: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x156be8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156bec: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156bf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156bf4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156bf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156bf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156bfc: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x156bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x156c00: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x156c00u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c04: 0x0  nop
    ctx->pc = 0x156c04u;
    // NOP
    // 0x156c08: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156c08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156c0c: 0x3c0544f2  lui         $a1, 0x44F2
    ctx->pc = 0x156c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17650 << 16));
    // 0x156c10: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x156c10u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c14: 0x0  nop
    ctx->pc = 0x156c14u;
    // NOP
    // 0x156c18: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156c18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156c1c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156c1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x156c20: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x156c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x156c24: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x156c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156c28: 0x51a821  addu        $s5, $v0, $s1
    ctx->pc = 0x156c28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156c2c: 0x151840  sll         $v1, $s5, 1
    ctx->pc = 0x156c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x156c30: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156c34: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156c38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156c40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156c44: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x156c48: 0x24427710  addiu       $v0, $v0, 0x7710
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30480));
    // 0x156c4c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c50: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156c54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156c58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156c5c: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x156c5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156c60: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156c64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156c68: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156c6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x156c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156c70: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x156c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x156c74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c78: 0x0  nop
    ctx->pc = 0x156c78u;
    // NOP
    // 0x156c7c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156c7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156c80: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156c84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156c84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156c88: 0x0  nop
    ctx->pc = 0x156c88u;
    // NOP
    // 0x156c8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156c90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x156c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x156c94: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x156c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    ctx->pc = 0x156c98u;
}
