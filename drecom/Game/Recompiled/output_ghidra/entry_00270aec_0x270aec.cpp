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

// Function: entry_00270aec
// Address: 0x270aec - 0x270b3c
void entry_00270aec_0x270aec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00270aec_0x270aec");
#endif

    ctx->pc = 0x270aecu;

    // 0x270aec: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270af0: 0xc4411b58  lwc1        $f1, 0x1B58($v0)
    ctx->pc = 0x270af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270af4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270af8: 0x0  nop
    ctx->pc = 0x270af8u;
    // NOP
    // 0x270afc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x270afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270b00: 0x0  nop
    ctx->pc = 0x270b00u;
    // NOP
    // 0x270b04: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x270B04u;
    {
        const bool branch_taken_0x270b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270b04) {
            ctx->pc = 0x270B3Cu;
            return;
        }
    }
    ctx->pc = 0x270B0Cu;
    // 0x270b0c: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b10: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x270b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b14: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b18: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x270b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x270b1c: 0xc4ac1b54  lwc1        $f12, 0x1B54($a1)
    ctx->pc = 0x270b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 6996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x270b20: 0xc48d1b58  lwc1        $f13, 0x1B58($a0)
    ctx->pc = 0x270b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x270b24: 0xc46e1b58  lwc1        $f14, 0x1B58($v1)
    ctx->pc = 0x270b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x270b28: 0xc44f1b58  lwc1        $f15, 0x1B58($v0)
    ctx->pc = 0x270b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x270b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x270b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x270b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x270b34: 0xc0bc138  jal         func_2F04E0
    ctx->pc = 0x270B34u;
    SET_GPR_U32(ctx, 31, 0x270B3Cu);
    ctx->pc = 0x2F04E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F04E0u, 0x270B34u, 0x270B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270B3Cu;
}
