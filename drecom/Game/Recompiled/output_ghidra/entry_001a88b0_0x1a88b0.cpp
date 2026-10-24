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

// Function: entry_001a88b0
// Address: 0x1a88b0 - 0x1a88e0
void entry_001a88b0_0x1a88b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a88b0_0x1a88b0");
#endif

    ctx->pc = 0x1a88b0u;

    // 0x1a88b0: 0x3c07005d  lui         $a3, 0x5D
    ctx->pc = 0x1a88b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)93 << 16));
    // 0x1a88b4: 0x24e23460  addiu       $v0, $a3, 0x3460
    ctx->pc = 0x1a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 13408));
    // 0x1a88b8: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x1a88b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x1a88bc: 0x92050313  lbu         $a1, 0x313($s0)
    ctx->pc = 0x1a88bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 787)));
    // 0x1a88c0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1a88c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1a88c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a88c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a88c8: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1a88c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1a88cc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1a88ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a88d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1a88d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a88d4: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x1a88d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1a88d8: 0xc06a350  jal         func_1A8D40
    ctx->pc = 0x1A88D8u;
    SET_GPR_U32(ctx, 31, 0x1A88E0u);
    ctx->pc = 0x1A8D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8D40u, 0x1A88D8u, 0x1A88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A88E0u;
}
