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

// Function: entry_00321edc
// Address: 0x321edc - 0x321f00
void entry_00321edc_0x321edc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00321edc_0x321edc");
#endif

    ctx->pc = 0x321edcu;

    // 0x321edc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ee0: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321ee4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x321ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x321ee8: 0x8c22a610  lw          $v0, -0x59F0($at)
    ctx->pc = 0x321ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A610u));
    // 0x321eec: 0x24420118  addiu       $v0, $v0, 0x118
    ctx->pc = 0x321eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x321ef0: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x321ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x321ef4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x321ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x321ef8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x321ef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321efc: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x321efcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->pc = 0x321f00u;
}
