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

// Function: entry_001af3b8
// Address: 0x1af3b8 - 0x1af410
void entry_001af3b8_0x1af3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af3b8_0x1af3b8");
#endif

    ctx->pc = 0x1af3b8u;

    // 0x1af3b8: 0x3c024386  lui         $v0, 0x4386
    ctx->pc = 0x1af3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17286 << 16));
    // 0x1af3bc: 0x34426665  ori         $v0, $v0, 0x6665
    ctx->pc = 0x1af3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26213);
    // 0x1af3c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af3c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af3c4: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1af3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1af3c8: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1af3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1af3cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af3d0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af3d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af3d8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af3dc: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1af3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1af3e0: 0x3c024391  lui         $v0, 0x4391
    ctx->pc = 0x1af3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17297 << 16));
    // 0x1af3e4: 0x34423332  ori         $v0, $v0, 0x3332
    ctx->pc = 0x1af3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13106);
    // 0x1af3e8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1af3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1af3ec: 0x3c023f59  lui         $v0, 0x3F59
    ctx->pc = 0x1af3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16217 << 16));
    // 0x1af3f0: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1af3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1af3f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1af3f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1af3f8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1af3fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1af3fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1af400: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1af400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1af404: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1af404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1af408: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1AF408u;
    {
        const bool branch_taken_0x1af408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af408) {
            ctx->pc = 0x1AF4B8u;
            return;
        }
    }
    ctx->pc = 0x1AF410u;
}
