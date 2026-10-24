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

// Function: entry_003334b8
// Address: 0x3334b8 - 0x333510
void entry_003334b8_0x3334b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003334b8_0x3334b8");
#endif

    ctx->pc = 0x3334b8u;

    // 0x3334b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x3334b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x3334bc: 0x8c230124  lw          $v1, 0x124($at)
    ctx->pc = 0x3334bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D0124u));
    // 0x3334c0: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x3334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x3334c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3334c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3334c8: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3334C8u;
    {
        const bool branch_taken_0x3334c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3334c8) {
            ctx->pc = 0x3335C0u;
            return;
        }
    }
    ctx->pc = 0x3334D0u;
    // 0x3334d0: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3334d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3334d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3334d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3334d8: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3334d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
    // 0x3334dc: 0x82025deb  lb          $v0, 0x5DEB($s0)
    ctx->pc = 0x3334dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24043)));
    // 0x3334e0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3334e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x3334e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3334e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x3334e8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x3334e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x3334ec: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3334ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3334f0: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x3334F0u;
    {
        const bool branch_taken_0x3334f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3334f0) {
            ctx->pc = 0x333510u;
            return;
        }
    }
    ctx->pc = 0x3334F8u;
    // 0x3334f8: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x3334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x3334fc: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3334fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x333500: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x333500u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x333504: 0xa2025deb  sb          $v0, 0x5DEB($s0)
    ctx->pc = 0x333504u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24043), (uint8_t)GPR_U32(ctx, 2));
    // 0x333508: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x333508u;
    {
        const bool branch_taken_0x333508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x333508) {
            ctx->pc = 0x333534u;
            return;
        }
    }
    ctx->pc = 0x333510u;
}
