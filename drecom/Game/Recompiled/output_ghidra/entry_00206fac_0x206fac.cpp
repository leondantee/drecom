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

// Function: entry_00206fac
// Address: 0x206fac - 0x20702c
void entry_00206fac_0x206fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00206fac_0x206fac");
#endif

    ctx->pc = 0x206facu;

    // 0x206fac: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206fb0: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x206fb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x206fb4: 0x10600296  beqz        $v1, . + 4 + (0x296 << 2)
    ctx->pc = 0x206FB4u;
    {
        const bool branch_taken_0x206fb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fb4) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x206FBCu;
    // 0x206fbc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206fc0: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x206fc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x206fc4: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x206fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x206fc8: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x206fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x206fcc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206fd0: 0x8c641360  lw          $a0, 0x1360($v1)
    ctx->pc = 0x206fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4960)));
    // 0x206fd4: 0x1080028e  beqz        $a0, . + 4 + (0x28E << 2)
    ctx->pc = 0x206FD4u;
    {
        const bool branch_taken_0x206fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x206fd4) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x206FDCu;
    // 0x206fdc: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x206fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206fe0: 0xaca01360  sw          $zero, 0x1360($a1)
    ctx->pc = 0x206fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4960), GPR_U32(ctx, 0));
    // 0x206fe4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206fe8: 0xac601370  sw          $zero, 0x1370($v1)
    ctx->pc = 0x206fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4976), GPR_U32(ctx, 0));
    // 0x206fec: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x206fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206ff0: 0xac80135c  sw          $zero, 0x135C($a0)
    ctx->pc = 0x206ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4956), GPR_U32(ctx, 0));
    // 0x206ff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x206ff8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x206ffc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x206ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x207000: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x207000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x207004: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207008: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x207008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x20700c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207010: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x207010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x207014: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207018: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x207018u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x20701c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x20701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x207020: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x207020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x207024: 0x1000027a  b           . + 4 + (0x27A << 2)
    ctx->pc = 0x207024u;
    {
        const bool branch_taken_0x207024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207024) {
            ctx->pc = 0x207A10u;
            return;
        }
    }
    ctx->pc = 0x20702Cu;
}
