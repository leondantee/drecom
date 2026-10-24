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

// Function: entry_00198108
// Address: 0x198108 - 0x198144
void entry_00198108_0x198108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198108_0x198108");
#endif

    switch (ctx->pc) {
        case 0x19812cu: goto label_19812c;
        default: break;
    }

    ctx->pc = 0x198108u;

    // 0x198108: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x19810c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x19810cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x198110: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x198114: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x198118: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x198118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19811c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19811cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x198120: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x198120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x198124: 0xc05cc90  jal         func_173240
    ctx->pc = 0x198124u;
    SET_GPR_U32(ctx, 31, 0x19812Cu);
    ctx->pc = 0x173240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173240u, 0x198124u, 0x19812Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19812Cu;
label_19812c:
    // 0x19812c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x19812cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x198130: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x198130u;
    {
        const bool branch_taken_0x198130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198130) {
            ctx->pc = 0x198144u;
            return;
        }
    }
    ctx->pc = 0x198138u;
    // 0x198138: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x198138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19813c: 0x16030047  bne         $s0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x19813Cu;
    {
        const bool branch_taken_0x19813c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x19813c) {
            ctx->pc = 0x19825Cu;
            return;
        }
    }
    ctx->pc = 0x198144u;
}
