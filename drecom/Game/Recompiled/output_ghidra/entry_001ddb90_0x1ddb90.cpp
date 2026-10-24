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

// Function: entry_001ddb90
// Address: 0x1ddb90 - 0x1ddbf0
void entry_001ddb90_0x1ddb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddb90_0x1ddb90");
#endif

    ctx->pc = 0x1ddb90u;

label_1ddb90:
    // 0x1ddb90: 0x33c2ffff  andi        $v0, $fp, 0xFFFF
    ctx->pc = 0x1ddb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x1ddb94: 0xaee2006c  sw          $v0, 0x6C($s7)
    ctx->pc = 0x1ddb94u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 108), GPR_U32(ctx, 2));
    // 0x1ddb98: 0x26e50090  addiu       $a1, $s7, 0x90
    ctx->pc = 0x1ddb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x1ddb9c: 0x70a0be28  paddub      $s7, $a1, $zero
    ctx->pc = 0x1ddb9cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1ddba0: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x1ddba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ddba4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x1ddba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1ddba8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1ddba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x1ddbac: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x1ddbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x1ddbb0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1ddbb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ddbb4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DDBB4u;
    {
        const bool branch_taken_0x1ddbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbb4) {
            ctx->pc = 0x1DDB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddb90;
        }
    }
    ctx->pc = 0x1DDBBCu;
    // 0x1ddbbc: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1ddbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddbc0: 0x9442000c  lhu         $v0, 0xC($v0)
    ctx->pc = 0x1ddbc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ddbc4: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x1ddbc4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddbc8: 0x33c20020  andi        $v0, $fp, 0x20
    ctx->pc = 0x1ddbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)32);
    // 0x1ddbcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DDBCCu;
    {
        const bool branch_taken_0x1ddbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddbcc) {
            ctx->pc = 0x1DDBF0u;
            return;
        }
    }
    ctx->pc = 0x1DDBD4u;
    // 0x1ddbd4: 0x8fbe0108  lw          $fp, 0x108($sp)
    ctx->pc = 0x1ddbd4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ddbd8: 0x97c2000c  lhu         $v0, 0xC($fp)
    ctx->pc = 0x1ddbd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x1ddbdc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1ddbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1ddbe0: 0x3053f000  andi        $s3, $v0, 0xF000
    ctx->pc = 0x1ddbe0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1ddbe4: 0x131303  sra         $v0, $s3, 12
    ctx->pc = 0x1ddbe4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 12));
    // 0x1ddbe8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x1ddbe8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ddbec: 0xa3b100fe  sb          $s1, 0xFE($sp)
    ctx->pc = 0x1ddbecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 254), (uint8_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1ddbf0u;
}
