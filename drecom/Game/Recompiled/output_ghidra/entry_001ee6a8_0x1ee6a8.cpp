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

// Function: entry_001ee6a8
// Address: 0x1ee6a8 - 0x1ee770
void entry_001ee6a8_0x1ee6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee6a8_0x1ee6a8");
#endif

    switch (ctx->pc) {
        case 0x1ee6bcu: goto label_1ee6bc;
        default: break;
    }

    ctx->pc = 0x1ee6a8u;

    // 0x1ee6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ee6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee6ac: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee6b0: 0xa443127c  sh          $v1, 0x127C($v0)
    ctx->pc = 0x1ee6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ee6b4: 0xc067654  jal         func_19D950
    ctx->pc = 0x1EE6B4u;
    SET_GPR_U32(ctx, 31, 0x1EE6BCu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x1EE6B4u, 0x1EE6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE6BCu;
label_1ee6bc:
    // 0x1ee6bc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x1ee6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee6c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ee6c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee6c4: 0x0  nop
    ctx->pc = 0x1ee6c4u;
    // NOP
    // 0x1ee6c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee6cc: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1ee6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
    // 0x1ee6d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee6d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6d4: 0x0  nop
    ctx->pc = 0x1ee6d4u;
    // NOP
    // 0x1ee6d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee6d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee6dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee6e0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee6e4: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee6e8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ee6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee6ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee6ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee6f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee6f4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee6f8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ee6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ee6fc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1ee6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1ee700: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee700u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee704: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee708: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee70c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ee70cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1ee710: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ee710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ee714: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee718: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1ee718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee71c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee720: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ee720u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee724: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ee724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee728: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ee728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ee72c: 0x1060011f  beqz        $v1, . + 4 + (0x11F << 2)
    ctx->pc = 0x1EE72Cu;
    {
        const bool branch_taken_0x1ee72c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee72c) {
            ctx->pc = 0x1EEBACu;
            return;
        }
    }
    ctx->pc = 0x1EE734u;
    // 0x1ee734: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee738: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ee738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee73c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x1ee73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee740: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1ee740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x1ee744: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee744u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee748: 0x0  nop
    ctx->pc = 0x1ee748u;
    // NOP
    // 0x1ee74c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee74cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee750: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1ee750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1ee754: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ee754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ee758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee75c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ee75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee760: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ee760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ee764: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ee764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x1ee768: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x1EE768u;
    {
        const bool branch_taken_0x1ee768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee768) {
            ctx->pc = 0x1EEBACu;
            return;
        }
    }
    ctx->pc = 0x1EE770u;
}
