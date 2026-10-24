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

// Function: entry_001b81e4
// Address: 0x1b81e4 - 0x1b8274
void entry_001b81e4_0x1b81e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b81e4_0x1b81e4");
#endif

    ctx->pc = 0x1b81e4u;

    // 0x1b81e4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b81e8: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x1b81e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x1b81ec: 0x10600052  beqz        $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1B81ECu;
    {
        const bool branch_taken_0x1b81ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b81ec) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B81F4u;
    // 0x1b81f4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b81f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b81f8: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1b81f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1b81fc: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1b81fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x1b8200: 0xa61824  and         $v1, $a1, $a2
    ctx->pc = 0x1b8200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1b8204: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B8204u;
    {
        const bool branch_taken_0x1b8204 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8204) {
            ctx->pc = 0x1B8298u;
            return;
        }
    }
    ctx->pc = 0x1B820Cu;
    // 0x1b820c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8210: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8214: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1b8214u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b8218: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b8218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b821c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b821cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8220: 0xa0a40001  sb          $a0, 0x1($a1)
    ctx->pc = 0x1b8220u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b8224: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8228: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b8228u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b822c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8230: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1b8230u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8234: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8238: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1b8238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1b823c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b8240: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8244: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1b8244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b8248: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b8248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b824c: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x1b824cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b8250: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b8250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8254: 0x9064156d  lbu         $a0, 0x156D($v1)
    ctx->pc = 0x1b8254u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5485)));
    // 0x1b8258: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1b8258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1b825c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8260: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B8260u;
    {
        const bool branch_taken_0x1b8260 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8260) {
            ctx->pc = 0x1B8274u;
            return;
        }
    }
    ctx->pc = 0x1B8268u;
    // 0x1b8268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b8268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b826c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b826cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b8270: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1b8270u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1b8274u;
}
