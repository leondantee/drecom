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

// Function: entry_0017a4c8
// Address: 0x17a4c8 - 0x17a4ec
void entry_0017a4c8_0x17a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4c8_0x17a4c8");
#endif

    ctx->pc = 0x17a4c8u;

    // 0x17a4c8: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x17a4c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17a4cc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x17a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x17a4d0: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x17a4d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a4d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x17A4D4u;
    {
        const bool branch_taken_0x17a4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a4d4) {
            ctx->pc = 0x17A498u;
            return;
        }
    }
    ctx->pc = 0x17A4DCu;
    // 0x17a4dc: 0x72c0be28  paddub      $s7, $s6, $zero
    ctx->pc = 0x17a4dcu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 22), GPR_VEC(ctx, 0)));
    // 0x17a4e0: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x17a4e0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a4e4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17A4E4u;
    {
        const bool branch_taken_0x17a4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4e4) {
            ctx->pc = 0x17A528u;
            return;
        }
    }
    ctx->pc = 0x17A4ECu;
}
