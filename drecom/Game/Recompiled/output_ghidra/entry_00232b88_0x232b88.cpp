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

// Function: entry_00232b88
// Address: 0x232b88 - 0x232bf0
void entry_00232b88_0x232b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232b88_0x232b88");
#endif

    switch (ctx->pc) {
        case 0x232b94u: goto label_232b94;
        case 0x232bb0u: goto label_232bb0;
        case 0x232be0u: goto label_232be0;
        default: break;
    }

    ctx->pc = 0x232b88u;

    // 0x232b88: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232b8c: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x232B8Cu;
    SET_GPR_U32(ctx, 31, 0x232B94u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x232B8Cu, 0x232B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232B94u;
label_232b94:
    // 0x232b94: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x232b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x232b98: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x232b98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x232b9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x232ba0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x232ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232ba4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x232ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x232ba8: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x232BA8u;
    SET_GPR_U32(ctx, 31, 0x232BB0u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x232BA8u, 0x232BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BB0u;
label_232bb0:
    // 0x232bb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232bb4: 0x8c4212f4  lw          $v0, 0x12F4($v0)
    ctx->pc = 0x232bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4852)));
    // 0x232bb8: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x232bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x232bbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x232BBCu;
    {
        const bool branch_taken_0x232bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x232bbc) {
            ctx->pc = 0x232BF0u;
            return;
        }
    }
    ctx->pc = 0x232BC4u;
    // 0x232bc4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x232bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x232bc8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x232bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x232bcc: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x232bccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x232bd0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x232bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x232bd4: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x232bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x232bd8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x232BD8u;
    SET_GPR_U32(ctx, 31, 0x232BE0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232BD8u, 0x232BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BE0u;
label_232be0:
    // 0x232be0: 0x3c0402ff  lui         $a0, 0x2FF
    ctx->pc = 0x232be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)767 << 16));
    // 0x232be4: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x232be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x232be8: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x232BE8u;
    SET_GPR_U32(ctx, 31, 0x232BF0u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x232BE8u, 0x232BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232BF0u;
}
