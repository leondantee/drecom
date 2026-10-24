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

// Function: entry_00112368
// Address: 0x112368 - 0x1123bc
void entry_00112368_0x112368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112368_0x112368");
#endif

    ctx->pc = 0x112368u;

    // 0x112368: 0x3c024016  lui         $v0, 0x4016
    ctx->pc = 0x112368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16406 << 16));
    // 0x11236c: 0x3442cbe3  ori         $v0, $v0, 0xCBE3
    ctx->pc = 0x11236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52195);
    // 0x112370: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x112370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x112374: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x112374u;
    {
        const bool branch_taken_0x112374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112374u;
        // 0x112378: 0x3c024349  lui         $v0, 0x4349 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112374) {
            ctx->pc = 0x112464u;
            return;
        }
    }
    ctx->pc = 0x11237Cu;
    // 0x11237c: 0x1a40001d  blez        $s2, . + 4 + (0x1D << 2)
    ctx->pc = 0x11237Cu;
    {
        const bool branch_taken_0x11237c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x112380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11237Cu;
        // 0x112380: 0x3c033fc9  lui         $v1, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11237c) {
            ctx->pc = 0x1123F4u;
            return;
        }
    }
    ctx->pc = 0x112384u;
    // 0x112384: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x112384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x112388: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x112388u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x11238c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11238cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112390: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x112390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x112394: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x112394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x112398: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x112398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x11239c: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x11239cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x1123a0: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1123A0u;
    {
        const bool branch_taken_0x1123a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1123A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123A0u;
        // 0x1123a4: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123a0) {
            ctx->pc = 0x1123BCu;
            return;
        }
    }
    ctx->pc = 0x1123A8u;
    // 0x1123a8: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x1123a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x1123ac: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x1123acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x1123b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1123b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1123b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1123B4u;
    {
        const bool branch_taken_0x1123b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1123B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1123B4u;
        // 0x1123b8: 0x46026041  sub.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1123b4) {
            ctx->pc = 0x1123DCu;
            return;
        }
    }
    ctx->pc = 0x1123BCu;
}
