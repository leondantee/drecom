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

// Function: entry_0017b2ac
// Address: 0x17b2ac - 0x17b318
void entry_0017b2ac_0x17b2ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017b2ac_0x17b2ac");
#endif

    ctx->pc = 0x17b2acu;

    // 0x17b2ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b2b0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x17b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x17b2b4: 0x30630140  andi        $v1, $v1, 0x140
    ctx->pc = 0x17b2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)320);
    // 0x17b2b8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x17B2B8u;
    {
        const bool branch_taken_0x17b2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b2b8) {
            ctx->pc = 0x17B318u;
            return;
        }
    }
    ctx->pc = 0x17B2C0u;
    // 0x17b2c0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17b2c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17b2c4: 0x8c24dbc8  lw          $a0, -0x2438($at)
    ctx->pc = 0x17b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3EDBC8u));
    // 0x17b2c8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x17b2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x17b2cc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x17b2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x17b2d0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x17B2D0u;
    {
        const bool branch_taken_0x17b2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b2d0) {
            ctx->pc = 0x17B318u;
            return;
        }
    }
    ctx->pc = 0x17B2D8u;
    // 0x17b2d8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b2dc: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x17b2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x17b2e0: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x17b2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17b2e4: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17B2E4u;
    {
        const bool branch_taken_0x17b2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b2e4) {
            ctx->pc = 0x17B318u;
            return;
        }
    }
    ctx->pc = 0x17B2ECu;
    // 0x17b2ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x17b2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x17b2f0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x17b2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x17b2f4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x17b2f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x17b2f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17B2F8u;
    {
        const bool branch_taken_0x17b2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b2f8) {
            ctx->pc = 0x17B318u;
            return;
        }
    }
    ctx->pc = 0x17B300u;
    // 0x17b300: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17b300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17b304: 0xc420ef08  lwc1        $f0, -0x10F8($at)
    ctx->pc = 0x17b304u;
    { uint32_t bits = FAST_READ32(0x47EF08u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17b308: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x17b308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x17b30c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x17b30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x17b310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17B310u;
    {
        const bool branch_taken_0x17b310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b310) {
            ctx->pc = 0x17B328u;
            return;
        }
    }
    ctx->pc = 0x17B318u;
}
