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

// Function: entry_0034ba7c
// Address: 0x34ba7c - 0x34bb18
void entry_0034ba7c_0x34ba7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034ba7c_0x34ba7c");
#endif

    ctx->pc = 0x34ba7cu;

    // 0x34ba7c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba80: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34ba80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34ba84: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
    ctx->pc = 0x34BA84u;
    {
        const bool branch_taken_0x34ba84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba84) {
            ctx->pc = 0x34BD88u;
            return;
        }
    }
    ctx->pc = 0x34BA8Cu;
    // 0x34ba8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34ba8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ba90: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34ba94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x34ba94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x34ba98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34ba9c: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34baa0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x34baa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x34baa4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34baa8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x34baa8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x34baac: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bab0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x34bab0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bab4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bab8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x34bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x34babc: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x34babcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x34bac0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bac4: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bac8: 0xa4640068  sh          $a0, 0x68($v1)
    ctx->pc = 0x34bac8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 4));
    // 0x34bacc: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bad0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bad4: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x34bad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x34bad8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x34bad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x34badc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34BADCu;
    {
        const bool branch_taken_0x34badc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34badc) {
            ctx->pc = 0x34BB18u;
            return;
        }
    }
    ctx->pc = 0x34BAE4u;
    // 0x34bae4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bae8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34baec: 0xa060006e  sb          $zero, 0x6E($v1)
    ctx->pc = 0x34baecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 110), (uint8_t)GPR_U32(ctx, 0));
    // 0x34baf0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34baf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34baf4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34baf8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bafc: 0xa064006f  sb          $a0, 0x6F($v1)
    ctx->pc = 0x34bafcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 111), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bb00: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x34bb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34bb04: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x34bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x34bb08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x34bb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x34bb0c: 0xa0640072  sb          $a0, 0x72($v1)
    ctx->pc = 0x34bb0cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 114), (uint8_t)GPR_U32(ctx, 4));
    // 0x34bb10: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x34BB10u;
    {
        const bool branch_taken_0x34bb10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34bb10) {
            ctx->pc = 0x34BD88u;
            return;
        }
    }
    ctx->pc = 0x34BB18u;
}
