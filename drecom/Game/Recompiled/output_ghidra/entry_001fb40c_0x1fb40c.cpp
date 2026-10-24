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

// Function: entry_001fb40c
// Address: 0x1fb40c - 0x1fb464
void entry_001fb40c_0x1fb40c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb40c_0x1fb40c");
#endif

    ctx->pc = 0x1fb40cu;

    // 0x1fb40c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb410: 0x90630347  lbu         $v1, 0x347($v1)
    ctx->pc = 0x1fb410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 839)));
    // 0x1fb414: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb418: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1fb418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb41c: 0x90830344  lbu         $v1, 0x344($a0)
    ctx->pc = 0x1fb41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 836)));
    // 0x1fb420: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fb420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb424: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x1fb424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1fb428: 0x1020010f  beqz        $at, . + 4 + (0x10F << 2)
    ctx->pc = 0x1FB428u;
    {
        const bool branch_taken_0x1fb428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb428) {
            ctx->pc = 0x1FB868u;
            return;
        }
    }
    ctx->pc = 0x1FB430u;
    // 0x1fb430: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1fb430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb434: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x1fb434u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1fb438: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1fb438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fb43c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fb43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fb440: 0x10a400bd  beq         $a1, $a0, . + 4 + (0xBD << 2)
    ctx->pc = 0x1FB440u;
    {
        const bool branch_taken_0x1fb440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x1fb440) {
            ctx->pc = 0x1FB738u;
            return;
        }
    }
    ctx->pc = 0x1FB448u;
    // 0x1fb448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fb448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fb44c: 0x10a30036  beq         $a1, $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x1FB44Cu;
    {
        const bool branch_taken_0x1fb44c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fb44c) {
            ctx->pc = 0x1FB528u;
            return;
        }
    }
    ctx->pc = 0x1FB454u;
    // 0x1fb454: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB454u;
    {
        const bool branch_taken_0x1fb454 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb454) {
            ctx->pc = 0x1FB464u;
            return;
        }
    }
    ctx->pc = 0x1FB45Cu;
    // 0x1fb45c: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x1FB45Cu;
    {
        const bool branch_taken_0x1fb45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb45c) {
            ctx->pc = 0x1FBB18u;
            return;
        }
    }
    ctx->pc = 0x1FB464u;
}
