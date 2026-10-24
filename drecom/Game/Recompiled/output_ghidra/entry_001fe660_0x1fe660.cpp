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

// Function: entry_001fe660
// Address: 0x1fe660 - 0x1fe698
void entry_001fe660_0x1fe660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe660_0x1fe660");
#endif

    ctx->pc = 0x1fe660u;

    // 0x1fe660: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe664: 0x90630344  lbu         $v1, 0x344($v1)
    ctx->pc = 0x1fe664u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 836)));
    // 0x1fe668: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1fe668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe66c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe670: 0x90630346  lbu         $v1, 0x346($v1)
    ctx->pc = 0x1fe670u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 838)));
    // 0x1fe674: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1fe674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe678: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1fe678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1fe67c: 0x14200066  bnez        $at, . + 4 + (0x66 << 2)
    ctx->pc = 0x1FE67Cu;
    {
        const bool branch_taken_0x1fe67c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe67c) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE684u;
    // 0x1fe684: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fe684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe688: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe68c: 0xa0640abc  sb          $a0, 0xABC($v1)
    ctx->pc = 0x1fe68cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2748), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fe690: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1FE690u;
    {
        const bool branch_taken_0x1fe690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe690) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE698u;
}
