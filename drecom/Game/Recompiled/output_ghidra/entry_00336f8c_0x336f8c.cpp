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

// Function: entry_00336f8c
// Address: 0x336f8c - 0x336fc0
void entry_00336f8c_0x336f8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00336f8c_0x336f8c");
#endif

    ctx->pc = 0x336f8cu;

    // 0x336f8c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f90: 0x8c234e28  lw          $v1, 0x4E28($at)
    ctx->pc = 0x336f90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x894E28u));
    // 0x336f94: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x336f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336f98: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336f9c: 0xac224e28  sw          $v0, 0x4E28($at)
    ctx->pc = 0x336f9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E28u, _value); } while (0);
    // 0x336fa0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x336fa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x336fa4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x336FA4u;
    {
        const bool branch_taken_0x336fa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x336fa4) {
            ctx->pc = 0x336FC0u;
            return;
        }
    }
    ctx->pc = 0x336FACu;
    // 0x336fac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336fb0: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336fb4: 0xac224e20  sw          $v0, 0x4E20($at)
    ctx->pc = 0x336fb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x894E20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E20u, _value); } while (0);
    // 0x336fb8: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x336fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x336fbc: 0xac204e28  sw          $zero, 0x4E28($at)
    ctx->pc = 0x336fbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x894E28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x894E28u, _value); } while (0);
    ctx->pc = 0x336fc0u;
}
