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

// Function: entry_002e5030
// Address: 0x2e5030 - 0x2e5088
void entry_002e5030_0x2e5030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5030_0x2e5030");
#endif

    ctx->pc = 0x2e5030u;

    // 0x2e5030: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5034: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e5034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e5038: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2e5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2e503c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e503cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e5040: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e5040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e5044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5048: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e504c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x2e504cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2e5050: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2e5050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2e5054: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2e5054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5058: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2e5058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e505c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2e505cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2e5060: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2e5060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e5064: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2e5064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2e5068: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e506c: 0x8c23efa8  lw          $v1, -0x1058($at)
    ctx->pc = 0x2e506cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EEFA8u));
    // 0x2e5070: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5074: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E5074u;
    {
        const bool branch_taken_0x2e5074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e5074) {
            ctx->pc = 0x2E5088u;
            return;
        }
    }
    ctx->pc = 0x2E507Cu;
    // 0x2e507c: 0x8e0200ac  lw          $v0, 0xAC($s0)
    ctx->pc = 0x2e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x2e5080: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2e5080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2e5084: 0xac22efa8  sw          $v0, -0x1058($at)
    ctx->pc = 0x2e5084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3EEFA8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EEFA8u, _value); } while (0);
    ctx->pc = 0x2e5088u;
}
