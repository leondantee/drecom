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

// Function: entry_0015c8e8
// Address: 0x15c8e8 - 0x15c990
void entry_0015c8e8_0x15c8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8e8_0x15c8e8");
#endif

    switch (ctx->pc) {
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c914u: goto label_15c914;
        case 0x15c928u: goto label_15c928;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c970u: goto label_15c970;
        case 0x15c988u: goto label_15c988;
        default: break;
    }

    ctx->pc = 0x15c8e8u;

    // 0x15c8e8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15c8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c8ec: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15c8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c8f0: 0xc7ac010c  lwc1        $f12, 0x10C($sp)
    ctx->pc = 0x15c8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c8f4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x15C8F4u;
    SET_GPR_U32(ctx, 31, 0x15C8FCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x15C8FCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C8FCu) { return; }
    ctx->pc = 0x15C8FCu;
label_15c8fc:
    // 0x15c8fc: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c900: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x15c904: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x15c904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15c908: 0x24450170  addiu       $a1, $v0, 0x170
    ctx->pc = 0x15c908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    // 0x15c90c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x15C90Cu;
    SET_GPR_U32(ctx, 31, 0x15C914u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x15C914u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C914u) { return; }
    ctx->pc = 0x15C914u;
label_15c914:
    // 0x15c914: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x15c914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c918: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x15c918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15c91c: 0xc7ac0108  lwc1        $f12, 0x108($sp)
    ctx->pc = 0x15c91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15c920: 0xc040d0e  jal         func_103438
    ctx->pc = 0x15C920u;
    SET_GPR_U32(ctx, 31, 0x15C928u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x15C928u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C928u) { return; }
    ctx->pc = 0x15C928u;
label_15c928:
    // 0x15c928: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15c928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c92c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c930: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x15c930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x15c934: 0xc040c00  jal         func_103000
    ctx->pc = 0x15C934u;
    SET_GPR_U32(ctx, 31, 0x15C93Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15C93Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C93Cu) { return; }
    ctx->pc = 0x15C93Cu;
label_15c93c:
    // 0x15c93c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x15c93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x15c940: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x15c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x15c944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15c948: 0x24441420  addiu       $a0, $v0, 0x1420
    ctx->pc = 0x15c948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5152));
    // 0x15c94c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x15c94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15c950: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x15c954: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x15C954u;
    SET_GPR_U32(ctx, 31, 0x15C95Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x15C95Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15C95Cu) { return; }
    ctx->pc = 0x15C95Cu;
label_15c95c:
    // 0x15c95c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x15c95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c960: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x15c960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c964: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15c964u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15c968: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15C968u;
    SET_GPR_U32(ctx, 31, 0x15C970u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15C968u, 0x15C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C970u;
label_15c970:
    // 0x15c970: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x15c970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x15c974: 0xc7a1010c  lwc1        $f1, 0x10C($sp)
    ctx->pc = 0x15c974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15c978: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x15c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15c97c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x15c97cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15c980: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x15C980u;
    SET_GPR_U32(ctx, 31, 0x15C988u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x15C980u, 0x15C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C988u;
label_15c988:
    // 0x15c988: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x15c988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x15c98c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15c98cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x15c990u;
}
