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

// Function: entry_00156d2c
// Address: 0x156d2c - 0x156e38
void entry_00156d2c_0x156d2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156d2c_0x156d2c");
#endif

    ctx->pc = 0x156d2cu;

    // 0x156d2c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x156d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156d30: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x156d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x156d34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d38: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x156d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x156d3c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156d3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156d40: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156d40u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156d44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x156d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156d4c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x156d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156d50: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x156d50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x156d54: 0x24c57710  addiu       $a1, $a2, 0x7710
    ctx->pc = 0x156d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 30480));
    // 0x156d58: 0xa72021  addu        $a0, $a1, $a3
    ctx->pc = 0x156d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x156d5c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x156d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
    // 0x156d60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x156d60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156d64: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x156d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d68: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156d68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156d6c: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x156d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x156d70: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x156d70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156d74: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156d78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156d78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156d7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156d80: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156d84: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156d88: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x156d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x156d8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156d90: 0x0  nop
    ctx->pc = 0x156d90u;
    // NOP
    // 0x156d94: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156d94u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156d98: 0x3c0744f2  lui         $a3, 0x44F2
    ctx->pc = 0x156d98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17650 << 16));
    // 0x156d9c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x156d9cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156da0: 0x0  nop
    ctx->pc = 0x156da0u;
    // NOP
    // 0x156da4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156da4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156da8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156dac: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x156dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x156db0: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x156db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x156db4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x156db4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x156db8: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x156db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x156dbc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x156dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x156dc0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x156dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x156dc4: 0x8c225528  lw          $v0, 0x5528($at)
    ctx->pc = 0x156dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x385528u));
    // 0x156dc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156dcc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x156dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x156dd0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x156dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156dd4: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x156dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x156dd8: 0x24827710  addiu       $v0, $a0, 0x7710
    ctx->pc = 0x156dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 30480));
    // 0x156ddc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x156ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156de0: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x156de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x156de4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156de8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x156de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156dec: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x156decu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x156df0: 0x3c044360  lui         $a0, 0x4360
    ctx->pc = 0x156df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17248 << 16));
    // 0x156df4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x156df4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x156df8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x156df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x156dfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x156dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x156e00: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x156e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x156e04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x156e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x156e08: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x156e08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x156e0c: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x156e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x156e10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x156e10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e14: 0x0  nop
    ctx->pc = 0x156e14u;
    // NOP
    // 0x156e18: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x156e18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x156e1c: 0x3c0244f2  lui         $v0, 0x44F2
    ctx->pc = 0x156e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17650 << 16));
    // 0x156e20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x156e20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x156e24: 0x0  nop
    ctx->pc = 0x156e24u;
    // NOP
    // 0x156e28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x156e28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x156e2c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x156e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x156e30: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x156e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x156e34: 0x0  nop
    ctx->pc = 0x156e34u;
    // NOP
    ctx->pc = 0x156e38u;
}
