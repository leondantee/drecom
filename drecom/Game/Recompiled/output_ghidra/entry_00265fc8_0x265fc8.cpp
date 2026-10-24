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

// Function: entry_00265fc8
// Address: 0x265fc8 - 0x265ff4
void entry_00265fc8_0x265fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265fc8_0x265fc8");
#endif

    ctx->pc = 0x265fc8u;

    // 0x265fc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x265fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265fcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x265fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x265fd0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x265FD0u;
    {
        const bool branch_taken_0x265fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x265fd0) {
            ctx->pc = 0x265FF4u;
            return;
        }
    }
    ctx->pc = 0x265FD8u;
    // 0x265fd8: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x265fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x265fdc: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x265fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x265fe0: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x265fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x265fe4: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x265fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x265fe8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x265fe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x265fec: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x265fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x265ff0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x265ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x265ff4u;
}
