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

// Function: entry_00308ff4
// Address: 0x308ff4 - 0x30905c
void entry_00308ff4_0x308ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308ff4_0x308ff4");
#endif

    switch (ctx->pc) {
        case 0x309024u: goto label_309024;
        default: break;
    }

    ctx->pc = 0x308ff4u;

    // 0x308ff4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x308ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ff8: 0x8c440130  lw          $a0, 0x130($v0)
    ctx->pc = 0x308ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x308ffc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309000: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x309000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x309004: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x309004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x309008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x309008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30900c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x30900cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x309010: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x309010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x309014: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x309014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x309018: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x309018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x30901c: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x30901Cu;
    SET_GPR_U32(ctx, 31, 0x309024u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x30901Cu, 0x309024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309024u;
label_309024:
    // 0x309024: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x309024u;
    {
        const bool branch_taken_0x309024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309024) {
            ctx->pc = 0x30905Cu;
            return;
        }
    }
    ctx->pc = 0x30902Cu;
    // 0x30902c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30902cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309030: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309034: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x309034u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x309038: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x309038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30903c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30903cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309040: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x309040u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x309044: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309048: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x309048u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x30904c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x30904cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309050: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x309050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x309054: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x309054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309058: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x309058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x30905cu;
}
