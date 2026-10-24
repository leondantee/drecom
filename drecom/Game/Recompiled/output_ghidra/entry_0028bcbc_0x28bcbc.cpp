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

// Function: entry_0028bcbc
// Address: 0x28bcbc - 0x28bcd4
void entry_0028bcbc_0x28bcbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028bcbc_0x28bcbc");
#endif

    ctx->pc = 0x28bcbcu;

    // 0x28bcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bcc0: 0x3c010063  lui         $at, 0x63
    ctx->pc = 0x28bcc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)99 << 16));
    // 0x28bcc4: 0xac22bf18  sw          $v0, -0x40E8($at)
    ctx->pc = 0x28bcc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62BF18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62BF18u, _value); } while (0);
    // 0x28bcc8: 0x8e02685c  lw          $v0, 0x685C($s0)
    ctx->pc = 0x28bcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28bccc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28bcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x28bcd0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28bcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    ctx->pc = 0x28bcd4u;
}
