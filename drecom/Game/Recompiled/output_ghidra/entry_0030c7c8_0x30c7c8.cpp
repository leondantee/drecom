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

// Function: entry_0030c7c8
// Address: 0x30c7c8 - 0x30c858
void entry_0030c7c8_0x30c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030c7c8_0x30c7c8");
#endif

    switch (ctx->pc) {
        case 0x30c820u: goto label_30c820;
        default: break;
    }

    ctx->pc = 0x30c7c8u;

    // 0x30c7c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7cc: 0xc4411288  lwc1        $f1, 0x1288($v0)
    ctx->pc = 0x30c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30c7d0: 0x3c024489  lui         $v0, 0x4489
    ctx->pc = 0x30c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17545 << 16));
    // 0x30c7d4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x30c7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x30c7d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30c7d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c7dc: 0x0  nop
    ctx->pc = 0x30c7dcu;
    // NOP
    // 0x30c7e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30c7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c7e4: 0x0  nop
    ctx->pc = 0x30c7e4u;
    // NOP
    // 0x30c7e8: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x30C7E8u;
    {
        const bool branch_taken_0x30c7e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c7e8) {
            ctx->pc = 0x30C858u;
            return;
        }
    }
    ctx->pc = 0x30C7F0u;
    // 0x30c7f0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7f4: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x30c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x30c7f8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x30c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c7fc: 0x3c023ec9  lui         $v0, 0x3EC9
    ctx->pc = 0x30c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16073 << 16));
    // 0x30c800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x30c800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x30c804: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30c804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30c808: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30c808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x30c80c: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x30c80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30c810: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30c810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30c814: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x30c814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30c818: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30C818u;
    SET_GPR_U32(ctx, 31, 0x30C820u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30C818u, 0x30C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C820u;
label_30c820:
    // 0x30c820: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30C820u;
    {
        const bool branch_taken_0x30c820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30c820) {
            ctx->pc = 0x30C858u;
            return;
        }
    }
    ctx->pc = 0x30C828u;
    // 0x30c828: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c82c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c830: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x30c830u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c834: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x30c834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30c838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c83c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x30c83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x30c840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c844: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x30c844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c84c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x30c84cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x30c850: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x30c850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30c854: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x30c854u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30c858u;
}
