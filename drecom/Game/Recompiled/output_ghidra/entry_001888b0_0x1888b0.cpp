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

// Function: entry_001888b0
// Address: 0x1888b0 - 0x18890c
void entry_001888b0_0x1888b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001888b0_0x1888b0");
#endif

    switch (ctx->pc) {
        case 0x1888fcu: goto label_1888fc;
        default: break;
    }

    ctx->pc = 0x1888b0u;

    // 0x1888b0: 0xc7a1005c  lwc1        $f1, 0x5C($sp)
    ctx->pc = 0x1888b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1888b4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
    // 0x1888b8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1888b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1888bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1888bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1888c0: 0x0  nop
    ctx->pc = 0x1888c0u;
    // NOP
    // 0x1888c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1888c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1888c8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1888c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1888cc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x1888ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x1888d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1888d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1888d4: 0x3c024090  lui         $v0, 0x4090
    ctx->pc = 0x1888d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16528 << 16));
    // 0x1888d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1888d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1888dc: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1888dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1888e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1888e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1888e4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1888e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1888e8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1888e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1888ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1888f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1888f4: 0xc040cb0  jal         func_1032C0
    ctx->pc = 0x1888F4u;
    SET_GPR_U32(ctx, 31, 0x1888FCu);
    ctx->pc = 0x1032C0u;
    {
        ctx->pc = 0x1888FCu;
        ps2_stubs::sceVu0FTOI0Vector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1888FCu) { return; }
    ctx->pc = 0x1888FCu;
label_1888fc:
    // 0x1888fc: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1888fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x188900: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188904: 0xc055698  jal         func_155A60
    ctx->pc = 0x188904u;
    SET_GPR_U32(ctx, 31, 0x18890Cu);
    ctx->pc = 0x155A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A60u, 0x188904u, 0x18890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18890Cu;
}
