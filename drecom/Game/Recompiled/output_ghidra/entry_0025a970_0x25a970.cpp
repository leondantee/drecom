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

// Function: entry_0025a970
// Address: 0x25a970 - 0x25a9e0
void entry_0025a970_0x25a970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025a970_0x25a970");
#endif

    ctx->pc = 0x25a970u;

    // 0x25a970: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a974: 0x904209e4  lbu         $v0, 0x9E4($v0)
    ctx->pc = 0x25a974u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2532)));
    // 0x25a978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x25a978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x25a97c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x25a97cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25a980: 0x1440ff71  bnez        $v0, . + 4 + (-0x8F << 2)
    ctx->pc = 0x25A980u;
    {
        const bool branch_taken_0x25a980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a980) {
            ctx->pc = 0x25A748u;
            return;
        }
    }
    ctx->pc = 0x25A988u;
    // 0x25a988: 0x12e00031  beqz        $s7, . + 4 + (0x31 << 2)
    ctx->pc = 0x25A988u;
    {
        const bool branch_taken_0x25a988 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a988) {
            ctx->pc = 0x25AA50u;
            return;
        }
    }
    ctx->pc = 0x25A990u;
    // 0x25a990: 0x7000ae28  paddub      $s5, $zero, $zero
    ctx->pc = 0x25a990u;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x25a994: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a998: 0xa05709e5  sb          $s7, 0x9E5($v0)
    ctx->pc = 0x25a998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2533), (uint8_t)GPR_U32(ctx, 23));
    // 0x25a99c: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9a0: 0xa05709e6  sb          $s7, 0x9E6($v0)
    ctx->pc = 0x25a9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2534), (uint8_t)GPR_U32(ctx, 23));
    // 0x25a9a4: 0x97a20100  lhu         $v0, 0x100($sp)
    ctx->pc = 0x25a9a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x25a9a8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25a9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25a9ac: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x25a9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x25a9b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25A9B0u;
    {
        const bool branch_taken_0x25a9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9b0) {
            ctx->pc = 0x25A9E0u;
            return;
        }
    }
    ctx->pc = 0x25A9B8u;
    // 0x25a9b8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9bc: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x25a9c0: 0xc4410034  lwc1        $f1, 0x34($v0)
    ctx->pc = 0x25a9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a9c4: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9c8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x25a9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a9ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a9d0: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x25a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x25a9d4: 0xe44009c8  swc1        $f0, 0x9C8($v0)
    ctx->pc = 0x25a9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 2504), bits); }
    // 0x25a9d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x25A9D8u;
    {
        const bool branch_taken_0x25a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a9d8) {
            ctx->pc = 0x25A9F0u;
            return;
        }
    }
    ctx->pc = 0x25A9E0u;
}
