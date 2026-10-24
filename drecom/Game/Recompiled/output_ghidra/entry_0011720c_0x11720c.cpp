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

// Function: entry_0011720c
// Address: 0x11720c - 0x11724c
void entry_0011720c_0x11720c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011720c_0x11720c");
#endif

    ctx->pc = 0x11720cu;

    // 0x11720c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117210: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x117210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x117214: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x117214u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x117218: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x117218u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x11721c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x11721cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117220: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x117220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x117224: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x117224u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x117228: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x117228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x11722c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x11722cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x117230: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x117230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x117234: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x117234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x117238: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x117238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x11723c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x11723cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x117240: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x117240u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x117244: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x117244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x117248: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x117248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    ctx->pc = 0x11724cu;
}
