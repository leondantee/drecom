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

// Function: entry_00371800
// Address: 0x371800 - 0x371860
void entry_00371800_0x371800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371800_0x371800");
#endif

    switch (ctx->pc) {
        case 0x371814u: goto label_371814;
        case 0x371820u: goto label_371820;
        default: break;
    }

    ctx->pc = 0x371800u;

    // 0x371800: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x371800u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x371804: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371808: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x371808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x37180c: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x37180Cu;
    SET_GPR_U32(ctx, 31, 0x371814u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x37180Cu, 0x371814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371814u;
label_371814:
    // 0x371814: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x371814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371818: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x371818u;
    SET_GPR_U32(ctx, 31, 0x371820u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x371818u, 0x371820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371820u;
label_371820:
    // 0x371820: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371824: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x371824u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x371828: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x371828u;
    {
        const bool branch_taken_0x371828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x371828) {
            ctx->pc = 0x371860u;
            return;
        }
    }
    ctx->pc = 0x371830u;
    // 0x371830: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x371830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371834: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371838: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x371838u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x37183c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37183cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371840: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x371840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x371844: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371848: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x371848u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x37184c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x37184cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x371850: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x371850u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x371854: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x371854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x371858: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x371858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x37185c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x37185cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    ctx->pc = 0x371860u;
}
