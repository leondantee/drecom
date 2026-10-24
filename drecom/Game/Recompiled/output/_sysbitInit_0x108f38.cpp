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

// Function: _sysbitInit
// Address: 0x108f38 - 0x108f6c
void _sysbitInit_0x108f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sysbitInit_0x108f38");
#endif

    ctx->pc = 0x108f38u;

    // 0x108f38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x108f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f3c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x108f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f40: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x108f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x108f44: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x108f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x108f48: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x108f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x108f4c: 0xac470028  sw          $a3, 0x28($v0)
    ctx->pc = 0x108f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 7));
    // 0x108f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x108f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108f54: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x108f54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x108f58: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x108f58u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x108f5c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x108f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x108f60: 0xfc400018  sd          $zero, 0x18($v0)
    ctx->pc = 0x108f60u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 0));
    // 0x108f64: 0x80423e4  j           func_108F90
    ctx->pc = 0x108F64u;
    ctx->pc = 0x108F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108F64u;
    // 0x108f68: 0xac460020  sw          $a2, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108F90u;
    _sysbitFlush_0x108f90(rdram, ctx, runtime); return;
    ctx->pc = 0x108F6Cu;
}
