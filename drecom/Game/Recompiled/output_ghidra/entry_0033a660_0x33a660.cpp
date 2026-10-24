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

// Function: entry_0033a660
// Address: 0x33a660 - 0x33a698
void entry_0033a660_0x33a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a660_0x33a660");
#endif

    ctx->pc = 0x33a660u;

    // 0x33a660: 0x2121006  srlv        $v0, $s2, $s0
    ctx->pc = 0x33a660u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), GPR_U32(ctx, 16) & 0x1F));
    // 0x33a664: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33a664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a668: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x33a668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33a66c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a670: 0x8c235440  lw          $v1, 0x5440($at)
    ctx->pc = 0x33a670u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x895440u));
    // 0x33a674: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a678: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33a678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33a67c: 0xac225440  sw          $v0, 0x5440($at)
    ctx->pc = 0x33a67cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x895440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895440u, _value); } while (0);
    // 0x33a680: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x33a680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33a684: 0x244250c0  addiu       $v0, $v0, 0x50C0
    ctx->pc = 0x33a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20672));
    // 0x33a688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a68c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x33a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x33a690: 0x2610fff8  addiu       $s0, $s0, -0x8
    ctx->pc = 0x33a690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x33a694: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x33a694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x33a698u;
}
