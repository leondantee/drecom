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

// Function: entry_00283e70
// Address: 0x283e70 - 0x283ee0
void entry_00283e70_0x283e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00283e70_0x283e70");
#endif

    switch (ctx->pc) {
        case 0x283e94u: goto label_283e94;
        case 0x283ea4u: goto label_283ea4;
        case 0x283ebcu: goto label_283ebc;
        case 0x283ed0u: goto label_283ed0;
        default: break;
    }

    ctx->pc = 0x283e70u;

    // 0x283e70: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283e74: 0x8c230af0  lw          $v1, 0xAF0($at)
    ctx->pc = 0x283e74u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283e78: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x283e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x283e7c: 0x8c220af0  lw          $v0, 0xAF0($at)
    ctx->pc = 0x283e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0AF0u));
    // 0x283e80: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x283e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283e84: 0x246501a0  addiu       $a1, $v1, 0x1A0
    ctx->pc = 0x283e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 416));
    // 0x283e88: 0x24460190  addiu       $a2, $v0, 0x190
    ctx->pc = 0x283e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x283e8c: 0xc040c80  jal         func_103200
    ctx->pc = 0x283E8Cu;
    SET_GPR_U32(ctx, 31, 0x283E94u);
    ctx->pc = 0x103200u;
    {
        ctx->pc = 0x283E94u;
        ps2_stubs::sceVu0SubVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283E94u) { return; }
    ctx->pc = 0x283E94u;
label_283e94:
    // 0x283e94: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x283e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283e98: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x283e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283e9c: 0xc040c24  jal         func_103090
    ctx->pc = 0x283E9Cu;
    SET_GPR_U32(ctx, 31, 0x283EA4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x283EA4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283EA4u) { return; }
    ctx->pc = 0x283EA4u;
label_283ea4:
    // 0x283ea4: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x283ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x283ea8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x283ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283eac: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x283eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283eb0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x283eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283eb4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x283EB4u;
    SET_GPR_U32(ctx, 31, 0x283EBCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x283EBCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283EBCu) { return; }
    ctx->pc = 0x283EBCu;
label_283ebc:
    // 0x283ebc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x283ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283ec0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x283ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283ec4: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x283ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x283ec8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x283EC8u;
    SET_GPR_U32(ctx, 31, 0x283ED0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x283ED0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x283ED0u) { return; }
    ctx->pc = 0x283ED0u;
label_283ed0:
    // 0x283ed0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x283ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x283ed4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x283ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x283ed8: 0xc0a0fc0  jal         func_283F00
    ctx->pc = 0x283ED8u;
    SET_GPR_U32(ctx, 31, 0x283EE0u);
    ctx->pc = 0x283F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283F00u, 0x283ED8u, 0x283EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283EE0u;
}
