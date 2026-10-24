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

// Function: entry_0032a220
// Address: 0x32a220 - 0x32a260
void entry_0032a220_0x32a220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a220_0x32a220");
#endif

    ctx->pc = 0x32a220u;

    // 0x32a220: 0x92032912  lbu         $v1, 0x2912($s0)
    ctx->pc = 0x32a220u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 10514)));
    // 0x32a224: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x32a224u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x32a228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a22c: 0x14c3000f  bne         $a2, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32A22Cu;
    {
        const bool branch_taken_0x32a22c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x32a22c) {
            ctx->pc = 0x32A26Cu;
            return;
        }
    }
    ctx->pc = 0x32A234u;
    // 0x32a234: 0x86032914  lh          $v1, 0x2914($s0)
    ctx->pc = 0x32a234u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10516)));
    // 0x32a238: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x32a238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x32a23c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x32a23cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x32a240: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A240u;
    {
        const bool branch_taken_0x32a240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a240) {
            ctx->pc = 0x32A260u;
            return;
        }
    }
    ctx->pc = 0x32A248u;
    // 0x32a248: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32a248u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32a24c: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x32a24cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x32a250: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x32a250u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a254: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x32a254u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x32a258: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x32A258u;
    SET_GPR_U32(ctx, 31, 0x32A260u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x32A258u, 0x32A260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A260u;
}
