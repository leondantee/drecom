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

// Function: entry_00265ff4
// Address: 0x265ff4 - 0x266014
void entry_00265ff4_0x265ff4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265ff4_0x265ff4");
#endif

    ctx->pc = 0x265ff4u;

    // 0x265ff4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x265ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265ff8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x265ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x265ffc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x265FFCu;
    {
        const bool branch_taken_0x265ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265ffc) {
            ctx->pc = 0x266014u;
            return;
        }
    }
    ctx->pc = 0x266004u;
    // 0x266004: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x266004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x266008: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x266008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x26600c: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x26600cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x266010: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x266010u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x266014u;
}
