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

// Function: entry_001bf6f4
// Address: 0x1bf6f4 - 0x1bf724
void entry_001bf6f4_0x1bf6f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf6f4_0x1bf6f4");
#endif

    ctx->pc = 0x1bf6f4u;

    // 0x1bf6f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf6f8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6fc: 0xa064156d  sb          $a0, 0x156D($v1)
    ctx->pc = 0x1bf6fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5485), (uint8_t)GPR_U32(ctx, 4));
    // 0x1bf700: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf704: 0x9063156c  lbu         $v1, 0x156C($v1)
    ctx->pc = 0x1bf704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5484)));
    // 0x1bf708: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1bf708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1bf70c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BF70Cu;
    {
        const bool branch_taken_0x1bf70c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf70c) {
            ctx->pc = 0x1BF724u;
            return;
        }
    }
    ctx->pc = 0x1BF714u;
    // 0x1bf714: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf718: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1bf718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bf71c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BF71Cu;
    {
        const bool branch_taken_0x1bf71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf71c) {
            ctx->pc = 0x1BF730u;
            return;
        }
    }
    ctx->pc = 0x1BF724u;
}
