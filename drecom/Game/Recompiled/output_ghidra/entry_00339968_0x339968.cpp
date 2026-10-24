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

// Function: entry_00339968
// Address: 0x339968 - 0x3399b8
void entry_00339968_0x339968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339968_0x339968");
#endif

    ctx->pc = 0x339968u;

    // 0x339968: 0x3c043200  lui         $a0, 0x3200
    ctx->pc = 0x339968u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12800 << 16));
    // 0x33996c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33996cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339970: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339974: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339978: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33997c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33997cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339980: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339984: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x339984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x339988: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x33998c: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x33998cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339990: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x339990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339994: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339998: 0xac235438  sw          $v1, 0x5438($at)
    ctx->pc = 0x339998u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x895438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x895438u, _value); } while (0);
    // 0x33999c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33999cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3399a0: 0x3062001f  andi        $v0, $v1, 0x1F
    ctx->pc = 0x3399a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x3399a4: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3399A4u;
    {
        const bool branch_taken_0x3399a4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3399a4) {
            ctx->pc = 0x3399B8u;
            return;
        }
    }
    ctx->pc = 0x3399ACu;
    // 0x3399ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3399ACu;
    {
        const bool branch_taken_0x3399ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3399ac) {
            ctx->pc = 0x3399B8u;
            return;
        }
    }
    ctx->pc = 0x3399B4u;
    // 0x3399b4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x3399b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    ctx->pc = 0x3399b8u;
}
