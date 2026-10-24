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

// Function: entry_0034a7fc
// Address: 0x34a7fc - 0x34a898
void entry_0034a7fc_0x34a7fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034a7fc_0x34a7fc");
#endif

    switch (ctx->pc) {
        case 0x34a858u: goto label_34a858;
        default: break;
    }

    ctx->pc = 0x34a7fcu;

    // 0x34a7fc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a800: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x34a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34a804: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x34a804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x34a808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34a808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34a80c: 0x0  nop
    ctx->pc = 0x34a80cu;
    // NOP
    // 0x34a810: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x34a810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34a814: 0x0  nop
    ctx->pc = 0x34a814u;
    // NOP
    // 0x34a818: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x34A818u;
    {
        const bool branch_taken_0x34a818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34a818) {
            ctx->pc = 0x34A898u;
            return;
        }
    }
    ctx->pc = 0x34A820u;
    // 0x34a820: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a824: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a828: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x34a828u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a82c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x34a82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x34a830: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a834: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x34a834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x34a838: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a83c: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x34a83cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a840: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a844: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x34a844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a848: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x34a848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a84c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x34a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x34a850: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34A850u;
    SET_GPR_U32(ctx, 31, 0x34A858u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34A850u, 0x34A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34A858u;
label_34a858:
    // 0x34a858: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34a858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34a85c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x34a85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x34a860: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34A860u;
    {
        const bool branch_taken_0x34a860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34a860) {
            ctx->pc = 0x34A898u;
            return;
        }
    }
    ctx->pc = 0x34A868u;
    // 0x34a868: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34a868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34a86c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a870: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34a870u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a874: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34a874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34a878: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a87c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34a87cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34a880: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a884: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34a884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a888: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a88c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34a88cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34a890: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x34a890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34a894: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34a894u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x34a898u;
}
