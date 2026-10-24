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

// Function: entry_0031299c
// Address: 0x31299c - 0x3129f0
void entry_0031299c_0x31299c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031299c_0x31299c");
#endif

    ctx->pc = 0x31299cu;

    // 0x31299c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x31299cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3129a0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3129a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3129a4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3129a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3129a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3129ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3129acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3129b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3129b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3129b4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3129b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3129b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3129b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3129bc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x3129bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x3129c0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x3129c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3129c4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3129c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3129c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3129c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3129cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x3129ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x3129d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3129d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3129d4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3129d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3129d8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x3129d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x3129dc: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x3129dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x3129e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3129e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3129e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3129e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3129e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3129e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3129ec: 0xa202013a  sb          $v0, 0x13A($s0)
    ctx->pc = 0x3129ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 314), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x3129f0u;
}
