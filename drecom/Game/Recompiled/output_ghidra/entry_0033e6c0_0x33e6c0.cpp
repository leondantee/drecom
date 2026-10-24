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

// Function: entry_0033e6c0
// Address: 0x33e6c0 - 0x33e750
void entry_0033e6c0_0x33e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e6c0_0x33e6c0");
#endif

    switch (ctx->pc) {
        case 0x33e720u: goto label_33e720;
        case 0x33e73cu: goto label_33e73c;
        default: break;
    }

    ctx->pc = 0x33e6c0u;

    // 0x33e6c0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e6c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e6c4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e6c8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e6c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e6cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e6d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e6d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e6d8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x33e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x33e6dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e6e0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x33e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x33e6e4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x33e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e6e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x33e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33e6ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33e6f0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x33e6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x33e6f4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33e6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33e6f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33e6fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x33e6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x33e700: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x33e700u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x33e704: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33e704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33e708: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x33e708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x33e70c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x33e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x33e710: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x33e710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x33e714: 0xa6020050  sh          $v0, 0x50($s0)
    ctx->pc = 0x33e714u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 80), (uint16_t)GPR_U32(ctx, 2));
    // 0x33e718: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E718u;
    SET_GPR_U32(ctx, 31, 0x33E720u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E718u, 0x33E720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E720u;
label_33e720:
    // 0x33e720: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x33e724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e728: 0x0  nop
    ctx->pc = 0x33e728u;
    // NOP
    // 0x33e72c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e72cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e730: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x33e730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x33e734: 0xc06765c  jal         func_19D970
    ctx->pc = 0x33E734u;
    SET_GPR_U32(ctx, 31, 0x33E73Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x33E734u, 0x33E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E73Cu;
label_33e73c:
    // 0x33e73c: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x33e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
    // 0x33e740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x33e740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33e744: 0x0  nop
    ctx->pc = 0x33e744u;
    // NOP
    // 0x33e748: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x33e748u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33e74c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x33e74cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    ctx->pc = 0x33e750u;
}
