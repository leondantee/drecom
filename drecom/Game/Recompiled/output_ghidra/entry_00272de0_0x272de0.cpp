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

// Function: entry_00272de0
// Address: 0x272de0 - 0x272e98
void entry_00272de0_0x272de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272de0_0x272de0");
#endif

    ctx->pc = 0x272de0u;

    // 0x272de0: 0x8e031bf0  lw          $v1, 0x1BF0($s0)
    ctx->pc = 0x272de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7152)));
    // 0x272de4: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x272de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x272de8: 0x1462002b  bne         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x272DE8u;
    {
        const bool branch_taken_0x272de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x272de8) {
            ctx->pc = 0x272E98u;
            return;
        }
    }
    ctx->pc = 0x272DF0u;
    // 0x272df0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272df4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x272df4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x272df8: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x272df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x272dfc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x272dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x272e00: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x272e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x272e04: 0xac221a98  sw          $v0, 0x1A98($at)
    ctx->pc = 0x272e04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x272e08: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e0c: 0x8c24f9e0  lw          $a0, -0x620($at)
    ctx->pc = 0x272e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x272e10: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e14: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e18: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e1c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e20: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e24: 0x8c24f9e4  lw          $a0, -0x61C($at)
    ctx->pc = 0x272e24u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x272e28: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e2c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e38: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e3c: 0x8c24f9e8  lw          $a0, -0x618($at)
    ctx->pc = 0x272e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x272e40: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e44: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e48: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e4c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e50: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e54: 0x8c24f9ec  lw          $a0, -0x614($at)
    ctx->pc = 0x272e54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x272e58: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e5c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e60: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e64: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e6c: 0x8c24f9f0  lw          $a0, -0x610($at)
    ctx->pc = 0x272e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9F0u));
    // 0x272e70: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e74: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e7c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x272e80: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x272e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x272e84: 0x8c24f9f4  lw          $a0, -0x60C($at)
    ctx->pc = 0x272e84u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61F9F4u));
    // 0x272e88: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x272e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x272e8c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x272e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x272e90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x272e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x272e94: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x272e94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x272e98u;
}
