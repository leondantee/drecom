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

// Function: entry_002142fc
// Address: 0x2142fc - 0x214340
void entry_002142fc_0x2142fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002142fc_0x2142fc");
#endif

    ctx->pc = 0x2142fcu;

    // 0x2142fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2142fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x214300: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x214300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x214304: 0x22b3a  dsrl        $a1, $v0, 12
    ctx->pc = 0x214304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 12);
    // 0x214308: 0x4c1000d  bgez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x214308u;
    {
        const bool branch_taken_0x214308 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x21430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214308u;
        // 0x21430c: 0xa32825  or          $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214308) {
            ctx->pc = 0x214340u;
            return;
        }
    }
    ctx->pc = 0x214310u;
    // 0x214310: 0x6302f  dsubu       $a2, $zero, $a2
    ctx->pc = 0x214310u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) - GPR_U64(ctx, 6));
    // 0x214314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x214314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x214318: 0x64c3fffe  daddiu      $v1, $a2, -0x2
    ctx->pc = 0x214318u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967294);
    // 0x21431c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21431cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x214320: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x214320u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x214324: 0x652816  dsrlv       $a1, $a1, $v1
    ctx->pc = 0x214324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x214328: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x214328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x21432c: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21432Cu;
    {
        const bool branch_taken_0x21432c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x21432c) {
            ctx->pc = 0x214330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21432Cu;
            // 0x214330: 0x528ba  dsrl        $a1, $a1, 2 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21434Cu;
            return;
        }
    }
    ctx->pc = 0x214334u;
    // 0x214334: 0x510ba  dsrl        $v0, $a1, 2
    ctx->pc = 0x214334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) >> 2);
    // 0x214338: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x214338u;
    {
        const bool branch_taken_0x214338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214338u;
        // 0x21433c: 0x64450001  daddiu      $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x214338) {
            ctx->pc = 0x21434Cu;
            return;
        }
    }
    ctx->pc = 0x214340u;
}
