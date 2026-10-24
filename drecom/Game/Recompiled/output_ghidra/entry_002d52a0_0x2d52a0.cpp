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

// Function: entry_002d52a0
// Address: 0x2d52a0 - 0x2d52f8
void entry_002d52a0_0x2d52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d52a0_0x2d52a0");
#endif

    ctx->pc = 0x2d52a0u;

    // 0x2d52a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d52a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d52a4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d52a8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d52a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d52ac: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d52acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d52b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d52b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d52b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d52b8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2d52b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2d52bc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d52bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d52c0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2d52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2d52c4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2d52c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2d52c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2d52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d52cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d52d0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d52d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2d52d4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2d52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2d52d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2d52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2d52dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2d52dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2d52e0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2d52e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2d52e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d52e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d52e8: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x2d52e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2d52ec: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d52ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d52f0: 0xc0b4124  jal         func_2D0490
    ctx->pc = 0x2D52F0u;
    SET_GPR_U32(ctx, 31, 0x2D52F8u);
    ctx->pc = 0x2D0490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0490u, 0x2D52F0u, 0x2D52F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D52F8u;
}
