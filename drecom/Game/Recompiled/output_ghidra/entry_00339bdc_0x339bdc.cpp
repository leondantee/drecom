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

// Function: entry_00339bdc
// Address: 0x339bdc - 0x339c44
void entry_00339bdc_0x339bdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339bdc_0x339bdc");
#endif

    ctx->pc = 0x339bdcu;

    // 0x339bdc: 0x93a20018  lbu         $v0, 0x18($sp)
    ctx->pc = 0x339bdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x339be0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x339be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x339be4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x339be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x339be8: 0x21a3c  dsll32      $v1, $v0, 8
    ctx->pc = 0x339be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 8));
    // 0x339bec: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x339becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x339bf0: 0x3c023800  lui         $v0, 0x3800
    ctx->pc = 0x339bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14336 << 16));
    // 0x339bf4: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x339bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x339bf8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339bfc: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339c00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339c04: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339c08: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339c10: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339c10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339c14: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339c18: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339c18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339c1c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339c20: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339c24: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339c24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x339c28: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x339c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x339c2c: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x339c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x339c30: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339C30u;
    {
        const bool branch_taken_0x339c30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x339c30) {
            ctx->pc = 0x339C44u;
            return;
        }
    }
    ctx->pc = 0x339C38u;
    // 0x339c38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339C38u;
    {
        const bool branch_taken_0x339c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339c38) {
            ctx->pc = 0x339C44u;
            return;
        }
    }
    ctx->pc = 0x339C40u;
    // 0x339c40: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x339c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x339c44u;
}
