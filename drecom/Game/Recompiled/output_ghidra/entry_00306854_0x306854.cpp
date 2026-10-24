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

// Function: entry_00306854
// Address: 0x306854 - 0x3068e4
void entry_00306854_0x306854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00306854_0x306854");
#endif

    switch (ctx->pc) {
        case 0x3068acu: goto label_3068ac;
        default: break;
    }

    ctx->pc = 0x306854u;

    // 0x306854: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x306854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306858: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x306858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30685c: 0x3c034489  lui         $v1, 0x4489
    ctx->pc = 0x30685cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17545 << 16));
    // 0x306860: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x306860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x306864: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x306864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306868: 0x0  nop
    ctx->pc = 0x306868u;
    // NOP
    // 0x30686c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30686cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x306870: 0x0  nop
    ctx->pc = 0x306870u;
    // NOP
    // 0x306874: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x306874u;
    {
        const bool branch_taken_0x306874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x306874) {
            ctx->pc = 0x3068E4u;
            return;
        }
    }
    ctx->pc = 0x30687Cu;
    // 0x30687c: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x30687cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x306880: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x306880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x306884: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x306884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x306888: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30688c: 0x8c430130  lw          $v1, 0x130($v0)
    ctx->pc = 0x30688cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x306890: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x306894: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x306894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x306898: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x306898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30689c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30689cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3068a0: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x3068a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x3068a4: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x3068A4u;
    SET_GPR_U32(ctx, 31, 0x3068ACu);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x3068A4u, 0x3068ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068ACu;
label_3068ac:
    // 0x3068ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3068ACu;
    {
        const bool branch_taken_0x3068ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3068ac) {
            ctx->pc = 0x3068E4u;
            return;
        }
    }
    ctx->pc = 0x3068B4u;
    // 0x3068b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3068b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3068b8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3068bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3068c0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3068c4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3068c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3068cc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3068d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3068d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3068dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x3068dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3068e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3068e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x3068e4u;
}
