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

// Function: entry_001658e0
// Address: 0x1658e0 - 0x165900
void entry_001658e0_0x1658e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001658e0_0x1658e0");
#endif

    ctx->pc = 0x1658e0u;

    // 0x1658e0: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1658e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1658e4: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1658e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1658e8: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x1658e8u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x1658ec: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x1658ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x1658f0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1658f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1658f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1658f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1658f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1658f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1658fc: 0xae0200c4  sw          $v0, 0xC4($s0)
    ctx->pc = 0x1658fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
    ctx->pc = 0x165900u;
}
