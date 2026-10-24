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

// Function: entry_001bd328
// Address: 0x1bd328 - 0x1bd3b8
void entry_001bd328_0x1bd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd328_0x1bd328");
#endif

    ctx->pc = 0x1bd328u;

    // 0x1bd328: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd32c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bd32cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bd330: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1BD330u;
    {
        const bool branch_taken_0x1bd330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd330) {
            ctx->pc = 0x1BD464u;
            return;
        }
    }
    ctx->pc = 0x1BD338u;
    // 0x1bd338: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd33c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bd33cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd340: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bd340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bd344: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd348: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD348u;
    {
        const bool branch_taken_0x1bd348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd348) {
            ctx->pc = 0x1BD3DCu;
            return;
        }
    }
    ctx->pc = 0x1BD350u;
    // 0x1bd350: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd354: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd358: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd35c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bd35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd360: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd364: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1bd364u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd368: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd36c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd36cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd370: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd374: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd378: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd37c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bd37cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bd380: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd384: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd388: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1bd388u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd38c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd390: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd390u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd394: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd398: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1bd398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1bd39c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd3a0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd3a4: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD3A4u;
    {
        const bool branch_taken_0x1bd3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd3a4) {
            ctx->pc = 0x1BD3B8u;
            return;
        }
    }
    ctx->pc = 0x1BD3ACu;
    // 0x1bd3ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd3b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd3b4: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bd3b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bd3b8u;
}
