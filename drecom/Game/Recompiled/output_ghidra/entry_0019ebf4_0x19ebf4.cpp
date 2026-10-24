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

// Function: entry_0019ebf4
// Address: 0x19ebf4 - 0x19ec30
void entry_0019ebf4_0x19ebf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ebf4_0x19ebf4");
#endif

    ctx->pc = 0x19ebf4u;

    // 0x19ebf4: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19ebf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19ebf8: 0x8c238070  lw          $v1, -0x7F90($at)
    ctx->pc = 0x19ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x388070u));
    // 0x19ebfc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x19ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x19ec00: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19ec04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ec08: 0xa38280c0  sb          $v0, -0x7F40($gp)
    ctx->pc = 0x19ec08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934720), (uint8_t)GPR_U32(ctx, 2));
    // 0x19ec0c: 0x938280c4  lbu         $v0, -0x7F3C($gp)
    ctx->pc = 0x19ec0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934724)));
    // 0x19ec10: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x19ec10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ec14: 0x938580c0  lbu         $a1, -0x7F40($gp)
    ctx->pc = 0x19ec14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x19ec18: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x19ec18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x19ec1c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19EC1Cu;
    {
        const bool branch_taken_0x19ec1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19ec1c) {
            ctx->pc = 0x19EC30u;
            return;
        }
    }
    ctx->pc = 0x19EC24u;
    // 0x19ec24: 0x938480c0  lbu         $a0, -0x7F40($gp)
    ctx->pc = 0x19ec24u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934720)));
    // 0x19ec28: 0xc0ce6e4  jal         func_339B90
    ctx->pc = 0x19EC28u;
    SET_GPR_U32(ctx, 31, 0x19EC30u);
    ctx->pc = 0x339B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339B90u, 0x19EC28u, 0x19EC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19EC30u;
}
