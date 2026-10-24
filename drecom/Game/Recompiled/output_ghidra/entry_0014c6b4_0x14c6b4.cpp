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

// Function: entry_0014c6b4
// Address: 0x14c6b4 - 0x14c6f0
void entry_0014c6b4_0x14c6b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c6b4_0x14c6b4");
#endif

    switch (ctx->pc) {
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6e0u: goto label_14c6e0;
        default: break;
    }

    ctx->pc = 0x14c6b4u;

    // 0x14c6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c6b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c6bc: 0xac229230  sw          $v0, -0x6DD0($at)
    ctx->pc = 0x14c6bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9230u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9230u, _value); } while (0);
    // 0x14c6c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x14c6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x14c6c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6c8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x14c6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14c6cc: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x14C6CCu;
    SET_GPR_U32(ctx, 31, 0x14C6D4u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x14C6CCu, 0x14C6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6D4u;
label_14c6d4:
    // 0x14c6d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6d8: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x14C6D8u;
    SET_GPR_U32(ctx, 31, 0x14C6E0u);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x14C6D8u, 0x14C6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6E0u;
label_14c6e0:
    // 0x14c6e0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x14c6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6e4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14c6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14c6e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14C6E8u;
    {
        const bool branch_taken_0x14c6e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6e8) {
            ctx->pc = 0x14C6F8u;
            return;
        }
    }
    ctx->pc = 0x14C6F0u;
}
