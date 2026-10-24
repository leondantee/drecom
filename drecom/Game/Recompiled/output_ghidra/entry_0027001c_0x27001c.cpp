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

// Function: entry_0027001c
// Address: 0x27001c - 0x270070
void entry_0027001c_0x27001c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027001c_0x27001c");
#endif

    ctx->pc = 0x27001cu;

    // 0x27001c: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x27001cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270020: 0xc4e11b58  lwc1        $f1, 0x1B58($a3)
    ctx->pc = 0x270020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270028: 0x0  nop
    ctx->pc = 0x270028u;
    // NOP
    // 0x27002c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27002cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270030: 0x0  nop
    ctx->pc = 0x270030u;
    // NOP
    // 0x270034: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x270034u;
    {
        const bool branch_taken_0x270034 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270034) {
            ctx->pc = 0x270070u;
            return;
        }
    }
    ctx->pc = 0x27003Cu;
    // 0x27003c: 0x8fa80028  lw          $t0, 0x28($sp)
    ctx->pc = 0x27003cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270040: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270044: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270048: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27004c: 0xc50c1b54  lwc1        $f12, 0x1B54($t0)
    ctx->pc = 0x27004cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270050: 0xc44d1b58  lwc1        $f13, 0x1B58($v0)
    ctx->pc = 0x270050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x270054: 0xc46e1b58  lwc1        $f14, 0x1B58($v1)
    ctx->pc = 0x270054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x270058: 0xc48f1b58  lwc1        $f15, 0x1B58($a0)
    ctx->pc = 0x270058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x27005c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27005cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270060: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x270060u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x270064: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270064u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270068: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x270068u;
    SET_GPR_U32(ctx, 31, 0x270070u);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x270068u, 0x270070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270070u;
}
