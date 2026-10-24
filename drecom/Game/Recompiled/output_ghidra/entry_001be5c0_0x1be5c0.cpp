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

// Function: entry_001be5c0
// Address: 0x1be5c0 - 0x1be650
void entry_001be5c0_0x1be5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be5c0_0x1be5c0");
#endif

    ctx->pc = 0x1be5c0u;

    // 0x1be5c0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5c4: 0x906509e7  lbu         $a1, 0x9E7($v1)
    ctx->pc = 0x1be5c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1be5c8: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BE5C8u;
    {
        const bool branch_taken_0x1be5c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5c8) {
            ctx->pc = 0x1BE70Cu;
            return;
        }
    }
    ctx->pc = 0x1BE5D0u;
    // 0x1be5d0: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1be5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5d4: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1be5d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1be5d8: 0x3c080020  lui         $t0, 0x20
    ctx->pc = 0x1be5d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32 << 16));
    // 0x1be5dc: 0xe81824  and         $v1, $a3, $t0
    ctx->pc = 0x1be5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x1be5e0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BE5E0u;
    {
        const bool branch_taken_0x1be5e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be5e0) {
            ctx->pc = 0x1BE674u;
            return;
        }
    }
    ctx->pc = 0x1BE5E8u;
    // 0x1be5e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be5ec: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1be5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1be5f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1be5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1be5f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be5fc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1be5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be600: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be604: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1be604u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be608: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be60c: 0xa0a00003  sb          $zero, 0x3($a1)
    ctx->pc = 0x1be60cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be610: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be614: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1be614u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1be618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be61c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be620: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1be620u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1be624: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be628: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1be628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1be62c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be62cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be630: 0x90a6156d  lbu         $a2, 0x156D($a1)
    ctx->pc = 0x1be630u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5485)));
    // 0x1be634: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1be634u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1be638: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1be638u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1be63c: 0x14e80004  bne         $a3, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE63Cu;
    {
        const bool branch_taken_0x1be63c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x1be63c) {
            ctx->pc = 0x1BE650u;
            return;
        }
    }
    ctx->pc = 0x1BE644u;
    // 0x1be644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1be644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1be648: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1be648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be64c: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1be64cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1be650u;
}
