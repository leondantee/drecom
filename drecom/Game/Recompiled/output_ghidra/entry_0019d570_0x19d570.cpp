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

// Function: entry_0019d570
// Address: 0x19d570 - 0x19d5c4
void entry_0019d570_0x19d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019d570_0x19d570");
#endif

    switch (ctx->pc) {
        case 0x19d5a0u: goto label_19d5a0;
        default: break;
    }

    ctx->pc = 0x19d570u;

    // 0x19d570: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x19d570u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x19d574: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x19D574u;
    {
        const bool branch_taken_0x19d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19d574) {
            ctx->pc = 0x19D4E8u;
            return;
        }
    }
    ctx->pc = 0x19D57Cu;
    // 0x19d57c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d584: 0xac22fbc4  sw          $v0, -0x43C($at)
    ctx->pc = 0x19d584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBC4u, _value); } while (0);
    // 0x19d588: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d58c: 0xac20fbc8  sw          $zero, -0x438($at)
    ctx->pc = 0x19d58cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFBC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBC8u, _value); } while (0);
    // 0x19d590: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d594: 0x2444fbc0  addiu       $a0, $v0, -0x440
    ctx->pc = 0x19d594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966208));
    // 0x19d598: 0xc084a88  jal         func_212A20
    ctx->pc = 0x19D598u;
    SET_GPR_U32(ctx, 31, 0x19D5A0u);
    ctx->pc = 0x212A20u;
    {
        ctx->pc = 0x19D5A0u;
        ps2_syscalls::CreateSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19D5A0u) { return; }
    ctx->pc = 0x19D5A0u;
label_19d5a0:
    // 0x19d5a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5a4: 0xac22fbb8  sw          $v0, -0x448($at)
    ctx->pc = 0x19d5a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFBB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBB8u, _value); } while (0);
    // 0x19d5a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d5ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5b0: 0xac22fba4  sw          $v0, -0x45C($at)
    ctx->pc = 0x19d5b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CFBA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBA4u, _value); } while (0);
    // 0x19d5b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19d5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19d5b8: 0xac20fba8  sw          $zero, -0x458($at)
    ctx->pc = 0x19d5b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5CFBA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CFBA8u, _value); } while (0);
    // 0x19d5bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19d5c0: 0x2444fba0  addiu       $a0, $v0, -0x460
    ctx->pc = 0x19d5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966176));
    ctx->pc = 0x19d5c4u;
}
