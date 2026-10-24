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

// Function: entry_0010cfbc
// Address: 0x10cfbc - 0x10cfe8
void entry_0010cfbc_0x10cfbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cfbc_0x10cfbc");
#endif

    ctx->pc = 0x10cfbcu;

    // 0x10cfbc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10cfc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cfc4: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x10cfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x10cfc8: 0xac433b00  sw          $v1, 0x3B00($v0)
    ctx->pc = 0x10cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15104), GPR_U32(ctx, 3));
    // 0x10cfcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10cfd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10cfd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10cfd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfd8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x10cfd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfdc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x10cfdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x10cfe0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x10cfe0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cfe4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x10cfe4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->pc = 0x10cfe8u;
}
