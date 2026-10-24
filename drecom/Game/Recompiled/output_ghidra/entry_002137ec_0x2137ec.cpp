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

// Function: entry_002137ec
// Address: 0x2137ec - 0x213808
void entry_002137ec_0x2137ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002137ec_0x2137ec");
#endif

    ctx->pc = 0x2137ecu;

    // 0x2137ec: 0x3c13003b  lui         $s3, 0x3B
    ctx->pc = 0x2137ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)59 << 16));
    // 0x2137f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2137f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2137f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2137f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2137f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2137f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2137fc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x2137fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x213800: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x213800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x213804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x213804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213808u;
}
