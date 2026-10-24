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

// Function: entry_001ee88c
// Address: 0x1ee88c - 0x1ee94c
void entry_001ee88c_0x1ee88c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee88c_0x1ee88c");
#endif

    switch (ctx->pc) {
        case 0x1ee8a8u: goto label_1ee8a8;
        default: break;
    }

    ctx->pc = 0x1ee88cu;

    // 0x1ee88c: 0x3c02c100  lui         $v0, 0xC100
    ctx->pc = 0x1ee88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49408 << 16));
    // 0x1ee890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee894: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee898: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee89c: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x1ee89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1ee8a0: 0xc067654  jal         func_19D950
    ctx->pc = 0x1EE8A0u;
    SET_GPR_U32(ctx, 31, 0x1EE8A8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x1EE8A0u, 0x1EE8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE8A8u;
label_1ee8a8:
    // 0x1ee8a8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ee8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee8ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ee8acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee8b0: 0x0  nop
    ctx->pc = 0x1ee8b0u;
    // NOP
    // 0x1ee8b4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ee8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ee8b8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1ee8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1ee8bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8c0: 0x0  nop
    ctx->pc = 0x1ee8c0u;
    // NOP
    // 0x1ee8c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ee8c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ee8c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee8cc: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee8d0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee8d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee8d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8dc: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee8e0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee8e4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1ee8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1ee8e8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1ee8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1ee8ec: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1ee8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1ee8f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee8f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee8f4: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee8f8: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee8fc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ee8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1ee900: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ee900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ee904: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ee904u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ee908: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1ee908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1ee90c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ee90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ee910: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1EE910u;
    {
        const bool branch_taken_0x1ee910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee910) {
            ctx->pc = 0x1EE94Cu;
            return;
        }
    }
    ctx->pc = 0x1EE918u;
    // 0x1ee918: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee91c: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x1ee91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee920: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1ee920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee924: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1ee924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x1ee928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee92c: 0x0  nop
    ctx->pc = 0x1ee92cu;
    // NOP
    // 0x1ee930: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1ee930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1ee934: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1ee934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1ee938: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ee938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee93c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee93cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee940: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1ee940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ee944: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ee944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ee948: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1ee948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->pc = 0x1ee94cu;
}
