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

// Function: caseD_5
// Address: 0x277ff8 - 0x278030
void caseD_5_0x277ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x277ff8");
#endif

    ctx->pc = 0x277ff8u;

    // 0x277ff8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277ffc: 0x8c231a30  lw          $v1, 0x1A30($at)
    ctx->pc = 0x277ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x621A30u));
    // 0x278000: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x278000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x278004: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278008: 0xac221a30  sw          $v0, 0x1A30($at)
    ctx->pc = 0x278008u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A30u, _value); } while (0);
    // 0x27800c: 0x2c61003d  sltiu       $at, $v1, 0x3D
    ctx->pc = 0x27800cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
    // 0x278010: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x278010u;
    {
        const bool branch_taken_0x278010 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x278010) {
            ctx->pc = 0x278030u;
            return;
        }
    }
    ctx->pc = 0x278018u;
    // 0x278018: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27801c: 0xac201a28  sw          $zero, 0x1A28($at)
    ctx->pc = 0x27801cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A28u, _value); } while (0);
    // 0x278020: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x278020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x278024: 0xac201a38  sw          $zero, 0x1A38($at)
    ctx->pc = 0x278024u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x621A38u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A38u, _value); } while (0);
    // 0x278028: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x278028u;
    {
        const bool branch_taken_0x278028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278028) {
            ctx->pc = 0x2780E4u;
            return;
        }
    }
    ctx->pc = 0x278030u;
}
