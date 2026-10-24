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

// Function: entry_00116904
// Address: 0x116904 - 0x116954
void entry_00116904_0x116904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116904_0x116904");
#endif

    ctx->pc = 0x116904u;

    // 0x116904: 0x12e00015  beqz        $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x116904u;
    {
        const bool branch_taken_0x116904 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x116908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116904u;
        // 0x116908: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116904) {
            ctx->pc = 0x11695Cu;
            return;
        }
    }
    ctx->pc = 0x11690Cu;
    // 0x11690c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11690cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116910: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x116910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x116914: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x116914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x116918: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x116918u;
    {
        const bool branch_taken_0x116918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116918) {
            ctx->pc = 0x11691Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116918u;
            // 0x11691c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116958u;
            return;
        }
    }
    ctx->pc = 0x116920u;
    // 0x116920: 0x16103f  dsra32      $v0, $s6, 0
    ctx->pc = 0x116920u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x116924: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x116924u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x116928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x116928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11692c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11692Cu;
    {
        const bool branch_taken_0x11692c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11692Cu;
        // 0x116930: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11692c) {
            ctx->pc = 0x116954u;
            return;
        }
    }
    ctx->pc = 0x116934u;
    // 0x116934: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x116934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x116938: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x116938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11693c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x11693cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116940: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x116940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x116944: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x116944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x116948: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x116948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x11694c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11694Cu;
    {
        const bool branch_taken_0x11694c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11694Cu;
        // 0x116950: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11694c) {
            ctx->pc = 0x116958u;
            return;
        }
    }
    ctx->pc = 0x116954u;
}
