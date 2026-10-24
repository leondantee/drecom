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

// Function: entry_0012dd84
// Address: 0x12dd84 - 0x12ddd4
void entry_0012dd84_0x12dd84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012dd84_0x12dd84");
#endif

    switch (ctx->pc) {
        case 0x12ddb4u: goto label_12ddb4;
        default: break;
    }

    ctx->pc = 0x12dd84u;

    // 0x12dd84: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dd84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dd88: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x12dd88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x12dd8c: 0x10600105  beqz        $v1, . + 4 + (0x105 << 2)
    ctx->pc = 0x12DD8Cu;
    {
        const bool branch_taken_0x12dd8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12dd8c) {
            ctx->pc = 0x12E1A4u;
            return;
        }
    }
    ctx->pc = 0x12DD94u;
    // 0x12dd94: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dd98: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12dd9c: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x12dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x12dda0: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x12dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12dda4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x12dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x12dda8: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x12dda8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x12ddac: 0xc05cc90  jal         func_173240
    ctx->pc = 0x12DDACu;
    SET_GPR_U32(ctx, 31, 0x12DDB4u);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x12DDACu, 0x12DDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DDB4u;
label_12ddb4:
    // 0x12ddb4: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x12ddb4u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12ddb8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12ddbc: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12DDBCu;
    {
        const bool branch_taken_0x12ddbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x12ddbc) {
            ctx->pc = 0x12DDD4u;
            return;
        }
    }
    ctx->pc = 0x12DDC4u;
    // 0x12ddc4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DDC4u;
    {
        const bool branch_taken_0x12ddc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddc4) {
            ctx->pc = 0x12DDD4u;
            return;
        }
    }
    ctx->pc = 0x12DDCCu;
    // 0x12ddcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x12DDCCu;
    {
        const bool branch_taken_0x12ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ddcc) {
            ctx->pc = 0x12DE28u;
            return;
        }
    }
    ctx->pc = 0x12DDD4u;
}
