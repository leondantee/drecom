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

// Function: entry_0010cad8
// Address: 0x10cad8 - 0x10caf8
void entry_0010cad8_0x10cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cad8_0x10cad8");
#endif

    ctx->pc = 0x10cad8u;

    // 0x10cad8: 0x24703b00  addiu       $s0, $v1, 0x3B00
    ctx->pc = 0x10cad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15104));
    // 0x10cadc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x10cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x10cae0: 0xac623b00  sw          $v0, 0x3B00($v1)
    ctx->pc = 0x10cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 15104), GPR_U32(ctx, 2));
    // 0x10cae4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x10cae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x10cae8: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x10cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x10caec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10caecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caf0: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x10caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x10caf4: 0x0  nop
    ctx->pc = 0x10caf4u;
    // NOP
    ctx->pc = 0x10caf8u;
}
