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

// Function: entry_00335ae4
// Address: 0x335ae4 - 0x335b1c
void entry_00335ae4_0x335ae4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00335ae4_0x335ae4");
#endif

    switch (ctx->pc) {
        case 0x335b08u: goto label_335b08;
        default: break;
    }

    ctx->pc = 0x335ae4u;

    // 0x335ae4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x335ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x335ae8: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x335ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x335aec: 0x24423360  addiu       $v0, $v0, 0x3360
    ctx->pc = 0x335aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13152));
    // 0x335af0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x335af0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x335af4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x335af4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x335af8: 0x3c030089  lui         $v1, 0x89
    ctx->pc = 0x335af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)137 << 16));
    // 0x335afc: 0x24663380  addiu       $a2, $v1, 0x3380
    ctx->pc = 0x335afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 13184));
    // 0x335b00: 0xc0a4474  jal         func_2911D0
    ctx->pc = 0x335B00u;
    SET_GPR_U32(ctx, 31, 0x335B08u);
    ctx->pc = 0x2911D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911D0u, 0x335B00u, 0x335B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B08u;
label_335b08:
    // 0x335b08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x335B08u;
    {
        const bool branch_taken_0x335b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335b08) {
            ctx->pc = 0x335B1Cu;
            return;
        }
    }
    ctx->pc = 0x335B10u;
    // 0x335b10: 0x8e035dd0  lw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24016)));
    // 0x335b14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x335b18: 0xae035dd0  sw          $v1, 0x5DD0($s0)
    ctx->pc = 0x335b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24016), GPR_U32(ctx, 3));
    ctx->pc = 0x335b1cu;
}
