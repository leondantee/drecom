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

// Function: entry_001123f4
// Address: 0x1123f4 - 0x11242c
void entry_001123f4_0x1123f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001123f4_0x1123f4");
#endif

    ctx->pc = 0x1123f4u;

    // 0x1123f4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1123f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1123f8: 0x34210f80  ori         $at, $at, 0xF80
    ctx->pc = 0x1123f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)3968);
    // 0x1123fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1123fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x112400: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x112400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x112404: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x112404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x112408: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x112408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x11240c: 0x34630fd0  ori         $v1, $v1, 0xFD0
    ctx->pc = 0x11240cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4048);
    // 0x112410: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112410u;
    {
        const bool branch_taken_0x112410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x112414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112410u;
        // 0x112414: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112410) {
            ctx->pc = 0x11242Cu;
            return;
        }
    }
    ctx->pc = 0x112418u;
    // 0x112418: 0x3c013735  lui         $at, 0x3735
    ctx->pc = 0x112418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14133 << 16));
    // 0x11241c: 0x34214443  ori         $at, $at, 0x4443
    ctx->pc = 0x11241cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17475);
    // 0x112420: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112420u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x112424: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x112424u;
    {
        const bool branch_taken_0x112424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112424u;
        // 0x112428: 0x46026040  add.s       $f1, $f12, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112424) {
            ctx->pc = 0x11244Cu;
            return;
        }
    }
    ctx->pc = 0x11242Cu;
}
