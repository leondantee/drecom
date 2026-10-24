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

// Function: entry_001fe580
// Address: 0x1fe580 - 0x1fe5b4
void entry_001fe580_0x1fe580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fe580_0x1fe580");
#endif

    ctx->pc = 0x1fe580u;

    // 0x1fe580: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fe584: 0x90630abc  lbu         $v1, 0xABC($v1)
    ctx->pc = 0x1fe584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2748)));
    // 0x1fe588: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1fe588u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1fe58c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fe58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fe590: 0x1203006f  beq         $s0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x1FE590u;
    {
        const bool branch_taken_0x1fe590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe590) {
            ctx->pc = 0x1FE750u;
            return;
        }
    }
    ctx->pc = 0x1FE598u;
    // 0x1fe598: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fe59c: 0x1203003e  beq         $s0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x1FE59Cu;
    {
        const bool branch_taken_0x1fe59c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe59c) {
            ctx->pc = 0x1FE698u;
            return;
        }
    }
    ctx->pc = 0x1FE5A4u;
    // 0x1fe5a4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE5A4u;
    {
        const bool branch_taken_0x1fe5a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe5a4) {
            ctx->pc = 0x1FE5B4u;
            return;
        }
    }
    ctx->pc = 0x1FE5ACu;
    // 0x1fe5ac: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1FE5ACu;
    {
        const bool branch_taken_0x1fe5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe5ac) {
            ctx->pc = 0x1FE818u;
            return;
        }
    }
    ctx->pc = 0x1FE5B4u;
}
