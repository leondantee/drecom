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

// Function: entry_002159a4
// Address: 0x2159a4 - 0x2159d0
void entry_002159a4_0x2159a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002159a4_0x2159a4");
#endif

    ctx->pc = 0x2159a4u;

    // 0x2159a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2159a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2159a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2159ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2159acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2159b0: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x2159b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x2159b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2159b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2159b8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2159b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2159bc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2159bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2159c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2159c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2159c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2159c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2159ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2159d0u;
}
