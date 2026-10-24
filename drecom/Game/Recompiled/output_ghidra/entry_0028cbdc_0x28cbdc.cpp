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

// Function: entry_0028cbdc
// Address: 0x28cbdc - 0x28cc00
void entry_0028cbdc_0x28cbdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cbdc_0x28cbdc");
#endif

    ctx->pc = 0x28cbdcu;

    // 0x28cbdc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x28cbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x28cbe0: 0x8c23011c  lw          $v1, 0x11C($at)
    ctx->pc = 0x28cbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x28cbe4: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x28cbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x28cbe8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x28cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x28cbec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CBECu;
    {
        const bool branch_taken_0x28cbec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cbec) {
            ctx->pc = 0x28CC00u;
            return;
        }
    }
    ctx->pc = 0x28CBF4u;
    // 0x28cbf4: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28cbf4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cbf8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28cbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28cbfc: 0xac3520e0  sw          $s5, 0x20E0($at)
    ctx->pc = 0x28cbfcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x6220E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220E0u, _value); } while (0);
    ctx->pc = 0x28cc00u;
}
