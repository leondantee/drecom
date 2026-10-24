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

// Function: entry_0010ceec
// Address: 0x10ceec - 0x10cf18
void entry_0010ceec_0x10ceec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ceec_0x10ceec");
#endif

    ctx->pc = 0x10ceecu;

    // 0x10ceec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10cef0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cef4: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10cef8: 0xac433b00  sw          $v1, 0x3B00($v0)
    ctx->pc = 0x10cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15104), GPR_U32(ctx, 3));
    // 0x10cefc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cf00: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10cf04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cf04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf08: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cf08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf0c: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cf0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cf10: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cf10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf14: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cf14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x10cf18u;
}
