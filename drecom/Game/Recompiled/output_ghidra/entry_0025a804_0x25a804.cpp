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

// Function: entry_0025a804
// Address: 0x25a804 - 0x25a84c
void entry_0025a804_0x25a804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a804_0x25a804");
#endif

    ctx->pc = 0x25a804u;

    // 0x25a804: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a808: 0x8c43036c  lw          $v1, 0x36C($v0)
    ctx->pc = 0x25a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x25a80c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a810: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x25a810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x25a814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a818: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25a818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25a81c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a820: 0xac4305f4  sw          $v1, 0x5F4($v0)
    ctx->pc = 0x25a820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1524), GPR_U32(ctx, 3));
    // 0x25a824: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a828: 0xa4400606  sh          $zero, 0x606($v0)
    ctx->pc = 0x25a828u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1542), (uint16_t)GPR_U32(ctx, 0));
    // 0x25a82c: 0x3003ffff  andi        $v1, $zero, 0xFFFF
    ctx->pc = 0x25a82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)65535);
    // 0x25a830: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a834: 0xa4430604  sh          $v1, 0x604($v0)
    ctx->pc = 0x25a834u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1540), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a838: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25a838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25a83c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a840: 0xa4430602  sh          $v1, 0x602($v0)
    ctx->pc = 0x25a840u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 1538), (uint16_t)GPR_U32(ctx, 3));
    // 0x25a844: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x25A844u;
    {
        const bool branch_taken_0x25a844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a844) {
            ctx->pc = 0x25A968u;
            return;
        }
    }
    ctx->pc = 0x25A84Cu;
}
