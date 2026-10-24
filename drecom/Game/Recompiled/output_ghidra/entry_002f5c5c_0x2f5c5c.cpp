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

// Function: entry_002f5c5c
// Address: 0x2f5c5c - 0x2f5d40
void entry_002f5c5c_0x2f5c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f5c5c_0x2f5c5c");
#endif

    switch (ctx->pc) {
        case 0x2f5cf8u: goto label_2f5cf8;
        case 0x2f5d1cu: goto label_2f5d1c;
        default: break;
    }

    ctx->pc = 0x2f5c5cu;

    // 0x2f5c5c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5c5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5c60: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5c60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5c64: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5c68: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5c70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5c74: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f5c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5c78: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5c78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5c7c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5c80: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5c84: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5c88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5c8c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f5c90: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f5c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f5c94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f5c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5c98: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5c9c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f5ca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5ca4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f5ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5ca8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F5CA8u;
    {
        const bool branch_taken_0x2f5ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5ca8) {
            ctx->pc = 0x2F5D40u;
            return;
        }
    }
    ctx->pc = 0x2F5CB0u;
    // 0x2f5cb0: 0x3c024288  lui         $v0, 0x4288
    ctx->pc = 0x2f5cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17032 << 16));
    // 0x2f5cb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5cb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cb8: 0x0  nop
    ctx->pc = 0x2f5cb8u;
    // NOP
    // 0x2f5cbc: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5cc0: 0x3c0242d8  lui         $v0, 0x42D8
    ctx->pc = 0x2f5cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17112 << 16));
    // 0x2f5cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cc8: 0x0  nop
    ctx->pc = 0x2f5cc8u;
    // NOP
    // 0x2f5ccc: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5cd0: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x2f5cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x2f5cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5cd8: 0x0  nop
    ctx->pc = 0x2f5cd8u;
    // NOP
    // 0x2f5cdc: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x2f5cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x2f5ce0: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f5ce4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f5ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5ce8: 0x0  nop
    ctx->pc = 0x2f5ce8u;
    // NOP
    // 0x2f5cec: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x2f5cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x2f5cf0: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5CF0u;
    SET_GPR_U32(ctx, 31, 0x2F5CF8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5CF0u, 0x2F5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5CF8u;
label_2f5cf8:
    // 0x2f5cf8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5cfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5cfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d00: 0x0  nop
    ctx->pc = 0x2f5d00u;
    // NOP
    // 0x2f5d04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d08: 0xc60002d0  lwc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5d0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5d10: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x2f5d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x2f5d14: 0xc067654  jal         func_19D950
    ctx->pc = 0x2F5D14u;
    SET_GPR_U32(ctx, 31, 0x2F5D1Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2F5D14u, 0x2F5D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5D1Cu;
label_2f5d1c:
    // 0x2f5d1c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2f5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2f5d20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f5d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f5d24: 0x0  nop
    ctx->pc = 0x2f5d24u;
    // NOP
    // 0x2f5d28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f5d28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f5d2c: 0xc60002d4  lwc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5d30: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f5d30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f5d34: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x2f5d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x2f5d38: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2F5D38u;
    {
        const bool branch_taken_0x2f5d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d38) {
            ctx->pc = 0x2F5DECu;
            return;
        }
    }
    ctx->pc = 0x2F5D40u;
}
