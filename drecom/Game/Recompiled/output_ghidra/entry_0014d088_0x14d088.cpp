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

// Function: entry_0014d088
// Address: 0x14d088 - 0x14d0d8
void entry_0014d088_0x14d088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d088_0x14d088");
#endif

    switch (ctx->pc) {
        case 0x14d094u: goto label_14d094;
        default: break;
    }

    ctx->pc = 0x14d088u;

    // 0x14d088: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x14d088u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14d08c: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x14D08Cu;
    SET_GPR_U32(ctx, 31, 0x14D094u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x14D08Cu, 0x14D094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D094u;
label_14d094:
    // 0x14d094: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d098: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x14d098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x14d09c: 0x1060008b  beqz        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x14D09Cu;
    {
        const bool branch_taken_0x14d09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d09c) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D0A4u;
    // 0x14d0a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d0a8: 0xc4611284  lwc1        $f1, 0x1284($v1)
    ctx->pc = 0x14d0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d0ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d0b0: 0x0  nop
    ctx->pc = 0x14d0b0u;
    // NOP
    // 0x14d0b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14d0b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d0b8: 0x0  nop
    ctx->pc = 0x14d0b8u;
    // NOP
    // 0x14d0bc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x14D0BCu;
    {
        const bool branch_taken_0x14d0bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14d0bc) {
            ctx->pc = 0x14D0D8u;
            return;
        }
    }
    ctx->pc = 0x14D0C4u;
    // 0x14d0c4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x14d0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14d0c8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d0cc: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x14d0ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x14d0d0: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x14D0D0u;
    {
        const bool branch_taken_0x14d0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d0d0) {
            ctx->pc = 0x14D2CCu;
            return;
        }
    }
    ctx->pc = 0x14D0D8u;
}
