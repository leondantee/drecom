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

// Function: entry_0018cc48
// Address: 0x18cc48 - 0x18cc6c
void entry_0018cc48_0x18cc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018cc48_0x18cc48");
#endif

    ctx->pc = 0x18cc48u;

    // 0x18cc48: 0x92020371  lbu         $v0, 0x371($s0)
    ctx->pc = 0x18cc48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 881)));
    // 0x18cc4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18cc50: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CC50u;
    {
        const bool branch_taken_0x18cc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc50) {
            ctx->pc = 0x18CC74u;
            return;
        }
    }
    ctx->pc = 0x18CC58u;
    // 0x18cc58: 0x96020340  lhu         $v0, 0x340($s0)
    ctx->pc = 0x18cc58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 832)));
    // 0x18cc5c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x18cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x18cc60: 0xa6020340  sh          $v0, 0x340($s0)
    ctx->pc = 0x18cc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x18cc64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x18CC64u;
    {
        const bool branch_taken_0x18cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cc64) {
            ctx->pc = 0x18CC74u;
            return;
        }
    }
    ctx->pc = 0x18CC6Cu;
}
