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

// Function: entry_002772ac
// Address: 0x2772ac - 0x277324
void entry_002772ac_0x2772ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002772ac_0x2772ac");
#endif

    ctx->pc = 0x2772acu;

    // 0x2772ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2772acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2772b0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2772b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2772b4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2772b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2772b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2772b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2772bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2772bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2772c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2772c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2772c4: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2772c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2772c8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2772c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2772cc: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2772ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2772d0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2772d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2772d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2772d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2772d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2772d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2772dc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2772dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2772e0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2772e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2772e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2772e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2772e8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2772e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2772ec: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2772ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2772f0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x2772f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2772f4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2772f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x2772f8: 0x8c231aa4  lw          $v1, 0x1AA4($at)
    ctx->pc = 0x2772f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1AA4u));
    // 0x2772fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2772fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x277300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x277300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x277304: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x277304u;
    {
        const bool branch_taken_0x277304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277304) {
            ctx->pc = 0x277360u;
            return;
        }
    }
    ctx->pc = 0x27730Cu;
    // 0x27730c: 0x2a210080  slti        $at, $s1, 0x80
    ctx->pc = 0x27730cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x277310: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x277310u;
    {
        const bool branch_taken_0x277310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x277310) {
            ctx->pc = 0x277324u;
            return;
        }
    }
    ctx->pc = 0x277318u;
    // 0x277318: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x277318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27731c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27731Cu;
    {
        const bool branch_taken_0x27731c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27731c) {
            ctx->pc = 0x277328u;
            return;
        }
    }
    ctx->pc = 0x277324u;
}
