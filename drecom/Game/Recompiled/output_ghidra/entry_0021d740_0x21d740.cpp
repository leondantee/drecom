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

// Function: entry_0021d740
// Address: 0x21d740 - 0x21d818
void entry_0021d740_0x21d740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d740_0x21d740");
#endif

    switch (ctx->pc) {
        case 0x21d7a0u: goto label_21d7a0;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7f0u: goto label_21d7f0;
        default: break;
    }

    ctx->pc = 0x21d740u;

    // 0x21d740: 0x8fb00048  lw          $s0, 0x48($sp)
    ctx->pc = 0x21d740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d744: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d748: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d748u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d74c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d74cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d754: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d758: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d75c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d75cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d760: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d764: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d764u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d768: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d76c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d770: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d774: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d778: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d778u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d77c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d780: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d784: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d784u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d788: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d78c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d790: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d794: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x21d794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x21d798: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D798u;
    SET_GPR_U32(ctx, 31, 0x21D7A0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D798u, 0x21D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7A0u;
label_21d7a0:
    // 0x21d7a0: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21d7a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d7a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d7a8: 0x0  nop
    ctx->pc = 0x21d7a8u;
    // NOP
    // 0x21d7ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d7acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d7b0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21d7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d7b4: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x21d7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d7b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d7b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d7bc: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21d7bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21d7c0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D7C0u;
    SET_GPR_U32(ctx, 31, 0x21D7C8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D7C0u, 0x21D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7C8u;
label_21d7c8:
    // 0x21d7c8: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x21d7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x21d7cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d7d0: 0x0  nop
    ctx->pc = 0x21d7d0u;
    // NOP
    // 0x21d7d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d7d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d7d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21d7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d7dc: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x21d7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d7e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d7e4: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21d7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21d7e8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21D7E8u;
    SET_GPR_U32(ctx, 31, 0x21D7F0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21D7E8u, 0x21D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7F0u;
label_21d7f0:
    // 0x21d7f0: 0x3c024228  lui         $v0, 0x4228
    ctx->pc = 0x21d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16936 << 16));
    // 0x21d7f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d7f8: 0x0  nop
    ctx->pc = 0x21d7f8u;
    // NOP
    // 0x21d7fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d7fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d800: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x21d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d804: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x21d804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d808: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21d808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d80c: 0xe4400058  swc1        $f0, 0x58($v0)
    ctx->pc = 0x21d80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x21d810: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D810u;
    {
        const bool branch_taken_0x21d810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d810) {
            ctx->pc = 0x21D820u;
            return;
        }
    }
    ctx->pc = 0x21D818u;
}
