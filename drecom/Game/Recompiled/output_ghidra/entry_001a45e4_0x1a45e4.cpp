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

// Function: entry_001a45e4
// Address: 0x1a45e4 - 0x1a4614
void entry_001a45e4_0x1a45e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a45e4_0x1a45e4");
#endif

    ctx->pc = 0x1a45e4u;

    // 0x1a45e4: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a45e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a45e8: 0xac930300  sw          $s3, 0x300($a0)
    ctx->pc = 0x1a45e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 768), GPR_U32(ctx, 19));
    // 0x1a45ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a45ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a45f0: 0x942300dc  lhu         $v1, 0xDC($at)
    ctx->pc = 0x1a45f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x5D00DCu));
    // 0x1a45f4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a45f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1a45f8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1a45f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1a45fc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A45FCu;
    {
        const bool branch_taken_0x1a45fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a45fc) {
            ctx->pc = 0x1A4614u;
            return;
        }
    }
    ctx->pc = 0x1A4604u;
    // 0x1a4604: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a4604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1a4608: 0x80830310  lb          $v1, 0x310($a0)
    ctx->pc = 0x1a4608u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1a460c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a4610: 0xa0830310  sb          $v1, 0x310($a0)
    ctx->pc = 0x1a4610u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 784), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a4614u;
}
