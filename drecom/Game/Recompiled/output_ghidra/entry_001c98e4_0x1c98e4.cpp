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

// Function: entry_001c98e4
// Address: 0x1c98e4 - 0x1c99a0
void entry_001c98e4_0x1c98e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c98e4_0x1c98e4");
#endif

    switch (ctx->pc) {
        case 0x1c98fcu: goto label_1c98fc;
        case 0x1c9998u: goto label_1c9998;
        default: break;
    }

    ctx->pc = 0x1c98e4u;

    // 0x1c98e4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c98e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c98e8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c98ec: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1c98ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1c98f0: 0x244512c0  addiu       $a1, $v0, 0x12C0
    ctx->pc = 0x1c98f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
    // 0x1c98f4: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x1C98F4u;
    SET_GPR_U32(ctx, 31, 0x1C98FCu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x1C98F4u, 0x1C98FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C98FCu;
label_1c98fc:
    // 0x1c98fc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x1c98fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1c9900: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9904: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c9904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9908: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c990c: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1c990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c9910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c9914: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c9914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c9918: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c991c: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1c991cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9920: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9924: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c9924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9928: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c9928u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c992c: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1c992cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1c9930: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9934: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1c9934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9938: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c9938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c993c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c993cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9940: 0x0  nop
    ctx->pc = 0x1c9940u;
    // NOP
    // 0x1c9944: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x1C9944u;
    {
        const bool branch_taken_0x1c9944 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9944) {
            ctx->pc = 0x1C9A04u;
            return;
        }
    }
    ctx->pc = 0x1C994Cu;
    // 0x1c994c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x1c994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c9950: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9954: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1c9954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1c9958: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c995c: 0x8c621b60  lw          $v0, 0x1B60($v1)
    ctx->pc = 0x1c995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1c9960: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1C9960u;
    {
        const bool branch_taken_0x1c9960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9960) {
            ctx->pc = 0x1C99F8u;
            return;
        }
    }
    ctx->pc = 0x1C9968u;
    // 0x1c9968: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c996c: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x1c996cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c9970: 0x3c02c332  lui         $v0, 0xC332
    ctx->pc = 0x1c9970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49970 << 16));
    // 0x1c9974: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1c9974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1c9978: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c9978u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c997c: 0x0  nop
    ctx->pc = 0x1c997cu;
    // NOP
    // 0x1c9980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c9980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c9984: 0x0  nop
    ctx->pc = 0x1c9984u;
    // NOP
    // 0x1c9988: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C9988u;
    {
        const bool branch_taken_0x1c9988 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c9988) {
            ctx->pc = 0x1C99A0u;
            return;
        }
    }
    ctx->pc = 0x1C9990u;
    // 0x1c9990: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x1C9990u;
    SET_GPR_U32(ctx, 31, 0x1C9998u);
    ctx->pc = 0x15DCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15DCB0u, 0x1C9990u, 0x1C9998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9998u;
label_1c9998:
    // 0x1c9998: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9998u;
    {
        const bool branch_taken_0x1c9998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9998) {
            ctx->pc = 0x1C99A8u;
            return;
        }
    }
    ctx->pc = 0x1C99A0u;
}
