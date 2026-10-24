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

// Function: entry_00161298
// Address: 0x161298 - 0x1612d4
void entry_00161298_0x161298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00161298_0x161298");
#endif

    ctx->pc = 0x161298u;

    // 0x161298: 0xa6001278  sh          $zero, 0x1278($s0)
    ctx->pc = 0x161298u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x16129c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x16129cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1612a0: 0xa602127a  sh          $v0, 0x127A($s0)
    ctx->pc = 0x1612a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4730), (uint16_t)GPR_U32(ctx, 2));
    // 0x1612a4: 0xa600127c  sh          $zero, 0x127C($s0)
    ctx->pc = 0x1612a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1612a8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1612ac: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x1612b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1612b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1612b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1612b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1612b8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1612b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1612bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1612bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1612c0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1612c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1612c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1612c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1612c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1612c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1612cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1612ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1612d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1612d4u;
}
