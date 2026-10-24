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

// Function: entry_001c42d0
// Address: 0x1c42d0 - 0x1c4350
void entry_001c42d0_0x1c42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c42d0_0x1c42d0");
#endif

    ctx->pc = 0x1c42d0u;

    // 0x1c42d0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c42d4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c42d8: 0x3c0297ff  lui         $v0, 0x97FF
    ctx->pc = 0x1c42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38911 << 16));
    // 0x1c42dc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c42dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c42e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c42e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c42e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1c42e8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c42e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c42ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1c42ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1c42f0: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x1c42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x1c42f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c42f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c42f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c42f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c42fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1c42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1c4300: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4304: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c4304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4308: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c4308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c430c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c430cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4310: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C4310u;
    {
        const bool branch_taken_0x1c4310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4310) {
            ctx->pc = 0x1C4350u;
            return;
        }
    }
    ctx->pc = 0x1C4318u;
    // 0x1c4318: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c431c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4320: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x1c4320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x1c4324: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c4324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c4328: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x1c4328u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1c432c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1c432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1c4330: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4334: 0xa043156c  sb          $v1, 0x156C($v0)
    ctx->pc = 0x1c4334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5484), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c4338: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c433c: 0xc4401380  lwc1        $f0, 0x1380($v0)
    ctx->pc = 0x1c433cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4340: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c4340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c4344: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1c4344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x1c4348: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C4348u;
    {
        const bool branch_taken_0x1c4348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4348) {
            ctx->pc = 0x1C4390u;
            return;
        }
    }
    ctx->pc = 0x1C4350u;
}
