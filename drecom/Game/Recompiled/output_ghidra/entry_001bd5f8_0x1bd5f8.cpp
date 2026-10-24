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

// Function: entry_001bd5f8
// Address: 0x1bd5f8 - 0x1bd688
void entry_001bd5f8_0x1bd5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd5f8_0x1bd5f8");
#endif

    ctx->pc = 0x1bd5f8u;

    // 0x1bd5f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd5fc: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x1bd5fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x1bd600: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x1BD600u;
    {
        const bool branch_taken_0x1bd600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd600) {
            ctx->pc = 0x1BD734u;
            return;
        }
    }
    ctx->pc = 0x1BD608u;
    // 0x1bd608: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd60c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1bd60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1bd610: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1bd610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1bd614: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1bd614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1bd618: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1BD618u;
    {
        const bool branch_taken_0x1bd618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd618) {
            ctx->pc = 0x1BD6ACu;
            return;
        }
    }
    ctx->pc = 0x1BD620u;
    // 0x1bd620: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd624: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd628: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1bd628u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd62c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1bd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1bd630: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd634: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1bd634u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd638: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd63c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1bd63cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd640: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd644: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd644u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd648: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd64c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1bd64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1bd650: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd654: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd658: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1bd658u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bd65c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd660: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bd660u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bd664: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd668: 0x9063156d  lbu         $v1, 0x156D($v1)
    ctx->pc = 0x1bd668u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1bd66c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1bd66cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bd670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bd670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bd674: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD674u;
    {
        const bool branch_taken_0x1bd674 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bd674) {
            ctx->pc = 0x1BD688u;
            return;
        }
    }
    ctx->pc = 0x1BD67Cu;
    // 0x1bd67c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bd67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd680: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bd680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bd684: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bd684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bd688u;
}
