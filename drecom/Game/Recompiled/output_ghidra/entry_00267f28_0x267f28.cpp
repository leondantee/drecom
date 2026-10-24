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

// Function: entry_00267f28
// Address: 0x267f28 - 0x267f48
void entry_00267f28_0x267f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00267f28_0x267f28");
#endif

    ctx->pc = 0x267f28u;

    // 0x267f28: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x267f28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x267f2c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x267f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x267f30: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x267f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x267f34: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x267F34u;
    {
        const bool branch_taken_0x267f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f34) {
            ctx->pc = 0x267F48u;
            return;
        }
    }
    ctx->pc = 0x267F3Cu;
    // 0x267f3c: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x267f3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x267f40: 0xc09a70c  jal         func_269C30
    ctx->pc = 0x267F40u;
    SET_GPR_U32(ctx, 31, 0x267F48u);
    ctx->pc = 0x269C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C30u, 0x267F40u, 0x267F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F48u;
}
