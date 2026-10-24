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

// Function: entry_00265bcc
// Address: 0x265bcc - 0x265c18
void entry_00265bcc_0x265bcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265bcc_0x265bcc");
#endif

    ctx->pc = 0x265bccu;

    // 0x265bcc: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x265bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
    // 0x265bd0: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x265bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x265bd4: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x265bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
    // 0x265bd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x265bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x265bdc: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x265bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x265be0: 0x31a3e  dsrl32      $v1, $v1, 8
    ctx->pc = 0x265be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 8));
    // 0x265be4: 0x2e3f021  addu        $fp, $s7, $v1
    ctx->pc = 0x265be4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x265be8: 0xae1e009c  sw          $fp, 0x9C($s0)
    ctx->pc = 0x265be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 30));
    // 0x265bec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bf0: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x265bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x265bf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265bf8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x265bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
    // 0x265bfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265c00: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x265c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x265c04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x265c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x265c08: 0xae03124c  sw          $v1, 0x124C($s0)
    ctx->pc = 0x265c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4684), GPR_U32(ctx, 3));
    // 0x265c0c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265c0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265c10: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x265C10u;
    {
        const bool branch_taken_0x265c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265c10) {
            ctx->pc = 0x265D98u;
            return;
        }
    }
    ctx->pc = 0x265C18u;
}
