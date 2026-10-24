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

// Function: entry_0032b710
// Address: 0x32b710 - 0x32b774
void entry_0032b710_0x32b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032b710_0x32b710");
#endif

    ctx->pc = 0x32b710u;

    // 0x32b710: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b714: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x32b714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x32b718: 0x3c026400  lui         $v0, 0x6400
    ctx->pc = 0x32b718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25600 << 16));
    // 0x32b71c: 0x34422b16  ori         $v0, $v0, 0x2B16
    ctx->pc = 0x32b71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11030);
    // 0x32b720: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x32b720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x32b724: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x32b724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x32b728: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x32b728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x32b72c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x32b72cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x32b730: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x32b730u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x32b734: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x32b734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x32b738: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x32b738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x32b73c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x32b73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x32b740: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x32b740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x32b744: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x32b744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x32b748: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x32b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x32b74c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x32b74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x32b750: 0x106200df  beq         $v1, $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x32B750u;
    {
        const bool branch_taken_0x32b750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b750) {
            ctx->pc = 0x32BAD0u;
            return;
        }
    }
    ctx->pc = 0x32B758u;
    // 0x32b758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b75c: 0x10620060  beq         $v1, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x32B75Cu;
    {
        const bool branch_taken_0x32b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x32b75c) {
            ctx->pc = 0x32B8E0u;
            return;
        }
    }
    ctx->pc = 0x32B764u;
    // 0x32b764: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32B764u;
    {
        const bool branch_taken_0x32b764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b764) {
            ctx->pc = 0x32B774u;
            return;
        }
    }
    ctx->pc = 0x32B76Cu;
    // 0x32b76c: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x32B76Cu;
    {
        const bool branch_taken_0x32b76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32b76c) {
            ctx->pc = 0x32BBA0u;
            return;
        }
    }
    ctx->pc = 0x32B774u;
}
