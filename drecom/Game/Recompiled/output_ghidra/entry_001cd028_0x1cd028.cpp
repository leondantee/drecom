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

// Function: entry_001cd028
// Address: 0x1cd028 - 0x1cd07c
void entry_001cd028_0x1cd028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd028_0x1cd028");
#endif

    switch (ctx->pc) {
        case 0x1cd05cu: goto label_1cd05c;
        default: break;
    }

    ctx->pc = 0x1cd028u;

    // 0x1cd028: 0x3c03c396  lui         $v1, 0xC396
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50070 << 16));
    // 0x1cd02c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cd02cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd030: 0x0  nop
    ctx->pc = 0x1cd030u;
    // NOP
    // 0x1cd034: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1cd034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1cd038: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1cd038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd03c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd040: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x1cd040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x1cd044: 0x246503c0  addiu       $a1, $v1, 0x3C0
    ctx->pc = 0x1cd044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 960));
    // 0x1cd048: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x1cd048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cd04c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1cd050: 0x24479208  addiu       $a3, $v0, -0x6DF8
    ctx->pc = 0x1cd050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939144));
    // 0x1cd054: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x1CD054u;
    SET_GPR_U32(ctx, 31, 0x1CD05Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x1CD054u, 0x1CD05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD05Cu;
label_1cd05c:
    // 0x1cd05c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD05Cu;
    {
        const bool branch_taken_0x1cd05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd05c) {
            ctx->pc = 0x1CD07Cu;
            return;
        }
    }
    ctx->pc = 0x1CD064u;
    // 0x1cd064: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1cd064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1cd068: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1cd068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1cd06c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x1cd06cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cd070: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cd074: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cd078: 0xac241a68  sw          $a0, 0x1A68($at)
    ctx->pc = 0x1cd078u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A68u, _value); } while (0);
    ctx->pc = 0x1cd07cu;
}
