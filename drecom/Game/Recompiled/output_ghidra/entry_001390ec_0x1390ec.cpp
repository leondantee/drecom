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

// Function: entry_001390ec
// Address: 0x1390ec - 0x13910c
void entry_001390ec_0x1390ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001390ec_0x1390ec");
#endif

    ctx->pc = 0x1390ecu;

    // 0x1390ec: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x1390ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x1390f0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1390F0u;
    {
        const bool branch_taken_0x1390f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1390f0) {
            ctx->pc = 0x13910Cu;
            return;
        }
    }
    ctx->pc = 0x1390F8u;
    // 0x1390f8: 0x8663008e  lh          $v1, 0x8E($s3)
    ctx->pc = 0x1390f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 142)));
    // 0x1390fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1390fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x139100: 0xa663008e  sh          $v1, 0x8E($s3)
    ctx->pc = 0x139100u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 142), (uint16_t)GPR_U32(ctx, 3));
    // 0x139104: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x139104u;
    {
        const bool branch_taken_0x139104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139104) {
            ctx->pc = 0x139218u;
            return;
        }
    }
    ctx->pc = 0x13910Cu;
}
