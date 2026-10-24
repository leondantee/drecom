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

// Function: entry_002ca6fc
// Address: 0x2ca6fc - 0x2ca7a4
void entry_002ca6fc_0x2ca6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ca6fc_0x2ca6fc");
#endif

    switch (ctx->pc) {
        case 0x2ca704u: goto label_2ca704;
        case 0x2ca73cu: goto label_2ca73c;
        case 0x2ca774u: goto label_2ca774;
        default: break;
    }

    ctx->pc = 0x2ca6fcu;

    // 0x2ca6fc: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA6FCu;
    SET_GPR_U32(ctx, 31, 0x2CA704u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA6FCu, 0x2CA704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA704u;
label_2ca704:
    // 0x2ca704: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca70c: 0x0  nop
    ctx->pc = 0x2ca70cu;
    // NOP
    // 0x2ca710: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca710u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca714: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2ca714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2ca718: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca71c: 0x0  nop
    ctx->pc = 0x2ca71cu;
    // NOP
    // 0x2ca720: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca720u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca724: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2ca724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca728: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca72c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca730: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ca730u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ca734: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA734u;
    SET_GPR_U32(ctx, 31, 0x2CA73Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA734u, 0x2CA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA73Cu;
label_2ca73c:
    // 0x2ca73c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca744: 0x0  nop
    ctx->pc = 0x2ca744u;
    // NOP
    // 0x2ca748: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca748u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca74c: 0x3c02428c  lui         $v0, 0x428C
    ctx->pc = 0x2ca74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17036 << 16));
    // 0x2ca750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca754: 0x0  nop
    ctx->pc = 0x2ca754u;
    // NOP
    // 0x2ca758: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca758u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca75c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2ca75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca760: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca764: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca768: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ca768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ca76c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CA76Cu;
    SET_GPR_U32(ctx, 31, 0x2CA774u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CA76Cu, 0x2CA774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CA774u;
label_2ca774:
    // 0x2ca774: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ca774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ca778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ca778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ca77c: 0x0  nop
    ctx->pc = 0x2ca77cu;
    // NOP
    // 0x2ca780: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ca780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ca784: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x2ca784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x2ca788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ca788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ca78c: 0x0  nop
    ctx->pc = 0x2ca78cu;
    // NOP
    // 0x2ca790: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ca790u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ca794: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2ca794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ca798: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ca798u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ca79c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ca79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ca7a0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ca7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2ca7a4u;
}
