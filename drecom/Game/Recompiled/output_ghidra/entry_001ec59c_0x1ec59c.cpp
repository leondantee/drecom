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

// Function: entry_001ec59c
// Address: 0x1ec59c - 0x1ec604
void entry_001ec59c_0x1ec59c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec59c_0x1ec59c");
#endif

    ctx->pc = 0x1ec59cu;

    // 0x1ec59c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec5a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec5a4: 0x84420078  lh          $v0, 0x78($v0)
    ctx->pc = 0x1ec5a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ec5a8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1ec5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ec5ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ec5acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1ec5b0: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1ec5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1ec5b4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EC5B4u;
    {
        const bool branch_taken_0x1ec5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec5b4) {
            ctx->pc = 0x1EC604u;
            return;
        }
    }
    ctx->pc = 0x1EC5BCu;
    // 0x1ec5bc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec5c0: 0x24441330  addiu       $a0, $v0, 0x1330
    ctx->pc = 0x1ec5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec5c4: 0x84850078  lh          $a1, 0x78($a0)
    ctx->pc = 0x1ec5c4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x1ec5c8: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1ec5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1ec5cc: 0xa4820078  sh          $v0, 0x78($a0)
    ctx->pc = 0x1ec5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ec5d0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1ec5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1ec5d4: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x1ec5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x1ec5d8: 0x84420078  lh          $v0, 0x78($v0)
    ctx->pc = 0x1ec5d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1ec5dc: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1ec5dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1ec5e0: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1ec5e4: 0x24020808  addiu       $v0, $zero, 0x808
    ctx->pc = 0x1ec5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x1ec5e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1ec5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1ec5ec: 0x24030a08  addiu       $v1, $zero, 0xA08
    ctx->pc = 0x1ec5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2568));
    // 0x1ec5f0: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x1ec5f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ec5f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1ec5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1ec5f8: 0x24450ca0  addiu       $a1, $v0, 0xCA0
    ctx->pc = 0x1ec5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3232));
    // 0x1ec5fc: 0xc059b14  jal         func_166C50
    ctx->pc = 0x1EC5FCu;
    SET_GPR_U32(ctx, 31, 0x1EC604u);
    ctx->pc = 0x166C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166C50u, 0x1EC5FCu, 0x1EC604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC604u;
}
