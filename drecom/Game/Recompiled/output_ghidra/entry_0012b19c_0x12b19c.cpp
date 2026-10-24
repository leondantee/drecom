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

// Function: entry_0012b19c
// Address: 0x12b19c - 0x12b1e8
void entry_0012b19c_0x12b19c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b19c_0x12b19c");
#endif

    switch (ctx->pc) {
        case 0x12b1b0u: goto label_12b1b0;
        default: break;
    }

    ctx->pc = 0x12b19cu;

    // 0x12b19c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x12b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x12b1a0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x12b1a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12b1a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12b1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1a8: 0xc05d2f0  jal         func_174BC0
    ctx->pc = 0x12B1A8u;
    SET_GPR_U32(ctx, 31, 0x12B1B0u);
    ctx->pc = 0x174BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174BC0u, 0x12B1A8u, 0x12B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B1B0u;
label_12b1b0:
    // 0x12b1b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x12B1B0u;
    {
        const bool branch_taken_0x12b1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b1b0) {
            ctx->pc = 0x12B1E8u;
            return;
        }
    }
    ctx->pc = 0x12B1B8u;
    // 0x12b1b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b1bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x12b1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b1c4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x12b1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x12b1c8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1cc: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x12b1ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x12b1d0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1d4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x12b1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b1d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1dc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x12b1dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b1e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x12b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12b1e4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x12b1e8u;
}
